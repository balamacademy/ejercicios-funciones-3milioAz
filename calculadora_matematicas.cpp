#include <iostream>
#include <string>
#include <limits>

using namespace std;

void leer_variable(int &variable);
int sumar(int n1, int n2);
int restar(int n1, int n2);
int multiplicar(int n1, int n2);
float dividir(float n1, float n2);

int main(){
    int opcion;
    int n1, n2;
    

    int evaluador = 0;
    while(evaluador == 0){
        cout << "Seleccione una de las siguientes opciones:\n  1.Sumar dos numeros\n  2.Restar dos numeros\n  3.Multiplicar dos numeros\n  4.Dividir dos numeros\n  5.Salir\n";
        
        leer_variable(opcion);

        if(opcion > 0 && opcion < 6){
            switch(opcion){
                case 1:
                    cout << "Ingrese los 2 numeros a sumar: ";
                    cin >> n1 >> n2;
                    cout << "Resultado: " << sumar(n1,n2) << "\n";
                    break;
                case 2:
                    cout << "Ingrese los 2 numeros a restar: ";
                    cin >> n1 >> n2;
                    cout << "Resultado: " << restar(n1,n2) << "\n";
                    break;
                case 3:
                    cout << "Ingrese los 2 numeros a sumar: ";
                    cin >> n1 >> n2;
                    cout << "Resultado: " << multiplicar(n1,n2) << "\n";  
                    break;
                case 4:
                    cout << "Ingrese el dividendo y el divisor: ";
                    cin >> n1 >> n2;
                    cout << "Resultado: " << dividir(n1,n2) << "\n";     
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

int sumar(int n1, int n2){
    return n1 + n2;
}

int restar(int n1, int n2){
    return n1 - n2;
}

int multiplicar(int n1, int n2){
    return n1 * n2;
}

float dividir(float n1, float n2){
    while(n2 <= 0){
        cout << "No se puede dividir sobre 0 o negativos.\nPorfavor ingrese un nuevo divisor: ";
        cin >> n2;
    }
    return n1 / n2;
}   