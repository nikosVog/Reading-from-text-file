#include <iostream>
#include <string>
#include <iterator>
#include <algorithm>
#include "UnorderedArray.h"

using namespace std;

Unordered ::Unordered()
{
    first_free_element=0;
    Data=nullptr;
}

Unordered::~Unordered()
{
    delete []Data;
}

long long unsigned int Unordered::Get_First_free_element() 
{
    return first_free_element;
}

void Unordered:: insertion(string a)
{
    string *temp;
    
    temp = new string[first_free_element+1];
    
    for (int element = 0; element < first_free_element; element++)
		temp[element] = Data[element];  // Αντιγράφουμε τα στοιχεία του πίνακα στον προσωρινό πίνακα
    delete [] Data;
    Data=temp;
    first_free_element++;
    Data[first_free_element-1]=a;
}

int Unordered::linear_search(int position,int from, int to)
{
    int count=0,j;
    for(int i=0;i<=first_free_element;i++)
    {
        if(Data[i]==Data[position])
            count++;
    }
    return count;
}
