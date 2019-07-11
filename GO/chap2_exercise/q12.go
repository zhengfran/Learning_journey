package main
import "fmt"

func main(){
	m:= []int{1,2,4}
	f:= func (i int)int {
		return i*i
	}
	fmt.Printf("%v", (mapf(f,m)))

}

func mapf(f func(int) int,arg []int) ([]int){

	ret := make ([](int), len(arg))
	for i,n := range(arg) {
		ret[i] = f(n)
	}
	return ret
}