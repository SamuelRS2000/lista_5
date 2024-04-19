
/*
Lista_5
Exercicio 3
Autor: Samuel Rodrigues dos Santos
Data: 28/03/2024
*/

#include <iostream>

using namespace std;

void  imprimi_perfect(int num){
    int soma_fator=1,cont = 1,fator[num];
    for(int i = 0;i<num;i++) fator[i] = 1; //Prenchendo com 1;

    for(int i=2; i < num; i++){
        if(num%i == 0){
            fator[cont] = num/i;
            cont++;
            soma_fator += num/i;
        }
    }
    if(soma_fator ==  num){               //Testa se e perfeito e imprimi.
        cout <<fator[0];
        for(int i=cont-1;i > 0; i--) cout << " + "<< fator[i] ;
        cout << " = "<< num << endl;
    }          
          
}

int main(){
       int num = 0;      
       for(int i =2; i<1001; i++) imprimi_perfect(i);      
}
