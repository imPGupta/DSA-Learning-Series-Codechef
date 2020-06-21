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
	ll i,n,t,l,mx=0;
	vec v;
	cin>>t;
	tc{
		cin>>n;
		v.push_back(n);
	}
	sort(v.begin(),v.end());
	l=v.size();
	rep(0,l){
		v[i]*=(l-i);
		if(mx<v[i])
		mx=v[i];
	}
	cout<<mx;
}
