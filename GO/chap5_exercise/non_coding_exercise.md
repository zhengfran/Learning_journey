Q24. Interfaces and compilation

It compiles because an integer type implements the empty interface and that is the check that happens at compile time.

A way to fix this:

```go
func g(any interface{}) int { return any.(I).get()}
//should be
func g(any interface{}) int {
    if v,ok:= any.(I); ok {	//check if any can be converted
        return v.Get()		//invoke Get()
    }
    return -1				//
}
```

Q25. When called with a non-pointer argument the variable is a copy (call-by-value).

Thus not changing the original value, but only this copy.

