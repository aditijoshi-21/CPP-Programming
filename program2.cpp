//Accept number from user and display whether the given number is perfect or not

#include<iostream>
using namespace std;

class Number
{
    public: 

    bool CheckPerfect(int iNo)
    {
        int iSum=0;
        for(int i=1; i<=(iNo/2); i++)
        {
            if((iNo % i)==0)
            {
                iSum = iSum + i;
            }
        } 

        if(iSum == iNo)
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
    int iValue = 0;
    cout<<"Enter the number: "<<"\n";
    cin>>iValue;
    
    Number obj;

    bool bRet = obj.CheckPerfect(iValue);
    if(bRet == true)
    {
        cout<<"Number is perfect"<<"\n";
    }
    else
    {
        cout<<"Number is not perfect"<<"\n";

    }

    return 0;
}
