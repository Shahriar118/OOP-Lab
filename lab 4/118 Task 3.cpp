#include<bits/stdc++.h>

using namespace std;

class StudentResult
{
private:
    static int passingMark;
    int subjectMark[6];
    bool fail;

public:
    StudentResult():fail(0)
    {

    };
    void setMarks()
    {
        int x;
        cout << "Enter marks for 6 courses: \n" ;
        for(int i=0; i<6; i++)
            cin >> subjectMark[i];
    }
    void displayMarks()
    {
        cout << "\nMarks:\n";
        for(int i=0; i<6; i++)
            cout <<i+1<<"." << subjectMark[i] << endl;
    }
    void checkPassing()
    {
        int count = 0;
        for(int i=0; i<6; i++)
        {
            if(subjectMark[i]<passingMark)
               {
                   fail=1;
                   count++;
               }
        }
        if(fail)
            cout << "Student failed in " << count << " subjects\n";
        else
            cout << "Student passed in every subject\n";
    }
    ~StudentResult()
    {

    }

};

int StudentResult::passingMark=40;

int main()
{
    StudentResult s1,s2;
    s1.setMarks();
    s1.displayMarks();
    s1.checkPassing();
    s2.setMarks();
    s2.displayMarks();
    s2.checkPassing();
    return 0;
}


