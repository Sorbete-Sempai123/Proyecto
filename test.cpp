#include <iostream>
#include <string>
using namespace std;

int palin(string x){
	for(int i=0;i<x.length()/2+1;i++){
		if(x[i]!=x[x.length()-i-1])return 0;
	}
	return 1;
}

int largestproduct(int n){
	int largest=0;
	for(int i=100;i>999;i++){
		for(int j=100;j<999;j++){
			int x=i*j;
			string a;
			auto a = to_string(x);
			if(palin(cadena){
				if(i*j>largest){largest=i*j;
				}
			}
		}
	}
}
int main(){
	string x;
	cin>>x;
	cout<<palin(x)<<endl;
}