#include<stdio.h>


int tingtongso(int a , int b){
	int tong = a + b;
	
	return tong;
}


int main(){
	int so1,so2;
	printf("nhap so1 ");
	scanf("%d", &so1 );
	printf("\n nhap so2 ");
	scanf("%d", &so2 );
	int sum = tingtongso(so1 , so2);
	printf("\n tong hai so la %d", sum  );
}