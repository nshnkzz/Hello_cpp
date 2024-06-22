#include <iostream>
#include <stdlib.h>
using namespace std;

//global x
int x = 0;
int main()
{
    //local x
    int x = 10;
    cout <<"value of global x is " <<::x << '\n';
    cout <<"value of local x is " << x;

    return 0;


}