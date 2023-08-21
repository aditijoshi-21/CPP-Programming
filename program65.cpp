//Accept string from user and count capital characters from string

#include<iostream>
using namespace std;

class StringX
{
    public:
        int iCount=0, iCnt=0;

        int CheckCapital(char str[])
        {
            while(str[iCnt] != 0)
            {
                if((str[iCnt] >= 'A') && (str[iCnt] <= 'Z'))
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

    iRet = obj.CheckCapital(Arr);

    cout<<"Count of capital characters is: "<<iRet<<"\n";



    return 0;
}