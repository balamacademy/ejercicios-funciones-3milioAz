#include <iostream>
#include <string>
#include <limits>

using namespace std;

void leer_variable(int &variable);
void decimalABinario(int n);
void decimalAOctal(int n);
void decimalAHexadecimal(int n);

int main(){
    int opcion;
    float valor;
    
    int evaluador = 0;
    while(evaluador == 0){
        cout << "Seleccione una de las siguientes opciones:\n  1.Decimal a Binario\n  2.Decimal a Octal\n  3.Decimal a Hexadecimal\n  4.Salir\n";
        leer_variable(opcion);
        if(opcion > 0 && opcion < 5){
            switch(opcion){
                case 1:
                    cout << "Ingrese el numero decimal: ";
                    cin >> valor;
                    cout << valor << " es ";
                    decimalABinario(valor);
                    cout << " en binario.\n\n";
                    break;
                case 2:
                    cout << "Ingrese el numero decimal: ";
                    cin >> valor;
                    cout << valor << " es ";
                    decimalAOctal(valor);
                    cout << " en octal.\n\n";
                    break;
                case 3:
                    cout << "Ingrese el numero decimal: ";
                    cin >> valor;
                    cout << valor << " es ";
                    decimalAHexadecimal(valor);
                    cout << " en hexadecimal.\n\n";
                    break;
                case 4:
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

void decimalABinario(int n){
    if(n == 0){
        cout << "0";
        return;
    }

    if(n > 1){
        decimalABinario(n / 2);
    }
    cout << n % 2;
}

void decimalAOctal(int n){
    if(n == 0){
        cout << "0";
        return;
    }

    if(n >= 8){
        decimalAOctal(n / 8);
    }
    cout << n % 8;
}

void decimalAHexadecimal(int n){
    if(n == 0){
        cout << "0";
        return;
    }

    if(n >= 16){
        decimalAHexadecimal(n / 16);
    }

    int valor = n % 16;
    if(valor < 10){
        cout << valor;
    }else{
        switch(valor){
            case 10:
                cout << "A";
                break;
            case 11:
                cout << "B";
                break;
            case 12:
                cout << "C";
                break;
            case 13:
                cout << "D";
                break;
            case 14:
                cout << "E";
                break;
            case 15:
                cout << "F";
                break;
        }
        //cout << static_cast<char>('A' + (valor - 10));
    }
}