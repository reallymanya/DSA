/*Vijay is creating a linked list and wants to perform different operations on it. She can append values either to the left (beginning) or right (end) of the linked list. She also wants to print the linked list at any point in time. 



He wants to be able to perform the following operations:

1: Append Left: Append a node at the beginning(left) of the linked list.

2: Append Right: Append a node at the end(right) of the linked list.

3: Print: Print the contents of the linked list.

4: Exit: Exit the program.


Input format :
The input consists of multiple lines. Each line starts with an integer choice representing the operation (1 to append left, 2 to append right, 3 to print, and 4 to exit).

If the choice is 1 or 2, it is followed by an integer n representing the value to be appended to the linked list separated by a space.

The input continues until the choice is 4.

Output format :
When the choice is 3, the output displays "Linked List: " followed by the values in the linked list separated by a space.

If the choice is invalid the output displays "Invalid choice".

*/

#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this -> data = data;
        this -> next = NULL;

    }
};

// append at beginning (left)

void appendleft(Node* &head, int data){
    Node* newNode = new Node(data);
    newNode -> next = head;
    head = newNode;
}

// append at end (right)

void appendright(Node* &tail, int data){
    Node* newNode = new Node(data);
    tail -> next = newNode;
    tail = newNode;
}

void print(Node* head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

int main(){
Node* mylist = NULL;
Node* tail = NULL;
int choice;
int val;

do{
    cin >> choice;

    switch(choice){
        case 1:
            cin >> val;
            appendleft(mylist,val);
            if(tail == NULL){
                tail = mylist;
            }
            break;
        case 2:
            cin >> val;
            appendright(tail,val);
            break;
        case 3:
            cout << "Linked List: ";
            print(mylist);
            break;
        case 4:
            break;
        default:
            cout << "Invalid choice"<<endl;
    

    } 
}while(choice!= 4);

return 0;

}