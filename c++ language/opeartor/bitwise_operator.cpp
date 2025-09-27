#include <iostream>
using namespace std;
int a = 10, b = 20; // global variable
int AND()
{

    int c = a & b; // local variable

    cout << "bitwise and value: ";
    cout << c;
}

int OR()
{
    int d = a | b; // local variable
    cout << "value of or : " << d;
}

int leftshift()
{
    int e = a << 2;
    cout << "ledtshift value : ";
    cout << e;
}
int rightshift(){

    int f = b<< 2;
    cout << "ledtshift value : ";
    cout << f;

}

int main()
{
    OR();
    cout << endl;
    AND();
    cout << endl;
    leftshift();
    cout<<endl;
    rightshift();
}
