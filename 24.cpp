/*24.	Realizar un programa que nos permita introducir un número por teclado y sobre él se realicen las siguientes operaciones:
        comprobar si es primo, hallar su factorial o imprimir su tabla de multiplicar.*/
#include <stdio.h>
#include <conio.h>
int main(){
	int num;
	int opc;
	int bandera = 1;
	int factorial;
	printf("Ingrese numero: ");
	scanf("%d",&num);
	do{
		printf("\n1.-Comprobar si es primo\n");
		printf("2.-Halle su factorial\n");
		printf("3.-Tabla de multiplicar\n");
		printf("4.-SALIR\n");
		printf("Digite opcion: ");
		scanf("%d",&opc);
		switch(opc){
			case 1:
				if(num>1){
					for(int i=2; i<num; i++){
						if(num%i == 0)
							bandera = 0;
					}
					if(bandera == 1)
						printf("\n%d es primo\n", num);
					else
						printf("\n%d no es primo\n", num);		 
				}
				else
					printf("\n%d no es primo\n", num);
				
				getch();
				break;
			case 2:
				if(num<0)
					printf("\nNo se puede calcular el factorial de un numero negativo\n");
				else if(num==0)
					printf("\n0 ! = 1\n");
				else{
					factorial = 1;
					for(int i=1; i<=num; i++)
						factorial *= i;
					printf("\n%d ! = %d\n", num, factorial);
				}
				
				getch();
				break; 
			case 3:
				printf("\nTABLA DEL %d\n", num);
				for(int i=0; i<=10; i++)
					printf("%d * %d = %d\n", num, i, num*i);
				
				getch();
				break;
		}
	}while(opc!=4);

	getch();
	return 0;
}
