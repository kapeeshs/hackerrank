/*
  Merge two sorted lists A and B as one linked list
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* MergeLists(Node *headA, Node* headB)
{
  // This is a "method-only" submission.
  // You only need to complete this method
    Node *answer,*c=new Node;
    c->next=NULL;
    answer=c;
    if(headA==NULL){
        while(headB!=NULL){
            c->next=headB;
            headB=headB->next;
            c=c->next;
        }

    }
    if(headB==NULL){
         while(headA!=NULL){
            c->next=headA;
            headA=headA->next;
            c=c->next;
        }
    }
    while(headA!=NULL && headB!=NULL){
        if(headA->data<headB->data){
            c->next=headA;
            headA=headA->next;
        }
        else{
            c->next=headB;
            headB=headB->next;
        }
        c=c->next;
    }
    while(headB!=NULL){
        c->next=headB;
        headB=headB->next;
    }
    while(headA!=NULL){
        c->next=headA;
        headA=headA->next;
    }
    return answer->next;
}
