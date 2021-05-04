#ifndef UNORDERED_H
#define UNORDERED_H
#include <cstring>

using namespace std;

class Unordered 
{
    protected:
        string *Data;//αταξινομητος πινακας συμβολοσειρων
        long long unsigned int first_free_element;
    public:
        Unordered();//constructor ο οποιος αρχικοποιει τον πινακα σε null
        ~Unordered();//Destructor που διαγραφει απο το σωρο τον πινακα συμβολοσειρων αποδεσμευοντας τη μνημη του
        long long unsigned int Get_First_free_element();//getter για τη μεταβλητη first_free_element
        string get_element(int i)
        {
            return Data[i];
        }
        void insertion(string );//Void συναρτηση που εισαγει στοιχειο που διαβαζει απο το αρχειο μεσα στον πινακα των συμβολοσειρων Data
        int linear_search(int ,int,int );
        string & operator[](int pos)
        {
            return Data[pos];
        }
};

#endif