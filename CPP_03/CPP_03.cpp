// CPP_03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "SimpleVector.hpp"
using namespace std;
int main()
{
    std::cout << "Hello World!\n";

    SimpleVector<int> vectorTest;

    for (int i = 0; i < vectorTest.capacity() - 2; i++)
    {
        vectorTest.push_back(i);
    }

    for (size_t i = 0; i < vectorTest.size(); i++)
    {
        cout << to_string(i) << ", ";
    }
    cout << endl;

    vectorTest.pop_back();
    vectorTest.pop_back();


    for (size_t i = 0; i < vectorTest.size(); i++)
    {
        cout << to_string(i) << ", ";
    }
    cout << endl;
}

