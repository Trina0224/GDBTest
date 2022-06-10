#include <stdio.h>

#define DEBUG 1

void swap(int* a1, int* a2, int index){
	int tmp = a1[index];
	#if DEBUG
	printf("tmp=%d\n",tmp);
	#endif
	a2[index] = a1[index];
	#if DEBUG
	printf("a2[%d]=%d\n",index,a2[index]);
	#endif
	a1[index] = tmp;
	#if DEBUG
	printf("a1[%d]=%d\n",index,a1[index]);
	#endif
}

int main(){
	int odds[] = {1,3,5,7};
	int evens[] = {2,4,6,8};
	//swap arrays
	for(int i=0; i<4;i++)
		swap(odds,evens,i);
	//print out results
	for(int i=0; i<4;i++)
		printf("odds[%d]=%d\n",i,odds[i]);
	for(int i=0; i<4;i++)
		printf("evens[%d]=%d\n",i,evens[i]);

	return 0;


}
