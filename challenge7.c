#include<stdio.h>
int main(){
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
