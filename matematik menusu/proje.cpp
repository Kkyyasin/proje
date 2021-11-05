#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	printf("*****matamatik menusu*****\n");
	printf("**************************\n\n");
	int islem,sayi1,i,say,sonuc,sayi2,bas,bit,yuzler,onlar,birler,su,tek,cift,sayi;
	float not1,not2,sozlu,per,ortalama1,ortalama2,ortalama3;
	printf("yapmak istediginiz secenegi seciniz\n");
	printf("1-basamak degeri ayiraci\n");
	printf("2-istediginiz sayi kadar metin yazdirma\n");
	printf("3-asal sayi hesaplayici\n");
	printf("4-faktoreyel\n");
	printf("5-sayi buyuklugu belirleme\n");
	printf("6-sayinin bolenleri\n");
	printf("7-baslangic bitis arasi cift sayilari bulma\n");
	printf("8-su sicakligi hesabi\n");
	printf("9-not hesaplayaci\n");
	printf("10-10 adet sayidan kac cift kac tek oldugunu belirlemek\n");
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
		 printf("kac tane metin yazdirmak istiyorsaniz miktari giriniz=");
	 	 scanf("%d",&sayi1);
        
         printf("yazdirmak istediginiz metni giriniz:");
         scanf("%s",metin);
	    for(i=1;i<=sayi1;i++)
	{
		 printf("%s\n",metin);
	}
	    break;
	case 3:
        printf("sayiyi giriniz=");
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
	     printf("%d. faktoreyel=",sayi1);
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
		printf("sayiyi giriniz=");
	     scanf("%d",&sayi1);
	     printf("%d. sayisinin bolenleri=\n",sayi1);
	    for(i=1;i<=sayi1;i++)
	{
		if(sayi1%i==0)		{
			
	printf("%d\n",i);
 
		 
}
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
		 printf("%d\n",bas);
	}
		bas++;
	}
	
	     
	
	break;
	case 8:
		printf("su sicakligini giriniz=");
	scanf("%d",&su);
	if(su<=0){
		printf("su katidir");
	}
	if(0<su&&su<100){
		printf("su sividir");
	}
	if(su>=100){
	
		printf("su gazdir");
	}
	break;
	case 9:
			
	printf("*******NOT HESAPLAYICI*********\n\n");
	printf("notlari girin=\n");
	scanf("%f",&not1);
	scanf("%f",&not1);
	printf("sozluleri girin=\n");
	scanf("%f",&sozlu);
	scanf("%f",&per);
	ortalama1=(not1+not2)/2;
	ortalama2=(sozlu+per)/2;
	ortalama3=0.3*ortalama2+0.7*ortalama1;
	printf("not ortalamasi=%f\n",ortalama1);
	printf("sozlu ortalamasi=%f\n",ortalama2);
	printf("genel ortalamasi=%f\n",ortalama3);
	break;
	case 10:
			
	tek=0;
	cift=0;
	for(i=1;i<=10;i++){
		printf("%d. sayiyi giriniz=\n",i);
		scanf("%d",&sayi);
		if(sayi%2==0){
			cift=cift+1;
		}
		else{
			tek=tek+1;
		}
	}
	printf("%d. tane tek sayi vardir.\n",tek);
	printf("%d. tane cift sayi vardir.\n",cift);
	break;
	default:
	printf("hatali kodlama yaptiniz");	
}
printf("\nprogram sonlandi.\n");
	system("PAUSE");
	return 0;
}
