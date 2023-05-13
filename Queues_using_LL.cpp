#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

Node* front = NULL;
Node* rear = NULL;

void Enqueue(int value){
    Node* new_node = new Node();
    new_node -> data = value;
    new_node -> next = NULL;
    if(front == NULL && rear == NULL){
        front = rear = new_node;
        return;
    }
    rear -> next = new_node;
    rear = new_node;
}

void Dequeue(){
    Node* temp = front;
    if(front == NULL){
        cout<<"Queue is empty"<<endl;
        return;
    }
    if(front == rear){
        front = rear = NULL;
    }
    else{
        front = front -> next;
    }
    delete(temp);
}

void Print(){
    Node* temp = front;
    while(temp != NULL){
        cout<<temp -> data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

int main(){
    Enqueue(2);
    Print();
    Enqueue(4);
    Print();
    Enqueue(6);
    Print();
    Dequeue();
    Print();
    return 0;
}
