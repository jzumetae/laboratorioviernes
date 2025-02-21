#include <iostream>
#include <string>

using namespace std;

class Libro {
protected:
    string nombre, autor;
    int anio;

public:
    Libro(string m, string aut, int ani) : nombre(m), autor(aut), anio(ani) {}
    void mostrarLibro() {
        cout << "--Detalles del libro: --\n" << "Nombre: " << nombre << "\n Autor: " << autor << "\n Anio: " << anio << endl;
    }
};

int main() {

    Libro librito("El Quijote de la Mancha", "Miguel de Cervantes", 2008);
    librito.mostrarLibro();
    
    return 0;
}


