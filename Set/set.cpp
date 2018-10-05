#include <iostream>
#include <set>
#include <iterator>
#define FOR(i,rango) for(int i=0;i<rango;i++)
#define FORX2(i1,rango1,i2,rango2) for(int i=0;i<rango1


using namespace std;
int main(){
	set <int> a;
	int x,i=0;
	cin>>x;
	FOR(i,x){
    a.insert(i);
    }
	set <int> :: iterator itr=a.begin();
	FOR(i,x){
	    cout<<*itr++;
	}
	return 0;
}
