#include<bits/stdc++.h>
using namespace std;
void f(int arr[],int N,int k)
{	
	unordered_map<int,int>mp;
	for(int i=0;i<k;i++)
	{
		mp[arr[i]]++;
	}
	cout<<mp.size()<<" ";

	for(int i=k;i<N;i++)
	{
		mp[arr[i-k]]--;
		if(mp[arr[i-k]] == 0)
			mp.erase(arr[i-k]);
		mp[arr[i]]++;
		cout<<mp.size()<<" ";
	}
}

int main()
{
	int N;
	cin>>N;
	int arr[N];
	for(int i=0;i<N;i++)
	{
		cin>>arr[i];
	}
	int k;
	cin>>k;
	f(arr,N,k);
	return 0;
}