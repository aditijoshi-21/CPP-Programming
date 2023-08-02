//Accept number and Count frequency of even digit in the number

#include<iostream>
using namespace std;

class Digits
{
    public:
        int EvenDigit(int iNo)
        {
            int iDigit=0, iCount=0;

            while(iNo != 0)
            {
                iDigit = iNo % 10;
                if((iDigit%2) == 0)
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

    Digits obj;

    int iRet = obj.EvenDigit(iValue);

    cout<<"The count even of digit is: "<<iRet<<"\n";

    return 0;
}