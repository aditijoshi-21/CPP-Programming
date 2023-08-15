//Accept N numbers form user and also one number and check whether that one number is in N number or not

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

    bool SearchNo(int iValue)
    {
        bool bFlag = false;

        for(int iCnt=0; iCnt<iSize; iCnt++)
        {
            if(Arr[iCnt] == iValue)
            {
                bFlag = true;
                break;
            }
        }

        return bFlag;
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

    bool bRet = obj.SearchNo(iValue);

    if(bRet==true)
    {
        cout<<"The number is present"<<"\n";
    }

    else
    {
        cout<<"The number is not present"<<"\n";
  
    }



    return 0;
}