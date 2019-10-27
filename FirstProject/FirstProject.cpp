#include <stdio.h>
#include <iostream>
#include <Windows.h>

using namespace std;

//DECLARACIÓN DE FUNCIONES
void menu_inicio();



//	MAIN

int main()
{
	menu_inicio();
	system("pause");
}



//	FUNCIONES 

void menu_inicio() {
	system("cls");
	system("color 0b"); //primer color consola, segundo texto.
	cout << "\n";
	for (int i = 0; i < 15; i++) {
		printf("%c", 220);
	}
	cout << "  Bienvenido al Programa Informativo de C++  ";
	for (int i = 0; i < 15; i++) {
		printf("%c", 220);
	}
	cout << "\n\nSe mostraran conceptos basicos del lenguaje\npor favor, seleccione una opcion:\n\n";
	printf("1. Variables\n\n");

}

