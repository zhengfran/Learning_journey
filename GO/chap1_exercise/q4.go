package main

import ("fmt"
 		//"unicode/utf8"
)

func main(){

	//4.1
	//problems with []brackets
	
	
	str := "A"
	for i:=1;i<=100;i++{
		fmt.Printf("%s\n",str)
		str = str + "A"		
	}
	
	
	
	//4.2
	/*
	s :="asSASA ddd dsjkdsjs dk"
	l :=0
	for len(s)>0{
		_,b := utf8.DecodeLastRuneInString(s)
		l += b
		s = s[:len(s)-b]
	}
	fmt.Printf("%d\n",l)
	*/
	//4.3

	/*
	s1 :="asSASA ddd dsjkdsjs dk"
	s2 :="abc"
	slic := []byte(s1)
	slic2 := []byte(s2)
	copy(slic[4:8],slic2)
	s3 := string(slic)
	fmt.Printf("%v\n",s3)
	*/
	//4.4
	/*
	s :="asSASA ddd dsjkdsjs dk"
	slic := []byte(s)
	for l:=0;l<len(s)/2;l++{		
		slic[l],slic[len(s)-l-1] = slic[len(s)-l-1],slic[l]		
	}
	s2 := string(slic)
	fmt.Printf("%v\n",s2)
	*/
}