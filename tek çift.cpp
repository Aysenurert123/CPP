#include <stdio.h>



int main (){
//Kullan�c� bir sayi girsin ve bu sayi tek mi �ift mi ogrenilsin

int girilecekSayi;
printf("Lutfen bir sayi giriniz:");
scanf("%d",&girilecekSayi);	
	
if(girilecekSayi%2==0){
	printf("Bu sayi cifttir");
	
}
else{
	printf("Bu sayi tektir");
	
}
	
	return 0 ;
	
	
}
