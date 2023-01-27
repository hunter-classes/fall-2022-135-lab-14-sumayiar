#include <iostream>
#include "vector.h"
using namespace std;

Vec(){
    array = new T[1];
    capacity = 1;
    currentData = 0;
}
void size(){
    return currentData;
}
void capacity(){
    return capacity;
}
void empty(){
    if(currentData == 0){
        cout << "true" << endl;
    }
    else if(currentData > 0){
        cout << "false" << endl;
    }
}
void push_back(item){
    if(currentData == capacity){
        T* newArr = new T[2 * capacity];
        for(int i = 0; i < capacity; i++){
            newArr[i] = array[i];
        }
        delete[] array;
        capacity *= 2;
        array = newArr;
    }
    array[currentData] = item;
    currentData++;
}
void pop_back(n){
    currentData--;
}
// void clear(){
//     for(int i = currentData; i >= 0; i--){
//         a
//     }
// }

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