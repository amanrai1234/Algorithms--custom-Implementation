//double linked list impelmentation


#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int val){
        this->data=val;
        this->next=NULL;
        this->prev=NULL;
    }
    
};

int main(){
    
    //initn arrray;
    
    int arr[5]={1,23,2,3,5};
    Node* temp;
    
    //parse the array and allocate the memomry
    Node* head=new Node(arr[0]);
    Node* root=head;
    head->prev=NULL;
    size_t N= sizeof(arr)/sizeof(arr[0]);
    //cout<<N<<endl;
    for(int i=1;i<N;i++){
        temp=head;
        head->next=new Node(arr[i]);
        head=head->next;
        head->prev=temp;
        
    }
    
    
    //give enull to the end element
    head->next=NULL;
    
    
    
    //print the linked lsit forwatd nad bcakward
    for(Node* i=head;i!=NULL;i=i->prev){
        cout<<i->data<<endl;
    }
    
    return 0;
}