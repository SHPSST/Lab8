#include<iostream>
using namespace std;

int main(){
    int age,height,bounty;
    cout << "Enter your age: ";
    cin >> age;
    if (age>60){
        cout << "Your character = Brook";  
        return 0;
    }
    if (age>25&&age<=60){
        cout << "Enter your bounty: ";
        cin >> bounty;
        if (age<=60&&bounty>500000000){
        cout << "Your character = Jinbe";  
        return 0;
    }
    if (age<=60&&bounty<=500000000){
        cout << "Your character = Franky";  
        return 0;
    }
    }
    cout << "Enter your height: ";
    cin >> height;
    if (age<=25&&height<100){
        cout << "Your character = Chopper";  
        return 0;
    }
    if (age<=25&&height<180){
        cout << "Your character = Usopp";  
        return 0;
    }
    cout << "Enter your bounty: ";
    cin >> bounty;
    if (age<=25&&height>179&&bounty<=1100000000){
        cout << "Your character = Sanji";  
        return 0;
    }
    if (age<=25&&height>179&&bounty>=1100000000){
        cout << "Your character = Zoro";  
        return 0;
    }
}