#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;
long long superdigit(long long n){
    long long sum=0;
    if(n%10==n)
        return n;
    else{
        while(n>0){
            sum+=n%10;
            n/=10;
        }
        return(superdigit(sum));
    }
}

int main() {
    long long n,k,sum1=0,i;
    char str[200005];
    cin>>str>>k;
for(n=0;str[n]!='\0';n++);
    for(i=0;i<n;i++){
        sum1+=str[i]-48;
    }
     //cout<<n;
    sum1*=k;
    cout<<superdigit(sum1);
    return 0;
}
