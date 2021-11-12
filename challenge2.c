#include<stdio.h>
int main(){
	int N;
	printf("saisir un nombre :\n");
	scanf("%d",&N);
	if (N % 2==0){
		printf("le nombre %d est pair",N);
	}
	else {
		printf("le nombre %d est impair",N);
	}
	return 0;
}
