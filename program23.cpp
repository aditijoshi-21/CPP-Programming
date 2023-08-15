//Accept number from user and search first occaurance and return index value of that number in array

#include<iostream>
using namespace std;

class Array
{
    public: 
        int iSize;
        int *Arr;

    Array(int iNo)
    {
        iSize=iNo;
        Arr = new int [iSize];
    }

    void Accept()
    {
        cout<<"Enter the elements: "<<"\n";

        for(int iCnt=0; iCnt<iSize; iCnt++)
        {
            cin>>Arr[iCnt];
        }
    }

    void Display()
    {
        cout<<"The elements are: "<<"\n";

        for(int iCnt=0; iCnt<iSize; iCnt++)
        {
            cout<<Arr[iCnt]<<"\n";
        }
    }

    int FirstOcc(int iValue)
    {
        int iCnt=1;
        for(iCnt=1; iCnt<=iSize; iCnt++)
        {
            if(Arr[iCnt] == iValue)
            {
                break;
            }
        }

        return iCnt;
    }

};

int main()
{
    int iNo = 0, iValue=0;

    cout<<"Enter the size of array: "<<"\n";
    cin>>iNo;

    Array obj(iNo);

    obj.Accept();
    obj.Display();

    cout<<"Enter the number you want to search: "<<"\n";
    cin>>iValue;

    int iRet = obj.FirstOcc(iValue);

    cout<<"First occurence of number is: "<<iRet<<"\n";



    return 0;
}