//Accept two string and append first string at the second string
//Concatenate string and just cocancate letters as per user 

#include<iostream>
using namespace std;

class StringX
{
    public: 
        void strcatX(char *src, char *dest, int iLength)
        {
            while(*dest != 0)
            {
                dest++;
            }

            *dest = ' ';
            dest++;


            while((*src != 0) && (iLength !=0))
            {
                *dest = *src;
                src++;
                dest++;

                iLength--;
            }

            *dest = 0;
        }

};


int main()
{
    char Arr[40];
    char Brr[40] = "Demo";
    int length;

    cout<<"Enter the string: "<<"\n";
    cin>>Arr;

    cout<<"Enter number of letters you want to concat: "<<"\n";
    cin>>length; 

    StringX obj;

    obj.strcatX(Arr,Brr,length);

    cout<<"String after copy is: "<<Brr;

    return 0;
}