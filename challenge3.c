#include<stdio.h>
int main(){
	char C;
	printf("entrer un caractair :\n");
	scanf("%c",&C);
	
	switch(C) {
		case 'a' :case 'A':
			printf("le caractair %c est une voyelle ",C);
			break;
		case 'e':
		    printf("le caractair %c est une voyelle ",C);
		    break;
		case 'i':
		    printf("le caractair %c est une voyelle ",C);
			break;
		case 'o':
		    printf("le caractair %c est une voyelle ",C);
		    break;
		case 'u':
		    printf("le caractair %c est une voyelle ",C);
			break;
		case 'y':
		    printf("le caractair %c est une voyelle ",C);
			break;
		default:
		    printf("le caractair %c n'est pas voyelle ",C);
			break; 		
	}
	return 0;
}
