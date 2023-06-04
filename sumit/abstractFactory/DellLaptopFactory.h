
#ifndef __PROGRAMMING_SUMIT_ABSTRACTFACTORY_DELLLAPTOPFACTORY_H_
#define __PROGRAMMING_SUMIT_ABSTRACTFACTORY_DELLLAPTOPFACTORY_H_

#include "Laptop.h"
#include "I5.h"
#include "DELL.h"

class DellLaptopFactory: public DellFactory
{
    public:
    
    
    IComputerType* ComputerType()
    {
        return new Laptop();
    }
};

#endif // __PROGRAMMING_SUMIT_ABSTRACTFACTORY_DELLLAPTOPFACTORY_H_#include "DellFactory.h"