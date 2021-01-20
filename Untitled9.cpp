#include <stdio.h>

int main(){
	
	
	int integarDegiskeni;
	double doubleDegiskeni;
	float floatDegiskeni;
	char charDegiskeni;
	
	
	printf("Ýntegar degiskeninin bellekte kapladigi yer=%ld\n",sizeof(integarDegiskeni));
	   printf("double degiskeninin bellekte kapladigi yer=%ld\n",sizeof(doubleDegiskeni));
	   printf("float degiskeninin bellekte kapladigi yer=%ld\n",sizeof(floatDegiskeni));
	 
	 printf("char degiskeninin bellekte kapladigi yer=%ld\n",sizeof(charDegiskeni));
	return 0; 
	
	
}
