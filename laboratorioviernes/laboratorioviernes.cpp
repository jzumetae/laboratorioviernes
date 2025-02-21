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

class Biografia : public Libro {
private:
    string personaje;
public:
    Biografia(string m, string aut, int ani, string per) : Libro(m, aut, ani), personaje(per) {}
    void mostrarBiografia() {
        cout << "--Detalles de la biografía: --\n" << " Nombre: " << nombre << "\n Autor: " << autor << "\n Anio: " << anio << "\n Personaje Célebre: " << personaje << endl;
    }
};

int main() {

    Libro librito("El Quijote de la Mancha", "Miguel de Cervantes", 2008);
    librito.mostrarLibro();

    Biografia bio("La vida de Chespirito", "El hijo de chespirito", 2010, "Chespirito");
    bio.mostrarBiografia();
    
    return 0;
}


