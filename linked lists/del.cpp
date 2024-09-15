// deletion

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

//destructor
~Node(){
    int value = this -> data;
    // memory free
    if(this->next != NULL){
        delete next;
        this -> next = NULL;
    }
    cout << " memory is free for node with data "<< value << endl;
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

void InsertAtPosition(Node* &tail,Node* &head,int position, int d){
    //insert at start
    if(position == 1){
        InsertAtHead(head, d);
        return;
    }
    Node* temp = head;
    int cnt = 1;
    while(cnt < position - 1){
        temp = temp->next;
        cnt++;
    }
    //insert at last
    if(temp -> next == NULL){
        InsertAtTail(tail,d);
        return;
    }
    //creating a node for d
    Node* nodetoInsert = new Node(d);
    nodetoInsert -> next = temp -> next;
    temp -> next = nodetoInsert;
}

void print(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void deleteNode(int position, Node* &head){
    //deleting first node
    if(position == 1){
        Node* temp = head;
        head = head -> next;
        //memory free start node
        temp -> next = NULL;
        delete temp;
    }
    else{
        //deleting any middle or last node
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt< position){
            prev = curr;
            curr = curr -> next;
            cnt++;
        }

        prev -> next = curr -> next;
        curr -> next = NULL; // pehle next ptr ko null
        delete curr;
    }
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


   

    InsertAtPosition(tail,head,4,22);
    print(head);

    cout<< "head "<< head -> data << endl;
    cout<< "tail "<< tail -> data << endl;

    deleteNode(4, head);
    print(head);

    cout<< "head "<< head -> data << endl;
    cout<< "tail "<< tail -> data << endl;

    return 0;
}

