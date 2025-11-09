#include<stdio.h>
#include<math.h>
int checksonguyento (int sophaixet ){
	if ( sophaixet <=  1 ) {
		return 0;
	} for (int i = 2 ; i <= sqrt (sophaixet) ; i++ ){
		if ( sophaixet % 1 == 0 ) {
			return 0;
		}
	} return 1;
}
int main() {
	int sodanhap;
	printf("nhap so de toi xet ; ");
	scanf("%d",&sodanhap);
	if (checksonguyento(sodanhap)){
		printf("%d la nguyen to \n ", sodanhap );
	} else {
		printf("%d khong phai \n",sodanhap);
	}
	return 0;
}