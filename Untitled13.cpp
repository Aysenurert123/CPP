#include <stdio.h>


int main(){
//Girilen 3sayinin aritmetik ortalamasýný bul.

int birinciSayi,ikinciSayi,ucuncuSayi;

printf("Lutfen uc sayiyi giriniz");
scanf("%d %d %d",&birinciSayi,&ikinciSayi,&ucuncuSayi);
 
 
int ortalama=(birinciSayi+ikinciSayi+ucuncuSayi)/3;
printf("\nGirdiginiz uc sayi sudur:%d,%d,%d\nBu sayilarin ortalamasi sudur=%d",birinciSayi,ikinciSayi,ucuncuSayi,ortalama);



return 0 ;
	
	
	
}
