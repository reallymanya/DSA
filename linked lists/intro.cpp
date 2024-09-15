// linked lists :
// linear data structure made up of collection of nodes
// node mai data aur next node ka adress hota hai

#include <iostream>
using namespace std;
class Node{
public:
int data; // integer data
Node* next; // pointer points to the next node

//constructor
Node(int data){
    this -> data = data;
    this -> next = NULL;
}

};

void InsertAtHead(Node* &head, int d){ //reference taki original ll mai change hui

    //new node create
   Node* temp = new Node(d);  // Pehle ek nayi node create karte hain jisme 'd' data hota hai
   temp -> next = head;  // Naye node ka next current head ko point karega
   head = temp; // Ab head naye node pe shift ho gaya
}

void InsertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;
}

void print(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main(){
    //create new node
    Node* node1 = new Node(10);
    cout << node1 -> data << endl;
    cout << node1 -> next << endl;
    //head pointed to node1

    Node* head = node1;
    Node* tail = node1;
    print(head);

    InsertAtTail(tail, 12);
    print(head);

    InsertAtTail(tail, 15);
    print(head);



    return 0;
}

