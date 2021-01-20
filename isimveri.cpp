#include <stdio.h>
#include<string.h>



int main(){
char isim[50];
char sifre[50];
char isimVeri[]={"Tolgahan"};
char sifreVeri[]={"12345"};

printf("Lutfen kullanici adinizi giriniz:");
scanf("%s",&isim);
printf("Lutfen kullanici sifrenizi giriniz:");
scanf("%s",&sifre);
if (strcmp(isim,isimVeri)&& strcmp(sifre,sifreVeri)==0){
	
printf("kullanici bilgileri eslesti");
}
else 
{
	printf("Bilgiler hatalidir");
	
	
	}	return 0;
}
