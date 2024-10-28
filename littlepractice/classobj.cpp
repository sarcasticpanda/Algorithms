#include<iostream>
#include<string>
using namespace std;
class Person
{
    private:
    string name;
    int age;
    string country;
    public:
    Person()
    {
      name="xXx";
      age=0;
      country="XXX";  
    }
     Person(string nam,int ag,string cont)
    {
      name=nam;
      age=ag;
      country=cont;  
    }
      virtual  void displaydet()
    {
        cout<<"Name : "<<name<<"\nAge is : "<<age<<"\nCountry is : "<<country<<endl;
    }
    void setname(string mod)
    {
        name=mod;
    }
};
class Car
{
    private:
    string company;
    string modal;
    int year;
    public:
    Car()
    {
      company="Sams";
      modal="XYX";
      year=2026;  
    }
    Car(string comp,string mod,int yr)
    {
        company=comp;
        modal=mod;
        year=yr;
    }
   virtual void displaydet()
    {
        cout<<"Name : "<<company<<"\nModal is : "<<modal<<"\nYear is : "<<year<<endl;
    }
    void setmodal(string mod)
    {
        modal=mod;
    }
};
    class Activity : public Person, public Car {
public:
    Activity(string personName, int personAge, string personCountry, 
             string carCompany, string carModel, int carYear) 
        : Person(personName, personAge, personCountry), Car(carCompany, carModel, carYear) {}

    void displaydet() override {
        cout << "Activity Details:\n";
        Person::displaydet();
        Car::displaydet();
        cout << "This person bought this car." << endl;
    }
};

int main()
{
   Activity obj1("Saubhagya",20,"India","Hyundai","i20/sport",2024);
   obj1.displaydet();
}