
/*
Lista5
Exercicio 1
Autor: Samuel Rodrigues dos Santos
Data: 08/04/2024
*/

#include <iostream>
#include <string>

#define tam 60                               // Definindo o tamanho da linha como uma variavel global

using namespace std;

float fahr(float C) {                         //Faz a conversão celsius(°C) para fahrenheit (°F)
    return 9.0/5*C +  32;
}
void linha(int n_linhas) {                    //Imprimi uma linha de traços de tamanho escolhido
    for(int i= 0;i < n_linhas; i++)  cout <<"-";
    cout << endl;
}
void espacos(int n_espacos){                  //Imprimi espaços de tamanho escolhido
    for(int i= 0;i < n_espacos; i++)  cout <<" ";
}
void pula_linha(int tama){
    cout << "|";
    espacos(tama-2);
    cout << "|"<< endl;

}

void linha_num(string str,int tam_linha){ //Imprimi a linha com a string escolhida do tamanho desejado, Centralizada
    int tam_l = tam_linha - str.size();   //"size" e um método do objeto string "str" que retorna o tamanho da string
    int metade_espacos = tam_l / 2;

    cout << "|";
    espacos(metade_espacos + (tam_l % 2));   // Ajusta o número de espaços para garantir que o total seja par
    cout << str;
    espacos(metade_espacos);
}

void celulas(string tex1,string tex2){          //Imprimi um par celulas com o numero definido

     linha_num(tex1,tam/2);                      //Celula a esquerda
     linha_num(tex2,tam/2);                      //Celula a direita
     cout << "|" << endl;

     linha(tam);

  }


int main(){
     linha(tam);
     celulas("Celsius(°C)","Fahrenheit(°F)"); // Titulos das colunas

     for (int celcius = 0; celcius<=100; celcius++) {               //Usando valores interos de 1 a 100
         celulas(to_string(celcius),to_string(fahr(celcius)));             //Por imprimindo os valores dejados como strings
     }

     return 0;
}
