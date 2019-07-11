package main

import "fmt"

func Fibo(ci chan int, n int) {	
	sl := make([]int,n)
	sl[0]=1
	ci<-1
	sl[1]=1
	ci<-1
	for i:=2;i<=n;i++{
		sl[i]=sl[i-1]+sl[i-2]
		ci<-sl[i]
	}
}

func main(){
	ci := make(chan int)
	count:=0
	n:=7	
	go Fibo(ci,n)
	L: for {
		select {
			case ri:=<-ci:
			fmt.Printf("%d",ri)	
			count++			
			if count==n {
				break L
			}
		}
		
	}
}

/* A go style solution using only unbuffered channels*/
/*
package main
import "fmt"

func main() {
	fmt.Println("28th fibonacci is", Fibc(28))

}

// subf processes two input channels in a wrapped goroutine
// and returns resulting new channels for subsequent fibonaccis
func subf(c1, c2 chan int) (chan int, chan int) {
	o1, o2 := make(chan int), make(chan int)
	go func(c1, c2 chan int) {
		a, b := <-c1, <-c2
		o1 <- b
		o2 <- a + b
	}(c1, c2)
	return o1, o2
}

// Fibc returns the nth fibonacci concurrently
func Fibc(n int) int {
	if n == 0 {
		return 0
	}

	a := make(chan int)
	b := make(chan int)

	// first calculation
	c, d := subf(a, b)

	// boom
	a <- 0
	b <- 1

	// find desired nth fib
	for i := 1; i < n; i++ {
		c, d = subf(c, d)
	}
	return <-c
}
*/