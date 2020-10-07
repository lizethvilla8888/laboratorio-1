#include <iostream>
#include <stdlib.h>
#include <time.h>

//Grupo 3 (4-5)  1,2,4,6,8,9,12,13,15,17
using namespace std;
void problema1 ();
void problema2 ();
void problema4 ();
void problema6 ();
void problema8 ();
void problema9 ();
void problema12 ();
void problema13 ();
void problema15 ();
int problema17 ();

int divisores ();

int main()
{//int main()
int opcion=1;

while(opcion !=0)
{
        cout<<"***** Ejercicios de la practica 1 *****\n"<<endl;
        cout<<"seleccione una opcion \n"<<endl;
        cout<<"1) problema 1 : Billetes y monedas."<<endl;
        cout<<"2) problema 2 : Letras mayusculas aleatorias."<<endl;
        cout<<"3) problema 4 : Conviertir cadena de caracteres a un numero entero. "<<endl;
        cout<<"4) problema 6 : Cambio letras minusculas por mayusculas. "<<endl;
        cout<<"5) problema 8 : Separar numeros y caracteres."<<endl;
        cout<<"6) problema 9 : Cadena dividida en n # y sumada."<<endl;
        cout<<"7) problema 12: Verificar si matriz es un cuadrado magico."<<endl;
        cout<<"8) problema 13: Numero de estrellas encontradas en la imagen."<<endl;
        cout<<"9) problema 15: Interseccion entre un par de rectangulos. "<<endl;
        cout<<"10)problema 17: Suma de todos los num amigables menores al num ingresado. "<<endl;

        cout<<" "<<endl;
        cout<<"Presione 0 para salir"<<endl;

        cin>>opcion;

switch(opcion)
{//switch
    case 1:
        cout << "***** Billetes y monedas *****\n"<<"Problema 1"<<endl;
        problema1 ();
        break;

    case 2:
         cout << "***** Letras mayusculas aleatorias *****\n"<<"Problema 2"<<endl;
         problema2 ();
         break;

    case 3:
    cout << "***** Conviertir cadena de caracteres a un numero entero *****\n"<<"Problema 4"<<endl;
         //problema4 ();
         break;

    case 4:
         cout << "***** Cambio letras minúsculas por mayusculas *****\n"<<"Problema 6"<<endl;
         problema6 ();
         break;

    case 5:
         cout << "***** Separar numeros y caracteres *****\n"<<"Problema 8"<<endl;
         problema8 ();
         break;
    case 6:
         cout << "***** Cadena dividida en n # y sumada *****\n"<<"Problema 9"<<endl;
         //problema9 ();
         break;

    case 7:
         cout << "***** Verificar si matriz es un cuadrado magico *****\n"<<"Problema 12"<<endl;
         //problema12 ();
         break;

    case 8:
         cout << "***** Numero de estrellas encontradas en la imagen *****\n"<<"Problema 13"<<endl;
         //problema13 ();
         break;

    case 9:
         cout << "***** Interseccion entre un par de rectangulos *****\n"<<"Problema 15"<<endl;
         problema15 ();
         break;

    case 10:
         cout << "***** Suma de todos los num amigables menores al num ingresado *****\n"<<"Problema 17"<<endl;
         //problema17 ();
         break;

    default:
         cout<<"La opcion no es valida. "<<endl;
         break;
}//switch
}//while(opcion !=0)

    return 0;
}

void problema1 ()
{
int dinero ;
int cantidad [10]={50000,20000,10000,5000,2000,1000,500,200,100,50};
int numbillmon [10]={0,0,0,0,0,0,0,0,0,0}
                    ;
cout << "Ingrese cantidad de dinero:"<<endl;
cin >> dinero;

for (int i=0;i<10;i++)
{
numbillmon[i]=dinero/cantidad [i];
if (numbillmon[i]>0)
    dinero = dinero-(cantidad [i]*numbillmon[i]);
}
cout << "50.000: "<<numbillmon[0]<<endl;
cout << "20.000: "<<numbillmon[1]<<endl;
cout << "10.000: "<<numbillmon[2]<<endl;
cout << "5.000: "<<numbillmon[3]<<endl;
cout << "2.000: "<<numbillmon[4]<<endl;
cout << "1.000 "<<numbillmon[5]<<endl;
cout << "500: "<<numbillmon[6]<<endl;
cout << "200: "<<numbillmon[7]<<endl;
cout << "100:"<<numbillmon[8]<<endl;
cout << "50: "<<numbillmon[9]<<endl;
cout << "Faltante: "<<dinero<<endl;

}

void problema2 ()
{
srand(time (NULL));//para que cambien los valores
char vletras[100];

for (int i=0;i<100;i++)
{//for
int vnum[100];

//variable= limite inferior+rand ()%(limite superior+1-limite inferior)
vnum[i] = 65+rand() %(90-65+1);
vletras[i]= vnum[i];
cout << vletras[i]<<" ";
}//for

cout <<"\n";

for (int i = 65; i<=90;i++)//letras abecedario
{
    char letra;
    int sum=0;
    for (int j=0;j<100;j++)
    {
        char verificacion = vletras[j];
        letra=i;
        if (letra ==verificacion)
        {
            sum= sum+1;
        }

    }
    if (sum >0 )
        cout << letra <<" = "<<sum<<endl;
}

}

void problema4 ()
{
int n;

cout << "Ingrese la cantidad de elementos que desea ingresar:"<<endl;
cin >>n;

char cadena[n];
int numeros[n-1];

cout << "Ingrese cadena de numeros: "<<endl;
scanf("%s",cadena);

for (int i =0;i<n-1;i++)
{
int num=0;
num = cadena [i]-48;
for (int j= 0;j<n;j++)
num = num*10;//aqui pongo eso elevado a la 10 elevado 0 , 10 elevaod 1 y asi
numeros[i]=num;
}

for (int i=0;i<n;i++)
{

}

}

void problema6 ()
{
char cadena[101]={NULL},copia [101]={NULL};
cout << "Ingrese cadena;"<<endl;
scanf("%s",cadena);

for (int i= 0;i<=100;i++)
{
    if (cadena[i]>=97 && cadena[i]<=122)
    {
        copia[i]=cadena[i]-32;
    }
    if (cadena[i]<97 || cadena[i]>122)
    {
        copia [i]=cadena[i];
    }
}
cout <<"Original:      "<< cadena<<endl;
cout <<"En mayuscula: "<< copia<<endl;

}

void problema8 ()
{
int n;

cout << "Ingrese la cantidad de elementos:"<<endl;
cin >>n;

char cadena[n];
int numeros[n-1],contador = 0;

cout << "Ingrese cadena;"<<endl;
scanf("%s",cadena);

cout << "\n Original:\n"<<cadena<<endl;

//for que evalua los elementos de la cadena inegresada
for (int i = 0; i<=n;i++)
{
  //identifico si el carecter en la posicion [i] es un numero y lo llevo
  //a un arreglo numerico numeros[n]
  if (cadena [i]>= 48 && cadena [i]<=57)
  {
    int num=0;
    num = cadena [i]-48;
    numeros [contador]=num;

    //elimino el caracter cadena [i].
    for (int k = i+1,eliminar=i;k<=n;k++,eliminar++)
    {cadena [eliminar]=cadena [k];}
    contador ++;
    i=i-1;
  }
}

cout << "\n Texto:\n "<< cadena <<endl<<"\n Numeros: "<<endl;
for (int i = 0;i<contador;i++)
    cout <<numeros[i]<<" ";

cout << endl;

}

void problema15 ()
{
    int rectangulo1 [4]={0,0,0,0},rectangulo2 [4]={0,0,0,0},rectanguloc[4]={0,0,0,0};

cout << "Ingrese coordenadas de triangulos:"<<endl;
cout << "Formato:\n"<<"[0]=Coordenada en X\n[1]=Coordenada en Y\n[2]=Ancho\n,[3]=Alto\n"<<endl;

for (int i= 0; i<4;i++)
{
    cout << "Ingrese coordenadas de rectangulo 1:"<<endl;
    cout << "coordenada ["<<i<<"] de rectangulo 1: ";
    cin >>rectangulo1 [i];
}
cout << endl;

for (int i= 0; i<4;i++)
{
    cout << "Ingrese coordenadas de rectangulo 2:"<<endl;
    cout << "coordenada ["<<i<<"] de rectangulo 2: ";
    cin >>rectangulo2 [i];
}
cout << endl;

cout << rectangulo1<<endl;
cout << rectangulo2<<endl;


cout <<endl;
}
/*
void problema6 ()
{
char cadena;
cout << "Ingrese cadena de caracteres:"<<endl;
cin >> cadena;

}

int problema17 ()
{
int num;
cout << "Ingrese numero: " <<endl;
cin >> num;

return 0;
}

int divisores ( int num)
{
    int divisor= 0;
       for (int i = 1;i<=num;i++)
       {
         if (num%i == 0)
             divisor = divisor+1;
       }
       return divisor;
}
*/
