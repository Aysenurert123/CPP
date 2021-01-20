#include <stdio.h>
#include <string.h>

//indeksler 0 dan baþlar.

int main(){
int matris[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
	
for(int i=0;i<=3;i++){
	
	for(int j=0;j<=3;j++){
		
	printf("%d/",matris[i][j]);
	}
	
	printf("\n");
}
	
	
	return 0;
	
}
