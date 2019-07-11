package stack

type Stack struct {
	length int
	data [10]int
}

func (st *Stack)Push(x int) {	
	st.data[st.length] = x
	st.length++
}

func (st *Stack)Pop()(ret int){
	st.length--
	ret = st.data[st.length]
	return

}