//just the method
sum,average := 0.0,0.0
str = (string)slicex
for i:=0;i<len(str);i++{
	sum+=slicex[i]
}
average = sum/float64(len(str))
//also consider using range
//official answer
sum := 0.0
switch len(xs){
	case 0:
		avg = 0
	default:
		for _,v := range xs{
			sum += v
		}
		acg = sum / float64(len(xs))
}