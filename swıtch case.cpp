#include <stdio.h>

//break:bitir

int main(){
int sec;
printf("Lutfen birle uc arasinda bir secim yapiniz");
scanf("%d",&sec);
switch(sec)
{
	case 1:printf("Biirinci durum secildi");break;
	case 2:printf("Ikinci durum secildi");break;
	case 3:printf("Ucuncu durum secildi");break;
	default: printf("yanlýs býr sayi girdiniz");
}	
	
	
	return 0;
}
