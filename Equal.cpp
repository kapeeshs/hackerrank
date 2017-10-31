#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n],i,sum1=0,sum2=0,sum3=0,left;
        for(i=0;i<n;i++)
            cin>>a[i];
          sort(a,a+n);

        for(i=0;i<n;i++)
        {
            left=a[i]-a[0];
            sum1+=left/5;
            left%=5;
            sum1+=left/2;
            left%=2;
            sum1+=left/1;

            left=a[i]-(a[0]-1);
            sum2+=left/5;
            left%=5;
            sum2+=left/2;
            left%=2;
            sum2+=left/1;

            left=a[i]-(a[0]-2);
            sum3+=left/5;
            left%=5;
            sum3+=left/2;
            left%=2;
            sum3+=left/1;
        }
        sum1=min(sum1,sum2);

        cout<<min(sum1,sum3)<<endl;
    }
}
