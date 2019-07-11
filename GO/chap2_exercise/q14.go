package main
import "fmt"

func main(){
	m:=[]int{4,80,684,2}
	bubblesort(m)
	fmt.Printf("%v\n",m)

}

func bubblesort(slice []int)  {
	for i:=0;i<len(slice)-1;i++{
		for j:=i+1;j<len(slice);j++{
			if slice[j] > slice [i]{
				slice[i],slice [j] = slice [j],slice [i]
			}
		}	
	}
}