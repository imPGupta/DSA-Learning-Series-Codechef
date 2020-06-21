#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define tc while(t--)
typedef long long ll;
int main(){
	fast
	ll n,t,k,a,b,c,s,lt;
	cin>>t;
	tc{
		cin>>k>>a>>b;
		n=a+b;
		if(k==2 || n==10)
		{
			if((a+b)%3)
			cout<<"NO\n";
			else
			cout<<"YES\n";
			continue;
		}
		c=(a+b)%10;
		if(c==5){
			if((a+b+c)%3)
			cout<<"NO\n";
			else
			cout<<"YES\n";
			continue;	
		}
		lt=(k-3)%4;
		n+=c;
		c=(2*c)%10;
		s=(2*((k-3)/4))%3;
		while(lt--){
			n+=c;
			c=(2*c)%10;
		}
		if((s+n)%3)
		cout<<"NO\n";
		else
		cout<<"YES\n";
	}
}
