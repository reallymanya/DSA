/*Sarath is developing a text document editor that supports adding text lines at both the beginning and the end of the document. The editor should first read a list of initial lines to insert at the beginning of the document and then read an additional line to append at the end. 
Guide Sarath in implementing the functionality to handle these operations using a singly linked list and display the final state of the document.

Input format :
The first line of input consists of an integer, n representing the number of lines in the document.
The next n lines consist of the lines of text that constitute the document.
The last line of input consists of a string s, which needs to be appended at the end of the document.

Output format :
The first line of output prints "Document: " followed by the initial document content, which inserts the given n values at the beginning.

The second line prints "Updated Document: " followed by the final document content, which appends the given value s at the end of the document.*/

#include <iostream> 
#include <string>
using namespace std;

class Node{
    public:
    string data;
    Node* next;

    Node(string data){
        this -> data = data;
        this -> next = NULL;
    }
};
// insert at head
void InsertAtHead(Node* &head, string line){
    Node* temp = new Node(line);
    temp -> next = head;
    head = temp;
}

// insert at tail
void InsertAtTail(Node* &tail, string line){
    Node* temp = new Node(line);
    tail -> next = temp;
    tail = temp;
}

// print

void print(Node* head, bool isUpdated = false){
    Node* temp = head;
    if(isUpdated){
        cout << "Updated Document: ";
    }else{
        cout << "Document: ";
    }
    while(temp !=  NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}
int main(){
    int n;
    cin >> n;
    cin.ignore();

    Node* head = NULL;
    Node* tail = NULL;

    for(int i = 0; i<n; ++i){
        string line;
        getline(cin, line); //remember this functiom
        InsertAtHead(head, line);
        if(tail == NULL){
            tail = head;
        }
    }

 print(head);

 string finalline;
 getline(cin,finalline);

 if(tail == NULL){
    head = new Node(finalline);
    tail = head;
 } else{
    InsertAtTail(tail, finalline);
 }

 print(head, true);

 return 0;
}
