#include <iostream>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	
	float n1,n2,n3,medTurma;
	string endereco="           endereco           ";
	
	float numero ;
	
	string  nome="           nome            " ;
	
	string sobrenome= "     sobrenome      " ;
	
	
	cout << "Primeiro Nome : \n";
	cin >> nome ;
	
	cout << "sobrenome  :\n";
	cin >> sobrenome  ;
	
	
	cout << "Nome da Rua : \n";
	cin >> endereco ;
	
	cout << "Numero   : \n";
	cin >> numero ;
	
	
	cout << "Digite a primeira nota n1 : \n";
	cin >> n1;
	
	cout << "Digite a segunda nota n2 : \n";
	cin >> n2;
	
	cout << "Digite a terceira nota n3 : \n";
	cin >> n3;
	
	cout << " Digite a media da turma : \n";
	cin >> medTurma;
	
	 float mediaAluno = (n1 + n2 + n3)/3;
	 cout << "A media final do aluno e :" << mediaAluno<< endl;
	 
	 if(mediaAluno < medTurma){
	 	cout << " O aluno o esta a abaixo media ! \n";
	 	cout << "Voce foi reprovado ! \n";
	 } else if (mediaAluno == medTurma){
	 	cout << "Voce esta aprovado . \n";
	 	cout << "Parabens continue assim .";
	 };
	 
	 	
	 	
	 
	 	
	  
	 
	 
	
	


	return 0;
}
