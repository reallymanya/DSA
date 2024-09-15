/*Imagine you are developing a contact management application where users can maintain a singly linked list of names. 
Initially, users can enter a sequence of names to form a list of contacts. Later, they can insert a new name at a specific position within the list to rearrange their contacts, ensuring the list is updated and displayed correctly.
Input format :
The first line of input consists of an integer n, representing the number of initial names.
The next n lines each contain a single name, representing the initial list of contacts.
The last line consists of a name and an integer pos, representing the new contact to be added and its position in the list.
Output format :
The output prints the updated list of contacts after inserting the new contact at the specified position.

Sample test cases :
Input 1 :
4
John
Alice
Bob
Emma
Michael 3
Output 1 :
John Alice Michael Bob Emma 
*/

#include <iostream>
#include <string>
using namespace std;

struct Node{
    string name;
    Node* next;

    Node(string name){
        this -> name = name;
        this -> next = NULL;
    }
};

void insertatposition(Node* &head, string newname, int pos){
    Node* newNode = new Node(newname);

    if(pos == 1){
        newNode -> next = head;
        head = newNode;
        return;
    }

    Node* temp = head;
    for(int i = 1; i<pos-1 && temp!= NULL; ++i){
        temp = temp -> next;
    }

    if(temp == NULL){
        cout << "Invalid position"<< endl;
        return;
    }
    newNode -> next = temp -> next;
    temp -> next = newNode;
}

void printlist(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp -> name << " ";
        temp = temp -> next;
    }
    cout << endl;
}

int main(){
    int n;
    cin >> n;
    string name;

    Node* head = NULL;
    Node* tail = NULL;

    for(int i = 0; i < n; i++){
        cin >> name;
        Node* newNode = new Node(name);

        if(head == NULL){
            head = newNode;
            tail = newNode;
        } else{
            tail -> next = newNode;
            tail = newNode;
        }
    }

    string newname;
    int pos;
    cin >> newname >> pos;

    insertatposition(head, newname, pos);

    printlist(head);

    return 0;
}

