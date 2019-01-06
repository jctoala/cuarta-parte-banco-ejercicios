//23.Introducir dos número por teclado y mediante un menú, calcule su suma, su resta, su multiplicación o su división.
#include <stdio.h>
#include <conio.h>
int main(){
	int x, y;
	int opc;
	printf("\tIngrese dos numeros\n");
	printf("Ingrese numero: ");
	scanf("%d",&x);
	printf("Ingrese numero: ");
	scanf("%d",&y);
	do{
		printf("\n1.-SUMAR\n");
		printf("2.-RESTAR\n");
		printf("3.-MULTIPLICAR\n");
		printf("4.-DIVIDIR\n");
		printf("5.-SALIR\n");
		printf("Digite opcion: ");
		scanf("%d",&opc);
		switch(opc){
			case 1:
				printf("\n%d + %d = %d", x, y, x+y);
				getch();
				break;
			case 2:
				printf("\n%d - %d = %d", x, y, x-y);
				getch();
				break;
			case 3:
				printf("\n%d * %d = %d", x, y, x*y);
				getch();
				break;
			case 4:
				if(y==0)
					printf("No se puede dividir para 0");
				else
					printf("\n%d + %d = %d", x, y, x/y);
				getch();
				break;
		}
	}while(opc!=5);
	
	getch();
	return 0;
}
