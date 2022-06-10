#include <stdio.h>
int main(){
	//version.1
	//int* px = NULL;
	//printf("px value is %d",*px);
	
	//version.2
	//int array[10];
	//array[100000000] = 7;
	
	//version.3, the error is difference.
	int array[10];
	array[11] = 7;
	

	return 0;

}
