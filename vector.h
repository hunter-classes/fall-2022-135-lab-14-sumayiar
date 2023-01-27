#pragma once

template <typename T> class Vec{
    private:
        T* array; //private variable that’s a dynamic array 
        int capacityArr;
        int currentData;
    public:
        Vec(); //add stuff
        int size();
        int capacity();
        void empty();
        void push_back(T item); //what type
        void pop_back();
        void clear();        


};