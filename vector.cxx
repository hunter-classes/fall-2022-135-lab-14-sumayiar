#include <iostream>
#include "vector.h"

template <class T>  
MyVector<T>::MyVector(){
    array = new T[1];
    capacityArr = 1;
    currentData = 0;
}

template <class T>
int MyVector<T>::size(){
    return currentData;
}

template <class T>
int MyVector<T>::capacity(){
    return capacityArr;
}

template <class T>
void MyVector<T>::empty(){
    if(currentData == 0){
        cout << "true" << endl;
    }
    else if(currentData > 0){
        cout << "false" << endl;
    }
}

template <class T>
void MyVector<T>::push_back(item){
    if(currentData == capacityArr){
        T* newArr = new T[2 * capacityArr];
        for(int i = 0; i < capacityArr; i++){
            newArr[i] = array[i];
        }
        delete[] array;
        capacityArr *= 2;
        array = newArr;
    }
    array[currentData] = item;
    currentData++;
}

template <class T>
void MyVector<T>::pop_back(n){
    currentData--;
}

template <class T>
void MyVector<T>::clear(){
    for(int i = currentData; i >= 0; i--){
        array[i]
    }
}