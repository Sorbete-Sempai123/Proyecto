#include <iostream>

using namespace std;

int primo(int n){
    if (n%2==0 && n!=2 || n<2)return 0;
    int acum=0,counter=1;
    while(counter<(n/2)){
        if (n%counter==0){
            acum++;
        }
    	if(acum>1)return 0;
            counter=counter+2;

    }
    return 1;
}

long long SPM(long long n){ //Suma de Primos Menores a n
	long long acum=0;
	if(n>=2)acum+=2;
	for(long long i=1;i<n;i+=2){
		cout<<i<<" "<<primo(i)<<"---\n";
		if(primo(i)){
			acum+=i;
			cout<<acum<<"\r";
		}
	}
	return acum;
}

int main(){
	long long n;
	cin>>n;
	cout<<SPM(n)<<endl;
}
