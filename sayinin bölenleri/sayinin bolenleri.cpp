#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int sayi,i;
	scanf("%d",&sayi);
	printf("%d. sayisinin bolenleri=\n",sayi);
	for(i=1;i<=sayi;i++){
		if(sayi%i==0){
			printf("%d\n",i);
		}
	}
	return 0;
}
