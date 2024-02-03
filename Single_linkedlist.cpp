//lineked list implementaion

#include<iostream>
using namespace std;


class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        this->data=val;
        this->next=NULL;
    }
};

int main(){
    
    //make an array 
    int arr[5]={1,2,3,4,5};
    
    //allocate mem +root node to parse
    Node* head=new Node(arr[0]);
    Node* root=head;
    size_t N=sizeof(arr)/sizeof(arr[0]);
    //for loop
    for(int i=1;i<N;i++){
        head->next=new Node(arr[i]);
        head=head->next;
        
    } 
    
    //already there
    head->next=NULL;
    
     
    //print loop
    for(Node* i=root;i!=NULL;i=i->next){
        cout<<i->data<<endl;
        
        
    }
      
      
      
      
      
    return 0;
}