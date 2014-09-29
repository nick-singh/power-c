#include <stdio.h>
#include <stdlib.h>
#define max 4

int* numToBin(int);
int binToNum(int*);

int main(){
	int *binArr;
	int i;
	
	binArr = numToBin(13);
	for(i=0;i<max;i++){
		printf("%d",binArr[i]);
	}
	
	
	return 0;
}

int* numToBin(int num){
	int i = max-1;
	static int arr[max];
	
	while(num > 0){

		if(num%2 == 0){				
			arr[i] = 0;	
		}
		else {
			arr[i] = 1;			
		}
		num/=2;
		i--;
	}
	return arr;
}
