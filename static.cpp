#include <iostream>
#include <cassert>


int main(){
	//Checked at compile-time
	assert(1==1 && "yes,math is working");

	static_assert(sizeof(int)==4 && "yes,on our architecture, int's are 4 bytes.");
	return 0;
}
