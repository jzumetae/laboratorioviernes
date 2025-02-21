#include <iostream>
#include <string>

using namespace std;

class libro {
private:
	string nombre;
	string autor;
	int anio;

public:
	libro(string _nombre, string _autor, int _anio) {
		nombre = _nombre;
		autor = _autor;
		anio = _anio;

	}

	void mostrarDatos() {
		cout << "nombre: " << nombre << ", autor: " << autor << ", anio: " << anio << endl; 
	}
};
// clase hija 
class cuento : public libro {
private:
	int paginas;

public:
	cuento(string _nombre, string _autor, int _anio, int _paginas) :
		libro(_nombre, _autor, _anio) {
		paginas = _paginas; 
	}

	void mostrarCuantasPaginas() {
		mostrarDatos();
		cout << "cuanta paginas tiene el cuento: " << paginas << endl;
	}
};

int main() {
	string nombre, autor;
	int anio, paginas;

	cout << "ingrese el nombre del cuento: ";
	cin >> nombre;
	cout << "ingrese el anio de publicacion: ";
	cin >> anio;
	cout << "ingrese el nombre del autor: ";
	cin >> autor;
	cout << "ingrese el numero de pagians del ciento: ";
	cin >> paginas;

	cuento micuento(nombre, autor, anio, paginas);

	micuento.mostrarCuantasPaginas();
	return 0;
}
