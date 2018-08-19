#include <iostream>

using namespace std;

class LList{

    struct Node{
        Node* next;
        int data;
        Node* prev;

        Node(int d, Node* n = nullptr, Node* p = nullptr){
            data  = d;
            next = n;
            prev = p;
        }
    };

    Node* front;
    Node* back;
    public:
        LList(){
            front = nullptr;
            back = nullptr;
        }

        void push_front(int d){
            Node* nn = new Node(d, front);

            if(front != nullptr){
                front->prev = nn;
            }else{
                back = nn;
            }
            front = nn;
        }

        void print(){
            Node* curr = front;
            while(curr != back->next){
                cout << curr->data << endl;
                curr = curr->next;
            }
        }
    





};

int main(){


    LList ll;

    ll.push_front(10);

    ll.push_front(50);

    ll.push_front(100);

    ll.push_front(250);

    ll.push_front(500);

    ll.push_front(50000);

    ll.print();


    return 0;
}