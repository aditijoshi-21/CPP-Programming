//Input : 7
//Output: 1 2 3 4 5 5 4 3 2 1 

#include<iostream>
using namespace std;

class Pattern
{
    public: 
        int iRow;
    
    Pattern(int X)
    {
        iRow = X;
    }

    void Display()
    {
        int i=0;
        for(i=1;i<=iRow;i++)
        {
            cout<<i<<"\t";
        }

        for(i=iRow;i>=1;i--)
        {
            cout<<i<<"\t";
        }
    }


};

int main()
{
    int iNo1 = 0, iNo2 = 0;

    cout<<"Enter the number:  "<<"\n";
    cin>>iNo1;

    Pattern obj(iNo1);

    obj.Display();



    return 0;
}