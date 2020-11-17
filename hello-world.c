#include <stdio.h>

void countUpToX(int x) {

	for (int i = 0; i < x; i++) {

		printf("\n%d", i);

	}
}

void evenOrOdd(int a){

	if (a%2 == 0){
		
		printf("\nOdd");
		
	} else{
		
		printf("\nEven");
		
	}
	
}

int main(){

	printf("Hello World");
	evenOrOdd(3);
	countUpToX(5);

}