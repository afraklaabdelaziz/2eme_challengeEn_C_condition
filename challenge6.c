#include<stdio.h>
int main(){
 int an,M,choi,H,J,Min,S;
 printf("donner nombre d'anners :\n");
 scanf("%d",&an);
 
 printf(" 1: mois\n 2: jours\n 3: heurs\n 4: minutes\n 5: secande\n");
 printf("choisir un choix que vous voulez");
 scanf("%d",&choi);
 M=an*12;
 J=M*30;
 H=J*24;
 Min=H*30;
 S=Min*30;
 switch(choi){
case 1:
	 printf("l'anner %d contient %d mois",an,M);
	 break;
case 2:
	printf("l'anner %d contient % jours",an,J);
	break;
case 3:
    printf("l'anner %d contient % heurs",an,H);
    break;
case 4:
    printf("l'anner %d contient %d minutes",an,Min);
    break;
case 5:
	printf("l'anner %d contient %d secandes",an,S);
	break;
default :
    printf("svp entrer un choix demander ");	
 }
return 0;
	
	
}
