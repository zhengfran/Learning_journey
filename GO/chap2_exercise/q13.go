package main
import "fmt"

func main(){
	m:=[]int{4,80,684,2}
	fmt.Printf("%v\n",findmin(m))

}

func findmax(slice []int) (ret int){
	ret = slice[0]
	for i:=0;i<len(slice);i++{
		if slice[i] > ret {
			ret = slice[i]
		}
	}	
	return
}

func findmin(slice []int) (ret int){
	ret = slice[0]
	for i:=0;i<len(slice);i++{
		if slice[i] < ret {
			ret = slice[i]
		}
	}	
	return
}