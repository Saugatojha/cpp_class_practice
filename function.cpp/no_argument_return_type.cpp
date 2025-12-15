#include<iostream>
using namespace std;
int sum(){
    int a;
    int b;
    cin >> a >> b;
    return a+b;

}
int main(){
    int result=sum();
    cout << "The sum of two number is " << result << endl;
}  