#include <stdio.h>
#include <string.h>


int main(){

int soru;
printf("Lutfen girilecek sayi miktarini belirtiniz:");
scanf("%d",&soru);



int sayilar[soru];
int i =0;
for(i=0;i<soru;i++){
printf("Lutfen sayi %d giriniz:",i);
scanf("%d",&sayilar[i]);	
	
	
}
int*pointer;
for(i=0;i<soru;i++)
{
	pointer=&sayilar[i];
printf("Sayi %d nin bellekteki adresi %x\n",sayilar[i],pointer);

}
return 0;
}
