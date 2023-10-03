#include <iostream>
#include <string>
using namespace std;

int CantidadM=0, CantidadT=0, CantidadH=0;

class Biblioteca {
    string Direccion;
    string Encargado;
    int Numbiblioteca;
    string Namebiblioteca;

public:
    Biblioteca();
    Biblioteca(string a, string b, int c, string d);
    void setMostrarInfo();
    void getMostrarInfo();
};

Biblioteca InfoBiblioteca;

Biblioteca::Biblioteca() {
    Direccion = "nada";
    Encargado = "nada";
    Numbiblioteca = 0;
    Namebiblioteca = "nada";
}

Biblioteca::Biblioteca(string a, string b, int c, string d) {
    Direccion = a;
    Encargado = b;
    Numbiblioteca = c;
    Namebiblioteca = d;
}

void Biblioteca::setMostrarInfo() {
    InfoBiblioteca = Biblioteca("Eje 1 norte Mosqueta s/n esq. Aldama, Col. Buenavista, Del. Cuauhtémoc, México D.F., C.P. 06350",
        "Daniel Goldin Halfon", 1001, "Biblioteca José Vasconcelos");
}

void Biblioteca::getMostrarInfo() {
    cout << "La direccion es: " << InfoBiblioteca.Direccion << endl;
    cout << "El gerente es: " << InfoBiblioteca.Encargado << endl;
    cout << "El numero de biblioteca es: " << InfoBiblioteca.Numbiblioteca << endl;
    cout << "El nombre de la biblioteca es: " << InfoBiblioteca.Namebiblioteca << endl;
}

class Publicacion {
protected:
    string Titulo;
    unsigned long Fecha;

public:
    string getTitulo() {
        return Titulo;
    }
};

class Revista : public Publicacion {
private:
    int Circulacion;
    int Numerosporano;

public:
    Revista(string a, unsigned long b, int c, int d) {
        Titulo = a;
        Fecha = b;
        Circulacion = c;
        Numerosporano = d;
    }

    int getCirculacion() {
        return Circulacion;
    }

    int getNumerosporano() {
        return Numerosporano;
    }
};

class Libro : public Publicacion {
private:
    string Autor;
    int Cantidad;
    int CantidadPrestados; // Nueva variable para el seguimiento de libros prestados
    string ISBN;

public:
    Libro() {
        Titulo = "Nada";
        Fecha = 0;
        Autor = "Nada";
        Cantidad = 0;
        CantidadPrestados = 0;
        ISBN = "Nada";
    }

    Libro(string a, unsigned long b, string c, int d, string e) {
        Titulo = a;
        Fecha = b;
        Autor = c;
        Cantidad = d;
        CantidadPrestados = 0; // Inicialmente, no hay libros prestados
        ISBN = e;
    }

    string getAutor() {
        return Autor;
    }

    int getCantidad() {
        return Cantidad;
    }

    int getCantidadPrestados() {
        return CantidadPrestados;
    }

    string getISBN() {
        return ISBN;
    }

    void prestarLibro() {
        if (Cantidad - CantidadPrestados > 0) {
            CantidadPrestados++;
            cout << "Libro prestado exitosamente" << endl;
        } else {
            cout << "No hay ejemplares disponibles para prestar" << endl;
        }
    }

    void devolverLibro() {
        if (CantidadPrestados > 0) {
            CantidadPrestados--;
            cout << "Libro devuelto exitosamente" << endl;
        } else {
            cout << "No hay ejemplares prestados para devolver" << endl;
        }
    }
};

int main() {
    char bck;
    do {
        Biblioteca Bibliotecas;
        Revista Revistas[] = {
            Revista("National Geographic Society", 2015, 12, 152 - 3),
            Revista("Revista J. Yo Publico", 2015, 10, 189 - 9)
        };

        Libro Libros[] = {
            Libro("Mecatronica - control y automatizacion IFAOMEGA ", 2013, "Reyes Fernando", 10, "6077075485"),
            Libro("Tecnicas de memeoria veloz", 2014, "Ruben Robles Basurto", 7, "B00F7OU1F8"),
            Libro("Historia universa. Capitulos fundamentales", 2013, "David Garcia Hernan", 5, "B00GMIKHCU")
        };

        int opc;
        cout << "Introduce el numero de lo que quieras hacer:\n1: Prestar Libro\n2: Devolver Libro\n3: Mostrar informacion de Libro, revista y biblioteca" << endl;
        cin >> opc;

        switch (opc) {
        case 1:
            cout << "Seleccione el libro que desea prestar:" << endl;
            for (int i = 0; i < 3; i++) {
                cout << i + 1 << ": " << Libros[i].getTitulo() << " (Cantidad: " << Libros[i].getCantidad() - Libros[i].getCantidadPrestados() << ")" << endl;
            }
            cin >> opc;

            if (opc >= 1 && opc <= 3) {
                Libros[opc - 1].prestarLibro();
            } else {
                cout << "Opción inválida" << endl;
            }

            /*switch(opc)
            {
                case 1: Libros[opc - 1].prestarLibro();

                break;
            }*/
            break;

        case 2:
            cout << "Seleccione el libro que desea devolver:" << endl;
            for (int i = 0; i < 3; i++) {
                cout << i + 1 << ": " << Libros[i].getTitulo() << " (Cantidad Prestados: " << Libros[i].getCantidadPrestados() << ")" << endl;
            }
            cin >> opc;

            if (opc >= 1 && opc <= 3) {
                Libros[opc - 1].devolverLibro();
            } else {
                cout << "Opción inválida" << endl;
            }
            break;

        case 3:
            cout << "1: Informacion de la biblioteca" << endl;
            cout << "2: Informacion de las revistas" << endl;
            cout << "3: Informacion de los libros" << endl;
            cin >> opc;

            switch (opc) {
            case 1:
                Bibliotecas.setMostrarInfo();
                Bibliotecas.getMostrarInfo();
                break;

            case 2:
                cout << "Seleccione la revista de la que quiere leer informacion" << endl;
                for (int i = 0; i < 2; i++) {
                    cout << i + 1 << ": " << Revistas[i].getTitulo() << endl;
                }
                cin >> opc;

                if (opc >= 1 && opc <= 2) {
                    cout << "Titulo: " << Revistas[opc - 1].getTitulo() << endl;
                    cout << "Circulacion: " << Revistas[opc - 1].getCirculacion() << endl;
                    cout << "Numeros por año: " << Revistas[opc - 1].getNumerosporano() << endl;
                } else {
                    cout << "Opción inválida" << endl;
                }
                break;

            case 3:
                cout << "Seleccione el libro del que quiere leer informacion" << endl;
                for (int i = 0; i < 3; i++) {
                    cout << i + 1 << ": " << Libros[i].getTitulo() << endl;
                }
                cin >> opc;

                if (opc >= 1 && opc <= 3) {
                    cout << "Titulo: " << Libros[opc - 1].getTitulo() << endl;
                    cout << "Autor: " << Libros[opc - 1].getAutor() << endl;
                    cout << "Cantidad: " << Libros[opc - 1].getCantidad() << endl;
                    cout << "ISBN: " << Libros[opc - 1].getISBN() << endl;
                } else {
                    cout << "Opción inválida" << endl;
                }
                break;

            default:
                cout << "Opción inválida" << endl;
                break;
            }
            break;

        default:
            cout << "Opción inválida" << endl;
            break;
        }
        cout << "\n\nPresiona 'b' para regresar" << endl;
        cin >> bck;
        system("cls");
    } while (bck == 'b');
    return 0;
}
