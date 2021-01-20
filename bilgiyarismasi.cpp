#include <stdio.h>
#include <string.h>

void hosgeldinizFonksiyonu(){
printf("Bilgi yarismasina hosgeldiniz asagidaki kurallari okuyunuz\n"
"*Yarismamiz puan sistemlidir\n* Lutfen kullanici adinizi dogru giriniz kayitli degilseniz uye olunuz"
);
}

int secimFonksiyonu(){
	int secim;
	printf("Lutfen asagidaki seceneklerden birini seciniz\n[1]-Giris Yap\n[2]-Kayit Ol");
	scanf ("%d",&secim);
	return secim; 
}

int girisyapFonksiyonu(char isim [200],char sifre[200]){
	char isimVeri[200];
	char sifreVeri[200];
	bool kontrol=false;
	while (kontrol==false){
	 printf("Lutfen adinizi giriniz:");
	 scanf("%s",&isimVeri);
	 printf("Lutfen sifrenizi giriniz:");
	 scanf("%s",&sifreVeri);
	 if(strcmp(isim,isimVeri)==0&&strcmp(sifre,sifreVeri)==0){
	 	printf("Sisteme hosgeldiniz\n");
	 	kontrol=true;
	 	
	 }
	 else
	 {
	 	printf("Hatali giris\n");
	 }
}
}
int kayitolFonksiyonu(){
	char isim[200];
	char sifre[200];
	printf("Lutfen bir isim belirleyiniz:");
	scanf("%s",&isim);
	printf("Lutfen bir sifre belirleyiniz:");
    scanf("%s",&sifre);
    printf("Basarili bir sekilde kayit oldunuz\n****Giris ekranina yonlendiriliyorsunuz****\n");
    girisyapFonksiyonu(isim,sifre);
    
    
	
	
	
}
int bilgiYarismasi(){
	char cevap[2];
	int puan=0;
	int can=3;
	printf("Yarisma basladi\n");
	printf("Puaniniz:%d",puan);
	
	
	while(can!=0)
	{
		
	
	if(puan==0){
	
	printf("[soru-1]Asagidakilerden hangisi Turkiye Cumhuriyetinin baskentidir?\nA-)Istanbul\nB-)Ankara\nC-)Izmir\nD-)Antakya\n");
	scanf("%s",&cevap);
	if(strcmp(cevap,"B")==0){
	printf("\nDogru cevap\n");	
	puan=10;
	printf("Puan:%d",puan);
	}
	else
	{
		printf("Hatali cevap dogru cevap B sikkidir\n");
		printf("Puaniniz:%d",puan);
		can=can-1;
		printf("\nCaniniz:%d",can);
	}
}
		if(puan==10){
	
	printf("[soru-2]Asagidakilerden hangisi Rusya'nin baskentidir?\nA-)Moskova\nB-)Ankara\nC-)Izmir\nD-)Paris\n");
	scanf("%s",&cevap);
	if(strcmp(cevap,"A")==0){
	printf("\nDogru cevap\n");	
	puan=10;
	printf("Puaniniz:%d",puan);
	}
	else
	{
		printf("Hatali cevap dogru cevap A sikkidir\n");
		printf("Puan:%d",puan);
			can=can-1;
				printf("\nCaniniz:%d",can);
	}
	}
			if(puan==20){
	
	printf("[soru-3]Asagidakilerden hangisi Fransa''nin baskentidir?\nA-)Moskova\nB-)Ankara\nC-)Izmir\nD-)Paris\n");
	scanf("%s",&cevap);
	if(strcmp(cevap,"D")==0){
	printf("\nDogru cevap\n");	
	puan=10;
	printf("Puaniniz:%d",puan);
	can=0;
	
	}
	else
	{
		printf("Hatali cevap dogru cevap D sikkidir\n");
		printf("Puan:%d",puan);
			can=can-1;
		printf("\nCaniniz:%d",can);
	}
	}
}
return puan;



}
int yarismaSonucu(int puan){
	printf("Yarismamiz sona ermistir\nGuncel skorunuz:%d",puan);
	
}
int main(){

	char isim[200]="Mehmet";
	char sifre[200]="12345";
	hosgeldinizFonksiyonu();
	int secim=secimFonksiyonu();
   
   if(secim==1){
   	girisyapFonksiyonu(isim,sifre);
   	
   }
   else if (secim==2){
   	kayitolFonksiyonu();
   	
   }
int skor= bilgiYarismasi();
yarismaSonucu(skor);	
	
	

return 0;
}

