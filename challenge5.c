#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c,delta,X0,X1,X2;
	printf("donner a :\n");
	scanf("%f",&a);
	printf("donner b :\n");
	scanf("%f",&b);
	printf("donner c :\n");
	scanf("%f",&c);
	delta=pow(b,2)-(4*a*c);
	if (delta<0){
		printf("l'equation %.2fx^2+%.2fx+%.2f n'est pas de soulution",a,b,c);
	}
	else if (delta==0){
		X0=(-b)/(2*a);
		printf("equation  %.2fx^2+%.2fx+%.2f admit une soulution X=%f ",a,b,c,X0);
		}
		else {
			X1=((-b)+sqrt(delta))/(2*a);
			X2=((-b)-sqrt(delta))/(2*a);
			printf("equation  %.2fx^2+%.2fx+%.2f admit deux soulution X1=%f et X2=%f ",a,b,c,X1,X2);
		}
		return 0;
}
