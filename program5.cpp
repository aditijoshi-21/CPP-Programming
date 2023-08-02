//Accept a number from user and find factorial of that number

#include<iostream>
using namespace std;

class Number
{
    public: 
        int Factorial(int iNo)
        {
            int iFact = 1;
            for(int iCnt=1; iCnt<=iNo; iCnt++)
            {
                iFact = iFact * iCnt;
            }
            return iFact;

        }
};

int main()
{
    int iValue=0,iRet=0;

    cout<<"Enter number : "<<"\n";
    cin>>iValue;

    Number obj;

    iRet = obj.Factorial(iValue);

    cout<<"The factorial of number is: "<<iRet<<"\n";




    return 0;
}