#include<iostream>
using namespace std;
int main()
{
	int arr[100001]={0};
	for(int i=2;i*i<100001;i++)
	{
		for(int j=i*i;j<100001;j+=i)
		{
			if(arr[j]==0)
			arr[j]=-1;
		}
	}
	int count=0;
int j=1;
	for(int i=2;i<100001;i++){
	if(arr[i]==0)
	{
		count+=j;
		j++;
	   arr[i]=count;
    }
    else
    arr[i]=count;
}
int n;
cin>>n;
cout<<arr[n]<<endl;
	return 0;
}
