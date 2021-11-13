#include<stdio.h>
int main(){
	printf("ce programme permit de verifie si un caractere est une voyelle ou non.\n\n");
	char C;
	printf("entrer un caractere :\n");
	scanf("%c",&C);
	
	switch(C) {
		case 'a' :case 'A':
			printf("le caractere %c est une voyelle ",C);
			break;
		case 'e': case 'E':
		    printf("le caractere %c est une voyelle ",C);
		    break;
		case 'i' :case 'I':
		    printf("le caractere %c est une voyelle ",C);
			break;
		case 'o': case 'O':
		    printf("le caractere %c est une voyelle ",C);
		    break;
		case 'u': case 'U':
		    printf("le caractere %c est une voyelle ",C);
			break;
		case 'y': case 'Y':
		    printf("le caractere %c est une voyelle ",C);
			break;
		default:
		    printf("le caractere %c n'est pas voyelle ",C);
			break; 		
	}
	return 0;
}
