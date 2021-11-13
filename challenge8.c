#include<stdio.h>
int main(){
	printf("ce programme permit de verifier si le caractere est un alphabet majuscule ou non.\n\n");
	char c;
	printf("saisir un caractair svp\n");
	scanf("%c",&c);
	if((int)c>=60 && (int)c<=90){
		printf("caractair entrer est majuscule");
	}
	else if((int)c>=97 && (int)c<=122){
		printf("caractair entrer est miniscule");
	}
	else {
		printf("svp entrer un caractair");
	}
	return 0;
}
