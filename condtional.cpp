#include <iostream>
using namespace std;
int main()
{
    cout << "Santa Claus is coming to king's this Christmas\n";
    cout << "He will give you reward according to your good deeds\n";
    int good_things;
    cout << "Enter number of good things\n";
    cin >> good_things;
    if (good_things >= 1000)
    {
        cout << "You get a new Lamboo";
    }
    else if(good_things>=500){
        cout << "You get a Honda Super Bike";
    }
    else if(good_things>=100){
        cout << "You get a toy Helicopter";
    }
    else if(good_things<=100 && good_things>0){
        cout << "You get a santa claus sticker";
    }
    else{
        cout << "You get a slap";
    }

}
