package main
import (
	"fmt"
	"strconv"
)

type stack struct {
	i int
	data [10]int
}

func main(){

	//var s stack;
	s:= new(stack)
	s.push(50)
	s.push(50)
	//a:= s.pop()
	fmt.Printf("stackstring %v\n",s.String())

}
//data passed to functions is passed-by-value meaning a copy is created and given to the function
//So the folloeing function will not work
/*
func (s stack) push (k int) {
	if s.i+1>9 {
		return
	}
	s.data[s.i] = k
	s.i++
}
*/
//to call it just use s.push(50)
//to solve this issue need to give function a pointer to the stack
func (s *stack) push(k int) {
	s.data[s.i] = k
	s.i++
}

func (s *stack) pop() (int) {
	s.i--
	return s.data[s.i]
}

func (s *stack) String() (str string){
	for j:=0;j<s.i;j++ {
		str = str + "[" + strconv.Itoa(j) + ":" +strconv.Itoa(s.data[j]) + "]"
	}
	return
}