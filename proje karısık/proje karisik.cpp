#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	float a,b,sonuc;
	char islem;
	printf("birinci sayiyi giriniz=");
	scanf("%f",&a);
	printf("ikinc sayiyi giriniz=");
    scanf("%f",&b);
    printf("+,-,/,* bu islemlerden birini giriniz:");
    scanf("%s",&islem);
    switch(islem){
    case '+':
		sonuc=a+b;
		 printf("sonuc=%f",sonuc);;break;
    case '-':
		sonuc=a-b;
	 	 printf("sonuc=%f",sonuc);break;
    case '*':
		sonuc=a*b;
     	 printf("sonuc=%f",sonuc);break;
   	case '/':
		sonuc=a/b;
		 printf("sonuc=%f",sonuc);break;
    default:printf("hatali kod girdiniz");break;
	}

	return 0;
}
