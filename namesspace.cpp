// #include <iostream>
// using namespace std;

// namespace first
// {
//     int value = 400;
// }
// namespace second 
// {
//     int value = 937;
// }

// int main()
// {
    

//     cout << second::value << '\n';
//     cout << first::value << '\n';
//     return 0;
// }

// #include <iostream>
// using namespace std;
// // first name space 
// namespace first_space 

// {
//      void func()
//      {
//         cout << "inside first_space" << endl;


//      }
// }
//      // second name space 
//      namespace second_space
//      {
//         void func()
//         {
//             cout << "inside second_space" << endl;
//         }

    
//      }
// using namespace first_space;

// int main(){
//     func();
//     return 0;

// }

// #include <iostream>
// using std::cout;
// int main(){
//     cout << "std::endl is usde with std!" <<std::endl;
//     return 0;
// }

#include <iostream>
using namespace std;
namespace ns1
{
    int value()
    {return 5;}
}
namespace ns2
{
    const double x = 100;
    double value(){return 2*x;}
}
int main(){
    cout << ns1::value() << '\n';
    cout << ns2::value() << '\n';
    cout << ns2::x << '\n';
    return 0;
}