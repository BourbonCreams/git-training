#include <stdio.h>

void countUpToX(int x) {

	for (int i=0; i<x; i++) {

		pritnf("\n%d", i);

	}

}

void evenOrOdd(int x) {

	if (x % 2 == 0) {

		printf("Even");

	}
	else {

		printf("Odd");

	}

}

int main(){

	printf("Hello World");
	countUpToX(5);
	evenOrOdd(3);

}