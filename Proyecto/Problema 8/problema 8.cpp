#include <iostream>
#include <string>
using namespace std;
int main(){
	string x;           //necesito que sea un string, porque el numero es demasiado grande
	long long largest=0,n;
	long long acum=1;
	cin>>x;             //el numero en si
	cout<<"digitos\n";
	cin>>n;             //los numeros consecutivos que se multiplican
	for(int i=0;i<x.length()-(n-1);i++){
		acum=1;
		for(int j=i;j<i+n;j++){
			acum=acum*((int)x[j]-48);
		}
		if(acum>largest)largest=acum;
	}
	cout<<largest<<endl;
}



