#include<iostream>
using namespace std;

class RationalNumber
{
private:
    int  numerator;
    int  denominator;
public:
    RationalNumber()
    {
        numerator=0;
       //denominator=1;
    }
    void Assign(int p,int q)
    {
        numerator=p;
        if(q!=0)
        {
            denominator=q;
            return;
        }
        cout<<"ERROR! Mathematically undefined.\n";
    }
    double convert()
    {
        if(denominator==0)
            return 0;
        double x=(double)numerator/denominator;
        return x;
    }
    void invert()
    {
        if(numerator!=0)
        {
            swap(numerator,denominator);
            return;
        }
    cout<<"ERROR! Mathematically undefined.\n";
    }
    void print()
    {
        if(denominator==0)
            return;
        cout << "The Rational Number is:";
        cout<<numerator<<"/"<<denominator<<endl;
    }
    ~RationalNumber()
    {

    }
};

int main()
{
    RationalNumber number;
    int  p,q;
    cout<<"Enter Numerator and Denominator: ";
    cin>> p >> q;
    number.Assign(p,q);
    number.print();
    double decimal=number.convert();
    cout<<"Decimal= "<<decimal<<endl;
    cout<<"After inverting\n: ";
    number.invert();
    number.print();
    return 0;
}

