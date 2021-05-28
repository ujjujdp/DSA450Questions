void sort012(int a[], int n)
{
    int c[3]={0,0,0};
    for(int i=0;i<n;i++)
    {
        c[a[i]]++;
    }
    for(int i=0;i<n;i++)
    {
        if (c[0]>0)
        {
            a[i]=0;
            c[0]--;
            continue;
        }
        if (c[1]>0)
        {
            a[i]=1;
            c[1]--;
            continue;
        }
        if (c[2]>0)
        {
            a[i]=2;
            c[2]--;
            continue;
        }
    }
}