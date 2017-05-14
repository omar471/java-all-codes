

#include<iostream>
using namespace std;

class RecursivePattern{

public:
    void printNto1(int n)
    {
        if(n=0)return;
        printNto1(n-1);
        cout<<n<<" ";

    }
};

int main()
{   int n;
    RecursivePattern obj;
    cout<<"enter n : "<<endl;
    cin>>n;
#include<iostream>
using namespace std;

class RecursivePattern{

public:
    void printNto1(int n)
    {
        if(n=0)
            return;
        printNto1(n-1);
        cout<<n<<" ";

    }
};

int main()
{   int n;
    RecursivePattern obj;
    cout<<"enter n : "<<endl;
    cin>>n;
    obj.printNto1(n);
    cout<<endl;
}
