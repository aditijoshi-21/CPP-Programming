//Accept string and character from user and check whether character  occur or not

#include<iostream>
using namespace std;

class StringX
{
    public:
        int iCount=0;
        bool bFlag = false;

        bool CheckChar(char *str, char cValue)
        {
            while(*str != 0)
            {
                if(*str == cValue)
                {
                    bFlag = true;
                    break;
                }
                
                str++;
            }
            return bFlag;
        }

};

int main()
{
    char Arr[40];
    bool bRet = false;
    char ch;

    cout<<"Enter the string: "<<"\n";
    cin>>Arr;

    cout<<"Enter the character: "<<"\n";
    cin>>ch;

    StringX obj;

    bRet = obj.CheckChar(Arr,ch);

    if(bRet == true)
    {
        cout<<"The character is present in string"<<"\n";
    }

    else
    {
        cout<<"The character is not present in string"<<"\n";
    }


    return 0;
}