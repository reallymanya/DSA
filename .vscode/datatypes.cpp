#include <iostream>
using namespace std;
int main() {
    int a = 123;
// int 4 byte
    cout << a << endl;

    char b = 'v';
// char 1 byte = 8 bit
    cout << b << endl;

    bool bl = true;
// bool 1 bit
    cout << bl << endl;

    float f = 1.2;
// float 8 byte 
    cout << f << endl;

    double d = 1.23;

    cout << d << endl;
// double 8 byte 
    int size = sizeof(d);

    cout << "size of d is : " << size << endl;

int h = 'a';
cout << h << endl;

char fg = 98;
cout << fg << endl;
// 98 typecasted to character

char de = 123456;
cout << de << endl;

int l = 2.0/5;
cout << l << endl;

float u = 2.0/5;
cout << u << endl;

cout << 2.0/5 << endl;
// arithmetic operators
int w = 7;
int y = 8;

bool firstt = (w==y);
cout << firstt << endl;

bool second = (w<y);
cout << second << endl;

bool third = (w>y);
cout << third << endl;
// relational operators

int q =  0;
cout << !q << endl;
// logical perators

}
