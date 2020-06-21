#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define tc while(t--)
typedef long long ll;
#define rep(a,b) for(i=a;i<b;i++)
int main(){
	fast
	ll i,n,t,c,b,a,mn;
	cin>>t;
	tc{
		cin>>n;
		c=1;a=0;b=0;
		rep(0,n){
			cin>>a;
			if(i==0)
			{
				mn=a;
				continue;
			}
			if(a<mn)
			mn=a;
			if(a<=mn)
				c++;	
		}
		cout<<c<<"\n";
	}
}
