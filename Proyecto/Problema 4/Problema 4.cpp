#include <iostream>
#include <string>
#include <sstream>

using namespace std;

string IntToString (int a){ //este parte tube que sacarlo de otro lado u.u
    ostringstream temp;
    temp<<a;
    return temp.str();
}

int palin(string x){                //revisa si el string es un palindromo o no
	for(int i=0;i<x.length()/2+1;i++){
		if(x[i]!=x[x.length()-i-1])return 0;
	}
	return 1;
}

int largestproduct(int n){     //aqui se hacen las multiplicaciones para hallar el numero
	int largest=0; //el mayor valor del producto
	for(int i=100;i<999;i++){
		for(int j=100;j<999;j++){
			int x=i*j; //a x le damos el valor de la multiplicacion
			if(palin(IntToString(x))){/*usamos la funcion INTOSTRING
										para convertirlo en un string y poder ver si es un palindromo o no*/
				if(i*j>largest){
					largest=i*j;   //aqui se hace la comparacion , y si es mayor , es reemplazado
				}
			}
		}
	}
	return largest;
}

int main(){
	int x;
	cin>>x;
	cout<<largestproduct(x)<<endl;
}
