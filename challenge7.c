#include<stdio.h>
int main(){
	printf("ce programe permit de verifier si le nombre donne est positif, negatif ou nul.\n\n");
	float a;
	printf("donner un nombre svp :\n");
	scanf("%f",&a);
if(a<0)	{
	printf("le nombre %.2f est negative",a);
}
else if(a==0){
	printf("le nombre %.2f est null",a);
}
else {
	printf("le nombr %.2f est positive",a);
}
return 0;
}
