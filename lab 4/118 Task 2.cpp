#include<bits/stdc++.h>

using namespace std;

class Employee
{
   private:
       int id;
       string EmpName;
       int age;
       float salary;
       string getStatus()
       {
           string s;
           if(age<=25)
           {
               if(salary<=20000) s="Low Salaried Person";
               else s="Moderate Salaried Person";
           }
           else
           {
               if(salary<=21000) s="Low Salaried Person";
               else if(salary>21000 && salary<=60000)
                s="Moderated Salaried Person";
               else
                s="High Salaried Person";
           }
           return s;
       }

   public:
       Employee():id(0),EmpName(""),age(0),salary(0.0)
       {

       };
       void FeedInfo()
       {
           int i;
           string name;
           int a;
           float sal;
           cout << "Enter id: ";
           cin >> i;
           id = i;
           cout << "Enter name: ";
           cin >> name;
           EmpName = name;
           cout << "Enter age: ";
           cin >> a;
           age = a;
           cout << "Enter salary: ";
           cin >> sal;
           salary = sal;
       }

       void ShowInfo()
       {
           cout << id << ". " << EmpName << endl;
           cout << "Age: " << age << endl;
           cout << "Salary: " << salary << endl;
           cout << getStatus() << endl;
       }

};

int main()
{
    Employee n1,n2;
    n1.FeedInfo();
    n1.ShowInfo();
    n2.FeedInfo();
    n2.ShowInfo();
    return 0;
}

