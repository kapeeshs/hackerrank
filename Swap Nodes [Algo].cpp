#include<bits/stdc++.h>
using namespace std;
struct node {
    int data;
    node *left;
    node *right;
};
void swaps(node *root,int h){
    if(root==NULL)
        return ;

    if(h==0){
        node *temp;
        temp=root->left;
        root->left=root->right;
        root->right=temp;
    }
    else{
        swaps(root->left,h-1);
        swaps(root->right,h-1);
    }
}
void inorder(node *root){
     if(root==NULL)
         return ;
    else{
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}

int main(){
    int n,i,a,b;
    cin>>n;
    node *arr[n];
    for(i=0;i<n;i++){
        node *tmp=new node();
        tmp->data=i+1;
        arr[i]=tmp;
    }
    for(i=0;i<n;i++){
        cin>>a>>b;
        if(a==-1)
            arr[i]->left=NULL;
        else
            arr[i]->left=arr[a-1];
         if(b==-1)
            arr[i]->right=NULL;
        else
            arr[i]->right=arr[b-1];
    }
   node *root=arr[0];
    int t,k;
    cin>>t;
    while(t--){
        cin>>k;
        i=k;
        while(i<n){
           swaps(root,i-1);
            i+=k;
        }
      inorder(root);
        cout<<"\n";
    }
    return 0;
}
