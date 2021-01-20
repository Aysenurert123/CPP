#include <stdio.h>
#include <string.h>

struct ogrenciler{
	char isim [20];
	char soyIsim[20];
	int dogumyili;
	int numara;
	
};
void bilgileriGoster(struct ogrenciler bilgi ){
	
	printf("Ogrenci adi:%s\nOgrenci SoyIsim:%s\nOgrenci dogum yili:%d\nOgrenci Numarasi:%d",bilgi.isim,bilgi.soyIsim,bilgi.dogumyili,bilgi.numara);
	
	
	
}

struct ogrenciler ogrenciKayit(){
	struct ogrenciler kayit;
	printf("Lutfen asagidaki bilgileri giriniz\nLutfen ogrenci adini giriniz: ");
	scanf("%s",&kayit.isim);
		printf("\nLutfen ogrenci soyismini giriniz: ");
		scanf("%s",&kayit.soyIsim);
			printf("\nLutfen ogrenci dogumyilini giriniz: ");
		scanf("%d",&kayit.dogumyili);
		printf("\nLutfen ogrenci numarasini giriniz: ");
		scanf("%d",&kayit.numara);
		return kayit;
	
	
}



int main(){
	
struct ogrenciler ogrenciBir=ogrenciKayit();
bilgileriGoster(ogrenciBir);
	
struct ogrenciler ogrenciIki=ogrenciKayit();
bilgileriGoster(ogrenciIki);
		
	
	return 0;
}
