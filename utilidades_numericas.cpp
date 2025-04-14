#include <iostream>
#include <string>
#include <limits>

using namespace std;

void leer_variable(int &variable);
bool esPrimo(int n);
int factorial(int n);
int contarDigitos(int n);
int sumarDigitos(int n);

int main(){
    int opcion;
    int numero;
    
    int evaluador = 0;
    while(evaluador == 0){
        cout << "Seleccione una de las siguientes opciones:\n  1.Verificar si un numero es primo\n  2.Calcular el factorial de un numero\n  3.Contar cuantos digitos tiene un numero\n  4.Sumar los digitos de un numero\n  5.Salir\n";
        leer_variable(opcion);
        if(opcion > 0 && opcion < 6){
            switch(opcion){
                case 1:
                    cout << "Ingrese el numero: ";
                    cin >> numero;
                    cout << "Es primo? " << esPrimo(numero) << "\n\n";
                    break;
                case 2:
                    cout << "Ingrese el numero: ";
                    cin >> numero;
                    cout << "El resultado de " << numero << "! es: " << factorial(numero) << "\n\n";
                    break;
                case 3:
                    cout << "Ingrese el numero: ";
                    cin >> numero;
                    cout << "El numero " << numero << " tiene " << contarDigitos(numero) << " digitos.\n\n";
                    break;
                case 4:
                    cout << "Ingrese el numero: ";
                    cin >> numero;
                    cout <<"La suma de sus digitos es: " << sumarDigitos(numero) << "\n\n";
                    break;
                case 5:
                evaluador = 1;
                    break;
            }
        }else{
            cout << "El numero ingresado no se encuentra en las opciones.\n";
        }
    }
    
    return 0;
}

void leer_variable(int &variable){
    cin >> variable;
    while(cin.fail()){
        cin.clear(); 
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Ingrese un numero entero porfavor\n";
        cin >> variable;
    }
}

bool esPrimo(int n){
    if(n <= 1){
        return false;
    }

    for(int i = 2; i < n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int factorial(int n){
    if(n == 0 || n == 1){
        return 1;
    }else{
        return n * factorial(n - 1);
    }
}

int contarDigitos(int n){
    int digitos = 0;
    
    if(n == 0){
        return 1;
    }

    while(n > 0){
        n = n / 10;
        digitos++;
    }

    return digitos;
}

int sumarDigitos(int n){
    int total = 0;
    
    while(n > 0){
        total = total + (n % 10);
        n = n / 10;
    }
    return total;
}   