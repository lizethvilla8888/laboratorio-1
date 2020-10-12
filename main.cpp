#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

//prblemas: 1,2,4,6,8,9,12,13,15,17

void problema1 ();
void problema2 ();
int problema4 (char[]);//int, int []
void problema6 ();
void problema8 ();
void problema9 ();
void problema12 ();
void problema13 ();
void problema15 ();
void problema17 ();
int divisores (int);

void imprimir_cadena_int (int[],int);

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
        char cadena[101];
        int numero;

        cout << "Ingrese cadena de numeros: "<<endl;
        scanf("%s",cadena);
        numero = problema4 (cadena);
        cout << "Numero int: " << numero<<endl;
        break;

    case 4:
         cout << "***** Cambio letras minusculas por mayusculas *****\n"<<"Problema 6"<<endl;
         problema6 ();
         break;

    case 5:
         cout << "***** Separar numeros y caracteres *****\n"<<"Problema 8"<<endl;
         problema8 ();
         break;
    case 6:
         cout << "***** Cadena dividida en n # y sumada *****\n"<<"Problema 9"<<endl;
         problema9 ();
         break;

    case 7:
         cout << "***** Verificar si matriz es un cuadrado magico *****\n"<<"Problema 12"<<endl;
         problema12 ();
         break;

    case 8:
         cout << "***** Numero de estrellas encontradas en la imagen *****\n"<<"Problema 13"<<endl;
         problema13 ();
         break;

    case 9:
         cout << "***** Interseccion entre un par de rectangulos *****\n"<<"Problema 15"<<endl;
         //problema15 ();
         break;

    case 10:
         cout << "***** Suma de todos los num amigables menores al num ingresado *****\n"<<"Problema 17"<<endl;
         problema17 ();
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

int problema4 (char cadena[])
{
int numeros[100],longitud=0,numerofinal=0;

//ciclo para crear arreglo con los numeros int
for (int i =0;cadena[i]!= '\0';i++)
    {
    int num=0;
    num = cadena [i]-48;
    numeros[i]=num;
    longitud=longitud+1;
    }

//ciclo donde me multiplica cada numero por 10
for (int i=1;longitud>0;longitud--, i=i*10)
    {
    numeros [longitud-1]=numeros [longitud-1]*i;
    numerofinal= numerofinal+numeros [longitud-1];
    }
return numerofinal;
}

void problema6 ()
{
char cadena[101]={},copia [101]={};//NULL
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

void problema9 ()
{
int numdivisor,longitud=0,suma=0;
cout << "Ingrese numero para dividir cadena: "<<endl;
cin>>numdivisor;

char cadena[101];

cout << "Ingrese cadena de numeros:"<<endl;
scanf("%s",cadena);

cout << "Original: "<<cadena<<endl;

//ciclo para hallar longitud de la cadena de numeros
for (int i =0;cadena[i]!= '\0';i++)
    longitud++;

if (longitud%numdivisor!=0)
{
    //se repite hasta que se agregen los 0 a la izquierda necesarios a la cadena
    for (int i=0,ceros =0;longitud%numdivisor!=0;i++,ceros++)
        {
        //agrega 0 a la izquierda y corre cada elemento de la cadena 1 posición a la derecha
        for (int j = longitud;j>0;j--)
             {
             cadena[j] = cadena[j-1];
             }
        cadena [ceros]=48;
        longitud++;
        }
}
//convertir cadena de char a int y realizar la suma de num divididos
while (longitud>0)
{
char subcadena [numdivisor+1];
int num= 0;
subcadena [numdivisor]='\0';
    //creo cadena de char de long = numdivisor
    for (int copianumdivisor=numdivisor;copianumdivisor>0;copianumdivisor--)
        {
        subcadena[copianumdivisor-1]=cadena [longitud-1];
        longitud--;
        }
//subcadena se convierte en int y vuelve como num
num = problema4(subcadena);
suma=num+suma;
}
cout << "cadena con 0: "<<cadena<<endl;
cout << "Suma: " <<suma << endl;
}

void problema12 ()
{
int filas_colum =0;
cout <<"Ingrese numero de filas: "<<endl;
cin >> filas_colum;

int matriz [filas_colum][filas_colum],verificacion=0;
bool veri_horizontal = true,veri_vertical=true,veri_diagonal=true,veri_diagonal_secundaria=true;

//usuario ingresa matriz
for (int i = 0; i< filas_colum;i++)//i filas
{
    for (int j=0;j<filas_colum;j++)//j columnas
        {
         cout << "Dijite numero [" <<i<<"]["<<j<<"]:";
         cin >> matriz[i][j];
        }
}

//mostrar matriz, verificacion horizontal
for (int i = 0; i<filas_colum;i++)
{
     int suma_horizontal=0;
     for (int j=0;j<filas_colum;j++)
     {
         cout << " ["<<matriz[i][j]<<"] ";
         suma_horizontal = suma_horizontal + matriz[i][j];
     }
     if (verificacion==0)
         verificacion=suma_horizontal;

     if (suma_horizontal!=verificacion)
         veri_horizontal = false;

     cout <<"\n";
}

// verificacion=suma_vertical;
if (veri_horizontal==true )
{
    for (int j=0;j<filas_colum;j++)
    {
    int suma_vertical=0;
        for (int i=0;i<filas_colum;i++)
        {
            suma_vertical= suma_vertical+matriz[i][j];
        }

    if (suma_vertical!=verificacion)
        veri_vertical=false;
    }
}

//verificacion diagonal principal
if (veri_vertical==true)
{
   int suma_diagonal_principal=0;
   for (int j=0,i=0;j<filas_colum;j++,i++)
        {
         suma_diagonal_principal=suma_diagonal_principal+matriz[i][j];
        }
   if (suma_diagonal_principal!=verificacion)
        veri_diagonal=false;
}

//verificacion diagonal secundaria
if (veri_diagonal==true)
{
   int suma_diagonal_secundaria=0;
   for (int i=0,j=filas_colum-1;i<filas_colum;i++,j--)
       {
       suma_diagonal_secundaria=matriz[i][j]+suma_diagonal_secundaria;
       }
   if (suma_diagonal_secundaria!=verificacion)
       veri_diagonal_secundaria=false;
}

if (veri_horizontal==false || veri_vertical==false || veri_diagonal==false || veri_diagonal_secundaria==false)
    cout << "La matriz NO es cuadrado magico"<<endl;

if (veri_horizontal==true && veri_vertical==true && veri_diagonal==true && veri_diagonal_secundaria==true)
    cout << "La matriz es cuadrado magico"<<endl;
}

void problema13 ()
{
//   /*
int filas,columnas;
cout <<"Ingrese numero de filas: "<<endl;
cin >> filas;

cout <<"Ingrese numero de columnas: "<<endl;
cin >> columnas;

int matriz [columnas][filas];
cout << "\n";

//usuario ingresa matriz
for (int i = 0; i< filas;i++)//i filas
    {
    for (int j=0;j<columnas;j++)//j columnas
        {
        cout << "Dijite numero [" <<i<<"]["<<j<<"]:";
        cin >> matriz[i][j];
        }
    }
//   */
int estrellas =0;
 /*
int filas=6,columnas=8;
int matriz [6][8]={{0,3,4,0,0,0,6,8},//6 filas, 7 columnas
                  {5,13,6,0,0,0,2,3},
                  {2,6,2,7,3,0,10,0},
                  {0,0,4,15,4,1,6,0},
                  {0,0,7,12,6,9,10,4},
                  {5,0,6,10,6,4,8,0}};
*/

//i= filas, j= columnas
for (int i = 0; i<filas;i++)
{
     for (int j=0;j<columnas;j++)
     {
         cout << " "<<matriz[i][j]<<" ";
         if (i!=0 && j!=0)
         {
             if (i!=filas-1 && j!=columnas-1)
             {
             float suma=0;
             suma = (matriz[i][j]+matriz[i][j-1]+matriz[i][j+1]+matriz[i-1][j]+matriz[i+1][j]);
             suma = suma /5;
             if (suma >6.0)
                 estrellas++;
             }
         }
     }
cout <<"\n";
}

cout << "\nEstrellas: "<<estrellas<<endl;
cout <<"modificar programa para que no tome valores de las esquina inferiores\n";
}

void problema17 ()
{
int num,num1,num2=0,divi1=0,divi2=0,suma=0;
cout<< "Ingrese numero: "<<endl;
cin >>num;
num1=num;

if (num1 >219)
{
  while (num1 >219)
  {
   num2=divisores(num1);//suma de div num1
   divi1=num2;
   divi2= divisores(num2);//0

   if (num1==divi2 && num2==divi1 && num1 != 496)
      {
      suma = suma + num1 + num2;
      //cout << "numeros amigables: "<<num1<<" "<<num2<<endl<<"Suma: "<<suma<<endl;
      }
   num1--;
   }
}

else
cout << "Suma: "<<suma<<endl;
}


int divisores (int num)
{
int suma =0;

for (int i=1; i<=num/2 ;i++)
{
    if (num%i==0){
        suma = suma+i;
        //cout << i <<" ";
    }
}
//cout <<"Suma: "<< suma <<endl;
return suma;
}
