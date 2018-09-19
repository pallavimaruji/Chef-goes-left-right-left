#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,r,right,left,i,flag=0;
        cin>>n>>r;
        long long int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        if(a[0]>r)
        {
            right=a[0];
            left=0;
        }
        else
        {
            left=a[0];
            right=INT_MAX;
        }
        for(i=1;i<n;i++)
        {
            if(a[i]>r)
            {
                if(a[i]<right && a[i]>left)
                {
                    right=a[i];
                    flag=1;
                }
                else
                {
                    flag=0;
                    break;
                }
            }

            else if(a[i]<r)
            {
                if(a[i]>left && a[i]<right)
                {
                    left=a[i];
                    flag=1;
                }
                else
                {
                    flag=0;
                    break;
                }
            }
        }
        if(flag==1)
            cout<<"YES"<<endl;
        else if(flag==0)
            cout<<"NO"<<endl;
    }
    return 0;
}
