#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() { 
char ders;
printf("harfi giriniz:");
scanf("&s",&ders);
switch(ders){
	case 'a':printf("algoritma");break;
    case 'b':printf("biyoloji");break;
    case 'c':printf("cografya");break;
    case 'd':printf("din");break;
    case 'e':printf("edebiyat");break;
    case 'f':printf("fransýzca dersi");break;
    case 'g':printf("geometri");break;
    
    case 'h':printf("hayat bigisi");break;
    case 'i':printf("ingilizce");break;
    case 'k':printf("kimya");break;
    case 'l':printf("lineer cebir");break;
    case 'm':printf("matamatik");break;
    case 'p':printf("pisagor");break;
    case 's':printf("sosyal bilgiler");break;
    
    case 't':printf("turkce");break;
  

    default:printf("bu harfe ders yoktur.");break;
}
	return 0;
}
