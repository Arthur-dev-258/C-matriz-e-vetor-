#include <iostream>
using namespace std;

int main(){

    int vetor[5];
    int i;
    int maiorNumero;
    int pares = 0;
    int impares = 0;
    float media,soma=0;

    for(i = 0; i < 5; i++){
        cout << "Digite um numero: ";
        cin >> vetor[i];
    }

    maiorNumero = vetor[0];

    for(i = 0; i < 5; i++){
        cout << "\nVetor[" << i << "] possui o valor: " << vetor[i];

        soma += vetor[i]; 
		 
        if(vetor[i] > maiorNumero){
            maiorNumero = vetor[i];
        }

        if(vetor[i] % 2 == 0){
            pares++;
        }else{
            impares++;
        }
    }
     
     media=soma /5.0;

    cout << "\nMaior numero: " << maiorNumero;
    cout << "\nNumeros pares: " << pares;
    cout << "\nNumeros impares: " << impares;
    cout << "\nMedia do numeros:" << media;


}
	

 

