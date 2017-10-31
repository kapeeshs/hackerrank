#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,t,i,j,m;

    cin>>t;
    while(t--){


        cin>>n;
        m=2*n;
        long long int a[m][m],b[4],s=0;
        for(i=0;i<m;i++){
            for(j=0;j<m;j++)
                cin>>a[i][j];
        }

        for(i=0;i<n;i++){

            for(j=0;j<n;j++){
                b[0]=a[i][j];
                b[1]=a[i][m-1-j];
                b[2]=a[m-1-i][j];
                b[3]=a[m-1-i][m-1-j];
                sort(b,b+4);
                s+=b[3];
            }
        }
        cout<<s<<"\n";
    }
    return 0;
}
