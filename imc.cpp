#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_ALL,"");
	
	float peso, altura, imc;
	
	cout << "Insira o seu peso (kg):\n";
	cin >> peso;
	
	cout << "Insira a sua altura (M):\n";
	cin >> altura;
	
	imc=peso/(altura*2);
	
	cout.precision(4);
	cout << "O seu índice de massa corporal (IMC) é de: " << imc << "\n";
	
	if(imc < 18.5){
		cout << "Você está abaixo do peso!";
	}else if(imc < 25){
		cout << "Você está com o peso ideal!";
	}else if(imc < 30){
		cout << "Você está com sobrepeso!";
	}else if(imc < 35){
		cout << "Você está com obesidade de grau 1!";
	}else if(imc < 40){
		cout << "Você está com obesidade de grau 2!";
	}else{
		cout << "Você está com obesidade de grau 3!";
	}
	
	return 0;
}

