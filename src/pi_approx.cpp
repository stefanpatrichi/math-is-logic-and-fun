#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
double aleatoriu() {
  return (double)rand() / RAND_MAX;
}
int main() {
  long long total, in_cerc, i;
  double x, y;
  char rasp = 'y';
  while(rasp == 'y') {
    cout << "Nr. puncte: "; cin >> total;
    in_cerc = 0;
    for (i = 0; i < total; i++) {
      x = aleatoriu(); y = aleatoriu();
      if(sqrt(x*x + y*y) <= 1.0) in_cerc++;
    }
    cout << 4.0 * in_cerc / total << "\nDoriti sa continuati? (y/n)";
    cin >> rasp;
  }
  return 0;
}
