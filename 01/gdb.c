#include <stdio.h>

int yes (int*);

void main(){

	int a = 10;
	int *ip = &a;

	while(yes(ip)){
		a++;
		if(a == 19) a = 10;
	}
}


int yes(int * b){
	if(*b < 20) return 1;
	if(*b == 20) return 0;
} 
