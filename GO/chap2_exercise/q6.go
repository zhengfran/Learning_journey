package main
import "fmt"

func main(){
	//A slice is always coupled to an array
	a:= [...]float64{4.56,7.89,3.21}
	s:= make([]float64,3)
	s = a[:]
	
	fmt.Printf("%v\n",calavg(s))
}

func calavg(s []float64) (avg float64){
	var sum float64
	for i:=0;i<len(s);i++{
		sum+=s[i]
	}
	avg = sum/float64(len(s))
	return
}