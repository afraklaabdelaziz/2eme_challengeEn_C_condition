#include<stdio.h>
#include<math.h>
int main(){
	printf("ce programme permit de transfair le degre  Fahrenheit en degre celsius et affiche la sensation ressentie.\n\n");
	float TF,TC;
	printf("entre la temperature en Fahrenheit :\n");
	scanf("%f",&TF);
	TC=(TF-32)/1.8;
	printf("la tenmperature en Celusiece est : %f\n",TC);
	if (TC<=5){
	
	printf("la sensation ressentie est tre froide");
}
	else if (TC<=15){

	printf("la sensation ressentie est froide");
}
	else if (TC<=30){
	

	printf("la sensation ressentie est chaud");
}
	else {
	
	printf("la sensation ressentie est tre chaud");
}
 return 0;
}
