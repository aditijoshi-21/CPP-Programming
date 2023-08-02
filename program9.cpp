//Accept digit and number and check whether the digit is present or not in the number

#include<iostream>
using namespace std;

class Digits
{
    public:
        bool  CheckDigit(int iNo, int iDig)
        {
            int iDigit=0, iSum=0;
            bool bFlag=false;

            while(iNo != 0)
            {
                iDigit = iNo % 10;
                if(iDigit==iDig)
                {
                    bFlag = true;
                    break;
                }
                iNo = iNo / 10;
            }
        
            return bFlag;
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

    bool bRet = obj.CheckDigit(iValue, iDigit);

    if(bRet == true)
    {
        cout<<"Digit is present in number"<<"\n";
    }

    else
    {
        cout<<"Digit is not present in number"<<"\n";

    }

    return 0;
}