#include<stdio.h>
int main(){
	printf("ce programme permit de affiche si ce nombre est paire ou impaire.\n\n");	
	int N;
	printf("saisir un nombre :\n");
	scanf("%d",&N);
	if (N==0){
		printf("le nombre entrer est null");
	}
	else if (N % 2==0){
		printf("le nombre %d est pair",N);
	}
	else {
		printf("le nombre %d est impair",N);
	}
	return 0;
}
