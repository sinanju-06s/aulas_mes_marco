#include <iostream>
using namespace std;


int quantidade_ocorencia(int valor, int desejado,int n){
    if (valor <= 0.01){
        return n;
    }
    if (valor % 10 == desejado){
        valor = valor/10;
        n++;
        return quantidade_ocorencia(valor,desejado,n);
    } else {
        valor = valor / 10;
        return quantidade_ocorencia(valor,desejado,n);
    }
}

int main() {
    int x = 769874567;
    cout << quantidade_ocorencia(x,7,0);
}