#include <iostream>
using namespace std;


int soma_vetor(int vetor[], int tamanho){
    if(tamanho<=0){
        return 0;
    }
    cout << "Tamanho: " << tamanho << endl;;
    cout << "Valor do vetor no momento: " << vetor[tamanho] << endl;
    return (soma_vetor(vetor,tamanho-1) + vetor[tamanho-1]);
}



int main(){
    int vetor[5]= {4,2,9,5,1};

    cout << "A soma do vetor é igual: "<<soma_vetor(vetor,5) << endl;
}