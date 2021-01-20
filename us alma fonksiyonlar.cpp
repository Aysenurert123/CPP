#include <stdio.h>
#include <string.h>


int usHesaplama(int a, int b){
int cevap=1;	
	
for(int i=0;i<b;i++){
	
cevap*=a;	
}	
printf("\nGirdiginiz sayinin kuvvetinindegeri:%d",cevap);	
}




int main (){



int sayi;
int us;


printf("Lutfen bir sayi giriniz:");
scanf("%d",&sayi);
printf("\nLutfen sayinin kacinci kuvvetini almak istediginizi yaziniz:");
scanf("%d",&us);

usHesaplama(sayi,us);





	return 0;
}
