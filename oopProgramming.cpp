#include <iostream>
using std::string;

class Employee{
public: //Acces modifiers: Private Public, Protected
    string Name;
    string Company;
    int Age;

    // fF

    void IntroduceYourself(){
        std::cout<<"Name - "<< Name << std::endl;
        std::cout<<"Company - "<< Company << std::endl;
        std::cout<<"Age - "<< Age << std::endl;

    }
    //CONSTRUCTOR:
    Employee(string name, string comp, int age){
        Name=name;
        Company=comp;
        Age=age;
    }

};


int main(){

    Employee employee1= Employee("Saldina","YT-CdoBeauty",25);
    //employee1.Name= "Saldina";
    //employee1.Company= "YT-CdoBeauty";
    //employee1.Age= 25;
    employee1.IntroduceYourself();

    Employee employee2= Employee("Jonas","Amazon",32);
    //employee2.Name="Jonas";
    //employee2.Company="Amazon";
    //employee2.Age=32;
    employee2.IntroduceYourself();


}


//Encapsulation, abstraction, inheritance, polimorfism

