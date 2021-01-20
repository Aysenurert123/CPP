#include <stdio.h>


int main(){
//girilen bir sayinin basamaklar toplamý 	
	
int sayi,toplam=0,kalan;
printf("Lutfen bir sayi giriniz:");
scanf("%d",&sayi);


while(sayi!=0)
{
	
	kalan=sayi%10;
	toplam=toplam+kalan;
	sayi=sayi/10;
	
	}	
	
	printf("\nBasamaklar toplami:%d",toplam);	
	
	return 0;
}
