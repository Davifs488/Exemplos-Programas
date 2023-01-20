#include <iostream>

using namespace std;

int main()
{
   float n1,n2,n3,medturma,numerua;
   string  nome,sobrenome ,nomerua ;
   cout << "Primeiro nome do aluno \n";
   cin >> nome;
   cout<< "Sobrenome \n ";
   cin >> sobrenome  ;
   cout << "Nome da Rua : \n ";
   cin >> nomerua ;
   cout << "Numero da rua : \n";
   cin >> numerua ;
   
   

   cout << " Digeite a primeira nota n1 : \n";
   cin >> n1;
   cout << "Digite a segunda nota n2 : \n";
   cin >> n2;
   cout << "Digite a terceira nota n3 : \n ";
   cin >> n3;
   cout << "Digite a media da turma  \n";
   cin >> medturma;
   

   float medialuno = ( n1 + n2 + n3)/3 ;

   cout << "Media final do aluno e : "<< endl << medialuno << endl;
   if (medialuno < medturma) {
   	
    cout << "O aluno esta abaixo da media ! \n";
    cout << "Voce foi reprovado,mais nao desalime ! \n";
    
   }else if (medialuno == medturma){
   	
    cout << "O aluno esta na media ! \n";
    cout << "Voce esta aprovado parabens !\n";
    
   }else {
   cout << "O aluno esta aciama da media ! \n";
   cout << "Voce se superou continue assim ! \n";
   
   } 


       return 0;
}

