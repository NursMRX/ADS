#include<bits/stdc++.h>
using namespace std;

class stack(){
    public:
    Node *top;
    int size;

    stack(){
        top = NULL;
        size = 0;
    }

    void push(int data){
        Node *node = new Node(data)
        node -> next = top;
        top = node;
        size++;
    }

    void pop(){
        if(top != NULL){
            top = top -> next;
            size--;
            delete top;
        }
    }

    bool empty(){
        return (size == 0);
    }

    int size(){
        return this->size;
    }
}

class queue(){
    public: 
    Node *front;
    Node *end;
    int size;

    
    queue()
    {
        front = NULL;
        end = NULL;
        size = 0;
    }

    void push(int data){
        Node *newNode = new Node(data)
        if(front == NULL){
            end = front = newNode;
            return;
        }
        end -> next = newNode;
        end = newNode;
        size++;
    }

    void pop(){
        if(front == NULL) return;
        Node *tmp = front;
        front = front -> next;
        if(front == NULL) end = NULL;
        delete tmp;
        size--;
    }
}

class LinkedList(){
    public:
    Node *head;
    Node *tail;
    size;

    LinkedList(){
        head = NULL;
        tail = NULL;
        size = 0;
    }

    void front_head(int data){
        Node *newNode = new Node(data)
        if(head == NULL){
            head = tail = newNode;
        }
        else{
            newNode -> prev = head;
            head -> next = newNode;
            head = newNode;
        }
        size++;
    }

    void push_tail(int data){
        Node *newNode = new Node(data);
        if(tail == NULL){
            tail = head = newNode;
        }
        else{
            newNode -> prev = tail;
            tail -> next = newNode;
            tail = newNode;
            
        }
        size++;
    }

    void pop_back(){
        if(tail != NULL){
            tail = tail -> prev;
            if(tail != NULL) tail -> next = NULL;
            else head = NULL;
        }
        size--;
    }

    void pop_front(){
        if(head != NULL){
            head = head -> next;
            if(head != NULL) head -> prev == NULL;
            else tail = NULL;
        }
    }

    void del_node(){
        else{
            Node *a = node->prev;
            Node *b = node->next;
            a->next = b;
            b->prev = a;
        }
    }
}



