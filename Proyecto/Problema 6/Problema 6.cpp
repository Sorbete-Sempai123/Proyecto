#include <iostream>

using namespace std;

int sumsquaredifference(int n){//n es el rango    pd:6
    int acum=0; 
    for(int i=1;i<n+1;i++){//suma de cuadrados
     acum+=(i*i); //i*i+i*i....
     }
    int acum2=0;
    for(int i=1;i<n+1;i++){
    acum2+=i;     // (i+i+i...)**2
    }
     return acum2*acum2-acum;
}

int main(){
	int n;
	cin>>n;
	cout<<sumsquaredifference(n)<<endl;
}
