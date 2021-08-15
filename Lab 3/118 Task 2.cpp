#include<iostream>
using namespace std;

class Medicine
{
    private:
        string name;
        string GenericName;
        double unitPrice;
        double discountPercent;
    public:
        Medicine()
        {
            unitPrice=0;
            discountPercent=5;
        }
        void assignName(string a, string b)
        {
            name=a;
            GenericName=b;
        }
        void assignPrice(double a)
        {
            if(a<0)
                return;
            unitPrice=a;
        }
        void setDiscountPercent(double a)
        {
            discountPercent=a;
        }
        double getSellingPrice(int up)
        {
            double discount=(double)unitPrice*(discountPercent/100);
            return unitPrice-discount;
        }
        void display()
        {
            cout<<endl<<name<<"("<<GenericName<<") "<<"has a unit price of BDT"<<unitPrice;
            cout << ".Current Discount "<<discountPercent<<"%\n";
        }
        ~Medicine()
        {

        }
};


int main()
{
    Medicine sample;
    string n,gn;
    cout<<"Enter Medicine name and generic name: ";
    cin>> n >>gn;
    sample.assignName(n, gn);
    double price,discount;
    cout<<"Enter the price: ";
    cin>>price;
    cout<<"Enter discount percent: ";
    cin>>discount;
    sample.assignPrice(price);
    sample.setDiscountPercent(discount);
    double sellingPrice=sample.getSellingPrice(price);
    sample.display();
     //cout<<"Current selling price: "<<selling_price<<endl;
    return 0;
}

