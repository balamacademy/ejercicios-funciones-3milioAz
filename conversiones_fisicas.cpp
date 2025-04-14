#include <iostream>
#include <string>
#include <limits>

using namespace std;

void leer_variable(int &variable);
float celsiusAFahrenheit(float c);
float fahrenheitACelsius(float f);
float metrosAPies(float m);
float kilogramosALibras(float kg);

int main(){
    int opcion;
    float valor;
    
    int evaluador = 0;
    while(evaluador == 0){
        cout << "Seleccione una de las siguientes opciones:\n  1.Celsius a Fahrenheit\n  2.Fahrenheit a Celsius\n  3.Metros a Pies\n  4.Kilogramos a Libras\n  5.Salir\n";
        leer_variable(opcion);
        if(opcion > 0 && opcion < 6){
            switch(opcion){
                case 1:
                    cout << "Ingrese grados en Celcius: ";
                    cin >> valor;
                    cout << valor << " grados Celcius equivalen a " << celsiusAFahrenheit(valor) << " grados Farenheit.\n\n";
                    break;
                case 2:
                    cout << "Ingrese grados en Farenheit: ";
                    cin >> valor;
                    cout << valor << " grados Fareheit equivalen a " << fahrenheitACelsius(valor) << " grados Celcius.\n\n";
                    break;
                case 3:
                    cout << "Ingrese los metros: ";
                    cin >> valor;
                    cout << valor << " metros equivalen a " << metrosAPies(valor) << " pies.\n\n";
                    break;
                case 4:
                    cout << "Ingrese los kilogramos: ";
                    cin >> valor;
                    cout << valor << " kg equivalen a " << kilogramosALibras(valor) << " libras.\n\n";
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

float celsiusAFahrenheit(float c){
    return (c * 1.8) + 32;
}

float fahrenheitACelsius(float f){
    return (f - 32) / 1.8;
}

float metrosAPies(float m){
    return m * 3.28084;
}

float kilogramosALibras(float kg){
    return kg * 2.20462;
}   