package main

import "fmt"

func Increment(ci chan int) {	

	for i:=1;i<=10;i++{
		ci <- i
	}
}

func main(){
	ci := make(chan int)	
	go Increment(ci)
	L: for {
		select {
			case ri:=<-ci:
			fmt.Printf("%d",ri)				
			if ri==10 {
				break L
			}
		}
		
	}
}