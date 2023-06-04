#ifndef __PROGRAMMING_SUMIT_ABSTRACTFACTORY_MACLAPTOPFACTORY_H_
#define __PROGRAMMING_SUMIT_ABSTRACTFACTORY_MACLAPTOPFACTORY_H_


#include "IComputerFactory.h"
#include "MACFactory.h"
#include "Laptop.h"

class MACLaptopFactory: public MACFactory
{
    public:
        
    IComputerType* ComputerType()
    {
        Laptop* l= new Laptop();
        return l;
    }
};
#endif // __PROGRAMMING_SUMIT_ABSTRACTFACTORY_MACLAPTOPFACTORY_H_