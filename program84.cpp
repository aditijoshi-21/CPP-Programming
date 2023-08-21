//Accept string and copy the data from that string in another string

#include<iostream>
using namespace std;

class StringX
{
    public: 
        void strcatX(char *src, char *dest, int iLength)
        {
            while((*src != 0) && (iLength != 0))
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