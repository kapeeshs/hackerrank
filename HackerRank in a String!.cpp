#include <bits/stdc++.h>

using namespace std;

int main(){
    int t,i,j;
    cin >> t;
    char str[10005];
     while(t--){

         cin>>str;
         string str1="hackerrank";
         i=0;
         j=0;
         while(str[i]!='\0'){
          if(str[i]==str1[j]&&j<10){
              j++;
          }
             i++;
         }
         if(j==10)
             cout<<"YES"<<"\n";
             else
                 cout<<"NO"<<"\n";
     }

    return 0;
}
