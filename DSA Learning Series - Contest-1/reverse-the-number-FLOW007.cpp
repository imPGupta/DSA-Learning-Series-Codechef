#include<iostream>
using namespace std;
typedef long long ll;
int main(){
	ll i,n,t,r;
	cin>>t;
	while(t--){
		cin>>n;
		i=0;
		while(n>0){
			r=n%10;
			if(r!=0 || i==1){
				i=1;
				cout<<r;
			}
			n/=10;
		}
		cout<<"\n";
	}
}
