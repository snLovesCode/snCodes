#include "EmployeeSystemManger.h"
#include "EmployeeSystemFactory.h"
#include "Employee.h"
#include "IComputerFactory.h"
#include <iostream>

int main()
{
    Employee e1("permanent","manager");
    Employee e2("permanent","engineer");
    Employee e3("contractor","manager");
    Employee e4("contractor","manager");
    
    EmployeeSystemFactory esf;
    
    IComputerFactory* f1=esf.Create(e1);
    EmployeeSystemManager esm1(f1);

    IComputerFactory* f2=esf.Create(e2);
    EmployeeSystemManager esm2(f2);

    IComputerFactory* f3=esf.Create(e3);
    EmployeeSystemManager esm3(f3);

    std::cout<<"Compter given to employee e1 is"<<esm1.GetSystemDetails()<<"\n";
    return 0;
}


