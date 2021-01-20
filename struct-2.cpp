#include <stdio.h>
#include <string.h>


struct calisanlarBilgi{
	char isim [20];
	char soyIsim[20];
	int maas;
};
int main (){
	
struct calisanlarBilgi calisanlar[4];
int i =1;
for(i=1;i<5;i++){
	printf ("Lutfen %d ninci calisanin asagidaki bilgilerini giriniz:\n",i);
		printf ("Lutfen isim giriniz:");
		scanf("%s",&calisanlar[i].isim);
			printf ("\nSoyIsim giriniz:");
				scanf("%s",&calisanlar[i].soyIsim);
					printf ("Maas giriniz:");
						scanf("%d",&calisanlar[i].maas);
						
						
						
			
}	
for (i=1;i<5;i++)
{
	printf("\n %s %s-%d \n",calisanlar[i].isim,calisanlar[i].soyIsim,calisanlar[i].maas);
	}	
	
	return 0 ;
	
}
