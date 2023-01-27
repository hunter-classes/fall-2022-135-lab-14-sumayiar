#pragma once

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

    void push_back(T item);
    void pop_back();
    int size();
    int capacity();
    bool empty();
    // void pop_back(T n);
    // void clear();
};