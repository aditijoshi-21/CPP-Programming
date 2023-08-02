//sum of  digits in number
#include<iostream>
using namespace std;

class Digits
{
    public:
        int  SumDigits(int iNo)
        {
            int iDigit=0, iSum=0;

            while(iNo != 0)
            {
                iDigit = iNo % 10;
                iSum = iSum + iDigit;
                iNo = iNo / 10;
            }
        
            return iSum;
        }

};

int main()
{
    int iValue=0;

    cout<<"Enter the number: "<<"\n";
    cin>> iValue;

    Digits obj;

    int iRet = obj.SumDigits(iValue);

    cout<<"Sum of digits in number is: "<<iRet;

    return 0;
}