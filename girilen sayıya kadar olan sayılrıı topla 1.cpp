#include <stdio.h>


int main(){
	
//while ile fakt�riyel hesapla
//girilen say�ya kadar b�t�n say�lar� topla


int girilecekSayi;
printf("Lutfen bir sayi giriniz:");
scanf("%d",&girilecekSayi);


int i=0;
int toplam=0;

while(i<=girilecekSayi){
 printf("degerler:%d\n",i);
 toplam+=i;
 i++;
    	
	
}
printf("\nToplam:%d",toplam);	
	
	return 0;
	
}
