#include<iostream>
#include<string.h>
using namespace std;
typedef long long ll;
int main(){
	ll i,n,t,r,l,k,j,f;
	string s;
	cin>>t;
	while(t--){
		cin>>s;
		f=0;
		l=s.size();
		if(l&1)
			k=(l+1)/2;
		else
			k=l/2;
		for(i=0;i<l/2;i++)
		{
			r=s[i];f=0;
			for(j=k;s[j];j++){
				if(r==s[j]){
				s.erase(s.begin()+j);
				f=1;
					break;
				}
			}
			if(f==0)
			break;
		}
		if(s.size()==k)
		cout<<"YES\n";
		else
		cout<<"NO\n";
	}
}
