#include <iostream>
#include <string>
#include <limits>

using namespace std;

void leer_variable(int &variable);
float bitsABytes(float bits);
float kilobytesABytes(float kb);
float megabytesAKilobytes(float mb);
float gigabytesAMegabytes(float gb);
int main(){
    int opcion;
    float valor;
    
    int evaluador = 0;
    while(evaluador == 0){
        cout << "Seleccione una de las siguientes opciones:\n  1.Bits a Bytes\n  2.Kilobytes a Bytes\n  3.Megabytes a Kilobytes\n  4.Gigabytes a Megabytes\n  5.Salir\n";
        leer_variable(opcion);
        if(opcion > 0 && opcion < 6){
            switch(opcion){
                case 1:
                    cout << "Ingrese la cantidad de bits: ";
                    cin >> valor;
                    cout << valor << " bits equivalen a " << bitsABytes(valor) << " bytes.\n\n";
                    break;
                case 2:
                    cout << "Ingrese la cantidad de kilobytes: ";
                    cin >> valor;
                    cout << valor << " kilobytes equivalen a " << kilobytesABytes(valor) << " bytes.\n\n";
                    break;
                case 3:
                    cout << "Ingrese la cantidad de megabytes: ";
                    cin >> valor;
                    cout << valor << " megabytes equivalen a " << megabytesAKilobytes(valor) << " kilobytes.\n\n";
                    break;
                case 4:
                    cout << "Ingrese la cantidad de gigabytes: ";
                    cin >> valor;
                    cout << valor << " gigabytes equivalen a " << gigabytesAMegabytes(valor) << " megabytes.\n\n";
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

float bitsABytes(float bits){
    return bits * 8;
}

float kilobytesABytes(float kb){
    return kb * 1024;
}

float megabytesAKilobytes(float mb){
    return mb * 1024;
}

float gigabytesAMegabytes(float gb){
    return gb * 1024;
}   