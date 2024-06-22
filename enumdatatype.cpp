#include <iostream>
#include <stdio.h>
using namespace std;
enum shape
{
    circle,
    rectangle,
    triangle
};
 
 int main (){
    cout<<"enter shape code : ";
    int code;
    cin>>code;
    while (code >= circle && code <= triangle)
    {
        switch (code)
        {
            case circle: 
            // insert an action statement here or else it will break unneccessarily.
            cout<<"You entered a circle\n ";

            break;
            case rectangle :

            break;
            case triangle:

            break;
        
        
        }
        cout<<"enter shape code:";
        cin>> code;
    }
    cout<<"bye \n";
    return 0;
 }