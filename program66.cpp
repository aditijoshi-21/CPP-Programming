//Accept string from user and count digits characters from string

#include<iostream>
using namespace std;

class StringX
{
    public:
        int iCount=0, iCnt=0;

        int CheckDigit(char str[])
        {
            while(str[iCnt] != 0)
            {
                if((str[iCnt] >= '0') && (str[iCnt] <= '9'))
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

    iRet = obj.CheckDigit(Arr);

    cout<<"Count of digits is: "<<iRet<<"\n";



    return 0;
}