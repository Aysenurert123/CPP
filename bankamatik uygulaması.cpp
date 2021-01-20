#include <stdio.h>
#include <string.h>

int main (){

//Kullanici bilgilerini alicaz
//Bakiye gorulecek
//para yatýrma para cekme ve kullanici bilgilerini gorme
char isim[5]="ali";
int parola=1234;
int bakiye=100;
int secim;
char istenecekIsim [10];
int istenecekParola;
int yatirilacakPara;
int cekilecekPara;
printf("Bankamatige hosgeldiniz\nLutfen kullanici adinizi giriniz:");
scanf("%s",&istenecekIsim);
 
 printf("lutfen sifrenizi giriniz:");
 scanf("%d",&istenecekParola);
 
 
 if(strcmp(isim,istenecekIsim)==0 && istenecekParola==parola){
 	
	 printf("kullanici bilgileri eslesmistir\n\n");
 	 printf("Asagidaki islemlerden birini seciniz\n[1]-para yatýrma\n[2]-para cekme\n[3]-kullanici bilgileri\nSeceneklerden birini seciniz:");
	 scanf("%d",&secim); 	
	 
	  
if(secim==1){
		
		
		printf("\nPara yatýrma islemindesiniz kac para yatirmak istersiniz:");
		scanf("%d",&yatirilacakPara);
		//bakiye=bakiye+yatirilacakPara;
	 bakiye +=yatirilacakPara;
	 printf("Para yatirma isleminiz basarili\nYatirdiginiz miktar:%d\nSuan ki bakiyeniz:%d",yatirilacakPara,bakiye);
	  
	}  
	 
	 else if (secim==2){
	 printf("\nPara cekme islemindesiniz kac para cekmek istersiniz:");
		scanf("%d",&cekilecekPara);	
	    bakiye=bakiye-cekilecekPara;
	 //bakiye-=cekilecekPara;
	 	 printf("Para cekme isleminiz basarili\nCektiginiz miktar:%d\nSuan ki bakiyeniz:%d",cekilecekPara,bakiye);	
	 } 
	  
	  else if (secim==3){
	  	
	  	
	  	printf("Kullanici arayuzune hosgeldiniz\nKullanici adiniz:%s\nKullanici sifreniz:%d\nHesabinizdaki bakiye:%d",isim,parola,bakiye);
	  }
	  
	 else
	 {  
	 printf("yanlis secim yaptiniz lutfen tekrar deneyiniz:");
	  } 
 }
 else 
 {
 	
 	printf("Kullanici adi ya da sifre yanlis girilmistir");
	 }	
	
	
	
	return 0 ;
}
