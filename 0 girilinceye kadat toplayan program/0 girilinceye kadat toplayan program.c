#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	printf("***0 girilinceye kadar toplayan program***\n");
	printf("******************************************\n\n");
	
	int sayi,toplam;
	toplam=0;
  
	while(sayi!=0){	
	

	scanf("%d",&sayi);
	toplam=toplam+sayi;

printf("toplam=%dD\n",toplam);
}

printf("program sonlandi");
	return 0;
}
