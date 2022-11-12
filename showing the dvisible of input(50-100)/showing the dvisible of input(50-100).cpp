// showing the dvisible of input(50-100).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {
    int n, i;

    cout << "Enter a positive number ranging from 50-100 :\n";
    cin >> n;

    cout << "the divisible of " << n << " are: \n";
    if (n<50)
    {
        cout << "the number is less than 50 try again";
    }
    else if (n>100)
    {
        cout << "the number is greater than 100 try again";
    }

    else for (i = 1; i <= n; ++i) {
        if (n % i == 0)
            cout << i << " ";
    }

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
