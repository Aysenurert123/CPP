#include <stdio.h>


int main(){
	
//while ile fakt�riyel hesapla
//girilen say�ya kadar b�t�n say�lar� topla


int girilecekSayi;
printf("Lutfen hesaplanmasini istediginiz sayiyi giriniz:");
scanf("%d",&girilecekSayi);
int i=1;
int faktoriyel=1;


while(i<=girilecekSayi)
{
	faktoriyel=faktoriyel*i;
	i++;
}
	
printf("\nSonuc=%d",faktoriyel);	
	
	return 0;
	
}
