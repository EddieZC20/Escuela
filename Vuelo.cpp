#include<iostream>
#include<string>
#include<time.h>
#include<windows.h>
#include<stdlib.h>

using namespace std;
string estados[3]={"Retraso","Cancelado","En tiempo"};
int nmr, j;
class Vuelos{
	int ID;
	string Aerolinea;
	string Ruta;
	int Horario;
	string Estatus;

public:
	Vuelos(int a, string b, string c, int d, string e);
	void setID(int a);
	void setAerolinea(string b);
	void setRuta(string c);
	void setHorario(int d);
	void setEstatus(string);

	int getID();
	string getAerolinea();
	string getRuta();
	int getHorario();
	string getEstatus();

	void GenerarEstatus();
};

Vuelos::Vuelos(int a, string b, string c, int d, string e){
	ID=a;
	Aerolinea=b;
	Ruta=c;
	Horario=d;
	Estatus=e;
}

void Vuelos::setID(int a){
	ID=a;
}
void Vuelos::setAerolinea(string b){
	Aerolinea=b;
}
void Vuelos::setRuta(string c){
	Ruta=c;
}
void Vuelos::setHorario(int d){
	Horario=d;
}
void Vuelos::setEstatus(string e){
	Estatus=e;
}

int Vuelos::getID(){
	return ID;
}
string Vuelos::getAerolinea(){
	return Aerolinea;
}
string Vuelos::getRuta(){
	return Ruta;
}
int Vuelos::getHorario(){
	return Horario;
}
string Vuelos::getEstatus(){
	return Estatus;
}

void posicion(int a, int b)
{
    COORD coord;
    coord.X=a;
    coord.Y=b;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void Vuelos::GenerarEstatus(){

    setEstatus(estados[nmr]);
    for(j=0;j<=2;j++){
        nmr=rand() %3;
        setEstatus(estados[nmr]);
            }


 	}

int main()
{
        int i;

//string ID; string Aerolinea; string Ruta; int Horario; string Estatus;
system("color 09");
Vuelos Vuelospro [5]={
Vuelos(27840, "Volaris     ", "Mexico-EUA      ", 1050, "Cancelado"),
Vuelos(74893, "Qatar       ", "Mexico-Colombia ", 2020, "En Espera"),
Vuelos(94730, "FlyEmirates ", "Mexico-Canada   ", 1220, "Retrasada"),
Vuelos(36729, "AeroMexico  ", "Mexico-Rusia    ", 1310, "En Espera"),
Vuelos(74204, "Viva Aerobus", "Mexico-Espana   ", 1630, "En Espera")};

srand(time(NULL));

posicion (30,2); cout<<"Los vuelos que saldran hoy son:"<<endl;


for(i=0;i<=4;i++){
Vuelospro[i].GenerarEstatus();
{
for(int s=0;s<=2;s++)
{
    posicion (20, 4+s);

    i=rand()%5;
    cout<<Vuelospro[i].getID()<<"\t";

    i=rand()%5;
    cout<<Vuelospro[i].getAerolinea()<<"\t";

    i=rand()%5;
    cout<<Vuelospro[i].getRuta()<<"\t";

    i=rand()%5;
    cout<<Vuelospro[i].getHorario()<<"\t";

    i=rand()%5;
    cout<<Vuelospro[i].getEstatus()<<"\t"<<endl;
}
}
return 0;
}}
