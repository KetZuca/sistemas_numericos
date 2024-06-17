#include <iostream>
using namespace std;
void sistemas(int, string[100], string, int);

int contador;

int main() {
    int num, divisor;
    string datos;
    string sistema;
    int sis;
    string arr[100];
    cout << "Ingrese un numero\n";
    cin >> num;

    do {
        cout << "A que sistema numerico desea pasarlo?\n 1. Binario\n 2. Octal\n 3. Hexadecimal\nSeleccione la letra que corresponda con el sistema deseado: ";
        cin >> sis;

        if(sis != 1 && sis != 2 && sis != 3) {
            cout << "Numero invalido, intentelo de nuevo\n";
        }
    } while(sis != 1 && sis != 2 && sis != 3);

    switch(sis) {
        case 1:
            sistema = "Binario";
            datos = "01";
            divisor = 2;
            break;
        
        case 2:
            sistema = "Octal";
            datos = "01234567";
            divisor = 8;
            break;

        case 3:
            sistema = "Hexadecimal";
            datos = "0123456789ABCDEF";
            divisor = 16;
            break;
    }

    sistemas(num, arr, datos, divisor);

    cout << "El numero en " << sistema << " es: ";
    for(int i = 99; i >= 0; i--) {
        if(arr[i] == "\0") {
            continue;
        } else {
            cout << arr[i];
        }
    }
    

    return 0;
}

void sistemas(int num, string arr[100], string datos, int divi) {
    while(num > 0) {
        int numero = num % divi;
        cout << "Resto: " << numero;
        arr[contador] = datos[numero];
        num /= divi;
        cout << "\nCociente: " << num << endl;
        contador++;
    }
}