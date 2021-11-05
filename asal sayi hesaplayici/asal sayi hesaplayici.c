#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int sayi ,i,say;
	scanf("%d",&sayi);
	say=0;
	for(i=1;sayi>=i;i++){
		if(sayi%i==0){
			say=say+1;
		}
		
	}
	if(say>2){
		printf("asal sayi degildir.\n");
	}
	else{
		printf("asal sayidir.\n");
	}
	system("PAUSE");
	return 0;
}
