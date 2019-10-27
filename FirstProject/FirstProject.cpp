#include <stdio.h>
#include <iostream>
#include <Windows.h>
#include <string>
#include <string.h>

using namespace std;

//DECLARACIÓN DE FUNCIONES
void impresion_titulo(string title);
void menu_inicio(string title);



//	MAIN

int main()
{
	system("title Programa Informativo de C++"); //Título a la ventana
	system("color 0b"); //primer color consola, segundo texto.
	
	bool salir = false;
	int opc = 0;
	string titulo;

	while (!salir) {
		titulo = "Guia Basica de C++";
		menu_inicio(titulo);
		scanf_s("%i", &opc);
		switch (opc) {
		case 1:
			//Variables
			break;
		case 2:
			//comentarios
			break;

		case 3:
			//Funciones 
			break;

		case 4:
			//Estructuras
			break;

		case 5:
			salir = true;
			break;

		default:
			printf("Por favor ingrese una de las opciones solicitadas\n");
			system("pause");
			break;
		}
	
	
	}
	
	
}



//	FUNCIONES 



void impresion_titulo(string title) {
	cout << "\n";
	for (int i = 0; i < 15; i++) {
		printf("%c", 220);
	}
	cout << " " + title + " ";
	//printf_s(" %s ",title);  No se puede usar, ya que viene de C y en C no se manejan strings (al parecer)
	for (int i = 0; i < 15; i++) {
		printf("%c", 220);
	}
	cout << "\n";
}

void variables() {
	system("cls");
	cout<<"Estas estan formadas por un espacio en el sistema de almacenaje y un nombre simbólico almacenado a dicho espacio, conteniendo un valor."

}


void menu_inicio(string title) {
	system("cls");
	impresion_titulo(title);
	cout << "\n\nSe mostraran conceptos basicos del lenguaje\npor favor, seleccione una opcion:\n\n";
	printf("1. Variables\n2. Comentarios\n3. Funciones\n4. Estructuras\n5. salir\n");

}

