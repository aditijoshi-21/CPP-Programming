// Accept two strings fron user and compare them

#include<iostream>
using namespace std;

class StringX
{
    public: 
        bool strcmpX(char *str1, char *str2)
        {
            for(;((*str1 != '\0') && (*str2 != '\0')&&(*str1==*str2)); )
            {
                str1++;
                str2++;
            }

            return((*str1 =='\0')&&(*str2=='\0'));
        }

};


int main()
{
    char Arr[40];
    char Brr[40];
    bool bRet = false;

    cout<<"Enter first string: "<<"\n";
    cin>>Arr;

    cout<<"Enter second string: "<<"\n";
    cin>>Brr;

    StringX obj;

    bRet = obj.strcmpX(Arr,Brr);

    if(bRet == true)
    {
        cout<<"The string is identical"<<"\n";
    }

    else
    {
        cout<<"The string is different"<<"\n";
    }

    return 0;
}