// Programa que muestre por pantalla la sucesión de los números:
	
// 1, - 1, 2 , -2, 3, -3...

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	while (1){
		
		
		int num = 0;
		printf("Elige la cantidad de números que quieres retornar en positivo y negativo: \n");
		scanf("%d", &num);
		
		num = abs(num);
		
		
		if (num == 0){
			printf("El rango no es valido, intente de nuevo.");
		} else {
			
			printf("La sucesion es:");
			
			for (int i = 1; i <= num; i ++){

				printf("%d, %d ,",i, i*-1);	
		
			}
			printf("\n");
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
