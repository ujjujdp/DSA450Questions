#include<bits/stdc++.h>
using namespace std;

void negitiveToBegining(int arr[],int n)
{
    int positive=0;
    int negative=n-1;
    while(positive<negative)
    {
        if(arr[positive]>0 && arr[negative]<0)
        {
            swap(arr[positive],arr[negative]);
            positive++;
            negative--;
        }
        else if(arr[positive]<0 && arr[negative]>0)
        {
            positive++;
            negative--;
        }   
        else if(arr[positive]<0 && arr[negative]<0)
        {    
            positive++;
        }
        else
        {
            negative--;
        }

    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    negitiveToBegining(arr,n);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}