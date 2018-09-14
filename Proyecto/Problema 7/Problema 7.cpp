#include <iostream>

using namespace std;

int primo(int n){
    if (n%2==0 && n!=2)return 0;
    int acum=0,counter=1;
    while(counter<(n/2)){
        if (n%counter==0){
            acum++;
        }
        if(acum>1)return 0;{
            counter=counter+2;
		}
    }
    return 1;
}

int nprimo(int n){ //n es el numero , del cual queremos hallar el mayor divisor primo pd:7
    int counter=0,i=0;
    for(i;counter<n+1;++i){
        if(primo(i)){
        counter++;
         }
    }
    return i-1;

}

int main(){
	int n;
	cin>>n;
	cout<<nprimo(n)<<endl;
}
