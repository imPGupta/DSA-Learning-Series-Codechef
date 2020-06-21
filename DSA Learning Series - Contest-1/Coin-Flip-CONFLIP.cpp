#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define tc while(t--)
typedef long long ll;
#define rep(a,b) for(j=a;j<b;j++)
int main(){
	fast
	ll i,n,t,g,q,j;
	cin>>t;
	tc{
		cin>>g;
		rep(0,g){
			cin>>i>>n>>q;
			if(n&1){
				if(q==1 && i==1 || q==2 && i==2)
				cout<<n/2<<"\n";
				else
				cout<<(n+1)/2<<"\n";
			}
			else
			cout<<n/2<<"\n";
		}
	}
}
