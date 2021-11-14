#include<stdio.h>
int main(){
	printf("ce programme permit de convirtir nombre anner donner au mois ou jours ou heurs ou minutes ou secande .\n\n");
 int choi,an;
 long long int M,H,J,Min,S;
 printf("donner nombre d'anners :\n");
 scanf("%ld",&an);
 
 printf("les choix de ce programme .\n 1: mois\n 2: jours\n 3: heurs\n 4: minutes\n 5: secande\n");
 printf("choisir un choix que vous voulez :");
 scanf("%d",&choi);
 M=an*12;
 J=M*30;
 H=J*24;
 Min=H*60;
 S=Min*60;
 switch(choi){
case 1:
	 printf("nombre d'anners entrer est : %d ans contient %lld mois ",an,M);
	 break;
case 2:
	printf("nombre d'anners entrer est : %d ans contient %lld jours",an,J);
	break;
case 3:
    printf("nombre d'anners entrer est : %d ans contient %lld heurs",an,H);
    break;
case 4:
    printf("nombre d'anners entrer est : %d ans contient %lld minutes",an,Min);
    break;
case 5:
	printf("nombre d'anners entrer est : %d ans contient %lld secandes",an,S);
	break;
default :
    printf("svp entrer un choix demander ");	
 }
return 0;
	
	
}
