#include <iostream>
#include <vector>

using namespace std;

int dividible(int n,int m){//n es el numero que debe ser dividido en el rango de m
	for(int k=1;k<m+1;k++){
		if(n%k!=0){
			return 0;
		}
	}
	return 1;
}
int mcm(int n){//n es el rango osea , mcm de 1 hasta 20
	int i=1;
	for(i;;){//no pongo i++ en el tercer parametro del for para evitar que i sea 1+ de valor real
		if(dividible(i,n)){
			return i;
		}
		else {
			i++;
		}
	}
	return i;
}

int main(){
	int x,y;
	cin>>x;
	cout<<mcm(x);
	
}

