#include <iostream>
#include "vector.h"
#include <string>
using namespace std;

int main(){
    Vec<int> even;
    Vec<string> fruits;

    even.push_back(2);
    even.push_back(4);
    even.push_back(6);
    even.push_back(8);
    even.push_back(10);

    fruits.push_back("apple");
    fruits.push_back("orange");
    fruits.push_back("pineapple");
    fruits.push_back("mango");
    fruits.push_back("banana");

    cout << "Vector size: " << even.size() << endl;
    cout << "Vector capacity: " << even.capacity() << endl;
    //cout << "Is vector empty? " << even.empty() << endl;

    even.pop_back();
    cout << "Vector size: " << even.size() << endl;
    cout << "Vector capacity: " << even.capacity() << endl;

    cout << "Vector size: " << fruits.size() << endl;
    cout << "Vector capacity: " << fruits.capacity() << endl;
    //cout << "Is vector empty? " << fruits.empty() << endl;
    fruits.pop_back();

    return 0;
}
     
    