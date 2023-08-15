//Accept N numbers and return its addition

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

    int Addition()
    {
        int iSum =0;
        for(int iCnt=0; iCnt<iSize; iCnt++)
        {
            iSum = iSum + Arr[iCnt];
        }

        return iSum;
    }

};

int main()
{
    int iNo = 0;

    cout<<"Enter the size of array: "<<"\n";
    cin>>iNo;

    Array obj(iNo);

    obj.Accept();
    obj.Display();

    int iRet = obj.Addition();

    cout<<"Addition of number is: "<<iRet<<"\n";



    return 0;
}