#include <iostream>
#include <string>
using namespace std;
template <typename T> class vectorClass{
    T* arr;
    int capacityData;
    int current;
    public:
    vectorClass(){
        arr = new T[1];
        capacityData = 1;
        current = 0;
    }

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

    void pop_back(n){
        
    }

    void clear(){

    }
};

int main(){
    vectorClass<int> even;
    vectorClass<char> odd;
    even.push_back(2);
    even.push_back(4);
    even.push_back(6);
    even.push_back(8);

    odd.push_back(1);
    odd.push_back(3);
    odd.push_back(5);
    odd.push_back(7);
    cout << "Vector size: " << even.size() << endl;
    cout << "Vector capacity: " << even.capacity() << endl;

    even.pop_back();
    odd.pop_back();
    cout << "New vector size: " << even.size() << endl;
    cout << "New vector capacity: " << even.capacity() << endl;

    cout << "New vector size: " << odd.size() << endl;
    cout << "New vector capacity: " << odd.capacity() << endl;
    return 0;
}