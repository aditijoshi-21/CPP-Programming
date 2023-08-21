//Accept string from user and check whether it is palindrome or not

#include<iostream>
using namespace std;

class StringX
{
    public: 
        bool CheckPallindrome(char *str)
        {
            char *start = NULL;
            char *end = NULL;
            bool bFlag = true;

            start = str;
            end = str;

            while(*end != 0)
            {
                end++;
            }
            end--;

            while(start < end)
            {
                if(*start != *end)
                {
                    bFlag = false;
                    break;
                }
                start++;
                end--;
            }

            return bFlag;
            
        }
};


int main()
{
    char Arr[40];
    bool bRet = false;

    cout<<"Enter the string: "<<"\n";
    cin>>Arr;

    StringX obj;

    bRet = obj.CheckPallindrome(Arr);

    if(bRet == true)
    {
        cout<<"The string is pallindrome"<<"\n";
    }

    else
    {
        cout<<"The string is not pallindrome"<<"\n";
    }

    return 0;
}