#include <iostream>
using namespace std;
void func()
{
    /*this variable is local to the function func() and can not be accessed outside this function*/
    int age = 18;
    cout<<age;


}
    int main()
{
    cout << "age is : ";
    func();
    return 0;

}