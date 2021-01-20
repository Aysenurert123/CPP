#include <stdio.h>
#include <string.h>

int toplamaIslemi(int a,int b ){
	
int topla=a+b;
printf ("\nToplama islemi:%d",topla);	
	
}
int cikarmaIslemi(int a,int b){
	int cikarma;
	if (a>b){
		
		cikarma=a-b;
	}
	
	else if (b>a){
		
	cikarma=b-a;
	}
	printf("\nCikarma islemi:%d",cikarma);
	
	
}
int main (){
	
int sayi1;
int sayi2;
printf("lutfen sayi1 i giriniz:");
scanf("%d",&sayi1);
printf ("Lutfen sayi2 yi giriniz:");
scanf("%d",&sayi2);

toplamaIslemi(sayi1,sayi2);

cikarmaIslemi(sayi1,sayi2);






	return 0;
}
