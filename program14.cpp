//Accept number and check if it is palindrome

#include<iostream>
using namespace std;

class Digits
{
    public:
        bool CheckPalindrome(int iNo)
        {
            int iDigit=0, iRev=0;
            int iTemp = iNo;

            while(iNo != 0)
            {
                iDigit = iNo % 10;
                iRev = (iRev * 10) + iDigit; 
                iNo = iNo / 10;
            }
            
            if(iRev==iTemp)
            {
                return true;
            }
            else
            {
                return false;
            }
        }

};

int main()
{
    int iValue=0, iDigit=0;

    cout<<"Enter the number: "<<"\n";
    cin>> iValue;

    Digits obj;

    bool bRet = obj.CheckPalindrome(iValue);

    if(bRet==true)
    {
        cout<<"The number is palindrome"<<"\n";
    }

    else
    {
        cout<<"The number is not palindrome"<<"\n";

    }
    return 0;
}