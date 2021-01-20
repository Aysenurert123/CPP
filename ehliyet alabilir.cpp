#include <stdio.h>



int main(){
//kullanici adini soyadini ve yasini girsin 18 den buyukse ehliyet alabilsin

char isim[10];
char soyIsim[10];
int yas;
printf("Lutfen adinizi giriniz:");
scanf("%s",&isim);
printf("Lutfen soyisminizi giriniz:");
scanf("%s",&soyIsim);
printf("Lutfen yasinizi giriniz:");
scanf("%d",&yas);
if(yas>=18)
{


printf ("\nKullanici Adiniz:%s\nSoyadiniz sudur=%s",isim,soyIsim);
printf("\nEhliyet alabilirsiniz");	
}	
else{
printf ("\nKullanici Adiniz:%s\nSoyadiniz sudur=%s",isim,soyIsim);	
printf("Ehliyet alamazsiniz");	
	
}	
	return 0 ;
}
