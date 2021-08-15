#include<bits/stdc++.h>

using namespace std;

class RationalNumber
{
private:
    int num;
    int denum;
    void error(int d)
    {
        if(d==0)
        {
            cout << "Undefined\n";
            num =0;
            denum = 0;
        }
    }
public:
    RationalNumber()
    {
        num=0;
        denum=1;
    }
    RationalNumber(int n,int d)
    {
        num=n;
        denum=d;
    }
    int getNum()
    {
        return num;
    }
    int getDenum()
    {
        return denum;
    }
    void setNum(int n)
    {
        num = n;
    }
    void setDenum(int d)
    {
       denum = d;
       error(d);
    }
    double getDecimal()
    {
        error(denum);
        double d = (double)num/denum;
        return d;
    }
    RationalNumber operator + ( RationalNumber rhs)
    {
        error(denum);
        error(rhs.denum);
        RationalNumber temp;
        temp.num = num*rhs.denum + denum*rhs.num;
        temp.denum = denum*rhs.denum;
        return temp;
    }
    RationalNumber operator - ( RationalNumber rhs)
    {
        error(denum);
        error(rhs.denum);
        RationalNumber temp;
        temp.num = num*rhs.denum - denum*rhs.num;
        temp.denum = denum*rhs.denum;
        return temp;
    }
    RationalNumber operator * ( RationalNumber rhs)
    {
        error(denum);
        error(rhs.denum);
        RationalNumber temp;
        temp.num = num*rhs.num ;
        temp.denum = denum*rhs.denum;
        return temp;
    }
     RationalNumber operator / ( RationalNumber rhs)
    {
        error(denum);
        error(rhs.denum);
        RationalNumber temp;
        temp.num = num*rhs.denum ;
        temp.denum = denum*rhs.num;
        return temp;
    }
    void showData()
    {
        cout << num << "/" << denum << endl << endl;
    }
    ~RationalNumber()
    {

    }
};

int main()
{
    RationalNumber r1,r2(5,2),r3(5,2);

    r1 = r2+r3;
    r1.showData();

    r1 = r2-r3;
    r1.showData();

    r1 = r2*r3;
    r1.showData();

    r1 = r2/r3;
    r1.showData();
    return 0;
}
