//number of  digits in number
#include<iostream>
using namespace std;

class Digits
{
    public:
        int  CountDigits(int iNo)
        {
            int iDigit=0, iCount=0;

            while(iNo != 0)
            {
                iDigit = iNo % 10;
                iCount++;
                iNo = iNo / 10;
            }
        
            return iCount;
        }

};

int main()
{
    int iValue=0;

    cout<<"Enter the number: "<<"\n";
    cin>> iValue;

    Digits obj;

    int iRet = obj.CountDigits(iValue);

    cout<<"Number of digits in number is: "<<iRet;

    return 0;
}