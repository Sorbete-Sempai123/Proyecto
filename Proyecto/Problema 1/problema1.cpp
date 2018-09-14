#include<iostream>

using namespace std;

int mult3_5(int n) { //n -> suma de multiplos de 3 y 5 en un rango
	int acum;
	for (int i = 0; i < n; i++) {
		if (i % 3 == 0 || i % 5 == 0) {
			acum += i;
		}
	}
	return acum;
}

int main() {
	int x;//x es el rango
	cout << "Escriba el rango , para la suma de los multiplos de 3 y 5\n";
	cin >> x;
	cout << mult3_5(x) << endl;
	return 0;
}
