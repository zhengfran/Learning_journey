package main

import "fmt"

func main(){
	for i:=1;i<=100;i++{
		switch {
		case (i%3==0) && (i%5!=0) :
			fmt.Printf("%s","Fizz ")
		
		case (i%5==0) && (i%3!=0):
			fmt.Printf("%s","Buzz ")

		case (i%5==0) && (i%3==0):
			fmt.Printf("%s","FizzBuzz ")

		default:
			fmt.Printf("%d ",i)
	}
}
}