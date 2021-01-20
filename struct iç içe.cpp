#include <stdio.h>
#include <string.h>


struct detay{
char renk[20];
char boyut[20];
char dipnot[20];

};

struct urunler{
	char isim[20];
	int sayi;
	struct detay bilgi;
};

int main (){
	
struct urunler urunBir;
strcpy(urunBir.isim,"Televizyon");
urunBir.sayi=252;
strcpy(urunBir.bilgi.renk,"Kirmizi");
strcpy(urunBir.bilgi.boyut,"1500x900");
strcpy(urunBir.bilgi.dipnot,"Sahibinden kiraliktir.");

printf("Asagida urun bilgisi bulunmaktadir\n");
printf("Urun adi:%s\nUrun rengi:%s\nUrun boyutu:%s\nUrun sayisi:%d\nUrun dipnot:%s",urunBir.isim,urunBir.bilgi.renk,urunBir.bilgi.boyut,urunBir.sayi,urunBir.bilgi.dipnot);











	return 0 ;
	
}
