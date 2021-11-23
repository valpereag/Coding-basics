#include <iostream>
using namespace std;

int main()
{
    std::cout << "Hello World!\n";
    int x;
    cout << "Type a number\n";
    cin >> x;
    for (int ii = 0; ii < 5; ii++)
    {
        if (x > 5) {
            cout << "X es mayor a 5"; 
            continue;
        }


        if (x == 5) {
            cout << "X es igual a 5";
        }
        else {
            cout << "X es menor a 5";
        }
    }

}
//continue: continua bucle 
//break: termina bucle 