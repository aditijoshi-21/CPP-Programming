//Accept character from user and check whether its digit or not

#include<iostream>
using namespace std;

class StringX
{
    public:
        bool CheckSmall(char cValue)
        {
            if((cValue >= 'a') && (cValue <= 'z'))
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
    char ch;
    bool bRet = false;

    cout<<"Enter character: "<<"\n";
    cin>>ch;

    StringX obj;

    bRet = obj.CheckSmall(ch);

    if(bRet == true)
    {
        cout<<"Character is in small case"<<"\n";
    }

    else
    {
        cout<<"Character is not in small case"<<"\n";
 
    }

    return 0;
}