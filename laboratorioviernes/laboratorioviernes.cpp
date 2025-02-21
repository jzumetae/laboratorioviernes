#include <iostream>
#include <string>
using namespace std;

class Libro {
protected:
    string nombre;
    string autor;
    int ano;

public:

    Libro(string nom, string au, int a) : nombre(nom), autor(au), ano(a) {}


    void mostrarinfo() {
        cout << "------LIBRO------" << endl;
        cout << "Nombre: " << nombre << endl;
        cout << "Autor: " << autor << endl;
        cout << "Año: " << ano << endl;
    }
};


class TextoEscolar : public Libro {
private:
    string editorial;

public:

    TextoEscolar(string nom, string au, int a, string ed) : Libro(nom, au, a), editorial(ed) {}


    void mostrarinfo() {
        Libro::mostrarinfo();
        cout << "Editorial: " << editorial << endl;
    }
};


int main() {
    TextoEscolar miTexto("Antojitos Los Tilines", "Jose Zumeta", 2006, "Susaeta");
    miTexto.mostrarinfo();
    return 0;
}
