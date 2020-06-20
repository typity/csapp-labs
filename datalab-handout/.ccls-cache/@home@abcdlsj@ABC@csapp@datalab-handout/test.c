#include <stdio.h>

int isLessOrEqual(int x,int y)
{
	int z = x+~y+1;
	printf("%d\t%d\n",~y,z);
	return !!(z>>31);
}

int main(){
	/*
	int x = 0x80000000;
	int y = (x|(x>>8)|(x>>16)|x>>(x>>24));
	printf("%x\n",y);
	printf("%x\n",!!(y&0xaa));*/
	//printf("%x\n",isLessOrEqual(4, 5));
	int x = 0x01;
	int temp=x^(x>>31);//get positive of x;
    int isZero=!temp;
    //notZeroMask is 0xffffffff
	//
	int ttemp = !(!temp)<<31;
    int notZeroMask=(!(!temp)<<31)>>31;
	int z = 0x80000000;
	int y = ttemp>>4;
	printf("%x\n%x\n%x\n%x\n%x\n",temp,isZero,ttemp,y,notZeroMask);
}
	
