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
	cout << "O seu �ndice de massa corporal (IMC) � de: " << imc << "\n";
	
	if(imc < 18.5){
		cout << "Voc� est� abaixo do peso!";
	}else if(imc < 25){
		cout << "Voc� est� com o peso ideal!";
	}else if(imc < 30){
		cout << "Voc� est� com sobrepeso!";
	}else if(imc < 35){
		cout << "Voc� est� com obesidade de grau 1!";
	}else if(imc < 40){
		cout << "Voc� est� com obesidade de grau 2!";
	}else{
		cout << "Voc� est� com obesidade de grau 3!";
	}
	
	return 0;
}

