
/*
Lista_5
Exercicio 2
Autor: Samuel Rodrigues dos Santos
Data: 28/03/2024
*/

#include <iostream>
#include <cmath> 

using namespace std;

bool e_primo(int num) {
    bool flag = 1;
    for(int i=2; i < num && (flag == 1);i++) num % i != 0 ? : flag = 0;
    return flag; 
}
void imprimi_primo(float num){
    if(floor(num) == num) if(e_primo(num)) cout <<" "<< num <<","; //Testa se e intero e primo. 
}

int main(){
    int num = 0,n_termo = 1002;
    cout << " Os numeros primos de 1 a 100 são : \n";
    cout << "Testando \"n/2\" termos: \n";
    
    for(int i = 3;i< (n_termo*2);i++) imprimi_primo(i/2.0);
    cout << "\nTestando a raiz quadrada de \"n\" \n";
    for(int i = 2; i<(n_termo*n_termo); i++) imprimi_primo(sqrt(i));

    return 0;
}
