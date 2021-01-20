#include <stdio.h>
#include <string.h>

void kullaniciBilgileri(char isim[20]){
	
printf("kullanici adiniz:%s",isim);
	
}
int main (){
	
char isim[20];
printf("Lutfen kullanici dinizi giriniz:");
scanf("%s",&isim);



kullaniciBilgileri(isim);

	return 0;
}
