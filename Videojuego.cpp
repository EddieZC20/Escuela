#include<string.h>
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
#include<time.h>

using namespace std;
int vidas, bloq, gameover=0;
int r1=200;
int arre[10];
int x, y, r = 0;

void posicion(int i, int j)
{
    COORD coord;
    coord.X=i;
    coord.Y=j;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void level1()
{
    if( vidas>0)
{
    char resp[20];
    char solucion[10][25] = {
        "LAMENTAR", "LO QUE PUEDES HACER HOY", "LO AYUDA", "QUE POR BIEN NO VENGA",
        "RIE MEJOR", "CORAZON QUE NO SIENTE", "ORO", "BUENA CARA", "POCO APRIETA",
        "SE LO LLEVA LA CORRIENTE"
    };
    string frase[] = {
        "Mas vale prevenir que ", "No dejes para manana ", "A quien madruga, Dios ",
        "No hay mal ", "El que rie al ultimo ", "Ojos que no ven ", "El tiempo es ",
        "Al mal tiempo ", "El que mucho abarca ", "Camaron que se duerme "
    };
    srand(time(NULL));

    for (x = 0; x < 10; x++) {
        int ale;
        int ctrl = 1;
        while (ctrl > 0) {
            ale = rand() % 10;
            ctrl = 0;
            for (y = 0; y < x; y++) {
                if (arre[y] == ale) {
                    ctrl++;
                    break;
                }
            }
        }
        arre[x] = ale;
    }

    if(vidas>0)
    {
    for(int x=110; x<=109+vidas; x++)
    {
        posicion(x,1); printf("%c\n", 3);
    }
    }
    cout<<"Nivel 1\n\nCompleta correctamente el siguiente dicho\n\n";
    cout<<frase[arre[r]]<<"...?\n\nIngresa tu respuesta:\n";

    int a, b, c;

a = rand() % 10;
b = rand() % 10;
c = rand() % 10;
while (a == b || a == c || b == c || a != arre[r] && b != arre[r] && c != arre[r])
{
    a = rand() % 10;
    b = rand() % 10;
    c = rand() % 10;
}
    cout<<"Te dejo las posibles respuestas:\n."<<solucion[a]<<"\n."<<solucion[b]<<"\n."<<solucion[c]<<endl;

    fflush(stdin);
    gets(resp);
    strupr(resp);

    if(strcmp(resp,solucion[arre[r]])==0 && vidas > 0)
    {
        if(strcmp(resp,solucion[arre[r]])==0)
    {
        cout<<"\nTu respuesta es correcta. Se ha sumado una vida\nEnter para continuar";
        system("pause>null");
        vidas++;
    }
    }

    else
    {
        while(strcmp(resp,solucion[arre[r]])!=0 && vidas > 0)
    {
        r++;
        system("cls");
        vidas--;
        cout<<"\nErrorrrr, te quedan "<<vidas<<" vidas\n\n";
        if(vidas > 0)
        {
            cout<<frase[arre[r]]<<"...?\n\nIngresa tu respuesta:\n";
            srand(time(NULL));
                a=rand()%10;
                b=rand()%10;
                c=rand()%10;
                while(a == b || a == c || b == c || a != arre[r] && b != arre[r] && c != arre[r])
                    {
                        a=rand()%10;
                        b=rand()%10;
                        c=rand()%10;
                    }
            cout<<"Te dejo las posibles respuestas:\n1."<<solucion[a]<<"\n2."<<solucion[b]<<"\n3."<<solucion[c]<<endl;
            fflush(stdin);
            gets(resp);
            strupr(resp);
        }
    }

    if(strcmp(resp,solucion[arre[r]])==0)
    {
        cout<<"\nTu respuesta es correcta. Pero no recibiste el bonus de la vida\nEnter para continuar";
        system("pause>null");
    }
    else
    {
        cout<<"\nSe te acabaron las vidas, la respuesta era: "<<solucion[arre[r]];
        system("pause>null");
    }
    }

}

}

void level2()
{
if(vidas>0)
{
    for(int x=110; x<=109+vidas; x++)
    {
        posicion(x,1); printf("%c\n", 3);
    }
    char resp[20];
    char solucion[10][25]={"LAMENTAR", "LO QUE PUEDES HACER HOY", "LO AYUDA", "QUE POR BIEN NO VENGA", "RIE MEJOR", "CORAZON QUE NO SIENTE",
                       "ORO", "BUENA CARA", "POCO APRIETA", "SE LO LLEVA LA CORRIENTE"};
    string frase[]={"Más vale prevenir que ", "No dejes para maniana ", "A quien madruga, Dios ", "No hay mal ", "El que rie al ultimo ",
                    "Ojos que no ven ", "El tiempo es ", "Al mal tiempo ", "El que mucho abarca ", "Camaron que se duerme "};

    cout<<"Nivel 2\n\nCompleta correctamente lo siguiente, este nivel esta dividido en dos preguntas\n\n";
    r++;
    cout<<frase[arre[r]]<<"...?\n\nIngresa tu respuesta, ahora no contaras con ayudas:\n";
    fflush(stdin);
    gets(resp);
    strupr(resp);

    while(strcmp(resp,solucion[arre[r]])!=0 && vidas > 0)
    {
        r++;
        system("cls");
        vidas--;
        cout<<"\nErrorrrr, te quedan "<<vidas<<" vidas\n\n";

            cout<<frase[arre[r]]<<"...?\n\nIngresa tu respuesta\n";
            fflush(stdin);
            gets(resp);
            strupr(resp);
    }

    if(strcmp(resp,solucion[arre[r]])==0)
    {
        cout<<"\nTu respuesta es correcta\nEnter para continuar";
        system("pause>null");
        system("cls");
    }
    else
    {
        cout<<"\nSe te acabaron las vidas, la respuesta era: "<<solucion[arre[r]];
        system("pause>null");
        system("cls");
    }

    if(vidas>0)
{
    r++;

    cout<<endl<<"Segunda parte del nivel\n";
    cout<<endl<<frase[arre[r]]<<"...?\n\nIngresa tu respuesta:\n";
    fflush(stdin);
    gets(resp);
    strupr(resp);

    while(strcmp(resp,solucion[arre[r]])!=0 && vidas > 0)
    {
        r++;
        system("cls");
        vidas--;
        cout<<"\nErrorrrr, te quedan "<<vidas<<" vidas\n\n";
        if(vidas > 0)
        {
            cout<<frase[arre[r]]<<"...?\n\nIngresa tu respuesta\n";
            fflush(stdin);
            gets(resp);
            strupr(resp);
        }
    }

    if(strcmp(resp,solucion[arre[r]])==0)
    {
        cout<<"\nTus 2 respuestas son correctas\nEnter para continuar";
        system("pause>null");
    }
    else
    {
        cout<<"\nSe te acabaron las vidas, la respuesta era: "<<solucion[arre[r]]<<"\nEnter para continuar";
        system("pause>null");
    }


}

else
{
    cout<<"\nNo tienes vidas\n";
}
}
else
{
        cout<<"\nNo tienes vidas\n";
}
}

void level3()
{
if(vidas>0)
{
    for(int x=110; x<=109+vidas; x++)
    {
        posicion(x,1); printf("%c\n", 3);
    }
    int p=1;

    cout<<"Nivel 3\n\nCompleta a continuacion la capital de las siguientes Paises\n";

    char resp[20];
    char solucion[15][25]={"TOKIO", "PARIS", "ROMA", "CIUDAD DE MEXICO", "MOSCU", "BUENOS AIRES",
                       "LONDRES", "BOGOTA", "PEKIN", "BRASILIA", "WASHINGTON", "LIMA", "AMSTERDAM", "OTTAWA", "BERLIN"};
    string pais[]={"Japon", "Francia", "Italia", "Mexico", "Russia", "Argentina",
                    "Inglaterra", "Colombia", "China", "Brasil", "E.U.A.", "Peru", "Paises bajos", "Canada", "Alemania"};

    int arre[10];
    int x, y;
    srand(time(NULL));

    for (x = 0; x < 15; x++) {
        int ale;
        int ctrl = 1;
        while (ctrl > 0) {
            ale = rand() % 15;
            ctrl = 0;
            for (y = 0; y < x; y++) {
                if (arre[y] == ale) {
                    ctrl++;
                    break;
                }
            }
        }
        arre[x] = ale;
    }

    cout<<"1. Cual es la capital de "<<pais[arre[p]]<<"...?\n";
    fflush(stdin);
    gets(resp);
    strupr(resp);

    while(strcmp(resp,solucion[arre[p]])!=0 && vidas > 0)
    {
        p++;
        system("cls");
        vidas--;
        cout<<"\nErrorrrr, te quedan "<<vidas<<" vidas\n\n";
        if(vidas > 0)
        {
            cout<<"1. Cual es la capital de "<<pais[arre[p]]<<"...?\n";
            fflush(stdin);
            gets(resp);
            strupr(resp);
        }
    }

    if(strcmp(resp,solucion[arre[p]])==0)
    {
        cout<<"\nTu respuesta es correcta\nEnter para continuar";
        system("pause>null");
    }
    else
    {
        cout<<"\nSe te acabaron las vidas, la respuesta era: "<<solucion[arre[p]]<<"\nEnter para continuar";
        system("pause>null");
    }
system("cls");

    if(vidas>0)
{
    p++;
    cout<<"2. Cual es la capital de "<<pais[arre[p]]<<"...?\n";
    fflush(stdin);
    gets(resp);
    strupr(resp);

    while(strcmp(resp,solucion[arre[p]])!=0 && vidas > 0)
    {
        p++;
        system("cls");
        vidas--;
        cout<<"\nErrorrrr, te quedan "<<vidas<<" vidas\n\n";
        if(vidas > 0)
        {
            cout<<"2. Cual es la capital de "<<pais[arre[p]]<<"...?\n";
            fflush(stdin);
            gets(resp);
            strupr(resp);
        }
    }

    if(strcmp(resp,solucion[arre[p]])==0)
    {
        cout<<"\nTu respuesta es correcta";
        system("pause>null");
    }
    else
    {
        cout<<"\nSe te acabaron las vidas, la respuesta era: "<<solucion[arre[p]]<<"\nEnter para continuar";
        system("pause>null");
    }
}

system("cls");

    if(vidas>0)
{
    p++;
    cout<<"3. Cual es la capital de "<<pais[arre[p]]<<"...?\n";
    fflush(stdin);
    gets(resp);
    strupr(resp);

    while(strcmp(resp,solucion[arre[p]])!=0 && vidas > 0)
    {
        p++;
        system("cls");
        vidas--;
        cout<<"\nErrorrrr, te quedan "<<vidas<<" vidas\n\n";
        if(vidas > 0)
        {
            cout<<"3. Cual es la capital de "<<pais[arre[p]]<<"...?\n";
            fflush(stdin);
            gets(resp);
            strupr(resp);
        }
    }

    if(strcmp(resp,solucion[arre[p]])==0)
    {
        cout<<"\nTus 3 respuestas son correctas";
        system("pause>null");
    }
    else
    {
        cout<<"\nSe te acabaron las vidas, la respuesta era: "<<solucion[arre[p]]<<"\nEnter para continuar";
        system("pause>null");

    }
}
}
else
{
        cout<<"\nNo tienes vidas\n";
}
}

void level4()
{
    if(vidas>0)
    {
    for(int x=110; x<=109+vidas; x++)
    {
        posicion(x,1); printf("%c\n", 3);
    }
    void life();
 const char* soundFiles[10] = {
        "C:\Summer.wav",
        "C:\Runaway.wav",
        "C:\ACDC.wav",
        "C:\ExtssyModel.wav",
        "C:\sweet.wav",
        "C:\Kiss.wav",
        "C:\HotelCalifornia.wav",
        "C:\swimmingpools.wav",
        "C:\WithoutMe.wav",
        "C:\JustDance.wav"
    };

    srand(static_cast<unsigned int>(time(NULL)));
    int off=100, a=1;
    char ques;
    char resp[25];
    char solucion[10][25]={"CALVIN HARRIS", "KANYE WEST", "ACDC", "JUNIOR H", "GUNS AND ROSES", "KISS",
                       "EAGLES", "KENDRICK LAMAR", "EMINEM", "LADY GAGA"};

    int arre[10];
    int x, y;
    srand(time(NULL));
    for (x = 0; x < 10; x++) {
        int ale;
        int ctrl = 1;
        while (ctrl > 0) {
            ale = rand() % 10;
            ctrl = 0;
            for (y = 0; y < x; y++) {
                if (arre[y] == ale) {
                    ctrl++;
                    break;
                }
            }
        }
        arre[x] = ale;
    }

    cout<<"Nivel 4\n\nSe reproducira una cancion y tienes que decir el grupo o artista creador de la cancion"<<endl;
    do{
    PlaySoundA(soundFiles[arre[a]], NULL, SND_FILENAME | SND_ASYNC);
    posicion (12, 6); cout<<"Quieres volver a escuchar?(s/n)\n";
    posicion (12, 7); cout<<"(Primero selecciona si volverla a escuchar o no e ingresa la respuesta)";
    cin>>ques;
    }while(ques=='s' || ques=='S');
    PlaySoundA(soundFiles[off], NULL, SND_FILENAME | SND_ASYNC);

cout<<"\nMenciona el grupo o artista\n";
    fflush(stdin);
    gets(resp);
    strupr(resp);

    while(strcmp(resp,solucion[arre[a]])!=0 && vidas > 0)
    {
        a++;
        system("cls");
        vidas--;
        cout<<"\nErrorrrr, te quedan "<<vidas<<" vidas\n\n";
        if(vidas > 0)
        {
            do{
                    PlaySoundA(soundFiles[arre[a]], NULL, SND_FILENAME | SND_ASYNC);
                    posicion (12, 6); cout<<"Quieres volver a escuchar?(s/n)\n";
                    cin>>ques;
                    }while(ques=='s' || ques=='S');
                    PlaySoundA(soundFiles[off], NULL, SND_FILENAME | SND_ASYNC);

                    cout<<"\nMenciona el grupo o artista\n";

            fflush(stdin);
            gets(resp);
            strupr(resp);
        }
    }

    if(strcmp(resp,solucion[arre[a]])==0)
    {
        cout<<"\nTu respuesta es correcta\nEnter para continuar";
        system("pause>null");
    }
    else
    {
        cout<<"\nSe te acabaron las vidas, el artista/grupo era: "<<solucion[arre[a]]<<"\nEnter para continuar";
        system("pause>null");
    }

    }
    else
    {
        cout<<"\nNo tienes vidas\n";
    }
}

level5()
{
    if(vidas>0)
    {
    for(int x=110; x<=109+vidas; x++)
    {
        posicion(x,1); printf("%c\n", 3);
    }
    char resp[20];
    char solucion[10][25]={"MULAN", "SHERLOCK HOLMES", "TERMINATOR", "STAR WARS", "EL SEÑOR DE LOS ANILLOS", "SUPER MARIO BROS", "EL PADRINO",
                       "HARRY POTTER", "TOY STORY", "EL REY LEON"};
    string frase[]={
    "La flor que florece en la adversidad es la mas rara y hermosa de todas",
    "Elemental mi querido Watson",
    "Hasta la vista Baby",
    "Que la fuerza te acompane",
    "El anillo... Mi tesoro!",
    "Peaches peaches peaches peaches peaches... Peaach yo te quierooo",
    "Te voy a hacer una oferta que no podrás rechazar",
    "Eres un mago, Harry",
    "Hasta el infinito... y mas alla!",
    "Hakuna matataaa, una forma de seeerr"};

    int arre[10];
    int x, y, c=1;
    srand(time(NULL));

    for (x = 0; x < 10; x++) {
        int ale;
        int ctrl = 1;
        while (ctrl > 0) {
            ale = rand() % 10;
            ctrl = 0;
            for (y = 0; y < x; y++) {
                if (arre[y] == ale) {
                    ctrl++;
                    break;
                }
            }
        }
        arre[x] = ale;
    }


    cout<<"Nivel 5\nMenciona en que pelicula se dice la siguiente frase\n<<";
    cout<<frase[arre[c]]<<">>\n\nIngresa tu respuesta:\n";

    fflush(stdin);
    gets(resp);
    strupr(resp);

    while(strcmp(resp,solucion[arre[c]])!=0 && vidas > 0)
    {
        c++;
        system("cls");
        vidas--;
        cout<<"\nErrorrrr, te quedan "<<vidas<<" vidas\n\n";
        if(vidas > 0)
        {
            cout<<"vuelvelo a intentar\n<<"<<frase[arre[c]]<<">>\n?\n";

            fflush(stdin);
            gets(resp);
            strupr(resp);
        }
    }

    if(strcmp(resp,solucion[arre[c]])==0)
    {
        cout<<"\nTu respuesta es correcta\nEnter para continuar";
        system("pause>null");

    }
    else
    {
        cout<<"\nSe te acabaron las vidas, la respuesta era: "<<solucion[arre[c]]<<"\nEnter para continuar";
        system("pause>null");
    }

    }

    else
    {
        cout<<"\nNo tienes vidas\n";
    }
}

level6()
{
    if (vidas>0)
    {

    char solucion3[5][30] = {
        "LLORES Y CORAZONES",
        "CONOCI Y AMOR",
        "QUERIDO Y DORMIDO",
        "CIELO Y TERCIOPELO",
        "MUJERES Y PERDER"

    };

    char resp[30];

    string frase[] = {
        "ay ay ay canta y no .... porque cantando se alegran cielito lindo los ...", //llores y corazones
        "Hasta que te ..., vi la vida con dolor. No te miento, fui feliz aunque con muy poco ...", //conoci y amor
        "Mexico lindo y ...., si muero lejos de ti, que digan que estoy ... y que me traigan aqui", //querido y dormido
        "Si nos dejan, buscamos un rincon cerca del .... Si nos dejan, haremos con las nubes ...", // cielo y terciopelo
        "Por ... como tu, vale la pena ... la cabeza"}; //mujeres y perder

        int arre[5];
    int x, y;
    srand(time(NULL));

    for (x = 0; x < 5; x++) {
        int ale;
        int ctrl = 1;
        while (ctrl > 0) {
            ale = rand() % 5;
            ctrl = 0;
            for (y = 0; y < x; y++) {
                if (arre[y] == ale) {
                    ctrl++;
                    break;
                }
            }
        }
        arre[x] = ale;
    }
    int cc=1;

    cout << "Nivel 6\n\nCompleta la cancion con las opciones siguientes\n\n";
    cout << frase[arre[cc]] << "?\n\nIngresa tu respuesta:\n";

    int a, b, c;

    a = rand() % 5;
    b = rand() % 5;
    c = rand() % 5;
    while (a == b || a == c || b == c || (a != arre[cc] && b != arre[cc] && c != arre[cc])) {
        a = rand() % 5;
        b = rand() % 5;
        c = rand() % 5;
    }

    cout<<"Escribe toda la opcion que sea correcta\nEstas son las posibles respuestas\n1."<<solucion3[a]<<"\n2."<<solucion3[b]<<"\n3."<<solucion3[c]<<endl;

    fflush(stdin);
    gets(resp);
    strupr(resp);

    while (strcmp(resp, solucion3[arre[cc]]) != 0 && vidas > 0) {
        cc++;
        vidas--;
        system("cls");
        cout << "\nErrorrrr, te quedan " << vidas << " vidas\n\n";
        if (vidas > 0) {

            cout << frase[arre[cc]] << "?\n\nIngresa tu respuesta:\n";
            cout<<"Escribe toda la opcion que sea correcta\n";
            srand(time(NULL));
                a=rand()%5;
                b=rand()%5;
                c=rand()%5;
                while(a == b || a == c || b == c || a != arre[cc] && b != arre[cc] && c != arre[cc])
                    {
                        a=rand()%5;
                        b=rand()%5;
                        c=rand()%5;
                    }
            cout<<"Te dejo las posibles respuestas:\n1."<<solucion3[a]<<"\n2."<<solucion3[b]<<"\n3."<<solucion3[c]<<endl;
            fflush(stdin);
            gets(resp);
            strupr(resp);
        }
    }


    if (strcmp(resp, solucion3[arre[cc]]) == 0) {
        cout << "\nTu respuesta es correcta";
        system("pause>null");
    } else {
        cout << "\nSe te acabaron las vidas, las respuestas eran: " << solucion3[arre[cc]];
        system("pause>null");
    }

    }

    else
    {
        cout<<"\nNo tienes vidas\n";

    }
}




int main()
{
    int op;
    char bck;
{
    for(int x=5; x<=105; x++)
    {
        posicion(x, 8); printf("%c", 176);
        posicion(55, 10); printf("%i%c", x-5, 37);
        Sleep (10);
    }
    posicion(49, 12); printf("Videojuego listo");
    posicion(55, 13); printf("Enter");
    system("pause>null");
}
    system("cls");
    posicion (43, 4); printf("___________________________");
    posicion (43, 5); printf("|  Cultura general quest  |");
    posicion (43, 6); printf("|_________________________|");

    cout<<"\n\n\n\nTe explicaremos como jugar para que puedas continuar.\nPresiona enter para continuar";
    system("pause>null");
    system("cls");

    cout<<"En este juego se pone a prueba el conocimiento general, para ir avanzando por los niveles deberas comenzar desde\n el nivel 1 o de lo contrario no podras ingresar a los otros niveles. Te deseo suerte y gracias por jugar\n";
    cout<<"Presiona enter para continuar"<<endl;
    system("pause>null");

    posicion (12, 12); printf("Al principio de cada nivel se te indicara cuantas vidas tienes de esta forma:");
    do{
    posicion (50, 13); printf( "%c\n\n\nPresiona Enter para continuar", 3);
    system("pause>null");
    system("cls");
        vidas=3;
    system("cls");
    system("color 72");

level1();
system("color 72");
system ("cls");

level2();
system("color 76");
system ("cls");

level3();
system("color 72");
system ("cls");

level4();
system("color 72");
system ("cls");

level5();
system("color 74");
system ("cls");

level6();
system("color 04");
system ("cls");

if(vidas>0)
{
    cout<<"\n\nVideojuego terminado :D\n\n Eres ahora todo un conocedor de cultura general";
}

else
{
    posicion(12, 10); printf("´´´´´´´´´´´´´´´´´´´ ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶´´´´´´´´´´´´´´´´´´´`");
    posicion(12, 11); printf("´´´´´´´´´´´´´´´´´¶¶¶¶¶¶´´´´´´´´´´´´´¶¶¶¶¶¶¶´´´´´´´´´´´´´´´´");
    posicion(12, 12); printf("´´´´´´´´´´´´´´¶¶¶¶´´´´´´´´´´´´´´´´´´´´´´´¶¶¶¶´´´´´´´´´´´´´´");
    posicion(12, 13); printf("´´´´´´´´´´´´´¶¶¶´´´´´´´´´´´´´´´´´´´´´´´´´´´´´¶¶´´´´´´´´´´´´");
    posicion(12, 14); printf("´´´´´´´´´´´´¶¶´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´¶¶´´´´´´´´´´´");
    posicion(12, 15); printf("´´´´´´´´´´´¶¶´´´´´´´´´´´´´´´´´´´´´`´´´´´´´´´´´¶¶´´´´´´´´´´`");
    posicion(12, 16); printf("´´´´´´´´´´¶¶´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´¶¶´´´´´´´´´´");
    posicion(12, 17); printf("´´´´´´´´´´¶¶´¶¶´´´´´´´´´´´´´´´´´´´´´´´´´´´´´¶¶´¶¶´´´´´´´´´´");
    posicion(12, 18); printf("´.´´´´´´´´¶¶´¶¶´´´´´´´´´´´´´´´´´´´´´´´´´´´´´¶¶´´¶´´´´´´´´´´");
    posicion(12, 19); printf("´´´´´´´´´´¶¶´¶¶´´´´´´´´´´´´´´´´´´´´´´´´´´´´´¶¶´´¶´´´´´´´´´´");
    posicion(12, 20); printf("´´´´´´´´´´¶¶´´¶¶´´´´´´´´´´´´´´´´´´´´´´´´´´´´¶¶´¶¶´´´´´´´´´´");
    posicion(12, 21); printf("´´´´´´´´´´¶¶´´¶¶´´´´´´´´´´´´´´´´´´´´´´´´´´´¶¶´´¶¶´´´´´´´´´´");
    posicion(12, 22); printf("´´´´´´´´´´´¶¶´¶¶´´´¶¶¶¶¶¶¶¶´´´´´¶¶¶¶¶¶¶¶´´´¶¶´¶¶´´´´´´´´´´´");
    posicion(12, 23); printf("´´´´´´´´´´´´¶¶¶¶´¶¶¶¶¶¶¶¶¶¶´´´´´¶¶¶¶¶¶¶¶¶¶´¶¶¶¶¶´´´´´´´´´´´");
    posicion(12, 24); printf("´´´´´´´´´´´´´¶¶¶´¶¶¶¶¶¶¶¶¶¶´´´´´¶¶¶¶¶¶¶¶¶¶´¶¶¶´´´´´´´´´´´´´");
    posicion(12, 25); printf("´´´´¶¶¶´´´´´´´¶¶´´¶¶¶¶¶¶¶¶´´´´´´´¶¶¶¶¶¶¶¶¶´´¶¶´´´´´´¶¶¶¶´´´");
    posicion(12, 26); printf("´´´¶¶¶¶¶´´´´´¶¶´´´¶¶¶¶¶¶¶´´´¶¶¶´´´¶¶¶¶¶¶¶´´´¶¶´´´´´¶¶¶¶¶¶´´");
    posicion(12, 27); printf("´´¶¶´´´¶¶´´´´¶¶´´´´´¶¶¶´´´´¶¶¶¶¶´´´´¶¶¶´´´´´¶¶´´´´¶¶´´´¶¶´´");
    posicion(12, 28); printf("´¶¶¶´´´´¶¶¶¶´´¶¶´´´´´´´´´´¶¶¶¶¶¶¶´´´´´´´´´´¶¶´´¶¶¶¶´´´´¶¶¶´");
    posicion(12, 29); printf("¶¶´´´´´´´´´¶¶¶¶¶¶¶¶´´´´´´´¶¶¶¶¶¶¶´´´´´´´¶¶¶¶¶¶¶¶¶´´´´´´´´¶¶");
    posicion(12, 30); printf("¶¶¶¶¶¶¶¶¶´´´´´¶¶¶¶¶¶¶¶´´´´¶¶¶¶¶¶¶´´´´¶¶¶¶¶¶¶¶´´´´´´¶¶¶¶¶¶¶¶");
    posicion(12, 31); printf("´´¶¶¶¶´¶¶¶¶¶´´´´´´¶¶¶¶¶´´´´´´´´´´´´´´¶¶¶´¶¶´´´´´¶¶¶¶¶¶´¶¶¶´");
    posicion(12, 32); printf("´´´´´´´´´´¶¶¶¶¶¶´´¶¶¶´´¶¶´´´´´´´´´´´¶¶´´¶¶¶´´¶¶¶¶¶¶´´´´´´´´");
    posicion(12, 33); printf("´´´´´´´´´´´´´´¶¶¶¶¶¶´¶¶´¶¶¶¶¶¶¶¶¶¶¶´¶¶´¶¶¶¶¶¶´´´´´´´´´´´´´´");
    posicion(12, 34); printf("´´´´´´´´´´´´´´´´´´¶¶´¶¶´¶´¶´¶´¶´¶´¶´¶´¶´¶¶´´´´´´´´´´´´´´´´.");
    posicion(12, 35); printf("´´´´´´´´´´´´´´´´¶¶¶¶´´¶´¶´¶´¶´¶´¶´¶´¶´´´¶¶¶¶¶´´´´´´´´´´´´´´");
    posicion(12, 36); printf("´´´´´´´´´´´´¶¶¶¶¶´¶¶´´´¶¶¶¶¶¶¶¶¶¶¶¶¶´´´¶¶´¶¶¶¶¶´´´´´´´´´´´´");
    posicion(12, 37); printf("´´´´´´´´´´´¶¶´¶¶´´´¶¶¶¶¶¶¶¶´´´´´¶¶¶¶¶¶¶¶´´´¶¶´¶¶´´´´´´´´´´´");
    posicion(12, 38); printf("´´´´¶¶¶¶¶¶¶¶¶¶´´´´´¶¶´´´´´´´´´´´´´´´´´¶¶´´´´´´¶¶¶¶¶¶¶¶¶´´´´");
    posicion(12, 39); printf("´´´¶¶´´´´´´´´´´´¶¶¶¶¶¶¶´´´´´´´´´´´´´¶¶¶¶¶¶¶¶´´´´´´´´´´¶¶´´´");

    posicion(85, 27); printf("Game Over");

}
    posicion (25, 7); cout<<"Presiona 'b' para reiniciar el juego"<<endl;
    cin>>bck;
    system ("cls");
}
while(bck=='b' || bck=='B');
}
