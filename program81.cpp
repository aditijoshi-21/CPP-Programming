//Accept two string and append first string at the second string
//Concatenate string

#include<iostream>
using namespace std;

class StringX
{
    public: 
        void strcatX(char *src, char *dest)
        {
            while(*dest != 0)
            {
                dest++;
            }

            while(*src != 0)
            {
                *dest = *src;
                src++;
                dest++;
            }

            *dest = 0;
        }

};


int main()
{
    char Arr[40];
    char Brr[40] = "Demo";

    cout<<"Enter the string: "<<"\n";
    cin>>Arr;

    StringX obj;

    obj.strcatX(Arr,Brr);

    cout<<"String after copy is: "<<Brr;

    return 0;
}