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

class Ensayo : public Libro {
private:
    string tipoensayo;

public:
    Ensayo(string _nombre, string _autor, int _ano, string _tipoensayo)
        : Libro(_nombre, _autor, _ano), tipoensayo(_tipoensayo) {}
    void mostrartipoensayo() {
        mostrarLibro();
        cout << "Tipo de ensayo: " << tipoensayo << endl;
    }
};

class TextoEscolar : public Libro {
private:
    string editorial;

public:
    TextoEscolar(string nom, string au, int a, string ed) : Libro(nom, au, a), editorial(ed) {}
    void mostrarinfo() {
        mostrarLibro();
        cout << "Editorial: " << editorial << endl;
    }
};

class Biografia : public Libro {
private:
    string personaje;

public:
    Biografia(string m, string aut, int ani, string per) : Libro(m, aut, ani), personaje(per) {}
    void mostrarBiografia() {
        mostrarLibro();
        cout << "Personaje Célebre: " << personaje << endl;
    }
};

class Novela : public Libro {
private:
    string tipo;

public:
    Novela(string n, string a, int o, string t) : Libro(n, a, o), tipo(t) {}
    void mostrarinfo() {
        mostrarLibro();
        cout << "Tipo de libro: " << tipo << endl;
    }
};

class Cuento : public Libro {
private:
    int paginas;

public:
    Cuento(string _nombre, string _autor, int _anio, int _paginas) : Libro(_nombre, _autor, _anio), paginas(_paginas) {}
    void mostrarCuantasPaginas() {
        mostrarLibro();
        cout << "Páginas: " << paginas << endl;
    }
};

int main() {
    Libro librito("El Quijote de la Mancha", "Miguel de Cervantes", 2008);
    librito.mostrarLibro();

    Ensayo miEnsayo("Ensayo sobre la ceguera", "José Saramago", 1995, "Filosófico");
    miEnsayo.mostrartipoensayo();

    TextoEscolar miTexto("Matemáticas Avanzadas", "Luis Pérez", 2015, "Santillana");
    miTexto.mostrarinfo();

    Biografia bio("La vida de Chespirito", "El hijo de chespirito", 2010, "Chespirito");
    bio.mostrarBiografia();

    Novela novela1("Cien años de soledad", "Gabriel García Márquez", 1967, "Ficción");
    novela1.mostrarinfo();

    Cuento micuento("El Principito", "Antoine de Saint-Exupéry", 1943, 96);
    micuento.mostrarCuantasPaginas();

    return 0;
}

