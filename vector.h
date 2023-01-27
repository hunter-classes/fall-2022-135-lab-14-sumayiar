#pragma once

template <typename T> class Vec{
    private:
        T* array; //private variable that’s a dynamic array 
    public:
        int capacityArr;
        int currentData;
        Vec(); //add stuff
        int size();
        int capacity();
        void empty();
        void push_back(T item); 
        void pop_back();
        void clear();        
};