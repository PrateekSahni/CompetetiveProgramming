#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define LIMIT 3000000
#define fastio ios_base::sync_with_stdio(false)
int main()
{
	fastio;
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		ll total = 0;
		int ans = -1;
		for(int i=0 ; i<n ; i++)
		{
			int num;
			cin>>num;
			total = total + (ll)num - (ll)k;
			if(total<0)
			{
				ans = i+1;
				break;
			}
		}
		if(ans>0)
		{
			cout<<ans<<"\n";
		}
		else
		{
			double a= (double)total/(double)k;
			ll temp = 0;
			temp = ((long)a)+ll(n+1);
			cout<<temp<<"\n";
		}
	}
	return 0;
}
