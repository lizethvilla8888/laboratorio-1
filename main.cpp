#include <iostream>
//Grupo 3 (4-5)  1,2,4,6,8,9,12,13,15,17
using namespace std;

int main()
{//int main()

int opcion=1;

while(opcion !=0)
{
        cout<<"***** Ejercicios de la practica 1 *****\n"<<endl;
        cout<<"seleccione una opcion \n"<<endl;
        cout<<"1) Billetes y monedas."<<endl;
        cout<<"2) Suma de tiempo. "<<endl;
        cout<<"3) Aproximacion euler. "<<endl;
        cout<<"4) Sumar pares serie Fibonacci."<<endl;
        cout<<"5) Suma dijitos elevados."<<endl;
        cout<<"6) MCM de num."<<endl;
        cout<<"7) Suma de numeros primos."<<endl;
        cout<<"8) Palindromo mayor. "<<endl;
        cout<<"9) serie collatz, semilla. "<<endl;
        cout<<"10) Numeros triangulares."<<endl;
        cout<<" "<<endl;
        cout<<"Presione 0 para salir"<<endl;

        cin>>opcion;

switch(opcion)
{//switch
int usuario;

    case 1:
        cout << "***** Billetes y monedas *****\n"<<"Problema 1"<<endl;
        cout << "Ingrese cantidad de dinero:" << endl;
        cin >> usuario;
        break;

    case 2:
         cout << "*****  *****\n"<<"Problema 2"<<endl;
         cin >> usuario;
         break;

    case 3:
         cout << "*****  *****\n"<<"Problema 4"<<endl;
         cin >> usuario;
         break;

    case 4:
         cout << "*****   *****\n"<<"Problema 8"<<endl;
         cout << "Ingrese numero serie fibonacci:"<<endl;
         cin >> usuario;
         break;

    case 5:
         cout << "*****  *****\n"<<"Problema 8"<<endl;
         cout << "Ingrese numero:"<<endl;
         cin >> usuario;
         break;
    case 6:
         cout << "*****  *****\n"<<"Problema 9"<<endl;
         cout << "Ingrese numero:"<<endl;
         cin >> usuario;
         break;

    case 7:
         cout << "*****  *****\n"<<"Problema 12"<<endl;
         cout << "Ingrese numero:"<<endl;
         cin >> usuario;
         break;

    case 8:
         cout << "*****  *****\n"<<"Problema 13"<<endl;
         break;

    case 9:
         cout << "*****  *****\n"<<"Problema 15"<<endl;
         cout << "Ingrese numero:"<<endl;
         cin >> usuario;
         break;

    case 10:
         cout << "*****  *****\n"<<"Problema 17"<<endl;
         cout << "Ingrese numero: "<<endl;
         cin >> usuario;
         break;

    default:
         cout<<"La opcion no es valida. "<<endl;
         break;
}//switch
}//while(opcion !=0)

    return 0;
}//int main()

