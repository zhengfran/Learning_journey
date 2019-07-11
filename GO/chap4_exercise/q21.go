package main
import (
	"container/list"
	"fmt"
)
func main(){
	p := list.New()
	p.PushBack(1)
	p.PushBack(2)
	p.PushBack(4)
	for i:=p.Front();i!=nil;i=i.Next() {
		fmt.Printf("%v\n",i.Value)
	}
}