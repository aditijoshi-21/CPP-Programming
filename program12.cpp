//Accept number and Count frequency of odd digit in the number

#include<iostream>
using namespace std;

class Digits
{
    public:
        int OddDigit(int iNo)
        {
            int iDigit=0, iCount=0;

            while(iNo != 0)
            {
                iDigit = iNo % 10;
                if((iDigit%2) != 0)
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

    int iRet = obj.OddDigit(iValue);

    cout<<"The count odd of digit is: "<<iRet<<"\n";

    return 0;
}