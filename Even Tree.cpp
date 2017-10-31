#include <cmath>
#include <cstdio>
#include <vector>
#include <list>
#include <iostream>
#include<bits/stdc++.h>
#include <algorithm>
using namespace std;

class Node{
    public:
    int parent;
    int index;
    int count;
    list<Node>::iterator point;
};

void input(int index,int parent,list<Node> &l){
    Node n1;
    n1.index=index;
    n1.parent=parent;
    n1.count=1;
    list<Node>::iterator p=l.begin();
    while(1){
        if(parent==(*p).index){
            n1.point=p;
            l.insert(p,n1);
            break;
        }
        p++;
    }
}

void show(list<Node> &l){
    list<Node>::iterator p=l.begin();
    while(p!=l.end()){
        cout<<(*p).index<<" ";
        p++;
    }
    cout<<endl;
}

int main() {
    int m,n;
    cin>>m>>n;

    list<Node> l;
    Node n1;
    int index,parent;
    n1.index=1;
    n1.parent=0;
    n1.point=l.end();
    l.push_front(n1);

    int count=0;

    for(int i=0;i<n;i++){
        cin>>index>>parent;
        input(index,parent,l);
    }
    while((*(l.begin())).index!=1){
        if((*(l.begin())).count%2==0){
            count++;
        }else{
            (*(l.begin())).point->count=(*(l.begin())).count+(*(l.begin())).point->count;
        }
        l.erase(l.begin());
    }
    cout<<count<<endl;
    return 0;
}
