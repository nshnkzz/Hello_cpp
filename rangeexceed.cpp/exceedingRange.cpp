// #include <iostream>
// using namespace std;
// int main ()
// {
//     for (char a = 0; a<=225; a++)
//     cout << a;
//     return 0;
// }
//this code is for exceeding the range of char, which create an infinite loop

// #include <iostream>
// using namespace std;
// int main()
// {
//     //declaring boolean variable with true value
//     bool a = true;
//     for (a = 1; a <= 5; a)
//     cout  << a;
//     return 0;

//}
// this create an infinite loop of 1 when we cross the range of bool

#include <iostream>
using namespace std;
int main()
{
    //declaring short variable
    short a;
    for (a =32767; a < 32770; a++)
    cout << a << "\n";
    return 0;
}
