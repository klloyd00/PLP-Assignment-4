/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int a = 1;
    for (int i = 0; i<101; i++){
        if (i%3 == 0 and i%5 == 0){
            cout << "fizzbuzz\n";
        }
        else if (i%5==0){
            cout << "fizz\n";
        }
        else if (i%3==0){
            cout << "buzz\n";
        }
        else{
            cout << i << endl;
        }
    }

    return 0;
}


