#include<iostream>
using namespace std;
#include<stdlib.h>
 
struct Node{
    int data;
    struct Node * next;
};
 
struct Node* f = NULL;
struct Node* r = NULL;

void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next; 
    }
}
 void push( int x){
     struct Node* n = (struct Node*) malloc(sizeof(struct Node));
    if(n==NULL){
        printf("Queue is Full");
    }
        
    //     n->data = x;
    //     n->next = NULL;
    //     r->next = n;
    //     // f->next = n;
    // }
    

    // else{
       // struct Node* n = (struct Node*) malloc(sizeof(struct Node));
        n->data = x;
        n->next = NULL;
         if(f==NULL){
            f=r=n;
        }
        else{
        r->next = n;
        r = n;
        // return r;
    }
 }

 
int pop(){
  struct Node* n = f ; 
  if(f==NULL){
        printf("Queue is Empty\n");
    }
    else{

        //struct Node* n = tp ;
        
        f=f->next;
        //top = (tp)->next;
        int x = n->data;
        //free(n);
        return x; 
    }
}
 
int peek(int pos){
    struct Node* ptr = f;
    for (int i = 0; (i < pos-1 && ptr!=NULL); i++)
    {
        ptr = ptr->next;
    }
    if(ptr!=NULL){
        return ptr->data;
    }
    else{
        return -1;
    }
}
 
int main(){
    cout << "m";
    push( 17);
    push( 18);
    push( 15);
    push( 7);
    cout << pop();
// cout << pop();cout << pop();
    //linkedListTraversal(f);
    for (int i = 1; i <= 4; i++)
    {
        printf("Value at position %d is : %d\n", i, peek(i));
    }
  
} // return 0;}
