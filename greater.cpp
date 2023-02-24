


#include<iostream>
using namespace std;

int main() {
    cout << "Enter 2 number you want to compare : ";
    int x,y;
    cin>>x>>y;
    if(x > y){
        cout <<x<<" is greater then "<<y;
    }else if(y > x){
        cout<<y<<" is greater then "<<x;
    }else{
        cout<<"Both are equal";
    }
    return 0;
}