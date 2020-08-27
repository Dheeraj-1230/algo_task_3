#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	int m;
	cin>>m;
	int n;
	cin>>n;
	int *arr=new int[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	sort(arr,arr+n);
	vector <int> maxx;
	vector <int> min;
	for(int i=n-m;i<n;i++)
	  maxx.push_back(arr[i]);
	for(int i=0;i<n-m;i++)
	  min.push_back(arr[i]);
	int i=0;
	while(i<n-m)
	{
		maxx[0]+=min[0];
		sort(maxx.begin(),maxx.end());
		min.erase(min.begin());
		i++;
	}
	cout<<maxx[0]<<endl;
	return 0;
}
