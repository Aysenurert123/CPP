#include <stdio.h>
#include <string.h>

int sayilarEsitMi(int a, int b){
	
	if(a==b){
	//return 1 =true	
		return 1;
	}
	else
	{
	//return 0 false	
		return 0;
	}
}

int main (){

int sayi1;
int sayi2;
scanf("%d %d",&sayi1,&sayi2);

bool deger= sayilarEsitMi(sayi1,sayi2);
if(deger){
	
	printf("Girilen sayilar esittir");
	
}
else
{
	
	printf("Girilen sayilar esit degildir");
}







	return 0;
}
