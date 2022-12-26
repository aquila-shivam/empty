#include<bits/stdc++.h>
int N = 1e9;
int arr[];
class HashMap
{
public:
	int n;
	HashMap(int M)
	{
		n = M;
		new arr[n];
	}

	void insert(int x)
	{

	}

	void delete(int x)
	{

	}
	bool search(int x)
	{
		if(arr[x%M] == x)
			return true;
	}

};
int main()
{
	HashMap hm(100);

}