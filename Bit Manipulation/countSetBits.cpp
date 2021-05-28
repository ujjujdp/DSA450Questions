#include<bits/stdc++.h>
using namespace std;
int cc(int n)
{
    int x=1;
    int k=0;
    for(int i=0;i<n;i++)
    {
        x = 2*x + k;
        k = k * 2 + 1;
    }
    return x;
}
int countSetBits(int n)
    {
        if(n==1)
            return 1;
        int c=0;
        int i=1;    
        c=cc(log2(n));
        int n1 = (log2(n));
        n1 = 1<<n1;
        for(i=n1+1;i<=n;i++){
            int x=i;
            while(x)
            {
                if(1&x)
                    c++;
                x>>=1;    
            }
        }
        return c;
        
    }
int main() {
    // Write C++ code here
    int n;
    cin>>n;
    cout << countSetBits(n);
    // cout<<cc(3);
    return 0;
}