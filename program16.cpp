//Accept number and print smallest digit

#include<iostream>
using namespace std;

class Digits
{
    public:
        int SmallDigit(int iNo)
        {
            int iDigit=0,  iMin=9;

            while(iNo != 0)
            {
                iDigit = iNo % 10;
                if(iDigit < iMin)
                {
                    iMin = iDigit;
                }
                iNo = iNo / 10;
            }
            
            return iMin;

        }

};

int main()
{
    int iValue=0, iDigit=0;

    cout<<"Enter the number: "<<"\n";
    cin>> iValue;

    Digits obj;

    int iRet = obj.SmallDigit(iValue);

    cout<<"The smallest digit is: "<<iRet<<"\n";
    return 0;
}