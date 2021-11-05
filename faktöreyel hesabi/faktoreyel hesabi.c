#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	printf("**************FAKTOREYEL HESABI***************\n\n");
	int sonuc,i,sayi;
	printf("faktoroyel istediginiz sayiyi giriniz=");
	scanf("%d",&sayi);
	sonuc=1;
	for(i=1;i<=sayi;i++){
		sonuc=sonuc*i;
	}
	printf("%d faktoreyel=",sayi);
	printf("%d\n",sonuc);
	system("PAUSE");
	return 0;
}
