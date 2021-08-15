#include<bits/stdc++.h>

using namespace std;

class Animal
{
private:
    string nameOfAnimal;
    string habitat_area;
    string sound;
    int weight;
    int height;
    int birthYear;

public:
    Animal()
    {
        nameOfAnimal = " ";
        habitat_area = " ";
        sound = " ";
        weight=0;
        height=0;
        birthYear=2021;

    }
    void setName(string s)
    {
        nameOfAnimal = s;
    }
    string getName()
    {
        return nameOfAnimal;
    }
    void setHabitat_area(string s)
    {
        habitat_area = s;
    }
    string getHabitat_area()
    {
        return habitat_area;
    }
    void setSound(string s)
    {
        sound = s;
    }
    string getSound()
    {
        return sound;
    }
    void setWeight(int n)
    {
        weight = n;
    }
    int getWeight()
    {
        return weight;
    }
    void setHeight(int n)
    {
        height = n;
    }
    int getHeight()
    {
        return height;
    }
    void setBirthyear(int n)
    {
        birthYear = n;
        if(n>2021)
            birthYear = 2021;
    }
    int getAge()
    {
        return 2021-birthYear;
    }
    void getInformation()
    {
        cout<<"name: "<<getName()<<endl;
        cout<<"Habitat area: "<<getHabitat_area()<<endl;
        cout<<"sound: "<<getSound()<<endl;
        cout<<"weight: "<<getWeight()<<endl;
        cout<<"height: "<<getHeight()<<endl;
        cout<<"age: "<<getAge()<<endl<<endl;
    }
    void changeWeight(int pounds)
    {
        weight = pounds;
    }
    void vocalize()
    {
        cout << sound;
    }
};

class Cow:public Animal
{
private:
    string horn_color;
public:
    Cow():Animal()
    {

    }
    void setSound()
    {
        string s = "moo";
        Animal::setSound(s);
    }

};

class Chicken:public Animal
{
public:
    Chicken():Animal()
    {

    }
    void setSound()
    {
        string s = "buck buck";
        Animal::setSound(s);
    }

};

class Cat:public Animal
{
public:
    Cat():Animal()
    {

    }
    void setSound()
    {
        string s = "meow";
        Animal::setSound(s);
    }

};

int main()
{
    Cow c;
    c.setName("Chianina");
    c.setHabitat_area("land");
    c.setHeight(8);
    c.setWeight(1200);
    c.setBirthyear(2017);
    c.setSound();
    c.getInformation();

    Chicken ck;
    ck.setName("C");
    ck.setHabitat_area("land");
    ck.setHeight(1);
    ck.setWeight(200);
    ck.setBirthyear(2019);
    ck.setSound();
    ck.getInformation();

    Cat cat1;
    cat1.setName("tom");
    cat1.setHabitat_area("land");
    cat1.setHeight(2);
    cat1.setWeight(100);
    cat1.setBirthyear(2023);
    cat1.setSound();
    cat1.getInformation();

    return 0;
}
