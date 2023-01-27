#include <iostream>
using namespace std;

template <typename T> class MyVector{
    T* array;
    int capacity;
    int currentData;

    public:
        MyVector(){
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
        void clear(){

        }
};