//Accept number and print reverse number

#include<iostream>
using namespace std;

class Digits
{
    public:
        int RevNumber(int iNo)
        {
            int iDigit=0, iRev=0;

            while(iNo != 0)
            {
                iDigit = iNo % 10;
                iRev = (iRev * 10) + iDigit; 
                iNo = iNo / 10;
            }
            return iRev;
        }

};

int main()
{
    int iValue=0, iDigit=0;

    cout<<"Enter the number: "<<"\n";
    cin>> iValue;

    Digits obj;

    int iRet = obj.RevNumber(iValue);

    cout<<"The reverse number is: "<<iRet<<"\n";

    return 0;
}