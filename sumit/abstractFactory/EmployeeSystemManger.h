
#ifndef __PROGRAMMING_SUMIT_ABSTRACTFACTORY_EMPLOYEESYSTEMMANGER_H_
#define __PROGRAMMING_SUMIT_ABSTRACTFACTORY_EMPLOYEESYSTEMMANGER_H_


#include "IComputerFactory.h"
#include "IBrand.h"
#include "IProcessor.h"

class EmployeeSystemManager
{
    IComputerFactory* myComputerFactory;
    public:
    EmployeeSystemManager(IComputerFactory* factory)
    {
        myComputerFactory = factory;
    }
    std::string GetSystemDetails()
    {
        IBrand* brand = myComputerFactory->Brand();
        IProcessor *processor = myComputerFactory->Processor();
        IComputerType *type = myComputerFactory->ComputerType();
        
        std::string returnValue = brand->GetBrand()+ " " + processor->GetProcessor() + " " + type->GetSystemType() + " ";
        return returnValue;
    }
    
};
#endif // __PROGRAMMING_SUMIT_ABSTRACTFACTORY_EMPLOYEESYSTEMMANGER_H_