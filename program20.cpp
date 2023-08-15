//Accept n numbers and find minimum number 

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

    int Minimum()
    {
        int iMin = Arr[0];
        for(int iCnt=0; iCnt<iSize; iCnt++)
        {
            if(Arr[iCnt] < iMin)
            {
                iMin = Arr[iCnt];
            }
        }

        return iMin;
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

    int iRet = obj.Minimum();

    cout<<"Smallest number is: "<<iRet<<"\n";



    return 0;
}