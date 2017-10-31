#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;


int main() {
    int n,i,b,c,f=0,p,q;
    cin>>n;
    int arr[n+2],brr[n+2],crr[n+2],drr[n+2];
   for(i=1;i<=n;i++){
       cin>>arr[i];
       brr[i]=arr[i];
       crr[i]=arr[i];
       drr[i]=arr[i];
   }
    sort(brr+1,brr+n+1);
    for(i=1;i<=n;i++){
        if(crr[i]==brr[i])
            continue;
        else
            break;
    }
    if(i==n+1){
       f=1;
        }
    else{
        for(i=1;i<=n;i++){
            if(arr[i]!=brr[i]){
                b=i;
            }}
               for(i=n;i>=1;i--){
            if(arr[i]!=brr[i]){
                c=i;
            }}
        int tmp=arr[c];
        arr[c]=arr[b];
        arr[b]=tmp;
        for(i=1;i<=n;i++){
        if(arr[i]==brr[i])
            continue;
            else break;
    }
    if(i==n+1){
        f=2;
        }
        //cout<<"yes\n";
        //cout<<"swap"<<" "<<c<<" "<<b;}
        else{
         p=c;
            q=b;
   int tmp;
    while(c<b){
        tmp=drr[c];
        drr[c]=drr[b];
        drr[b]=tmp;

        c++;
        b--;
    }

             for(i=1;i<=n;i++){
        if(drr[i]==brr[i])
            continue;
                 else break;
    }
    if(i==n+1){
        f=3;
       }

    }}
    if(f==1)
        cout<<"yes";
    else if(f==2){
        cout<<"yes"<<endl;
        cout<<"swap"<<" "<<c<<" "<<b;}
        else if(f==3){
            cout<<"yes"<<endl;
        cout<<"reverse"<<" "<<p<<" "<<q;
        }
    else cout<<"no";
    //cout<<f;

    return 0;
}
