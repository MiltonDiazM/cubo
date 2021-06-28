#include <iostream>
using namespace std;
//1. disñe la funcion que calcule wl cubo de un numero
// 5 x  5 x 5 = 125
    int cubo (int num){
        return (num*num*num);
    }

int main() {
        cout <<endl<< "El cubo de 5 es " << cubo(  5);
        cout <<endl<< "El cubo de 6 es " << cubo( 6);
        cout <<endl<< "El cubo de 7 es " << cubo( 7);
        int num;
        cout<<endl<<"Ingresar un numero: ";
        cin>>num;
        num= cubo(num);
        cout<<endl<< "el cubo es: " <<num;
    return 0;
}
