#include<stdio.h>



int main(){


	int F;
	int F0 = 0;
	int F1 = 1;
	printf("a program to display Fibonacci series between 1 and 100:\n ");
	
	for(int i = 0; i < 100; i++){
		if(i <= 1){
			F = i;
		}else{
			F = F0 + F1;
			F0 = F1;
			F1 = F;
			if(F > 100){
				break;
			}
		}
		printf("%d ", F);
	}

}
