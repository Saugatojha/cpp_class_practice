// wap to Write a program to find the sum of the first N natural numbers using a loop.
// n=n plus 1 by 2
#include<iostream>
using namespace std;
int main()
{
    int number;
    int sum=0;
    cout << "Enter the sum of first N natural number you would like to find out \n";
    cin >> number;
    for (int i = 1; i <= number; i++)
    {
    sum=sum + i;
    }
    cout << sum;
}