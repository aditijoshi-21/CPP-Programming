//Display Digits
#include<iostream>
using namespace std;

class Digits
{
    public:
        void Display(int iNo)
        {
            int iDigit=0;

            while(iNo != 0)
            {
                iDigit = iNo % 10;
                cout<<iDigit<<"\n";
                iNo = iNo / 10;
            }
            
        }

};

int main()
{
    int iValue=0;

    cout<<"Enter the number: "<<"\n";
    cin>> iValue;

    Digits obj;

    obj.Display(iValue);

    return 0;
}