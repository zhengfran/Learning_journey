package main
import "fmt"

func main(){

	printvar(1,2,3,4)
}

func printvar(arg ...int) {
	for _,n := range(arg) {
		fmt.Printf("%d ", n)
	}
}