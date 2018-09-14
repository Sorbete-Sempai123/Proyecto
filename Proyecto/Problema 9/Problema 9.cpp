#include<iostream>
#include<string>

using namespace std;

int comb(int n){      //n es el "limite" ya que tiene que cumpli que c>b>a
	for(int i=1;i<n;i++){
		for(int j=1;j<i;j++){
			for(int k=1;k<j;k++){
				if(k*k+j*j==i*i){
					if(i+j+k==1000){
						cout<<"a: "<<i<<" :: b : "<<j<<" :: c :"<<k<<endl;
						cout<<"El producto es :"<<i*j*k<<endl;
					}
				}
			}
		}
	}
}

int main(){
	int n;
	cin>>n;
	comb(n);
	return 0;
}




