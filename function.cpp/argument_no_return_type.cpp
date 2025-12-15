// #include<iostream>
// using namespace std;
// void sum(int a, int b){
//     int add=a+b;
//     cout << add;

// }
// int main(){
   
//     sum(2,3);

// } 

// #include<iostream>
// using namespace std;
// void for_si(float p, float t, float r){
//     float si= (p * t * r)/100;
//     cout  << si;
// }
// int main(){
   
//     for_si(234.45,3,4.4);

// } 
// #include<iostream>
// using namespace std;
// void for_si(float p, float t, float r){
//     float si= (p * t * r)/100;
//     cout << si;
// }
// int main(){
//     float principle, time, rate;
//     cin >> principle;
//     cin >> time;
//     cin >> rate;
//     for_si(principle, time, rate);

// } 

#include<iostream>
using namespace std;
void rectangle_tank(float l, float b, float h){
    float volume= l * b * h*1000;
    cout << volume;

}
int main(){
    float length, breath, height;
    cin >> length;
    cin >> breath;
    cin >> height;
    rectangle_tank(length, breath, height);
 
} 