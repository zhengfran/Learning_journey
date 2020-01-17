> Fun Haskell

### Chap 1

#### 1. Example of  Simple Functions

```haskell
doubleMe x = x + x
-- functions cannot start with capital letter
```

```haskell
doubleUs x y = doubleMe x + doubleMe y
```

```haskell
doubleSmallNumber x = if x > 100 then x else x*2
-- else is non-negligiable when using if

doubleSmallNumber' x = (if x > 100 then x else x*2) + 1
-- notice the name of the function can have ', and the use of bracket
```

#### 2. Lists

Defined using square brackets[].

```haskell
lostNumbers = [4,8,15,16,23,42]
```

##### 2.1 Merge lists

using "++"

```haskell
ghci> [1,2,3,4] ++ [9,10,11,12]
[1,2,3,4,9,10,11,12]

ghci> "hello" ++ " " ++ "world"
"hello world"

ghci> ['w','o'] ++ ['o','t']
"woot"

--hello is same as ['h','e','l','l','o'], so functions dealing with lists can also be used to process strings
```

"++" will iterate over the first list, so be careful when dealing with long lists.

On the other hand, ":" insert an element into the head of the list.

```haskell
ghci> 'A':" SMALL CAT"
"A SMALL CAT"

ghci> 5:[1,2,3,4,5]
[5,1,2,3,4,5]
```

##### 2.2 Accessing element in lists

use "!!"

```haskell
ghci>"steve Buscemi" !! 6
'B'

ghci> [9.4,33.2,96.2,11.2,23.25] !! 1
33.2
```

##### 2.3 lists in lists

lists in lists can be of different length, but type must be same., mixing chars and numbers is not allowed.

##### 2.4 Compare Lists

use ">","<","<=",">="

```haskell
ghci> [3,2,1] < [2,1,0]
True

ghci> [3,2,1] > [2,10,100]
True

ghci> [3,4,2] <[3,4,3]
True

ghci> [3,4,2] > [2,4]
True

ghci> [3,4,2] == [3,4,2]
True
```



#####  2.5 More List Operations

**head**: return the first element of the list

**tail**: return list without the first element

**last**: return the last element of the list

**init**: return the list without the last element

**length**: return the length of the list

**null**: check if a list is empty

**reverse**: reverse the list

**take**: return the first n elements of the list

**drop**: return the list without he first n elements

**maximum**: return the max element of the list

**minimum**: return the min element of the list

**sum**: return the sum of all elements of the list

**product:** return the product of all elements of the list

**elem**: check if an element is in the list



#### 3. Range

```haskell
ghci> [1.. 20]
[1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20]
--inclusive

ghci> ['a'.. 'z']
"abcdefghijklmnopqrstuvwxyz"

--tell increment by claiming first 2 elements
ghci> [2,4.. 20]
[2,4,6,8,10,12,14,16,18,20]

ghci> [3,6.. 20]
[3,6,9,12,15,18]

ghci> [20.. 1]
null
--must declare increment to be -1
ghci> [20,19.. 1]

--if upper limit was not declare, will get a infinite list
ghci> [1..]
--since haskell is lazy, it will not generate all elements, but only if you ask for them, thus there are 2 ways to generate a list of first 24 number that can be divided by 13
ghci> [13,26.. 24*13]
--or
ghci> take 24 [13,26..]

```

