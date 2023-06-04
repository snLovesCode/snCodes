
#ifndef __PROGRAMMING_SUMIT_ABSTRACTFACTORY_EMPLOYEESYSTEMFACTORY_H_
#define __PROGRAMMING_SUMIT_ABSTRACTFACTORY_EMPLOYEESYSTEMFACTORY_H_

#include "Employee.h"
#include "MACFactory.h"
#include "MACLaptopFactory.h"
#include "DellFactory.h"
#include "DellLaptopFactory.h"


class EmployeeSystemFactory
{
    public:
    IComputerFactory* Create(Employee& e)
    {
        if ( e.getDesignation() == "manager")
        {
            if ( e.getType() == "permanent")
            {
                return new MACLaptopFactory();
            }
            else
            {
                return new DellLaptopFactory();
            }
        }
         else if ( e.getDesignation() == "engineer")
         {
            if ( e.getType() == "permanent")
            {
                return new MACFactory();
            }
            else
            {
                return new DellFactory();
            }
         }

    }
   
};

#endif // __PROGRAMMING_SUMIT_ABSTRACTFACTORY_EMPLOYEESYSTEMFACTORY_H_#include "IComputerFactory.h"