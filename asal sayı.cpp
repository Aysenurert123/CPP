#include <stdio.h>


//asal sayý
int main(){
int sayi;
int sayac=0;
printf("Lutfen bir sayi giriniz:");
scanf("%d",&sayi);


for(int i=2;i<sayi;i++)
{
if(sayi&i==0){
	sayac++;
	
	
}	
	
}
	
if (sayac==0){
	
	printf("\nBu sayi asal bir sayidir");

}	
	
else
{
	printf("\nBu sayi asal bir sayi degildir");
	}	
	
	return 0;
}
