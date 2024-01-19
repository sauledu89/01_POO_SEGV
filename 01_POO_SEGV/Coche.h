#pragma once
#include "Prerequisites.h"

class Coche
{
public:
	Coche();
	~Coche();

private: string m_marca;
	   string m_modelo
		   int m_year;
};

void setMarca(string _marca) {
	m_marca = _marca;
}

void setModelo(string _modelo) {
	m_modelo = _modelo;
}

void setYear(string _year) {
	m_year = _year;
}

string getMarca() {
	return m_marca;
}

string getModelo() {
	return m_year;
}

private:

	string m_marca
    string m_modelo
    int m_year

};