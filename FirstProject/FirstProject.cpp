#include <stdio.h>
#include <iostream>
#include <Windows.h>
#include <string.h>

using namespace std;

//DECLARACIÓN DE FUNCIONES
void impresion_titulo(string title);
void menu_inicio(string title);
void variables(string title);
void comentarios(string title);
void funciones(string title);



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
			titulo = "Tipos de variables en C++";
			variables(titulo);
			break;
		case 2:
			//comentarios
			titulo = "Utilizacion de comentarios";
			comentarios(titulo);
			break;

		case 3:
			//Funciones 
			titulo = "Nomenclatura de las funciones";
			funciones(titulo);
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

void menu_inicio(string title) {
	system("cls");
	impresion_titulo(title);
	cout << "\n\nSe mostraran conceptos basicos del lenguaje\npor favor, seleccione una opcion:\n\n";
	printf("1. Variables\n2. Comentarios\n3. Funciones\n4. Estructuras\n5. salir\n");

}

void variables(string title) {
	system("cls");
	impresion_titulo(title);
	cout<< "\nEstas consisten en un valor contenido en un espacio del sistema de almacenaje, junto con un nombre simbolico que se refiere a dicho espacio.\n";
	cout << "\nExisten variables globales y locales. \n -Variables globales: pueden ser accesadas por todo el programa, cualquier funcion puede acceder a ella."
		"Se declaran luego de la definicion de las bibliotecas/librerias.\n ";
	cout << "-Variables locales: solo pueden ser accesadas/manipuladas en el ambito de la funcion donde se declaro. Fuera de esto, no se puede referir a esta variable.\n";
	cout << "\nExisten diferentes tipos de variables, las siguientes son ejemplo:\n";
	cout << "\t-int : numeros enteros\n\t-short : entero corto\n\t-long : entero largo\n\t-float : numeros con punto flotante (decimal)\n\t-double : punto flotante doble precision"
		"\n\t-char : caracter\n\t-string : cadena de caracteres\n\n";
	cout << "Ejemplo:\n\t-int numero = 0;\n\t-char caracter = c (c entre comilla simple)\n\t-string cadena = letras (letras entre doble comilla)\n\n";
	system("pause");
}

void comentarios(string title) {
	system("cls");
	impresion_titulo(title);
	cout << "Para poder comentar el codigo en el que se trabaja, existen dos posibilidades:\n";
	cout << "\t// comentario : Este par de barras inclinadas comentan la linea donde se utilizan, limitandose solamente a estas\n\n";
	cout << "\t/* comentario */ : El otro modo es la barra seguida del asterisco, el asterisco va al lado del comentario que se desea hacer. Este modo no se limita a una sola linea, si no que comenta todo lo que se encuentre dentro de sus simbolos.\n\n";
	cout << "Ejemplo: \n1.\t // comentario de ejemplo.\n2.\t/*comentario\n\tde\n\tejemplo*/\n\n";
	system("pause");


}

void funciones(string title) {
	system("cls");
	impresion_titulo(title);
	cout << "Las funciones son un conjunto de instrucciones que realizan una tarea especifica, pueden tomar valores de entrada y muestran una salida o un valor de retorno\n\nEjemplo:\n";
	cout << "void nombre_funcion( parametros ){ ...Codigo...}\n\n";
	cout << "Las funciones pueden recibir dos tipos de parametros: por valor y por referencia.\n\n";
	cout << "--Parametro por valor: Estos parametros copian el valor de la variable para ser usado en la funcion, sin afectar la variable original";
	cout << "tomando la estructura del ejemplo, donde van los parametros se escribirian de la siguiente manera: int x, char c\n";
	cout << "--Parametro por referencia: Este parametro asigna un alias a la variable para ser usada dentro de la funcion, modificando asi la variable original\n\n";
	cout << "Para los datos de salida de la funcion pueden ser varios, desde int, char; hasta estructuras mas complejas o simplemente no devolver nada.";
	cout << "El tipo de dato que retornara la funcion debe ir explicitamente antes del nombre de la funcion y dentro de las instrucciones debe exixtir un return.";
	cout << "Para el caso en que no se retorne nada, se escribe simplemente 'void' como en el primer ejemplo";
	system("pause");
}

