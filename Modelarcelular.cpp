#include <iostream>
#include <string>

using namespace std;
class Celular
{
string Pantalla;
float Precio;
string So;
string Marca;
float Saldo;
public:
  Celular();//Constructora
  void setPantalla(string a); //setters
  void setPrecio(float b);
  void setSo(string c);
  void setMarca(string d);
  void setSaldo(float e);
  string getPantalla();
  float getPrecio();
  string getSo();
  string getMarca();
  float getSaldo();
  void Enviarmsj();
};

Celular::Celular()
{
    Pantalla="ninguno";
    Precio=0.0;
    So="ninguno";
    Marca="ninguno";
    Saldo=0.0;
}

void Celular::setPantalla(string a)
{
    Pantalla=a;
}

void Celular::setPrecio(float b)
{
    Precio=b;
}

void Celular::setSo(string c)
{
    So=c;
}

void Celular::setMarca(string d)
{
    Marca=d;
}

void Celular::setSaldo(float e)
{
    Saldo=e;
}

string Celular::getPantalla()
{
    return Pantalla;
}

float Celular::getPrecio()
{
    return Precio;
}

string Celular::getSo()
{
    return So;
}

string Celular::getMarca()
{
    return Marca;
}

float Celular::getSaldo()
{
    return Saldo;
}

void Celular::Enviarmsj()
{
    if (Saldo>1)
    {
        cout<<"Mesanje enviado"<<endl;
        Saldo=Saldo-1;
    }
    else
    {
        cout<<"Saldo Insuficiente"<<endl;
    }
}

int main()
{
    cout<<"Telefono Pixel"<<endl;
    Celular objPixel;
    cout<<"Caracteristicas"<<endl;
    objPixel.setPantalla("Oled");
    objPixel.setPrecio(8799.50);
    objPixel.setSo("ANDROID");
    objPixel.setMarca("Google");
    objPixel.setSaldo(200.0);
    int r;




    cout<<"Selecciona una opcion"<<endl;
    cout<<"1: Imprimir informacion"<<endl;
    cout<<"2: Enviar mensaje"<<endl;
    cout<<"3: Consultar saldo"<<endl;
    cin>>r;

    switch(r){
    case 1:
        cout<<objPixel.getPantalla()<<endl;
        cout<<objPixel.getPrecio()<<endl;
        cout<<objPixel.getSo()<<endl;
        cout<<objPixel.getMarca()<<endl;
        cout<<objPixel.getSaldo()<<endl; break;

    case 2:
        objPixel.Enviarmsj(); break;

    case 3:
        cout<<"Consultando el saldo:"<<objPixel.getSaldo(); break;

    default:
        cout<<"Opcion no valida"; break;
    }

}
