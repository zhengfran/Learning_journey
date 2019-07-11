package main

import (
	"fmt"
	"reflect"
)



func MaxInterger(sl []int) (max int) {
	max = sl[0]
	for i:=1;i<len(sl);i++{
		if max < sl[i]{
			max = sl[i]
		}
	}
	fmt.Printf("IntMax:%d\n",max)
	return
}

func MaxFloat(sl []float32) (max float32) {
	max = sl[0]
	for i:=1;i<len(sl);i++{
		if max < sl[i]{
			max = sl[i]
		}
	}
	fmt.Printf("FloatMax:%f\n",max)
	return
}

//user reflection to get type?
//only  get max of 2?
func Genef(l, r interface{}) bool {
	switch l.(type){
	case int:
		if _,ok:=r.(int);ok {
			return l.(int) < r.(int)
		}
		//MaxInteger((i) []int)
	case float32:
		//MaxFloat(i)
		if _,ok:=r.(float32);ok {
			return l.(float32) < r.(float32)
		}
	}
	return false
}