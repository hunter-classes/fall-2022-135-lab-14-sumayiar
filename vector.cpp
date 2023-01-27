#include <iostream>
#include <string>
#include "vector.h"
using namespace std;

void push_back(T item){
    if (current == capacityData){
        T* temp = new T[2 * capacityData];

        for (int i = 0; i < capacityData; i++) {
        temp[i] = arr[i];
        }
        delete[] arr;
        capacityData *= 2;
        arr = temp;
    }
    arr[current] = item;
    current++;
}

void pop_back(){
    current--;
}

int size(){
    return current;
}

int capacity(){
    return capacityData;
}

bool empty(){
    if(current == 0){
        return true;
    }
    else if(current > 0){
        return false;
    }
}

// void pop_back(n){
    
// }

// void clear(){

// }


