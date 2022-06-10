//it's only i guessed...

#include <stdio.h>
#include <unistd.h>

int main(){

	int counter = 0;
	while(1){
		printf("Hi\n");
		sleep(2);
		printf("again\n");
		counter ++;
	}

	return 0;
}
