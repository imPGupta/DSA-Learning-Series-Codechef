#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define tc while(t--)
typedef long long ll;
typedef vector<ll> vec;
#define rep(a,b) for(i=a;i<b;i++)
int main(){
	fast
	ll i,n,t,c;
	cin>>t;
	tc{
		c=0;
		cin>>n;
		for(i=5;n/i>=1;i*=5)
		c+=n/i;
		cout<<c<<"\n";
	}
}
