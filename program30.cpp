//Input : 7
//Output: a 1 b 2 c 3 d 4 e 5 f 6 g 7

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
        char ch='\0';

        for(i=1,ch='a';i<=iRow;i++,ch++)
        {
            cout<<ch<<"\t"<<i<<"\t";
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