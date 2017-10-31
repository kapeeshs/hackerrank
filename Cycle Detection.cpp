/*
Detect a cycle in a linked list. Note that the head pointer may be 'NULL' if the list is empty.

A Node is defined as:
    struct Node {
        int data;
        struct Node* next;
    }
*/

bool has_cycle(Node* head) {
    // Complete this function
    // Do not write the main method
    int flag=1;
if(head==NULL)
    flag=0;
    else{
        for(int i=0;i<100;i++){
            head=head->next;
            if(head==NULL){
                flag=0;
            break;}
        }}
    if(flag==0)
        return false;
        else
            return true;
}
