//Input : 7
//Output: 2 4 6 8 10 12 14 

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
            cout<<i*2<<"\t";
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