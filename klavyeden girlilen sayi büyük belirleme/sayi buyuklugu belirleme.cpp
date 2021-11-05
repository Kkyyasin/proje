#include<stdio.h>
#include<stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int sayi1,sayi2;
	printf("sayilari giriniz=\n");
	scanf(" %d",&sayi1);
	scanf(" %d",&sayi2);
	if(sayi1==sayi2)
	{
		printf("birbirine esittir");
	}
	if(sayi1>sayi2)
	{
		printf("%d sayisi buyuktur",sayi1);
	}
	if(sayi2>sayi1)
	{
	
			printf("%d sayisi buyuktur",sayi2);
	}
	return 0;
}
