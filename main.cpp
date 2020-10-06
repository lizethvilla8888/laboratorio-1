#include <iostream>
#include <stdlib.h>
#include <time.h>

//Grupo 3 (4-5)  1,2,4,6,8,9,12,13,15,17
using namespace std;
void problema1 ();//devuelta
void problema2 ();//
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
        cout<<"3) problema 4 : Conviertir cadena de caracteres a un número entero. "<<endl;
        cout<<"4) problema 6 : Cambio letras minúsculas por mayúsculas. "<<endl;
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
         //problema15 ();
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
int dinero,cambio=0,cincuenta=0,veinte=0,dies=0,cinco=0,dos=0,mil=0,quinientos=0,docientos=0,cien=0,moncincuenta=0;
cout << "Ingrese cantidad de dinero:"<<endl;
cin >> dinero;

//calculo billetes de 50.000
cincuenta = dinero /50000;

    if (cincuenta >=0)
        {cambio =dinero-cincuenta *50000;}
    else
        {cambio=0;}

 cout << "50.000: " <<cincuenta<<endl;

 //calculo de billetes de 20.000

    if (cambio >=20000)
        {
         veinte = cambio /20000 ;

         if (veinte >=0)
            cambio = cambio - veinte * 20000;
         else
            cambio = 0;
         }
  cout << "20.000: " <<veinte<<endl;

  //calculo de billetes de 10.000

    if (cambio >=10000)
         {
          dies = cambio /10000 ;

          if (dies >=0)
             cambio = cambio - dies * 10000;
          else
             cambio = 0;

          }
    cout << "10.000: " <<dies<<endl;

   //calculo de billetes de 5.000

    if (cambio >=5000)
        {
          cinco = cambio /5000 ;

           if (cinco >=0)
               cambio = cambio - cinco * 5000;
           else
              cambio = 0;
         }
     cout << "5.000: " <<cinco<<endl;

     //calculo de billetes de  2.000

    if (cambio >=2000)
        {
          dos = cambio /2000 ;

           if (dos >=0)
              cambio = cambio - dos * 2000;
           else
              cambio = 0;
         }
    cout << "2.000: " <<dos<<endl;

    //calculo de billetes de 1.000

    if (cambio >=1000)
        {
           mil = cambio /1000 ;
           if (mil >=0)
               cambio = cambio - mil* 1000;
           else
              cambio = 0;
         }

    cout << "1.000: " <<mil<<endl;

    //calculo de monedas de 500

     if (cambio >= 500)
         {
           quinientos = cambio /500 ;
           if (quinientos >=0)
               cambio = cambio - quinientos* 500;
           else
              cambio = 0;
          }

     cout << "500: " <<quinientos<<endl;

    //calculo de monedas de 200

      if (cambio >= 200)
         {
          docientos  = cambio / 200 ;
          if (docientos >=0)
             cambio = cambio - docientos* 200;
          else
             cambio = 0;
          }

      cout << "200: " <<dos<<endl;

      //calculo de monedas de 100

      if (cambio >=100)
           {
           cien = cambio /100 ;
           if (cien >=0)
              cambio = cambio - cien* 100;
           else
              cambio = 0;
           }

      cout << "100: " <<cien<<endl;

      //calculo de monedas de 50

        if (cambio >=50)
           {
           moncincuenta  = cambio /50 ;
           if (moncincuenta >=0)
              cambio = cambio - moncincuenta * 10;
           else
              cambio = 0;
            }
        cout << "50: " <<cincuenta<<endl;
        cout << "faltante: "<<cambio<<endl;
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
char cadena[11]={NULL};
int numeros,num=0;
cout << "Ingrese cadena de numeros sin espacios;"<<endl;
scanf("%s",cadena);

for (int i=0 ; cadena[i]!=NULL && cadena[i]>=48 &&cadena[i]<57;i++)
{

num = cadena[i]-48;
numeros=num*10;

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
int n, j=0;
cout << "Ingrese la cantidad de elementos:"<<endl;
cin >>n;

char cadena[n];
int numeros[n],contador = 0;
int *parr = numeros;
cout << "Ingrese cadena;"<<endl;
scanf("%s",cadena);

for (int i = 0; i<=n;i++)
{

  if (cadena [i]>= 48 && cadena [i]<=57)
  {
    int num=0;
    num = cadena [i]-48;
    numeros [j]=num;
    for (int k = i+1,eliminar=i;k<=n;k++,eliminar++)
    {cadena [eliminar]=cadena [k];}
    num++;
    contador ++;
  }
}
cout << cadena <<endl;

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
