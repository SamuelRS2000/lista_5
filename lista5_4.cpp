
/*
Lista 5
Exercicio 4
Autor: Samuel Rodrigues dos Santos
Data: 28/03/2024
*/
#include <cstdlib>
#include <string>
#include <iostream>
#include <time.h>
using namespace std;

int main (){
    int num1,num2,prod;
    bool acerto = 1;
    char repost ;

    acerto =1;
    srand(time(0));
    num1 = rand()%10;
    num2 = rand()%10;

    while(acerto){
      cout <<"Quanto é "<< num1 << " vezes " << num2 << endl;
      cin >> prod;

      if(num1*num2 == prod) {
        cout << "Muito bom!\n";
        acerto = false;
      }
      else cout << "Não. Por favor, tente novamente\n";
    }
    cout << "\nDeseja parar s/n:"<< endl;
    cin >> repost ;
    if(tolower(repost) == 's') return 0;
    else return main();
}
