#include<stdio.h>

int main(){
	float S, LS;
	int A;
	
	printf("nhap mot khoan von: ");
	scanf("%f", &S);
	printf("nhap lai suat: ");
	scanf("%f", &LS);
	printf("nhap so nam: ");
	scanf("%d", &A);
	
	if(S > 0  && LS > 0 && A > 0){
		for(int i = 1; i <= A; i++){
			float ST;
			ST = S * LS / 100;
			S += ST;
			printf(" \n nam: %d \tvon: %f \tlai suat: %f", i, ST, S);
		}
	}
	
}
