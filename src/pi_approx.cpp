#include <iostream>
#include <random>
#include <cmath>
using namespace std;
double aleatoriu() {
    return (double)rand() / (RAND_MAX + 1.0);
}
int main() {
    long long precizie, cerc, i;
    double x, y;
    cout << "Nr. puncte: ";
    cin >> precizie;
    cerc = 0;
    for(i = 0; i < precizie; i++) {
		x = aleatoriu(); y = aleatoriu();
		if(sqrt(x*x + y*y) <= 1.0) cerc++;
    }
    cout << 4.0 * cerc / precizie << '\n';
    return 0;
}
