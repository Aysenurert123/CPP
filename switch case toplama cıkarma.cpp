#include <stdio.h>

//Kullan�c�dan iki sayi al�ns�n ve bu sayilarla asag�daki i�lem seceneklerinden biri sec�ls�n toplama-c�karma-carpma-bolme

int main(){

int alinacakSayi1,alinacakSayi2,secim;
printf("Birinci sayiyi giriniz:");
scanf("%d",&alinacakSayi1);
printf("Ik�nc� sayiyi giriniz:");
scanf("%d",&alinacakSayi2);

printf("asag�dakilerden birini seciniz\n[1]-Toplama �slemi\n[2]-c�karma islemi\n[3]-carpma islemi\n[4]-bolme islemi");
printf ("Lutfen bir secim yapiniz:");
scanf("%d",&secim);
switch(secim){
	
	case 1: printf("B�r�nc� durumu sectiniz\nGirdiginiz sayilarin toplam� sudur=%d",alinacakSayi1+alinacakSayi2);break;
	case 2: printf("Ik�nc� durumu sectiniz\nGirdiginiz sayilarin c�karma islemi sudur=%d",alinacakSayi1-alinacakSayi2);break;
	case 3: printf("ucuncu durumu sectiniz\nGirdiginiz sayilarin capma islemi sudur=%d",alinacakSayi1*alinacakSayi2);break;
	case 4: printf("Dorduncu durumu sectiniz\nGirdiginiz sayilarin bolme islemi sudur=%d",alinacakSayi1/alinacakSayi2);break;
	default:printf("Bir hata yaptiniz lutfen prgrami tekrar calistiriniz");
	
	
	
	
}







	
	
	return 0;
}
