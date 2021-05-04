#ifndef ORDERED_H
#define ORDERED_H
#include "UnorderedArray.h"
#include <cstring>
#include <iostream>
class Ordered: public Unordered
{
    private:
        string *Ordered_Array;
        long long unsigned int ordered_size;
    public:
        Ordered()
        {
            Ordered_Array=nullptr;
            ordered_size=0;
        }
        ~Ordered()
        {
            delete []Ordered_Array;
        }
        void creation(Unordered Arr , int size)
        {
            ordered_size=size;
            Ordered_Array= new string[size];
            for(int i=0;i<size;i++)
            {                
                Ordered_Array[i]=Arr.get_element(i);
               // cout << Ordered_Array[i] << endl;
            }
        }
        long long unsigned int get_size()
        {
            return ordered_size;
        }
};

#endif