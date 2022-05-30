#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int T;
	cin>>T;
	while(T--)
	{
		ll n; cin>>n;
        if(n%2==0)
        cout<<"0"<<endl;
        else
        {
            ll x,y,tmp=0;
            while(n>0)
            {
                x=n%10;
                n=n/10;
                if(x%2==0)
                tmp++;
            }
            if(x%2==0)
            cout<<"1"<<endl;
            else if(tmp>0)
            cout<<"2"<<endl;
            else if(tmp==0)
            cout<<"-1"<<endl;
            }
        }
        
	
	return 0;
}
