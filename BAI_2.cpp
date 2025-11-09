#include<stdio.h>



void inmang(int arraytem[] , int size ){
	printf("phan tu co trong mang la \n");
	for (int i = 0 ; i < size ; i++ ){
		printf("%d ", arraytem[i] );
	} printf("\n");
}

int main(){
	int sizenow;
	printf("nhap phan tu co trong mang ");
	scanf("%d",&sizenow);
	int arrayhere[sizenow];
	for (int i = 0 ; i < sizenow ; i ++){
		printf("nhap phan tu thu %d = ",i+1);
		scanf("%d", &arrayhere[i]);
	}
	inmang(arrayhere, sizenow);
	return 0;
}