//Accept string from user and count white spaces characters from string

#include<iostream>
using namespace std;

class StringX
{
    public:
        int iCount=0, iCnt=0;

        int CheckWhiteSpaces(char str[])
        {
            while(str[iCnt] != 0)
            {
                if(str[iCnt] == ' ')
                {
                    iCount++;
                }
                iCnt++;
            }

            return iCount;

        }

};

int main()
{
    char Arr[40];
    int iRet = 0;

    cout<<"ENter the string: "<<"\n";
    cin>>Arr;

    StringX obj;

    iRet = obj.CheckWhiteSpaces(Arr);

    cout<<"Count of white spaces is: "<<iRet<<"\n";



    return 0;
}