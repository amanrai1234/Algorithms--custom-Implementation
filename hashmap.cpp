#include<iostream>
#include<vector>
using namespace std;


class HASH{
    public:
    int size;
    vector<int> vec;
    HASH(int size){
        this->size=size;
        vec.resize(size);
    }
    ~HASH(){
        
    }
    
    void add(int keys, int value){

        int key=hashing(keys);
        //check if the hasshing > size and handle this exception

        //hashing
        //append the values and key pair
        vec[key]=value;
        
    }
    
    void show(int keys){
        int key=hashing(keys);
        //check and return
        if(vec[key]==NULL){
            cout<<"this element is not present in the list";
        }
        
        cout<<vec[key];
        
        
    }
    
    int hashing(int key){
        if (key>=this->size){
            this->size=this->size*2;
            vec.resize(this->size);
        }
        int vals=key%this->size;
        return vals;
    }
};



int main(){
    HASH* obj=new HASH(50);
    obj->add(5,23423);
    obj->show(5);
    
    delete obj;
    
    
    return 0;
}