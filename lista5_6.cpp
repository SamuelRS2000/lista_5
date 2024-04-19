
/*
Lista5
Exercicio 6
Autor: Samuel Rodrigues dos Santos
Data: 28/03/2024
*/
#include <iostream>

using namespace std;

void torreHanoi(int n, int origem, int destino, int auxiliar) {
  if (n == 1) {
    cout << origem << " --> " << destino << endl;
    return;
  }

  torreHanoi(n - 1, origem, auxiliar, destino);
  cout << origem << " --> " << destino << endl;
  torreHanoi(n - 1, auxiliar, destino, origem);
}

int main() {
  int n; // Número de discos
  int origem; // Estaca de origem
  int destino; // Estaca de destino
  int auxiliar; // Estaca auxiliar

  cout << "Digite o número de discos: ";
  cin >> n;

  cout << "Digite a estaca de origem: ";
  cin >> origem;

  cout << "Digite a estaca de destino: ";
  cin >> destino;

  cout << "Digite a estaca auxiliar: ";
  cin >> auxiliar;

  torreHanoi(n, origem, destino, auxiliar);

  return 0;
}
