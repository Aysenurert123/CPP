#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
//kullanici bilgilerini alicaz
//sansli çekilis uygulamasi
//kullanici bilgilerini gster

char isim[10],soyIsim[10];
int secim;
int sayi;
printf("sansli cekilis uygulamamýza hosgeldiniz\nLutfen kullanici adinizi giriniz:");
scanf("%s",&isim);
printf("\nLutfen soyadýnizi giriniz:");
scanf("%s",&soyIsim);
printf("Asagidaki islemlerden biri icin secim yapiniz\n[1]-sansli cekilisi dene\n[2]-Kullanici bilgilerinizi kontrol ediniz");
printf ("\nLutfen birini seciniz:");
scanf("%d",&secim);
if(secim==1){
   printf("su an da sansli cekilis uygulamasindasiniz\nlutfen bir ile bes arasinda bir sayi giriniz:");	
   scanf("%d",&sayi);
   srand(time(NULL));	
   int randomSayi=1+rand()%5;
   
   if(sayi==randomSayi){
   	
   	printf("Girdiginiz sayi:%d\nCekilisteki sayi:%d",sayi,randomSayi);
   	printf("\nKazandininiz");
   }
   
   else
   {
   	 	printf("\nGirdiginiz sayi: %d\nCekilisteki sayi:%d",sayi,randomSayi);
   	 	printf("\nBir dahaki sefere");
   }
   
   
   
   
   
   
}
else if(secim==2){
	printf("kullanici adiniz:%s\nKullanici soyadiniz:%s",isim,soyIsim);
	}


	
	
	
	


return 0 ;

}
