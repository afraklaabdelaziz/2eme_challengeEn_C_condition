#include<stdio.h>
int main(){
	printf("ce programe permit de calculer la somme de deux nombre et si les nombre sont egaux return le triple de leur somme.\n\n");
	int A,B,som,trip;
printf("entrer nombre A :\n");
scanf("%d",&A);
printf("entrer nombre B :\n");
scanf("%d",&B);
if (A!=B){
	som=A+B;
	printf("la somme de %d + %d = %d",A,B,som);
	}
	else {
		trip=(A+B)*3;
		printf("le triple de la somme de %d et %d est %d",A,B,trip);
	}
	return 0;
}
