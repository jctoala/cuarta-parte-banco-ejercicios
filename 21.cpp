//21.	Introducir una frase por teclado. Imprimirla en el centro de la pantalla.
#include <stdio.h>
#include <conio.h>
int main(){
	char frase[20];
    printf("Ingrese una frase: ");
	gets(frase);
	gotoxy(40,20);
	printf("%s",frase);

	getch();
	return 0;
}
