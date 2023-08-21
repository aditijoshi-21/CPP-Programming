//Accept string from user and display its length

#include<iostream>
using namespace std;

class StringX
{
    public:
        int iCount=0, iCnt=0;

        int strlenX(char str[])
        {
            while(str[iCnt] != 0)
            {
                iCount++;
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

    iRet = obj.strlenX(Arr);

    cout<<"Length of string is: "<<iRet<<"\n";



    return 0;
}