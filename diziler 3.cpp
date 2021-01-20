#include <stdio.h>
#include <string.h>

int main (){
	
int sayilar [20];
int girilecekSayi;

printf("Lutfen kac sayi girmek istediginizi belirtiniz:");
scanf("%d",&girilecekSayi);
for(int i=0;i<girilecekSayi;i++){
	
	printf("\n Sayi %d:",i+1);
	scanf("%d",&sayilar[i]);
}
	for(int j=0;j<girilecekSayi;j++){
		
			printf("Sayi %d:%d\n",j+1,sayilar[j]);
	}
	
	return 0 ;
	
}
