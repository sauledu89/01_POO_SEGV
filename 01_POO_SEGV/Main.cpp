#include "Prerequisites.h"
#include "Persona.h"

int
main() {
	Persona Saul("Saul", 22);
	cout << "Nombre: " << Saul.getNombre(); << " , Edad" << Saul.getEdad << endl;

	Coche ford("Ford", "Focus", 2022);
	ford.obtenerInformacion();
	cout << ford.getMarca() << endl;

	Vector3 position
		Vector4 Scale(1, 1, 1, 1);

	Persona Roberto("Roberto", 25);
	cout << "Nombre: " << Roberto.getNombre()", Edad" << Roberto.getEdad();

	return 0;
}