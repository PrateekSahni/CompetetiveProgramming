#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false)
int main()
{
	fastio;
	int t;
	cin>>t;
	while(t--)
	{
		bool flag = false;
		int n,k,x,y;
		cin>>n>>k>>x>>y;
		for(int i=0 ; i<2*n ; i++)
		{
			x = x+k;
			if(x%n==y)
			{
				flag = true;
				break;
			}
		}
		if(flag)
		{
			cout<<"YES";
		}
		else{
			cout<<"NO";
		}
		cout<<"\n"; 
	}
	return 0;
}
