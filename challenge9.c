#include<stdio.h>
int main(){
	printf("ce programme permit de  trouver le maximum de les deux nombres.\n\n");
	float N,M;
	printf("donner un nombre N:\n");
	scanf("%f",&N);
	printf("donner un nombre M:\n");
	scanf("%f",&M);
	if(N==M){
		printf("les nombres entrer sont egaux :%/2f=%.2f",N,M);
	}
	else if(N<M){
		printf("le maximum est %.2f",M);
	}
	else{
		printf("le maximum est %.2f",N);
	}
return 0;
}
