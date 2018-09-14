#include <iostream>

using namespace std;

int fibonacci(int n){ //suma de pares menores que n           pd:2
	int a=0,b=1,acum=b,acum_2=0;
	for(int i=0;(a<n && b<n);i++){
		acum=a+b;
		if(!(acum%2)){      //aqui se hace la comparacion , si es par o no
			acum_2+=acum;
		}
		a=b;b=acum;
	}
	return acum_2;
}

int main(){
	int n;//Es es rango de la operacion
	cin >> n;
	cout << fibonacci(n) << endl;
}
