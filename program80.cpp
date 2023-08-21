//Accpet stirng and copy the data in reverse order in another string

#include<iostream>
using namespace std;

class StringX
{
    public: 
        void EditStr(char *src, char *dest)
        {
            int iLength = 0;

            while(*src != '\0')
            {
                src++;
                iLength++;
            }
            src--;

            while(iLength!=0)
            {
                *dest = *src;
                src--;
                dest++;
                iLength--;
            }
            *dest='\0';
        }

};


int main()
{
    char Arr[40];
    char Brr[40];

    cout<<"Enter the string: "<<"\n";
    cin>>Arr;

    StringX obj;

    obj.EditStr(Arr,Brr);

    cout<<"String after copy is: "<<Brr;

    return 0;
}