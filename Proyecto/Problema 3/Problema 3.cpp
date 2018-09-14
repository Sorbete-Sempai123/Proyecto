#include <iostream>

using namespace std;

int primo(int n){
    if (n%2==0 && n!=2)return 0;
    int acum=0,counter=1;
    while(counter<(n/2)){
        if (n%counter==0){
            //acum++;cout<<acum<<endl;
        }
        if(acum>1)return 0;
            counter=counter+2;

    }
    return 1;
}


int mayprimo(long long n){ //n es el numero , del cual queremos hallar el mayor divisor primo   pd:3
    long long mayor=0;
    for(long long i=1;i<n/2+1;i++){
        if(n%i==0 && primo(i)){
              mayor=i;
        //cout<<i<<endl;
         }
        //cout<<i<<"\r";
    }
    return mayor;

}

int main(){
	long long x;
	cin >> x ;
	cout << mayprimo(x) << endl ;
}
