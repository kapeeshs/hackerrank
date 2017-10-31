#include<bits/stdc++.h>
using namespace std;


int main() {
    int a[1003]={0};
    int b[1003]={0};
    int n,x,y;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        a[x]++;
    }
    for(int i=0;i<n;i++){
        cin>>y;
        b[y]++;
    }
    int p=0;
    for(int i=0;i<1002;i++){
        if(a[i]>0&&b[i]>0){
            p+=(min(a[i],b[i]));
        }
    }
    if(p<n){
        cout<<p+1<<"\n";
    }
    else {
        cout<<p-1<<"\n";
    }
    return 0;
}
