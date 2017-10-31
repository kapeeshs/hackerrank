#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){

    int arr[100005],n,k,p,count=0,i,ct=0;
    cin>>n>>k;
    int a[n],b[n],flag=1;
    for(i=0;i<n;i++){
        a[i]=0;
        b[i]=0;}
    for(i=0;i<n;i++)
        scanf("%1d",&arr[i]);
    for(i=0;i<n/2;i++){
        if(arr[i]>arr[n-1-i]){
           arr[n-1-i]=arr[i];
            ct+=1;
            a[n-1-i]++;
        }
        if(arr[i]<arr[n-1-i]){
            arr[i]=arr[n-1-i];
            ct+=1;
            a[i]++;

        }}
    //cout<<ct;
        if(ct>k)
           { flag=0;
            goto out;
           }
   // cout<<ct<<"x"<<k;
        if(k-ct>0){
            p=0;
           while(ct<k&&p<(n+1)/2){
               //cout<<"ntering the loop\n";
               if(arr[p]!=9)
               {

               if((a[p]==1)||(a[n-1-p]==1))
                  {
                   arr[p]=9;arr[n-1-p]=9;
                   ct++;
               //cout<<"herer";
               }
                  else if(ct<k-1)
                      {
                      arr[p]=9;arr[n-1-p]=9;

                  ct+=2;
                  }
                   else if(ct<k)
                       {
                       if(p==(n-1-p))
                          { arr[p]=9;
                           ct+=1;}
                      // cout<<"here";
                   }
               if(ct==k)
                   break;
                   p++;
               }
               else
                   p++;
           }

        }
    //cout<<ct;
    out:
    if(flag==1){
        for(i=0;i<n;i++)
            cout<<arr[i];}

        //cout<<n;}
    else
        cout<<"-1";

    return 0;
}
