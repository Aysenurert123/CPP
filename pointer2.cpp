#include <stdio.h>
#include <string.h>


int main(){
	
int sayi1=15;
int sayi2 = 25;
char kelime='c';
int *pointerBir,*pointerIki;
pointerBir=&sayi1;
pointerIki=&sayi2;

//*pointerBir+=1;
//4 artar +1 de
int sayi3=*pointerBir+5;
printf("%d",sayi3);



printf("\nSayi1'in degeri:%d\nSayi1'in bellekteki adresi (hektadecimal cinsinden):%x\n",*pointerBir,pointerBir);
printf("Sayi2'nin degeri:%d\nSayi2'nin bellekteki adresi (hektadecimal cinsinden):%x\n",*pointerIki,pointerIki);
//pointer ba�ka bir de�i�kenin bellekteki adresine ula��r gerekirse ba�ka atanan de�ere m�dahale edebilir.








return 0;
}
