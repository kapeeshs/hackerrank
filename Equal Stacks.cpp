#include<bits/stdc++.h>

using namespace std;
int maxheight(int h1[],int h2[],int h3[],int n1,int n2,int n3,int sum1,int sum2,int sum3,int i,int j,int k){
    if(sum1==sum2&&sum1==sum3)
        return sum1;
    else{
        if(sum1>=sum2&&sum1>=sum3){
            sum1=sum1-h1[(n1-1)-(i)];
            i--;
            return(maxheight(h1,h2,h3,n1,n2,n3,sum1,sum2,sum3,i,j,k));
        }
        else if(sum2>=sum1&&sum2>=sum3){
            sum2=sum2-h2[(n2-1)-j];
            j--;
            return(maxheight(h1,h2,h3,n1,n2,n3,sum1,sum2,sum3,i,j,k));
        }
        else{
            sum3=sum3-h3[(n3-1)-k];
            k--;
            return(maxheight(h1,h2,h3,n1,n2,n3,sum1,sum2,sum3,i,j,k));
        }

    }
}
int main(){
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    int h1[n1],h2[n2],h3[n3];

    int i,j,k;
     int sum1=0,sum2=0,sum3=0;

    for(i=0;i<n1;i++){

        cin>>h1[i];
    sum1+=h1[i];
    }
    for(i=0;i<n2;i++){
        cin>>h2[i];
    sum2+=h2[i];}
    for(i=0;i<n3;i++){
        cin>>h3[i];
    sum3+=h3[i];}
    i=n1-1;
    j=n2-1;
    k=n3-1;
   int result=maxheight(h1,h2,h3,n1,n2,n3,sum1,sum2,sum3,i,j,k);
    cout<<result;
    return 0;
}
