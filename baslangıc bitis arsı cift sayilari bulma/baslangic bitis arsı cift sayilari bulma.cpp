#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int bas,bit;
	printf("baslangic degerini giriniz=");
	scanf("%d",&bas);
	printf("bitis degerini giriniz=");
	scanf("%d",&bit);
	while(bas<=bit){
		if(bas%2==0){
			printf("%d\n",bas);
		}
		bas++;
	}
	printf("program sonlandi");
	return 0;
}
