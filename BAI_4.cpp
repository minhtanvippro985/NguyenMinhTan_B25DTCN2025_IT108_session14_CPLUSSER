#include <stdio.h>


int find(int temparr[] , int size ){
	 int solon = temparr[0];
	 
	 for ( int i = 1 ; i < size ; i++){
	 	if (temparr[i] > solon  ){
	 		solon = temparr[i];
		 }
	 }
	 return solon;
}

int main(){
	int inputsize;
	printf("nhap size : ");
	scanf("%d",&inputsize);
	
	int arrayer[inputsize];
	
	for (int i = 0 ; i < inputsize ; i++){
		printf("nhap phan tu thu %d : ",i + 1 );
		scanf("%d", &arrayer[i] );
	}
	int SOLONNHAT = find(arrayer , inputsize);
	printf("gia tri lon nhat : %d \n " , SOLONNHAT);
	
	
}