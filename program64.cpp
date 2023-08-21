//Accept string from user and count small characters from string

#include<iostream>
using namespace std;

class StringX
{
    public:
        int iCount=0, iCnt=0;

        int CheckSmall(char str[])
        {
            while(str[iCnt] != 0)
            {
                if((str[iCnt] >= 'a') && (str[iCnt] <= 'z'))
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

    iRet = obj.CheckSmall(Arr);

    cout<<"Count of small characters is: "<<iRet<<"\n";



    return 0;
}