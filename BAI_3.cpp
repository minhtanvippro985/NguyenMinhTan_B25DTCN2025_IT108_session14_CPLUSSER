#include<stdio.h>


long long giai(int sotrong){
	long long resul = 1;
	for (int i = 1 ; i <= sotrong ; i ++){
		resul  *= i ;
	}
	return resul;
}


int main(){
	int number; 
	printf("nhap mot so");
	scanf("%d",&number );
	if (number < 0){
		printf("\n khong tinh duoc\n");
	} else {
		printf("giai thua la %lld ", giai(number) );
	}
	return 0;
}