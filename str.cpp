#include<bits/stdc++.h>
using namespace std;

void fun(char arr[],int N)
{
	for(int i=0;i<N;i++)
	{
		if(islower(arr[i]))
			arr[i]=arr[i]-32;
		else 
			arr[i]=arr[i]+32;
	}
}

void f(char arr[],int N)
{
	for(int i=0;i<N;i++)
	{
		arr[i]=arr[i]^32;
	}
}

int main()
{

	char arr[] = "shivaM";
	int N = sizeof(arr);
	f(arr,N);
	cout<<arr;
	return 0;
}