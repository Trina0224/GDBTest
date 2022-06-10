//
#include <stdio.h>

int squarei(int n){
	return n*n;
}

int squaref(float n){
	return n*n;
}

int main(){

	for(int i=0;i < 10; i+=1){
		int x = squarei(i);
		printf("%d squared = %d\n",i,x);
	}
}
