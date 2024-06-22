#include <iostream>
using namespace std;

// global variable
int global = 5;
/*global variable accessed from within a function*/
void display(){
    cout << global << endl;

}

// main function
int main()
{
    display();
    /*changing value from global variable from main function*/
    global = 10;
    display();
}