//Accept digit and number and Count frequency of digit in the number

#include<iostream>
using namespace std;

class Digits
{
    public:
        int FreqDigit(int iNo, int iDig)
        {
            int iDigit=0, iCount=0;

            while(iNo != 0)
            {
                iDigit = iNo % 10;
                if(iDigit==iDig)
                {
                    iCount++;
                }
                iNo = iNo / 10;
            }
        
            return iCount;
        }

};

int main()
{
    int iValue=0, iDigit=0;

    cout<<"Enter the number: "<<"\n";
    cin>> iValue;

    cout<<"Enter digits(0 to 9): "<<"\n";
    cin>>iDigit;

    Digits obj;

    int iRet = obj.FreqDigit(iValue, iDigit);

    cout<<"The count of digit is: "<<iRet<<"\n";

    return 0;
}