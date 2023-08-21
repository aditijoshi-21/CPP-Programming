//Accept string from user and convert toggle and copy in another string

#include<iostream>
using namespace std;

class StringX
{
    public: 
        void EditStr(char *src, char *dest)
        {
            while(*src != 0)
            {
                if((*src >= 'A') && (*src<= 'Z'))
                {
                    *dest =*src + 32;
                }

                else if((*src >= 'a') && (*src<= 'z'))
                {
                    *dest =*src - 32;
                }

                else
                {
                    *dest = *src;
                }
                dest++;
                src++;
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