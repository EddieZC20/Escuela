#include <iostream>
#include <string>
using namespace std;



class Biblioteca{

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

Biblioteca::Biblioteca(){
Direccion="nada";
Encargado="nada";
Numbiblioteca=0;
Namebiblioteca="nada";
}

Biblioteca::Biblioteca(string a, string b, int c, string d)
{
    Direccion=a;
    Encargado=b;
    Numbiblioteca=c;
    Namebiblioteca=d;

}

void Biblioteca::setMostrarInfo(){
    InfoBiblioteca = Biblioteca("Eje 1 norte Mosqueta s/n esq. Aldama, Col. Buenavista, Del. Cuauhtémoc, México D.F., C.P. 06350",
                "Daniel Goldin Halfon", 1001, "Biblioteca José Vasconcelos");
}

void Biblioteca::getMostrarInfo(){
    cout << "La direccion es: " << InfoBiblioteca.Direccion << endl;
    cout<< "El gerente es: "<< InfoBiblioteca.Encargado<<endl;
    cout<< "El numero de biblioteca es: "<< InfoBiblioteca.Numbiblioteca<<endl;
    cout<< "El nombre de la biblioteca es: "<< InfoBiblioteca.Namebiblioteca<<endl;

}

class Publicacion{
protected:
    string Autor;
    unsigned long Fecha;
public:
    Publicacion();
    Publicacion(string a, unsigned long b);
    void setAutor(string a);
    string getAutor();
    void setFecha(unsigned long b);
    unsigned long getFecha();
};

Publicacion::Publicacion(){
    Autor="nada";
    Fecha=0;
}

Publicacion::Publicacion(string a, unsigned long b) {
    Autor = a;
    Fecha = b;
}

void Publicacion::setAutor(string a) {
    Autor = a;
}

string Publicacion::getAutor() {
    return Autor;
}

void Publicacion::setFecha(unsigned long b) {
    Fecha = b;
}

unsigned long Publicacion::getFecha() {
    return Fecha;
}

class Revista : public Publicacion {
    private:
        string Circulacion;
        int Numerosporano;
    public:
        Revista();
        Revista(string Titulo, unsigned long Fecha, string c, int d);
        void setCirculacion(string a);
        string getCirculacion();
        void setNumerosporano(int b);
        int getNumerosporano();

        void MostrarInfoRevista();
};

Revista::Revista(string Titulo, unsigned long Fecha, string c, int d):Publicacion(Titulo, Fecha){
    Titulo=Titulo;
    Fecha=Fecha;
    Circulacion = c;
    Numerosporano = d;
}
void Revista::setCirculacion(string a) {
    Circulacion = a;
}

string Revista::getCirculacion() {
    return Circulacion;
}

void Revista::setNumerosporano(int b) {
    Numerosporano = b;
}

int Revista::getNumerosporano() {
    return Numerosporano;
}

void Revista::MostrarInfoRevista() {
        cout << "Circulacion: " << getCirculacion() << endl;
        cout << "Numeros por anio: " << getNumerosporano() << endl;
        cout << "Autor: " << getAutor() << endl;
        cout << "Fecha: " << getFecha() << endl;
        }


class Libro : public Publicacion {
    string Autor;
    int Cantidad;
    string ISBN;
public:
    Libro();
    Libro(string c, int d, string e);
    void setAutor(string c);
    void setCantidad(int d);
    void setISBN(string e);

    string getAutor();
    int getCantidad();
    string getISBN();

    void prestarLibro();
    void devolverLibro();
};

Libro::Libro(string a, unsigned long b, string c, int d, string e){
    Titulo=Titulo;
    Fecha=Fecha;
    Autor=c;
    Cantidad=d;
    ISBN=e;
}

void Libro::setAutor(string c){
    Autor=c;
}

void Libro::setCantidad(int d){
    Cantidad=d;
}

void Libro::setISBN(string e){
    ISBN=e;
}

string Libro::getAutor(){
    return Autor;
}

int Libro::getCantidad(){
    return Cantidad;
}

string Libro::getISBN(){
    return ISBN;
}

void Libro::prestarLibro() {
    if (Cantidad > 0) {
        Cantidad--;
        cout << "Libro prestado exitosamente" << endl;
    } else {
        cout << "No hay ejemplares disponibles para prestar" << endl;
    }
}

void Libro::devolverLibro() {
    Cantidad++;
    cout << "Libro devuelto exitosamente" << endl;
}

int main()
{
    char bck;
    do{
    Biblioteca Bibliotecas;
    Revista Revistas[] = {
        Revista("National Geographic Society", 2015, "12", 152),
        Revista("Revista J. Yo Publico", 2015, "10", 189)
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
            cout<<"\nQue libro?"<<endl;
                cout<<"1.-Mecatronica Control y automatizacion"<<endl;
                cout<<"2.-Tecnicas de memoria veloz"<<endl;
                cout<<"3.-Historia Universal XXI Capitulos Fundamentales"<<endl;
            cin >> opc;

            if (opc >= 1 && opc <= 3) {
                Libros[opc - 1].prestarLibro();
            } else {
                cout << "Opción inválida" << endl;
            }
            break;

        case 2:
            cout << "Seleccione el libro que desea devolver:" << endl;
                cout<<"1.-Mecatronica Control y automatizacion"<<endl;
                cout<<"2.-Tecnicas de memoria veloz"<<endl;
                cout<<"3.-Historia Universal XXI Capitulos Fundamentales"<<endl;
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
cout<<"\n\nPresiona 'b' para regresar"<<endl;
cin>>bck;
system ("cls");
    }while(bck=='b');
}


