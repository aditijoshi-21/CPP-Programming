//Accept number and print largest digit

#include<iostream>
using namespace std;

class Digits
{
    public:
        int LargeDigit(int iNo)
        {
            int iDigit=0,  iMax=0;

            while(iNo != 0)
            {
                iDigit = iNo % 10;
                if(iDigit > iMax)
                {
                    iMax = iDigit;
                }
                iNo = iNo / 10;
            }
            
            return iMax;

        }

};

int main()
{
    int iValue=0, iDigit=0;

    cout<<"Enter the number: "<<"\n";
    cin>> iValue;

    Digits obj;

    int iRet = obj.LargeDigit(iValue);

    cout<<"The largest digit is: "<<iRet<<"\n";
    return 0;
}