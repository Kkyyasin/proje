#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	printf("*****matamatik menusu*****\n");
	printf("**************************\n\n");
	int islem,sayi1,i,say,sonuc,sayi2,bas,bit,yuzler,onlar,birler,su;
	printf("yapmak istediginiz secenegi seciniz\n");
	printf("1-basamak degeri ayiraci\n");
	printf("2-istediginiz sayi kadar metin yazdirma\n");
	printf("3-asal sayi hesaplayici\n");
	printf("4-faktoreyel\n");
	printf("5-sayi buyuklugu belirleme\n");
	printf("6-sayinin bolenleri\n");
	printf("7-baslangic bitis arasi cift sayilari bulma");
	printf("8-su sicakligi hesabi\n");
	printf("yapmak istediginiz secenegi seciniz=");
	scanf("%d",&islem);	
	char metin[30];
	switch(islem){
	case 1:
		 printf("basamak degerini ayirmak istediginiz sayiyi giriniz=");
	     scanf("%d",&sayi1);
     	 yuzler=sayi1/100;
	     onlar=sayi1/10;
	     onlar=onlar%10;
	     birler=sayi1%10;
	     printf("yuzler basamagi=%d\n",yuzler);
	     printf("onlar basamagi=%d\n",onlar);
	    printf("birler basamagi=%d",birler);
	    break;
    case 2:
		 printf("kaç tane metin yazdirmak istiyorsaniz miktari giriniz=");
	 	 scanf("%d",&sayi1);
        
         printf("yazdirmak istediginiz metni giriniz:");
         scanf("%s",metin);
	    for(i=1;i<=sayi1;i++)
	{
		 printf("%s",metin);
	}
	    break;
	case 3:
    
	     scanf("%d",&sayi1);
	     say=0;
	    for(i=1;sayi1>=i;i++)
	{
		if(sayi1%i==0)
	{
		 say=say+1;
	}	
	}
	    if(say>2){
		 printf("asal sayi degildir.\n");
	}
	    else
	{
	   	 printf("asal sayidir.\n");
	} 
	    break;
	case 4:
	
	     printf("faktoroyel istediginiz sayiyi giriniz=");
	     scanf("%d",&sayi1);
	     sonuc=1;
	    for(i=1;i<=sayi1;i++)
	{
	     sonuc=sonuc*i;
	}
	     printf("%d faktoreyel=",sayi1);
	     printf("%d\n",sonuc);
	case 5:
		
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
	    break;
	case 6:
		
	     scanf("%d",&sayi1);
	     printf("%d. sayisinin bolenleri=\n",sayi1);
	    for(i=1;i<=sayi1;i++)
	{
				{
		if(sayi1%i==0)
	{
		 printf("%d\n",i);
	}
	    break;
	case 7:

	     printf("baslangic degerini giriniz=");
	     scanf("%d",&bas);
       	 printf("bitis degerini giriniz=");
	     scanf("%d",&bit);
    	while(bas<=bit)
	{
		if(bas%2==0)
	{
		 printf("%d",bas);
	}
		bas++;
	}
	}
	     
	}
	break;
	case 8:
		printf("su sicakligini giriniz=");
	scanf("%d",&su);
	if(su<=0){
		printf("su katidir");
	}
	if(0<su<100){
		printf("su sividir");
	}
	else{
		printf("su gazdir");
	}
	break;
	
	default:
	printf("hatali kodlama yaptiniz");	
}
	system("PAUSE");
	return 0;
}
