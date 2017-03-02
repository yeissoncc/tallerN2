/*
nombre del programa : menu de progrmas numericos
autor :yeisson estiven castro
fecha: 26/ 02 /2017

*/
//librerias
#include <stdio.h>
#include <cmath>

int main(){
	int menu;
	
	printf("1. circuferencia del circulo \n");
	printf("2. area del triangulo \n");
	printf("3. salario de empleados \n");
	printf("4. tabla de multiplicar  \n");
	printf("5. total dolares \n");
	
	printf("ingrese un numero \n");
	scanf("%d",&menu);
	
	switch(menu){
		case 1: printf("circuferencia del circulo\n");
					float circu, radio, diametro_c, longitud_c;
					printf("ingrese el radio del circulo \n");
					scanf("%f",&radio);
					//circuferencia
					circu= 3.14*(radio*radio);
					//diametro circulo
					diametro_c= 2*3.14;
					//longitud del circulo
					longitud_c=2*3.14*radio;
					
					printf("%f la circuferencia del circulo esde \n :",circu);
					printf("%f el diemetro del circulo es \n :",diametro_c);
					printf("%f la longitud del  circulo es de \n :",longitud_c);
			break;
		case 2: printf("area del triangulo\n");
					int base, altura, area;
					printf("ingrese la base \n");
					scanf("%d",&base);
					printf("ingrese la altura \n");
					scanf("%d",&altura);
					
					area=base*altura/2;
					
					printf("%d el areas del triangulo es de: \n",area);
			break;
		case 3: printf("salario de empleados \n");
					int horas, horas_n, horas_d, horas_f;
					int valor_horas, valor_horas_n, valor_horas_d, valor_horas_f;
					int total_salario;
					
					printf("ingrese horas diurnas trabajadas trabajadas \n");
					scanf("%d",&horas);
					printf("ingrese horas nocturnas trabajadas trabajadas \n");
					scanf("%d",&horas_n);
					printf("ingrese horas dominicales trabajadas trabajadas \n");
					scanf("%d",&horas_d);
					printf("ingrese horas festivos trabajadas trabajadas \n");
					scanf("%d",&horas_f);
				
					valor_horas = 2500*horas;
					valor_horas_n = 2500+(2500*0.35)*horas_n;
					valor_horas_d = 2500+(2500*0.50)*horas_d;
					valor_horas_f = 2500+(2500*0.75)*horas_f;
					total_salario = valor_horas+valor_horas_n+valor_horas_d+valor_horas_f;
					
					printf("%d las horas son : \n :",valor_horas);
					printf("%d las horas nocturnas son \n:",valor_horas_n);
					printf("%d las horas dominicales son \n :",valor_horas_d);
					printf("%d las horas festivas son \n :",valor_horas_f);
					printf("%d el salario total es de \n :",total_salario);
					
					
			break;
		case 4: printf("tabla de multiplicar \n");
					int tabla;
					printf("ingrese el numero de la tabla \n");
					scanf("%d",&tabla);
					printf("%d x 1 = %d \n",tabla,tabla*1);
					printf("%d x 1 = %d \n",tabla,tabla*2);
					printf("%d x 1 = %d \n",tabla,tabla*3);
					printf("%d x 1 = %d \n",tabla,tabla*4);
					printf("%d x 1 = %d \n",tabla,tabla*5);
					printf("%d x 1 = %d \n",tabla,tabla*6);
					printf("%d x 1 = %d \n",tabla,tabla*7);
					printf("%d x 1 = %d \n",tabla,tabla*8);
					printf("%d x 1 = %d \n",tabla,tabla*9);
					printf("%d x 1 = %d \n",tabla,tabla*10);
					
			break;
		case 5: printf("total dolares\n");
					int valor_dolar, cantidad_dolar, total_dolar;
					
					printf("ingrese el valor del dolar \n");
					scanf("%d",&valor_dolar);
					printf("ingrese la cantidad de dolar \n");
					scanf("%d",&valor_dolar);
					total_dolar = valor_dolar*cantidad_dolar;
					
					printf("%d la cantidad de dolares obtenido es : \n",total_dolar);
					
					
			break;
	}
	return 0;
}
