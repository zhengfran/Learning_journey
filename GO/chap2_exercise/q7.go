package main
import "fmt"

func main(){

	x,y := f(7,2)
	fmt.Printf("%d,%d\n",x,y)

}

func f(a int,b int) (int,int){
	if a<b {
		return a,b
	}	else{
		return b,a
	}
}