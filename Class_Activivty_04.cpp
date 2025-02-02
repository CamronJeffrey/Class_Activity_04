// Class_Activivty_04.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "This program helps identify age groups. \n";
    cout << "So please input an age: ";
    cin >> age;
    if (age < 12 )
    {
        cout << "you're a Child.";
    }
    if (age > 12 && age < 19)
    {
        cout << "you're a Teen.";
    }
    if (age > 20 && age < 64)
    {
        cout << "you're an adult.";
    }
    if (age > 65 )
    {
        cout << "you're a senior citizen.";
    }

}
