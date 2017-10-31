#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,i,k=-1;
    long long sum;
    cin>>t;
    while(t--)
    {
        k=-1;
        sum=0;
int select[100005]={0},noselect[100005]={0};
    cin>>n;
    int b[n];
    for(i=0;i<n;i++){
        cin>>b[i];

    }
  /* for(i=1;i<n;i+=2){
       if(a[i-1]>a[i]){
           if(a[i-1]-a[i]<a[i]-1)
              a[i-1]=1;

       }
       else{
          a[i-1]=1;
       }

   }
    if(abs(a[n-2]-b[n-1])>a[n-2]-1)
        a[n-1]=b[n-1];
   else
       a[n-1]=1;
    for(i=1;i<n;i++){
        sum+=abs(a[i]-a[i-1]);
    }
        cout<<sum<<"\n";*/
        for(i=1;i<n;i++){
             select[i] = max(select[i-1], (b[i] - 1 + noselect[i-1]));
        noselect[i] = max(noselect[i-1], (b[i-1] - 1 + select[i-1]));
    }
    int p= max(select[n-1], noselect[n-1]);
        cout<<p<<endl;
        }

  return 0;
}
