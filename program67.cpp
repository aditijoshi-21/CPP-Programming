//Accept string from user and count vowels characters from string

#include<iostream>
using namespace std;

class StringX
{
    public:
        int iCount=0, iCnt=0;

        int CheckVowel(char str[])
        {
            while(str[iCnt] != 0)
            {
                if((str[iCnt] == 'a') || (str[iCnt] == 'e')|| (str[iCnt] == 'i')|| (str[iCnt] == 'o')|| (str[iCnt] == 'u')|| (str[iCnt] == 'A')|| (str[iCnt] == 'E')|| (str[iCnt] == 'I')|| (str[iCnt] == 'O')|| (str[iCnt] == 'U'))
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

    iRet = obj.CheckVowel(Arr);

    cout<<"Count of vowels is: "<<iRet<<"\n";



    return 0;
}