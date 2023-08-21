//Accept string from user and find the first occurance of that character 

#include<iostream>
using namespace std;

class StringX
{
    public:
        int iCount=1, iPos = 0;

        int FirstOcc(char *str, char cValue)
        {
            while(*str != 0)
            {
                if(*str == cValue)
                {
                    iPos = iCount;
                    break;
                }
                
                str++;
                iCount++;
            }
            return iCount;
        }

};

int main()
{
    char Arr[40];
    int iRet = 0;
    char ch;

    cout<<"Enter the string: "<<"\n";
    cin>>Arr;

    cout<<"Enter the character: "<<"\n";
    cin>>ch;

    StringX obj;

    iRet = obj.FirstOcc(Arr,ch);

    cout<<"The first occurence is: "<<iRet<<"\n";

    return 0;
}