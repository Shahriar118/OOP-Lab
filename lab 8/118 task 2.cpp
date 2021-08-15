#include<bits/stdc++.h>

using namespace std;

class Seat
{
protected:
    string  comfortability;
    bool seatWarmer;
public:
    Seat()
    {
        comfortability = "pleasant";
        seatWarmer = 1;
    }
    void setComfortability(string s)
    {
        comfortability = s;
    }
    string getComfortability()
    {
        return comfortability;
    }
    void setSeatWarmer(bool b)
    {
        seatWarmer = b;
    }
    string getSeatWarmer()
    {
        if(seatWarmer)
            return "present";
        else
            return "absent";
    }
};

class Wheel
{
protected:
    double circumference;
public:
    Wheel()
    {
        circumference = 0.0;
    }
    void setCircumference(double d)
    {
        circumference = d;
    }
    double getCircumference()
    {
        return circumference;
    }
};

class Engine
{
protected:
    int maxFuelConsumptionRate;
    int maxEnergyProductionRate;
    double averageRPM;
public:
    Engine()
    {
        maxFuelConsumptionRate = 1;
        maxEnergyProductionRate = 1;
        averageRPM = 1.0;
    }
    void setMaxFuelConsumptionRate(int x)
    {
        maxFuelConsumptionRate=x;
    }
    int getMaxFuelConsumptionRate()
    {
        return maxFuelConsumptionRate;
    }
    void setMaxEnergyProductionRate(int x)
    {
        maxEnergyProductionRate=x;
    }
    int getMaxEnergyProductionRate()
    {
       return maxEnergyProductionRate;
    }
    void setAverageRPM(double d)
    {
        averageRPM = d;
    }
    double getAverageRPM()
    {
        return averageRPM;
    }
};

class Door
{
protected:
    bool openingMode;
public:
    Door()
    {
        openingMode = 1;
    }
    void setOpeningMode(bool b)
    {
        openingMode = b;
    }
    string getOpeningMode()
    {
        if(openingMode)
            return "sideways";
        else
            return "upward ways";
    }
};

class Car
{
private:
    int maximum_accleration;
    int fuel_capacity;
public:
    Seat s[2];
    Wheel w[2];
    Door d[2];
    Engine eg;
public:
    Car()
    {
        maximum_accleration=1;
        fuel_capacity=1;
    }
    void setMaximumAccleration(int a)
    {
        maximum_accleration = a;
    }
    int getMaximumAccleration()
    {
        return maximum_accleration;
    }
    void setFuelCapacity(int a)
    {
        fuel_capacity = a;
    }
    int getFuelCapacity()
    {
        return fuel_capacity;
    }
    double calculatespeed()
    {
        return (eg.getAverageRPM()*w[1].getCircumference()*60);
    }
    void putData()
    {
       cout << "maximum acceleration: "<<getMaximumAccleration()<<endl;
       cout << "fuel capacity: "<<getFuelCapacity()<<endl;
       for(int i=0; i<2; i++)
       {
           cout << "seat "<<i+1<<": "<<s[i].getComfortability()<<"  "<<s[i].getSeatWarmer();
           cout << endl;
       }
        for(int i=0; i<2; i++)
       {
           cout << "wheel "<<i+1<<": "<<w[i].getCircumference();
           cout << endl;
       }
        for(int i=0; i<2; i++)
       {
           cout << "door "<<i+1<<": "<<d[i].getOpeningMode();
           cout << endl;
       }
       cout<<"maximum fuel consumption rate: "<<eg.getMaxFuelConsumptionRate()<<endl;
       cout<<"maximum energy production rate: "<<eg.getMaxEnergyProductionRate()<<endl;
       cout<<"average RPM: "<<eg.getAverageRPM()<<endl;
    }
};

int main()
{
    Car c1;
    c1.s[0].setComfortability("comfy");
    c1.d[0].setOpeningMode(0);
    c1.w[0].setCircumference(5);
    c1.eg.setAverageRPM(50);
    c1.putData();
    return 0;
}
