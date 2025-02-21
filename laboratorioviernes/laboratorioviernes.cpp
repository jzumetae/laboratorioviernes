#include <iostream>
#include <string>

using namespace std;

class Libro {
private:
    string nombre;
    string autor;
    int ano;

public:
    Libro(string _nombre, string _autor, int _ano) {
        nombre = _nombre;
        autor = _autor;
        ano = _ano;
    }

    void mostrardatos() {
        cout << "Nombre del Ensayo: " << nombre
             << ", Autor: " << autor
             << ", Año de Publicación: " << ano << endl;
    }
};

class Ensayo : public Libro {
private:
    string tipoensayo;

public:
    Ensayo(string _nombre, string _autor, int _ano, string _tipoensayo)
        : Libro(_nombre, _autor, _ano) {
        tipoensayo = _tipoensayo;
    }

    void mostrartipoensayo() {
        mostrardatos();
        cout << "Tipo de ensayo: " << tipoensayo << endl;
    }
};

int main() {
    string nombre, autor, tipoensayo;
    int ano;

    cout << "Ingrese el nombre del Ensayo: ";
    cin >> nombre;
    cout << "Ingrese el autor: ";
    cin >> autor;
    cout << "Ingrese el año de publicación: ";
    cin >> ano;
    cout << "Ingrese el tipo de ensayo: ";
    cin >> tipoensayo;

    Ensayo miEnsayo(nombre, autor, ano, tipoensayo);

    miEnsayo.mostrartipoensayo();

    return 0;
}
