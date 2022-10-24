/*
 ============================================================================
 Name        : 1G.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define EJEMPLO 3

typedef struct {
	int id;
	char nombre[20];
	char tipo;
	float efectividad;
}eVacuna;

float aplicarAumento(importe);
int reemplazarCaracteres (cadenaUno[], int tam, char segundo, char tercero);
int ordenarEstructuraPorTipo(eVacuna vacuna, int tam);




int main(void) {
	float precio;
	float precioConAumento;
	eVacuna vacuna[EJEMPLO];

	precioConAumento = aplicarAumento(precio);




	return EXIT_SUCCESS;
}

float aplicarAumento(importe){
	int resultado;

	resultado = importe * 1.05;

	return resultado;
}

int reemplazarCaracteres (cadenaUno[], int tam, char segundo, char tercero){
	int reemplazos;
	if(cadenaUno != NULL){
		for(int i = 0 ; i < tam ; i++){
			if(cadena[i] == segundo){
				cadena[i] = tercero;
				reemplazos++;
			}
		}
	}
	return reemplazos
}

int ordenarEstructuraPorTipo(eVacuna vacuna, int tam){
	if(vacuna != NULL && tam > 0){
		if(strcmp(vacuna.tipo{i},vac)
	}
}

