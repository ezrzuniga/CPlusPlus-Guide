#include <stdio.h>
#include <iostream>
#include <Windows.h>

using namespace std;

//DECLARACIÓN DE FUNCIONES
void menu_inicio();



//	MAIN

int main()
{
	system("color 0b"); //primer color consola, segundo texto.
	
	bool salir = false;
	int opc = 0;

	while (!salir) {
		menu_inicio();
		scanf_s("%i", &opc);
		switch (opc) {
		case 1:

			break;
		case 2:

			break;

		case 3:

			break;

		case 4:

			break;

		case 5:
			salir = true;
			break;

		
		
		}
	
	
	}
	
	
}



//	FUNCIONES 

void menu_inicio() {
	system("cls");
	cout << "\n";
	for (int i = 0; i < 15; i++) {
		printf("%c", 220);
	}
	cout << "  Bienvenido al Programa Informativo de C++  ";
	for (int i = 0; i < 15; i++) {
		printf("%c", 220);
	}
	cout << "\n\nSe mostraran conceptos basicos del lenguaje\npor favor, seleccione una opcion:\n\n";
	printf("1. Variables\n2. Comentarios\n3. Funciones\n4. Estructuras\n5. salir\n");

}

