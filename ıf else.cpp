#include <stdio.h>




int main(){
	
//Ko�ullu ifadeler
//Notu 50'nin alt�nda olanlar sinifta kalir. 50 nin ustunde olanlar sinifi gecer.
int girilecekNot;
printf("Ogrencinin notunu giriniz:");
scanf("%d",&girilecekNot);

if(girilecekNot>=50){
	printf("bu ogrenci sinifi gecmistir");
	
	
}
else{
	printf("bu ogrenci sinifi gecememistir");
	
}	
	
	
	
	
	return 0;
}
