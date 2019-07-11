package main
import "fmt"

func main(){
	p:=plusX(6)
	fmt.Printf("%v\n",p(3))
}

func plusX( x int ) (func(n int)(int)){
	f := func (n int)int{
		return n + x
	}
	return f
}