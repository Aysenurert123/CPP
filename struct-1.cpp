#include <stdio.h>
#include <string.h>

struct arabalar{
char marka[20];
char model [20];
int yil;
int beygirGucu;
};

int main (){
	
struct arabalar arabaBir= {"Alfa romeo","4C",2017,240};	
	struct arabalar arabaIki={"Astan Martin","DB7",2004,420};
	
	printf("****************Arabalarimiz*****************\n %s-%s-%d-%d",arabaBir.marka,arabaBir.model,arabaBir.yil,arabaBir.beygirGucu);
		printf("\n %s-%s-%d-%d",arabaIki.marka,arabaIki.model,arabaIki.yil,arabaIki.beygirGucu);
	return 0;
}
