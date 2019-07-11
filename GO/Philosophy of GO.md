### Philosophy of GO

https://talks.golang.org/2012/splash.article

Go is about language design in the service of software engineering.

##### Pain points Go tries to focus on

​	What make large-scale software development difficult?

- slow builds
- uncontrolled dependencies
- each programmer use a different subset of the language
- poor program understanding
- duplication of efforts
- cost of updates
- version skew
- difficulty of writing automatic tools
- cross-language build

##### Dependencies in C and C++

​	How C and C++ handle package dependencies?

- ANSI C promoted ideas of *#ifndef* "guards" in standard header files.

  - Good: allows each header to safely *#include* all its dependencies, even if other header files also 					include them.

  - Bad: scales pretty badly, C would still read and scan and then discard

- Plan 9 Approach forbid header files to include any further *#include* clauses; all *#includes* were required to be in the top level C file.
  - each *#include* is read exactly once; 
  - easy to see if *#include* if really needed;
  - much faster compilation by reduce amount of I/O compilation

##### Enter Go

Primary Context for any language to succeed in the context of large programs:

- Work at scale
- Familiar, roughly C-like
- Modern

##### Dependencies in GO

Dependencies are defined,syntactically and semantically by Go, easy to write tools to analyze.

```go
import "encoding/json"
//ONLY imported into this source file
```

Go defines unused dependencies as compile-time error, which guarantees 

- by construction that the dependency tree for any Go program is precise 
- no extra code will be compiled during building

An implementation in Go compilers to guarantee efficiency. Consider a Go program:

- package `A` imports package `B`
- package `B` imports package `C`
- package `A` does not import package `C`

Package `A` uses `C` only transitively through its use of `B`.

When `A` is compiled, the compiler reads the object file for `B`, **not its source code**.

Where is the efficiency?

- When the compiler executes an import clause, *it opens exactly one file*
- The object file is arranged so the export data is the first thing in the file,so the compiler can stop reading as soon as it reaches the end of that section

Go dependency graph has **no cycles**. It forces programmer to think earlier about a large-scale issue(in this case,package boundaries). Better to copy a little code than to pull in a big library.

##### Packages

Go's package system combines some of the properties of libraries, name spaces, and modules into a single construct.

```go
package json
import "encoding/json"
var dec = json.NewDecoder(reader)
//this design provides clarity,
//one may always tell whether whether a name is local to the package from its syntax:
//Name vs pkg.Name
```

package *paths* are unique, but there is no such requirement for package *names*.

The package name need not be unique and can be overridden in each importing source file by providing a **local identifier** in the import clause.

```go
import "log"
import googlelog "goole/base/go/log"
```

##### Remote Packages

Package path can be co-opted to refer to remote repositories by having it identify the URL of the site serving the repository.

```go
//exmaple on using doozer package from github
$ go get github.com/4ad/doozer  		//shell command to fetch package
import "github.com/4ad/doozer"			//Doozer client's import statement
```

##### Syntax

It is user interface of a programming language. It determines

- readability and hence clarity
- critical to tooling, write automated tools

##### Naming



​	