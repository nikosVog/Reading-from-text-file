#include <iostream>
#include <cctype>
#include <fstream>
#include <cstring>
#include <iterator>
#include <algorithm>
#include <time.h>
#include "UnorderedArray.h"
#include "OrderedArray.h"
using namespace std;
int main()
{
    clock_t START, END;
    srand(time(0));//ωστε καθε φορα να αλλαζει η τυχαια τιμη του συνολου Q
    Unordered Unordered_Array;
    Ordered Ordered_Array;
    int from,to;//μεταβλητη from: Σηματοδοτει την αρχη του συνολου Q απο τον πινακα Array.Data/*---------*/to:Σηματοδοτει το τελος του συνολου Q απο τον πινακα Array.Data
    fstream my_file;
    my_file.open("words.txt", ios::in);
    if(!my_file.is_open())
    {
        cout << "No such file";
    }
    else
    {
        string str;
        while(my_file >> str)
        {   
            for (int i = 0, len = str.size(); i < len; i++)
            {
                if (ispunct(str[i]))//ελεγχος για το αν το στοιχειο ειναι σημειο στιξης ή οχι
                {
                    str.erase(i--, 1);
                    len = str.size();
                }
                else
                    if(isupper(str[i]))//Μετατρεπει τα κεφαλαια σε πεζα
                        str[i]=str[i]+32;
            }
            Unordered_Array.insertion(str);
        }
        my_file.close();
    }
    //from = (rand() %(Unordered_Array.Get_First_free_element()));
   // to=from+(rand() %(Unordered_Array.Get_First_free_element()-from+1));
    from=150;
    to=300;
    cout << from << "   " << to << endl;   
    int c=from;
    START=clock();
    for(int i=0;i<to-from+1;i++)
    {
        cout << "The string : <<" << Unordered_Array[c] << ">> exists: <<"<< Unordered_Array.linear_search(c,from,to)<<">> Times" <<endl;
        c++;
    }
    END=clock();
    float clocks = END- START;
    cout << "Linear search in Q set requires: " << clocks/CLOCKS_PER_SEC << " To run!" << endl; 
}





