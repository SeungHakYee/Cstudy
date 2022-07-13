#include <stdio.h>

int main(){
	int n = 0; 
	while(n < 5){
		printf("%d", ++n);
		
	}
	printf("루프종료\n");
	
	int i = 30;
	while(i >= 10){
		printf("%d ", i);
		i = i - 2; // i-=2;
	}
}
