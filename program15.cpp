
//Accept number and print average of its digit

#include<iostream>
using namespace std;

class Digits
{
    public:
        float AvgDigit(int iNo)
        {
            int iDigit=0,  iCount=0;
            float iSum=0;

            while(iNo != 0)
            {
                iDigit = iNo % 10;
                iSum = iSum + iDigit; 
                iCount++;
                iNo = iNo / 10;
            }
            
            return (iSum/iCount);

        }

};

int main()
{
    int iValue=0, iDigit=0;

    cout<<"Enter the number: "<<"\n";
    cin>> iValue;

    Digits obj;

    float fRet = obj.AvgDigit(iValue);

    cout<<"The average of digits is: "<<fRet<<"\n";
    return 0;
}