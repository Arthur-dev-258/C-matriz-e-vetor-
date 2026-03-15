#include <iostream>
using namespace std;

int main() {

	int matriz[3][3];
	int soma = 0;
	int par = 0, impar=0;
	int maior,menor;


	for(int i=0; i<3; i++) {
		for(int j=0; j<3; j++) {

			cout << "Digite um valor: ";
			cin >> matriz[i][j];
			soma += matriz[i][j];
		}
	}


	for(int i=0; i<3; i++) {
		for(int j=0; j<3; j++) {
			cout << matriz[i][j] << " ";
		}

		cout << endl;
	}

	cout << "\ndiagonal principal\n";
	for(int i=0; i<3; i++) {
		for(int j=0; j<3; j++) {
			if (i==j) {
				cout << matriz[i][j]<<" ";
			}
		}
	}
	
	cout << "\ndiagonal secundaria\n";
	for(int i=0; i<3; i++) {
		for(int j=0; j<3; j++) {
			if (i+j ==2) {
				cout << matriz[i][j]<<" ";
			}
		}
	}
	
	cout << "\nNumeros pares :\n";
	for(int i=0; i<3; i++) {
		for(int j=0; j<3; j++) {
			if (matriz [i][j]% 2==0) {
				cout << matriz[i][j]<<" ";
				par++;
			}
		}
	}
	
	cout << "\nNumeros impares :\n";
	for(int i=0; i<3; i++) {
		for(int j=0; j<3; j++) {
			if (matriz [i][j]% 2!=0) {
				cout << matriz[i][j]<<" ";
				impar++;
			}
		}
	}
	
    maior= matriz [0][0];
	for(int i=0; i<3; i++) {
		for(int j=0; j<3; j++) {
         if (matriz [i][j] > maior ){
         	 maior = matriz [i][j];
		   }
        }
     }
     
      menor = matriz [0][0];
	for(int i=0; i<3; i++) {
		for(int j=0; j<3; j++) {
         if (matriz [i][j] < menor ){
         	 menor = matriz [i][j];
		   }
        }
     }
    
    
	cout << "\nSoma da matriz: " << soma;
	cout << "\nquantidades de Pares:\n"<< par;
	cout << "\nquantidades de impares:\n"<< impar;
	cout << "\nMenor valor :\n"<< menor;
	cout << "\nMaior valor :\n"<< maior;

}
