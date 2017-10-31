#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
cin>>t;

while(t--){
    int n, k;
   cin>>n>>k;

    if(k==0){
        for(int i=1; i<=n; i++)
            cout<<i<<" ";
        cout<<"\n";
    }
    else if(n % (2*k))
        printf("-1\n");
    else{
        int p=0;
        for(int i=1; i<=n; i++){
             p?cout<<i-k<<" ":cout<<i+k<<" ";
            if(i%k==0) p=!p;
        }


        cout<<"\n";
    }

}
return 0;
}
