//Accept character from user and check whether its capital or not

#include<iostream>
using namespace std;

class StringX
{
    public:
        bool CheckCapital(char cValue)
        {
            if((cValue>='A') &&(cValue <= 'Z'))
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
    char ch ='\0';
    bool bRet = false;

    cout<<"Enter character: "<<"\n";
    cin>>ch;

    StringX obj;
    bRet = obj.CheckCapital(ch);

    if(bRet == true)
    {
        cout<<"Character is in capital"<<"\n";
    }

    else
    {
        cout<<"Character is not in capital"<<"\n";

    }
    return 0;
}