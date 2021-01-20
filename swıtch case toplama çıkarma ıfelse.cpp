#include <stdio.h>

//Kullanýcýdan iki sayi alýnsýn ve bu sayilarla asagýdaki iþlem seceneklerinden biri secýlsýn toplama-cýkarma-carpma-bolme

int main(){

int alinacakSayi1,alinacakSayi2,secim;
printf("Birinci sayiyi giriniz:");
scanf("%d",&alinacakSayi1);
printf("Ikýncý sayiyi giriniz:");
scanf("%d",&alinacakSayi2);

printf("asagýdakilerden birini seciniz\n[1]-Toplama ýslemi\n[2]-cýkarma islemi\n[3]-carpma islemi\n[4]-bolme islemi");
printf ("Lutfen bir secim yapiniz:");
scanf("%d",&secim);

	
if(secim==1){

	printf("Birinci durumu sectiniz\nGirdiginiz sayilarin toplamý sudur=%d",alinacakSayi1+alinacakSayi2);
	
}
else if(secim==2){
		
	printf("Ikýncý durumu sectiniz\nGirdiginiz sayilarin cýkarma islemi sudur=%d",alinacakSayi1-alinacakSayi2);
	
	
}

else if(secim==3){
	
	printf("ucuncu durumu sectiniz\nGirdiginiz sayilarin capma islemi sudur=%d",alinacakSayi1*alinacakSayi2);
}

else if(secim==4){
		printf("Dorduncu durumu sectiniz\nGirdiginiz sayilarin bolme islemi sudur=%d",alinacakSayi1/alinacakSayi2);
	
}
else {
	printf("Bir yanlislik yaptiniz uygulamayi bastan calistiriniz");
}

    return 0;
}
