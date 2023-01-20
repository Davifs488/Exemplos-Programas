#include <iostream>1

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	
	float nota1,nota2;
	
	cout<< "Informe a nota1 \n";
	
	cin>> nota1 ;
	
	cout<<"Informe a Nota2\n";
	cin>> nota2 ;
	
	float media =(nota1 + nota2)/2;
	cout<<"Media=" <<media <<endl;
	
	if (media >= 6) {
		cout<<"aluno Aprovado \n";
		cout<<"Parabnes voce conseguiu \n";
		
	} else {
	
		cout<<"Aluno Reprovado \n";
		cout<<"Nao foi esse Ano \n";
		
      }  if (media <5 ){
	  
	   cout<<"Nota Final: E \n";	
      } else if (media < 5){
      	cout<<"Nota Final: D \n";
	  }else if (media < 7){
	  	cout<<"Nota Final: C";
	  } else if (media < 9){
	  	cout<< "Nota Final: B";
	  }else if (media < 10){
	  	cout<< "Nota Final: A";
	  }
	  
	return 0;
}
