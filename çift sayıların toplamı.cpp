#include <stdio.h>


int main(){
int i;
int sayi;
int ciftSayiTopla=0; 
int tekSayiTopla=0;
printf("Lutfen bir sayi giriniz:");
scanf("%d",&sayi);
for (i=0;i<=sayi;i++){
	
if(i%2==0){
		
ciftSayiTopla=ciftSayiTopla+i;
	}
else 
{
	tekSayiTopla+=i;
	
	}	
}	
printf("\nGridiginiz sayiya kadar olan ciftlerinin toplami:%d",ciftSayiTopla);	
	
printf("\nGridiginiz sayiya kadar olan teklerin toplami:%d",tekSayiTopla);	
	
	return 0;
	
}
