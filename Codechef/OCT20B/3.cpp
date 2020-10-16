#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false)
int main()
{
	fastio;
	int t;
	cin>>t;
	
	int ar2[25];
	ar2[0] = 1;
	for(int i=1 ; i<18 ; i++)
	{
		ar2[i] = ar2[i-1]*2;
		//cout<<ar2[i]<<" ";
	}
	//cout<<"\n";
	while(t--)
	{
		int n;
		cin>>n;
		
		
		if(n==1)
		{
		    cout<<"1"<<"\n";
		    continue;
		}
		
		bool f = false;
		for(int i=0 ; i<18 ; i++)   
		{
			if(n==ar2[i])
			{
				f = true;
				break;
			}
		}
		if(f)
		{
			cout<<"-1"<<"\n";
			continue;
		}
		
		if(n==3)
		{
			cout<<"2 3 1";
		}
		else
		{
			cout<<"2 3 1 ";
			for(int i=4 ; i<=n ; i++)
			{
				bool flag = true;
				for(int j=1 ; j<18 ; j++)
				{
					if(i==ar2[j])
					{
						cout<<i+1<<" "<<i<<" ";
						i+=1;
						flag = false;
						break;
					}
				}
				if(flag)
					cout<<i<<" ";
			}
		}
		cout<<"\n";
	}
	return 0;
}
