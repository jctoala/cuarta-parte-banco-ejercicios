//22.	Realizar la tabla de multiplicar de un número entre 0 y 10.
#include <stdio.h>
#include <conio.h>
int main(){
	int num;
	printf("Ingrese numero: ");
	scanf("%d",&num);
	printf("\nTABLA DEL %d\n", num);
	for(int i=0; i<=10; i++)
		printf("%d * %d = %d\n", num, i, num*i);

	getch();
	return 0;
}
