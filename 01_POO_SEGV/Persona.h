#pragma once
#include "Prerequisites.h"

class

Persona {
public:
//Persona(string _nombre, int_edad) : : m_nombre(_nombre), m_edad(_edad) {}
	Persona(string _nombre, int _edad) {
		m_nombre = _nombre;
		m_edad = _edad;
}
	~Persona() {};

	//Metodo encargado de obtener el nombre
	string getNombre() {
		return m_nombre;
	}

	//Método encargado de obtener la edad
	int getEdad() {
		return m_edad;
	}

private:
	string m_nombre;
	int m_edad;
};