#include <stdio.h>
#include <string.h>


int main(){
	
int sayi1=15;
int sayi2 = 25;
char kelime='c';
int *pointerBir,*pointerIki;
pointerBir=&sayi1;
pointerIki=&sayi2;




printf("Sayi1'in degeri:%d\nSayi1'in bellekteki adresi (hektadecimal cinsinden):%x\n",*pointerBir,pointerBir);
printf("Sayi2'nin degeri:%d\nSayi2'nin bellekteki adresi (hektadecimal cinsinden):%x\n",*pointerIki,pointerIki);
//pointer baþka bir deðiþkenin bellekteki adresine ulaþýr gerekirse baþka atanan deðere müdahale edebilir.








return 0;
}
