
/*
Lista5
Exercicio 5
Autor: Samuel Rodrigues dos Santos
Data: 28/03/2024
*/
#include <cstdlib>
#include <iostream>
#include <time.h>


using namespace std;
int main(){
    int num,palpi=10001;
    char repost;

    srand(time(0));
    num = rand()%1000;
    while(palpi != num) {
      cout << "Digite seu palpite"<<endl;
      cin >> palpi;
      if(palpi > num) cout << "Muito Alto\n";
      else if(palpi < num)  cout << "Muito Baixo\n"; 
    }
    cout << "Exelente ! Você adivinhou o número!"<<endl;
    cout << "Você gostaria de jogar novamente (s ou n):"<< endl;
    cin >> repost ;
    if(tolower(repost) == 's') return main();
    else return 0;
    
}
