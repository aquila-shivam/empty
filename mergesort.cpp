#include<bits/stdc++.h>
using namespace std;

void merge(int arr[],int low,int mid,int high)
{
    int p1=low,p2=mid+1,k=0;
    int len = high-low+1;
    int temp[len]={0};
    while(p1 <= mid and p2 <= high)
    {
        if(arr[p1] <= arr[p2])
            temp[k++]=arr[p1++];
        else
            temp[k++]=arr[p2++];
    }
    
    while(p1 <= mid)
    {
        temp[k++]=arr[p1++];
    }
    
     while(p2 <= high)
    {
        temp[k++]=arr[p2++];
    }
    
    for(int i=low,j=0;j<len;i++,j++)
    {
        arr[i]= temp[j];
    }
}

void mergeSort(int arr[],int low,int high)
{
    if(low >= high)
        return;
    int mid = low +(high-low)/2;
    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    merge(arr,low,mid,high);
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        mergeSort(arr,0,n-1);
        
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" "; 
        }
    return 0;
}
