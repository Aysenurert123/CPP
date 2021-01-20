#include <stdio.h>
#include <string.h>

int tekMiCiftMi(int a){
	
	
if(a%2==0){
	
	printf("Girilen %d sayisi cifttir",a);
}
else
{
	
	printf("Girilen %d sayisi tektir",a);
}
	
}
int main (){


int sayi;
printf("Lutfen bir sayi giriniz:");
scanf("%d",&sayi);

tekMiCiftMi(sayi);

	return 0;
}

