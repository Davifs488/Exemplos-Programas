#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
float renda;
int idade;
cout <<"Programa Habitacional  \n";
cout << "Se voce tem mais de 21 anos! \n ";
cout <<"Se sua renda e de no maximo 1.200 ! \n";
cout << "Faca  uma pesquisa  \n";

cout << " Qual e a sua idade ? \n ";
cin >> idade ;

cout << "Qual e a sua renda ? \n";
cin >> renda ; 	

if (idade >= 21 && renda < 1.200){
	cout << " Voce esta apto a participar do programa ! \n";
	
} else {
	
   cout << "Voce nao pode paticipar do programa ! \n";
}
	
	
	return 0;
}
