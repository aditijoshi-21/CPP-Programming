//Accept number from user and display whether the given number is prime or not

#include<iostream>
using namespace std;

class Number
{
    public: 

    bool bFlag = true;

    bool CheckPrime(int iNo)
    {
        for(int i=2; i<=(iNo/2); i++)
        {
            if((iNo % i)==0)
            {
                bFlag = false;
                break;
            }
        } 
        return bFlag;
    }

};

int main()
{
    int iValue = 0;
    cout<<"Enter the number: "<<"\n";
    cin>>iValue;
    
    Number obj;

    bool bRet = obj.CheckPrime(iValue);
    if(bRet == true)
    {
        cout<<"Number is prime"<<"\n";
    }
    else
    {
        cout<<"Number is not prime"<<"\n";

    }

    return 0;
}
