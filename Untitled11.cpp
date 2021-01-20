#include <stdio.h>



int main (){
	
	
// Aritmetik örnekler ve scanf fonksiyonu
int alinacakSayi;
int alinacakIkinciSayi;
int carpmaIslemi;
int bolmeIslemi;
printf("Bir sayi giriniz:");
scanf ("%d",&alinacakSayi);
printf("\n Ikinci bir sayi giriniz:");
scanf ("%d",&alinacakIkinciSayi);
carpmaIslemi=alinacakSayi*alinacakIkinciSayi;
printf("\nGirdiginiz iki sayinin carpimi=%d",carpmaIslemi);
bolmeIslemi=alinacakSayi/alinacakIkinciSayi;
printf("\nGirdiginiz iki sayinin bolumu=%d",bolmeIslemi);

return 0 ;
}
