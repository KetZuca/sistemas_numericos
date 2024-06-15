#include <iostream>
using namespace std;
void binario(int, string[100]);
void hexadecimal(int, string[100]);
void octal(int, string[100]);
int contador;

int main() {
    int num;
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
            binario(num, arr);
            sistema = "Binario";
            break;
        
        case 2:
            octal(num, arr);
            sistema = "Octal";
            break;

        case 3:
            hexadecimal(num, arr);
            sistema = "Hexadecimal";
            break;
    }

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

void hexadecimal(int num, string arr[100]) {
    const string hex = "0123456789ABCDEF";
    while(num > 0) {
        int hexa = num % 16;
        arr[contador] = hex[hexa];
        num /= 16;
        contador++;
    }
}

void binario(int num, string arr[100]) {
    const string bin = "01";
    while(num > 0) {
        int bina = num % 2;
        arr[contador] = bin[bina];
        num /= 2;
        contador++;
    }
}

void octal(int num, string arr[100]) {
    const string oct = "01234567";
    while(num > 0) {
        int octa = num % 8;
        arr[contador] = oct[octa];
        num /= 8;
        contador++;
    }
}