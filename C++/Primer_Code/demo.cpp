#include <iostream>


typedef	union{
	unsigned char	byte;
	struct{
#if _BIG_ENDIAN_
		unsigned char	bit7:1;
		unsigned char	bit6:1;
		unsigned char	bit5:1;
		unsigned char	bit4:1;
		unsigned char	bit3:1;
		unsigned char	bit2:1;
		unsigned char	bit1:1;
		unsigned char	bit0:1;
#else
		unsigned char	bit0:1;
		unsigned char	bit1:1;
		unsigned char	bit2:1;
		unsigned char	bit3:1;
		unsigned char	bit4:1;
		unsigned char	bit5:1;
		unsigned char	bit6:1;
		unsigned char	bit7:1;
#endif

	}_bit;
}BT_FLG_BYTE;



int main(){
    BT_FLG_BYTE sample = {0};
    std::cout<<"structure address "<<&sample<<" structure fisrt member address"<<&(sample.byte)<<"size of struct"<<sizeof (sample)<<std::endl;
}