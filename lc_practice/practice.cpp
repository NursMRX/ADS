#include<iostream>
#include<stack>
using namespace std;

// int main(){
//     int size; cin >> size;
//     stack<int> st;
//     for(int i = 0; i < size; i++){
//         int num; cin >> num; 
//         st.push(num);
//     }

//     for(int i = 0; i < size; i++){
//         cout << st.top() << " ";
//         st.pop();
//     }
// }


class stack{
    public:
    int sz;
    Node *top;


    stack(){
        top = NULL;
        sz = 0;
    }

    void push(int data){
        node *new_node = New Node(data);
        node -> next = top;
        top = node;
        sz++
    }

    void pop(){
        if(top != NULL){
            
        }
    }
}