package main
import "fmt"

func main(){

	fmt.Printf("%v",fibon(5))
}

func fibon (n int) ([] int) {
	ret := make([]int, n)
	ret[0] = 1
	ret[1] = 1
	for i:=2;i<n;i++ {
		ret[i] = ret[i-1] + ret[i-2]
	}
	return ret
}