#include <string>
#include <iostream>

using namespace std;

    int cant;
    float dinero1, dinero2, aux1, aux2;


class Dulceria
{
    string Direccion;
    string Nombrenegocio;

public:
    Dulceria();
	Dulceria(string a, string b);
	void setDireccion(string a);
	void setNombrenegocio(string b);

	string getDireccion();
	string getNombrenegocio();

	void Ganancias();
};

Dulceria::Dulceria()
{
    Direccion="Ninguno";
    Nombrenegocio="Ninguno";
}

Dulceria::Dulceria(string a, string b)
{
    Direccion=a;
    Nombrenegocio=b;
}

void Dulceria::setDireccion(string a){
	Direccion=a;
}

void Dulceria::setNombrenegocio(string b){
    Nombrenegocio=b;
}

string Dulceria::getDireccion(){
	return Direccion;
}

string Dulceria::getNombrenegocio(){
    return Nombrenegocio;
}
//////////////////////////////////////////////////////////////////////////////////
class Empleado
{
    int Codigo;
    int Edad;
    string NombreEm;
    string Turno;
public:
    Empleado();
    Empleado(int c, int d, string e, string f);
    void setCodigo(int c);
    void setEdad(int d);
    void setNombreEm(string e);
    void setTurno(string f);

    int getCodigo();
    int getEdad();
    string getNombreEm();
    string getTurno();

};

Empleado::Empleado()
{
    Codigo=00;
    Edad=00;
    NombreEm="Ninguno";
    Turno="Ninguno";
}

Empleado::Empleado (int c, int d, string e, string f)
{
    Codigo=c;
    Edad=d;
    NombreEm=e;
    Turno=f;
}

void Empleado::setCodigo(int c){
	Codigo=c;
}

void Empleado::setEdad(int d){
    Edad=d;
}

void Empleado::setNombreEm(string e){
    NombreEm=e;
}

void Empleado::setTurno(string f){
    Turno=f;
}

int Empleado::getCodigo(){
	return Codigo;
}

int Empleado::getEdad(){
    return Edad;
}

string Empleado::getNombreEm(){
    return NombreEm;
}

string Empleado::getTurno(){
    return Turno;
}
////////////////////////////////////////////////////////////////////////
class Dulce
{
    int CantidadDis;
    int ID;
    string NombreProduct;
    float Precio;
public:
    //Dulce();
    Dulce(int g, int h, string i, float j);
    void setCantidadDis(int g);
    void setID(int h);
    void setNombreProduct(string i);
    void setPrecio(float j);

    int getCantidadDis();
    int getID();
    string getNombreProduct();
    float getPrecio();

    void VenderR();
    void VenderL();
};

/*Dulce::Dulce()
{
    CantidadDis=00;
    ID=00;
    NombreProduct="Ninguno";
    Precio=0.0;
}*/

Dulce::Dulce(int g, int h, string i, float j)
{
    CantidadDis=g;
    ID=h;
    NombreProduct=i;
    Precio=j;
}

void Dulce::setCantidadDis(int g){
	CantidadDis=g;
}

void Dulce::setID(int h){
    ID=h;
}

void Dulce::setNombreProduct(string i){
    NombreProduct=i;
}

void Dulce::setPrecio(float j){
    Precio=j;
}

int Dulce::getCantidadDis(){
    return CantidadDis;
}

int Dulce::getID(){
    return ID;
}

string Dulce::getNombreProduct(){
    return NombreProduct;
}

float Dulce::getPrecio(){
    return Precio;
}
////////////////////////////////////////////////////VOIDSSSS

void Dulceria::Ganancias()
{
    cout<<"Lo que se ha ganado con Rosa\n$"<<dinero1<<"\n\n";
    cout<<"Lo que se ha ganado con Lorenzo\n$"<<dinero2<<"\n\n";

}

void Dulce::VenderR()
{

    cout<<"aun hay:"<<CantidadDis<<endl;
    cout<<"cuanto vas a vender?\n$"<<Precio<<endl;
    cin>>cant;

    if (cant<=CantidadDis)
    {

        CantidadDis=CantidadDis-cant;
        aux1=cant*Precio;
        dinero1=aux1+dinero1;

        cout<<"Se ha ingresado $"<<aux1<<endl;
        cout<<"Gracias por su compra :D\n";

    }

    else if(cant>CantidadDis)
    {
        cout<<"No hay producto:c\n";
    }
}

void Dulce::VenderL()
{

    cout<<"aun hay:"<<CantidadDis<<endl;
    cout<<"cuanto vas a vender?\n$"<<Precio<<endl;
    cin>>cant;

    if (cant<=CantidadDis)
    {
        CantidadDis=CantidadDis-cant;

        aux2=cant*Precio;
        dinero2=aux2+dinero2;
        cout<<"Se ha ingresado $"<<aux2<<endl;
        cout<<"Gracias por su compra :D\n";
    }

    else if(cant>CantidadDis)
    {
        cout<<"No hay producto:c\n";
    }
}

int main()
{
    //Dulceria
    Dulceria Candy={Dulceria("Calle Venustiano Carranza", "Dulceria Candy")};

    //Empleados
    Empleado Empleados[]=
    {Empleado(100, 20, "Rosa Roja", "Matutino"), Empleado(200, 22, "Lorenzo Choya", "Vespertino")};

    //Dulcesss id dis name precio
    Dulce Dulcesitos[]={
    Dulce    (3,501, "Mazapan          ", 30.6),
    Dulce    (4,502, "Escuincles       ", 40.0),
    Dulce    (10,503,"Paleta tutsi     ", 38.5),
    Dulce    (9,504, "Galleta Animalito", 60.0),
    Dulce    (8,505, "Bubaloo          ", 50.2)};

    int opc, i, q, ola;
    char bck;
do{
    cout<<"*******************************************************"<<endl;
    cout<<"*****************"<<Candy.getNombrenegocio()<<"********************"<<endl;
    cout<<"*******************************************************"<<endl<<endl;

    cout<<"¿Quien eres?"<<endl;
    cout<<"1:Administrador\n2:Empleado\n3:Cerrar\n";
        cin>>opc;

    system("cls");
switch(opc)
{
    case 1:
        do{
        cout<<"1:Ver informacion del empleado\n2:Ver informacion del producto\n3:Consultar inventario\n";
        cout<<"4:Consultar ganancias\n";
        cin>>opc;
        switch(opc)
        {
            case 1:
                cout<<"Selecciona el empleado\n1:Lorenzo\n2:Roja\n"<<endl;
                cin>>opc;
                if (opc==1)
                {
                    cout<<"Nombre:"<<Empleados[1].getNombreEm()<<"\nID:"<<Empleados[1].getCodigo()<<endl;
                    cout<<"Edad:"<<Empleados[1].getEdad()<<"\nTurno:"<<Empleados[1].getTurno();
                }

                else if (opc==2)
                {
                    cout<<"Nombre:"<<Empleados[0].getNombreEm()<<"\nID:"<<Empleados[0].getCodigo()<<endl;
                    cout<<"Edad:"<<Empleados[0].getEdad()<<"\nTurno:"<<Empleados[0].getTurno();
                } break;

            case 2:
                cout<<"Selecciona el producto\n1:Mazapan\n2:Escuincles\n3:Paleta tutsi\n4:Galleta animalito\n5:Bubaloo\n";
                cin>>opc;
                if (opc==1)
                {
                    cout<<"Se muestra el producto:\nID  Nombre            \tPrecio\tCantidad"<<endl;
                    cout<<Dulcesitos[0].getID()<<" "<<Dulcesitos[0].getNombreProduct()<<"\t"<<Dulcesitos[0].getPrecio()<<"\t"<<Dulcesitos[0].getCantidadDis()<<endl<<endl;
                }
                else if (opc==2)
                {
                    cout<<"Se muestra el producto:\nID  Nombre            \tPrecio\tCantidad"<<endl;
                    cout<<Dulcesitos[1].getID()<<" "<<Dulcesitos[1].getNombreProduct()<<"\t"<<Dulcesitos[1].getPrecio()<<"\t"<<Dulcesitos[1].getCantidadDis()<<endl<<endl;
                }
                else if (opc==3)
                {
                    cout<<"Se muestra el producto:\nID  Nombre            \tPrecio\tCantidad"<<endl;
                    cout<<Dulcesitos[2].getID()<<" "<<Dulcesitos[2].getNombreProduct()<<"\t"<<Dulcesitos[2].getPrecio()<<"\t"<<Dulcesitos[2].getCantidadDis()<<endl<<endl;
                }
                else if (opc==4)
                {
                    cout<<"Se muestra el producto:\nID  Nombre            \tPrecio\tCantidad"<<endl;
                    cout<<Dulcesitos[3].getID()<<" "<<Dulcesitos[3].getNombreProduct()<<"\t"<<Dulcesitos[3].getPrecio()<<"\t"<<Dulcesitos[3].getCantidadDis()<<endl<<endl;
                }
                else if (opc==5)
                {
                    cout<<"Se muestra el producto:\nID  Nombre            \tPrecio\tCantidad"<<endl;
                    cout<<Dulcesitos[4].getID()<<" "<<Dulcesitos[4].getNombreProduct()<<"\t"<<Dulcesitos[4].getPrecio()<<"\t"<<Dulcesitos[4].getCantidadDis()<<endl<<endl;
                }
                break;

            case 3:
                cout<<"Se muestra el inventario:\nID  Nombre            \tPrecio\tCantidad"<<endl;

                cout<<Dulcesitos[0].getID()<<" "<<Dulcesitos[0].getNombreProduct()<<"\t"<<Dulcesitos[0].getPrecio()<<"\t"<<Dulcesitos[0].getCantidadDis()<<endl<<endl;

                cout<<Dulcesitos[1].getID()<<" "<<Dulcesitos[1].getNombreProduct()<<"\t"<<Dulcesitos[1].getPrecio()<<"\t"<<Dulcesitos[1].getCantidadDis()<<endl<<endl;

                cout<<Dulcesitos[2].getID()<<" "<<Dulcesitos[2].getNombreProduct()<<"\t"<<Dulcesitos[2].getPrecio()<<"\t"<<Dulcesitos[2].getCantidadDis()<<endl<<endl;

                cout<<Dulcesitos[3].getID()<<" "<<Dulcesitos[3].getNombreProduct()<<"\t"<<Dulcesitos[3].getPrecio()<<"\t"<<Dulcesitos[3].getCantidadDis()<<endl<<endl;

                cout<<Dulcesitos[4].getID()<<" "<<Dulcesitos[4].getNombreProduct()<<"\t"<<Dulcesitos[4].getPrecio()<<"\t"<<Dulcesitos[4].getCantidadDis()<<endl<<endl;
                break;

            case 4:
                cout<<"Ganancias\n";
                Candy.Ganancias();
                break;

            default:
                cout<<"Opcion no valida";


        }
    cout<<endl<<"Presiona 1 si quieres continuar como administrador o 2 para salir\n";
    cin>>ola;
    system("cls");
    }while(ola==1);
    break;

    case 2: //Empleadooo
        do{
        cout<<"Quien eres?\n1:Rosa Roja\n2:Lorenzo Choya\n";
        cin>>opc;
        if (opc==1) //Rosa
        { system("cls");
            cout<<"Selecciona una opcion.\n1:Ver informacion personal\n2:Ver informacion del producto\n3:Vender\n";
            cin>>opc;
            switch(opc)
            {
                case 1:
                    cout<<"Nombre:"<<Empleados[0].getNombreEm()<<"\nID:"<<Empleados[0].getCodigo()<<endl;
                    cout<<"Edad:"<<Empleados[0].getEdad()<<"\nTurno:"<<Empleados[0].getTurno();

                    break;
                case 2:
                cout<<"Se muestra el inventario:\nID  Nombre            \tPrecio\tCantidad"<<endl;

                cout<<Dulcesitos[0].getID()<<" "<<Dulcesitos[0].getNombreProduct()<<"\t"<<Dulcesitos[0].getPrecio()<<"\t"<<Dulcesitos[0].getCantidadDis()<<endl<<endl;

                cout<<Dulcesitos[1].getID()<<" "<<Dulcesitos[1].getNombreProduct()<<"\t"<<Dulcesitos[1].getPrecio()<<"\t"<<Dulcesitos[1].getCantidadDis()<<endl<<endl;

                cout<<Dulcesitos[2].getID()<<" "<<Dulcesitos[2].getNombreProduct()<<"\t"<<Dulcesitos[2].getPrecio()<<"\t"<<Dulcesitos[2].getCantidadDis()<<endl<<endl;

                cout<<Dulcesitos[3].getID()<<" "<<Dulcesitos[3].getNombreProduct()<<"\t"<<Dulcesitos[3].getPrecio()<<"\t"<<Dulcesitos[3].getCantidadDis()<<endl<<endl;

                cout<<Dulcesitos[4].getID()<<" "<<Dulcesitos[4].getNombreProduct()<<"\t"<<Dulcesitos[4].getPrecio()<<"\t"<<Dulcesitos[4].getCantidadDis()<<endl<<endl;
                break;

                case 3:
                    cout<<"Dulce a vender? \n0:Mazapan \n1:Escuincles \n2:Paleta tutsi \n3:Galleta de animalito \n4:Bubaloo\n\n";
                    cin>>i;
                    i=i;
                    Dulcesitos[i].VenderR();
                    break;
            }

        }


        else if(opc==2) //Lorenzo
        { system("cls");
            cout<<"Selecciona una opcion.\n1:Ver informacion personal\n2:Ver informacion del producto\n3:Vender\n";
            cin>>opc;
            switch(opc)
            {
                case 1:
                    cout<<"Nombre:"<<Empleados[1].getNombreEm()<<"\nID:"<<Empleados[1].getCodigo()<<endl;
                    cout<<"Edad:"<<Empleados[1].getEdad()<<"\nTurno:"<<Empleados[1].getTurno();

                    break;
                case 2:
                cout<<"Se muestra el inventario:\nID  Nombre            \tPrecio\tCantidad"<<endl;

                cout<<Dulcesitos[0].getID()<<" "<<Dulcesitos[0].getNombreProduct()<<"\t"<<Dulcesitos[0].getPrecio()<<"\t"<<Dulcesitos[0].getCantidadDis()<<endl<<endl;

                cout<<Dulcesitos[1].getID()<<" "<<Dulcesitos[1].getNombreProduct()<<"\t"<<Dulcesitos[1].getPrecio()<<"\t"<<Dulcesitos[1].getCantidadDis()<<endl<<endl;

                cout<<Dulcesitos[2].getID()<<" "<<Dulcesitos[2].getNombreProduct()<<"\t"<<Dulcesitos[2].getPrecio()<<"\t"<<Dulcesitos[2].getCantidadDis()<<endl<<endl;

                cout<<Dulcesitos[3].getID()<<" "<<Dulcesitos[3].getNombreProduct()<<"\t"<<Dulcesitos[3].getPrecio()<<"\t"<<Dulcesitos[3].getCantidadDis()<<endl<<endl;

                cout<<Dulcesitos[4].getID()<<" "<<Dulcesitos[4].getNombreProduct()<<"\t"<<Dulcesitos[4].getPrecio()<<"\t"<<Dulcesitos[4].getCantidadDis()<<endl<<endl;
                break;

                case 3:
                    cout<<"Dulce a vender? \n0:Mazapan \n1:Escuincles \n2:Paleta tutsi \n3:Galleta de animalito \n4:Bubaloo\n\n";
                    cin>>i;
                    i=i;
                    Dulcesitos[i].VenderL();
                    break;
            }
        }
    cout<<endl<<"Presiona 1 si quieres continuar como vendedor o 2 para salir\n";
    cin>>ola;
    system("cls");
    }while(ola==1);
         break;

    default: return 0;
}


cout<<"\n\nPresiona 'b' para regresar a elegir usuario"<<endl;
cin>>bck;
system ("cls");
    }while(bck=='b');
}
