#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define tc while(t--)
typedef long long ll;
#define rep(a,b) for(i=a;i<b;i++)
int main(){
	fast
	ll i,n,t,l,r,a;
	string og,s;
	cin>>t;
	tc{
		cin>>a;
		cin>>og;
		l=0;
		rep(0,a){
			cin>>s;
			if((s.compare("CONTEST_WON"))==0)
			{
				cin>>r;
				if(r<20)
				l+=320-r;
				else
				l+=300;
			}
			if((s.compare("TOP_CONTRIBUTOR"))==0)
			l+=300;
			if((s.compare("BUG_FOUND"))==0)
			{
				cin>>r;
				l+=r;
			}
			if((s.compare("CONTEST_HOSTED"))==0)
			l+=50;
		}
		if((og.compare("INDIAN"))==0)
		cout<<l/200<<"\n";
		else
		cout<<l/400<<"\n";
		
	}
}
