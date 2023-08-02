// Print power

#include<iostream>
using namespace std;

class Number
{
    public: 
        int Power(int iNo, int iPow)
        {
            int iResult=1;

            for(int iCnt=1; iCnt<=iPow; iCnt++)
            {
                iResult = iResult * iNo;
            }

            return iResult;

        }
};

int main()
{
    int iValue=0, iPower=0,iRet=0;

    cout<<"Enter number : "<<"\n";
    cin>>iValue;

    cout<<"Enter power: "<<"\n";
    cin>>iPower;

    Number obj;

    iRet = obj.Power(iValue,iPower);

    cout<<"The power of number is: "<<iRet<<"\n";




    return 0;
}