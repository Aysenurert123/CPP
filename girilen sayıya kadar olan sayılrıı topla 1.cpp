#include <stdio.h>


int main(){
	
//while ile faktöriyel hesapla
//girilen sayýya kadar bütün sayýlarý topla


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
