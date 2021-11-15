#include<stdio.h>
main(){
	int i,j,a;
	for(a=1;a<=4;a++){
	for(i=1;i<=12;i++){
		for(j=12;j>=i;j--){
			printf(" ");}
		for(j=1;j<=i;j++){
			printf("3");}
		   if(i!=1){
		for(j=2;j<=i;j++){
			printf("4");}}
		    printf("\n");}
	for(i=2;i<12;i++){
		for(j=1;j<=i;j++){
			printf(" ");}
		for(j=12;j>i;j--){
			printf("4");}
		   if(i!=12){
		for(j=12;j>=i;j--){
			printf("9");}}
		    printf("\n");}
	for(i=2;i<=12;i++){
		for(j=12;j>=i;j--){
			printf(" ");}
		for(j=2;j<=i;j++){
			printf("4");}
		   if(i!=1){
		for(j=2;j<=i;j++){
			printf("9");}}
		    printf("\n");}
	for(i=2;i<=12;i++){
		for(j=1;j<=i;j++){
			printf(" ");}
		for(j=12;j>=i;j--){
			printf("5");}
		for(j=12;j>i;j--){
			printf("6");}
		    printf("\n");}}}
