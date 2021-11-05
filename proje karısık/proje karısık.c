#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float sayi1,sayi2,sonuc;
	char islem;
	printf("birnci sayiyi giriniz=");
	scanf("%f",&sayi1)
    printf("ikinci sayiyi giriniz=");
    scanf("%f",&sayi2);
    printf("topla,bol,carp,cýkar islemlerinden birinigiriniz:);
    scanf("%s",&islem)
    switch(islem){
    	case 'topla':sonuc=sayi1+sayi2;break;
    	case 'cýkar':sonuc=sayi1-sayi2;break;
    	case 'carp':sonucsayi1*sayi2;break;
    	case 'bol':sonuc=sayi1/sayi2;break;
    	default:printf("hatali kod girdiniz");break;
	}
	printf("sonuc=%f",sonuc);
	return 0;
}
