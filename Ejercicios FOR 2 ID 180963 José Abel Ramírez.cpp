// Programa que calcle la suma de los cuadrados de los 100 primeros números enteros:
	
// Utilizar bucle for.

#include <stdio.h>
#include <math.h>
int main(){
	while(1){
		
		int num = 0;
	
		printf("Escriba el rango de la suma de los números cuadrados (Comenzando desde el 1):\n");
		scanf("%d", &num);
	
		if (num == 0){
		
			printf("El rango no es valido, intente de nuevo.");
		
		} else{
		
			printf("La suma de los cuadrados de los primeros %d numeros: ", num);
			int suma = 0;
			for (int i = 1; i <= num; i++){
				suma = suma + powf(i, 2);
			}
			printf("%d\n", suma);
		}
		
		
		printf("Escriba 1 si quiere continuar el programa:\n");
		int UserInput = 0;
		scanf("%d", &UserInput);
		
		switch(UserInput){
			case 1:
				printf("Continuando.\n");
				break;
			default:
				
				return 0;
				break;
		}
		
	}
}
