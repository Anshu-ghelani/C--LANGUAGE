#include<iostream>

using namespace std;

class A
{
    int a,b;

    public :

    input(){

        cout<<"Enter Input  : "; 
		cin>>a;

    }

    A operator < (A z)
    {
        if(a<z.a)
        {
            cout<<"Object Q is larger : "<<z.a;
        }
        else
        {
            cout<<"Object P is larger "<<a;
        }
    }

};

main()

{
    A p;
    A q;
    A r;
    p.input();
    q.input();
    r=p<q;
}

