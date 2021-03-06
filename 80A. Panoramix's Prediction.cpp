#include <iostream>
#include <cmath>
#include <cstdio>
#include <algorithm>
using namespace std;
typedef long long ll; 

int prime[]={2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};

int main()
{
	int n, m; 
	cin>>n>>m;
	for (int i=0; i<=14; i++)
	{
		if(prime[i]>n)
		{
			if(prime[i]==m)
			{
				cout << "YES"<<endl;
				return 0;
			}
			cout<<"NO"<<endl;;
			return 0; 
		}
	}
	cout<<"NO"<<endl;
	return 0;
}


//another interesting process:

/*
#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;

bool check (int n)
{
	int i; 
	bool flag; 
	flag = true;
	for (i=2; i<=n/2; i++)
	{
		if (n%2==0)
		{
			flag=false;
			break;
		}
	}
	if(flag==false)
	{
		return false;
	}
	else 
	{
		return true;
	}
}
int main()
{
	int n, m;
	int i, j;
	bool flag;
	cin>>n>>m;
	for(i=n+1; i<=m; i++)
	{
		flag=check(i);
		if (flag==true)
		{
			break;
		}
	}
	if(i==m&&flag==true)
	{
		cout<<"Yes"<<endl;
	}
	else 
	{
		cout<<"No"<<endl;
	}
	return 0;
}
/*
