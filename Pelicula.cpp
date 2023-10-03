#include <iostream>
#include <windows.h>
#include <time.h>
#include <stdio.h>
#include <string>


using namespace std;
void posicion(int i, int j)
{
    COORD coord;
    coord.X=i;
    coord.Y=j;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
//Variablessss
    int h, hf, m,s,sf,mf;
    char bck;

class Pelicula
{
    string Titulo;
    int Duracion;
    string Genero;
    int Year;
    int Valorar;

public:
    Pelicula();
    Pelicula(string a,int b,string c,int d,int e);
    void setTitulo(string a);
    void setDuracion(int b);
    void setGenero(string c);
    void setYear(int d);
    void setValorar(int e);
    string getTitulo();
    int getDuracion();
    string getGenero();
    int getYear();
    int getValorar();

    void PararPeli();
    void AvanzarPeli();
    void RetrocederPeli();
    void PausarPeli();
    void Rate();
    void DetenerPeli();
    void Info();
};

Pelicula::Pelicula()
{
    Titulo="ninguno";
    Duracion=00;
    Genero="ninguno";
    Year=00;
    Valorar=00;
}

Pelicula::Pelicula(string a,int b,string c,int d,int e)
{
    Titulo=a;
    Duracion=b;
    Genero=c;
    Year=d;
    Valorar=e;
}

void Pelicula::setTitulo(string a)
{
    Titulo=a;
}

void Pelicula::setDuracion(int b)
{
    Duracion=b;
}

void Pelicula::setGenero(string c)
{
    Genero=c;
}

void Pelicula::setYear(int d)
{
    Year=d;
}

void Pelicula::setValorar(int e)
{
    Valorar=e;
}

string Pelicula::getTitulo()
{
    return Titulo;
}

int Pelicula::getDuracion()
{
    return Duracion;
}

string Pelicula::getGenero()
{
    return Genero;
}

int Pelicula::getYear()
{
    return Year;
}

int Pelicula::getValorar()
{
    return Valorar;
}

//////////////////////////////////////////////////////////////////

void Pelicula::AvanzarPeli()
{ //El primer if es para que cuando el minuto supere los 60, pues se reste y le sume a la hora
    //Checa como funciona la hora y los segundos
    system("cls");
    m+=3;
    if (m >= 60) {
            h += 1;
            m -= 60;
    }
    if(m<mf)
    {
        cout<<h<<":"<<m<<":"<<s<<endl;
    }

    else if(h>hf||m>mf)
    {
        cout<<"Pelicula finalizada";
    }
}

void Pelicula::RetrocederPeli()
{
        system("cls");
    if(m>3)
    {
        m-=3;
        cout<<h<<":"<<m<<":"<<s<<endl;
    }

    else if(m<3)
    {
        cout<<"No se puede regresar mas";
    }

}

void Pelicula::PausarPeli()
{
    cout<<h<<":"<<m<<":"<<s<<endl;
}

void Pelicula::Rate()
{
        int calif;
        int rate, aux;
    cout<<"Calificar Pelicula\n1:Me gusto\n2:No me gusto";
    cin>>calif;
    if(calif==1)
    {
        Valorar=2;
    }
    else
    {
        Valorar=3;
    }
}



void Pelicula::DetenerPeli()
{

}

void Pelicula::Info()
{
    if (Valorar>1)
    {
        if (Valorar==2)
        {
            cout<<"Te gusto la Pelicula\n";
        }
        else
        {
            cout<<"No te gusto: Dislike\n"<<endl;
        }
    }

    else
    {
        cout<<"Aun no la has calificado\n ";
    }

}

///////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    system("color 0b");
    Pelicula objPokemon;
    objPokemon.setTitulo("Pokemon: Yo te elijo!");
    objPokemon.setDuracion(135);
    objPokemon.setGenero("Anime");
    objPokemon.setYear(1999);
    objPokemon.setValorar(1);
    srand(time(NULL));
    h=rand()%2;
    m=rand()%60;
    s=rand()%60;
    hf=objPokemon.getDuracion()/60;
    mf=objPokemon.getDuracion()%60;
    sf=mf/60;

do{

            cout<<h<<":"<<m<<":"<<s<<" / "<<hf<<":"<<mf<<":"<<sf;
            printf("     Pelicula. Pokemon: Yo te elijo!");


    int opc;
    posicion (10,1); cout<<"       \:.             .:/";
    posicion (10,2); cout<<"        \``._________.''/ ";
    posicion (10,3); cout<<"         \             / ";
    posicion (10,4); cout<<" .--.--, / .;:.   .;:. \ ";
    posicion (10,5); cout<<"/__:  /  | '::' . '::' |";
    posicion (10,6); cout<<"   / /   |`.   .w.   .'|";
    posicion (10,7); cout<<"  / /    |.'         '.|";
    posicion (10,8); cout<<" /___-_-,|.\  \   /  /.|";
    posicion (10,9); cout<<"      // |''\.;   ;,/ '|";
    posicion (10,10); cout<<"      `==|:=         =:|";
    posicion (10,11); cout<<"         `.          .'";
    posicion (10,12); cout<<"           :-._____.-:"<<endl;

    cout<<endl<<"Opciones:";

    posicion(12,15);cout<<"1.- Avanzar Pelicula";
    posicion(12,16);cout<<"2.- Retroceder Pelicula";
    posicion(12,17);cout<<"3.- Pausar Pelicula";
    posicion(12,18);cout<<"4.- Detener Pelicula";
    posicion(12,19);cout<<"5.- Reanudar Pelicula";
    posicion(12,20);cout<<"6.- Ver estatus e info";
    posicion(12,21);cout<<"7.- Calificar la pelicula";
    posicion(12,22);cout<<"8.- Quitar pelicula y salir\n";
    cin>>opc;

    switch(opc)
{
case 1: objPokemon.AvanzarPeli(); break;
case 2: objPokemon.RetrocederPeli(); break;
case 3: objPokemon.PausarPeli(); break;
case 4: objPokemon.DetenerPeli(); break;
case 5: ;
case 6:
    objPokemon.Info();

        cout<<endl<<objPokemon.getTitulo()<<endl<<"Con una duracion de:"<<hf<<":"<<mf<<":"<<sf<<endl;
        cout<<objPokemon.getGenero()<<endl<<"Salio en:"<<objPokemon.getYear(); break;
case 7:
    objPokemon.Rate(); break;

case 8: return 0; break;

default:
        cout<<"Operacion invalida\n";
}


cout<<endl<<"Presiona 'b' para regresar"<<endl;
cin>>bck;
system("cls");
    }while(bck=='b');
}
