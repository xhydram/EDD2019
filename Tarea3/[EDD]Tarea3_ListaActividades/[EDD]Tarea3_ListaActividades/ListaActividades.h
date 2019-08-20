#pragma once
#include "NodoDoble.h"
#include <string>

using namespace std;

class ListaActividades {

	private:
	NodoDoble* cabeza;
	NodoDoble* cola;

	bool estaVacia(NodoDoble* nodo);

	public:
	ListaActividades();
	void agregarActividad(string actividad);
	void imprimir();


};

