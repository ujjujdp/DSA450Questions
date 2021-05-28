#include<bits/stdc++.h>
using namespace std;

int doUnion(int a[], int n, int b[], int m)  
{
        //code here
        vector<int> v;
        int i=0;
        int j=0;
        while(i<n && j<m)
        {
            if(a[i]==a[i+1])
            {
                i++;
                continue;
            }
            if(b[j]==b[j+1])
            {
                j++;
                continue;
            }
            if(a[i]==b[j])
            {
                v.push_back(a[i]);
                i++;
                j++;
            }
            else if (a[i]<b[j])
            {
                v.push_back(a[i]);
                i++;
            }
            else if (a[i]>b[j])
            {
                v.push_back(b[j]);
                j++;
            }
        }
        while(i<n)
        {
            if(a[i]==a[i+1])
            {
                i++;
                continue;
            }
            v.push_back(a[i]);
                i++;
        }
        while(j<m)
        {
            if(b[j]==b[j+1])
            {
                j++;
                continue;
            }
            v.push_back(b[j]);
                j++;
        }
        return v.size();
}

int doIntersection(int a[], int n, int b[], int m)  
{
        //code here
        vector<int> v;
        int i=0;
        int j=0;
        while(i<n && j<m)
        {
            if(a[i]==a[i+1])
            {
                i++;
                continue;
            }
            if(b[j]==b[j+1])
            {
                j++;
                continue;
            }
            if(a[i]==b[j])
            {
                v.push_back(a[i]);
                i++;
                j++;
            }
            else if (a[i]<b[j])
            {
                i++;
            }
            else if (a[i]>b[j])
            {
                j++;
            }
        }
        return v.size();
}

int main()
{
    int n,m;
    cin>>n>>m;
    int a[n];
    int b[m];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<m;i++)
        cin>>b[i];
    cout<<doIntersection(a,n,b,m)<<" ";
    cout<<doUnion(a,n,b,m);

}