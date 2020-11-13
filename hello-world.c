#include <stdio.h>

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

}