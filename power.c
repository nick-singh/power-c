

#include <stdio.h>
#include <stdlib.h>

int pow2(int,int);

int main(){
	
	printf("%d \n",pow2(2,10));	
	
	return 0;
}

int pow2(int x, int n){
	int y = 0;
	
	if(n ==0) return 1;		
	y = pow2(x,n/2);	
	
	y = y * y;		
	
	if(n%2!=0)return x * y;
	return y;
}

