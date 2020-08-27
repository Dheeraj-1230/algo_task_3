#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int count=0;
	while(n/10>=1)
	{
		int sum=0;
		int t=n;
		while(t>0)
		{
			sum+=t%10;
			t/=10;
		}
		count++;
		n=sum;
	}
	cout<<count<<endl;
	return 0;
}
