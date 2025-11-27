// Write a program to print the multiplication table of any number entered by the user.
#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "enter a number whose multiplication table you would like to show case" << endl;
    cin >> number;
    for (int i = 1; i <= 10; i++)
    {
        int multiply = number * i;
        cout << number << "*" << i << "=" << multiply << endl;
    }
    return 0;
}