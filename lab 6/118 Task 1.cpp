#include<bits/stdc++.h>

using namespace std;

class Counter
{
private:
    int countt;
    int increment;
public:
    Counter()
    {
        countt=0;
        increment=1;
    }
    Counter(int c,int x)
    {
        countt=c;
        increment=x;
    }
    void setIncrementStep(int step_val)
    {
        if(step_val<0)
            return;
        increment = step_val;
    }
    int getCount()
    {
        return countt;
    }
    void incrementt()
    {
        countt+=increment;
    }
    void resetCount()
    {
        countt = 0;
    }
    void showData()
    {
        cout << "count:" <<countt << "  increment: " << increment << endl << endl;
    }
    Counter operator + (const Counter rhs)
    {
        Counter temp;
        temp.countt = countt+rhs.countt ;
        temp.increment = min(increment,rhs.increment);
        return temp;
    }
    Counter operator + (int var)
    {
        Counter temp;
        temp.countt = countt+var ;
        temp.increment = increment;
        return temp;
    }
    Counter operator += (const Counter rhs)
    {
        Counter temp;
        temp.countt = countt+rhs.countt ;
        temp.increment = min(increment,rhs.increment);
        return temp;
    }
    Counter operator ++ ()
    {
        Counter temp;
        //countt += increment;
        temp.countt = countt+increment;
        temp.increment = increment;
        return temp;
    }
    Counter operator ++ (int)
    {
        Counter temp;
        //countt += increment;
        temp.countt = countt + increment;
        temp.increment = increment;
        return temp;
    }
    friend Counter operator + (int var,const Counter rhs);
    ~Counter()
    {

    }
};

Counter operator + (int var,Counter rhs)
{
    Counter temp;
    temp.countt = var+rhs.getCount() ;
    temp.increment = rhs.increment;
    return temp;
}

int main()
{
    Counter c1,c2(1,1),c3(1,1);
    c1 = c2+c3;
    c1.showData();

    c1 = c2+2;
    c1.showData();

    c1 = 2+c2;
    c1.showData();

    c1  += c2;
    c1.showData();

    c1 = c2++;
    c1.showData();

    c1 = ++c2;
    c1.showData();

    return 0;
}
