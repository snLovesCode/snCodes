#ifndef __PROGRAMMING_SUMIT_ABSTRACTFACTORY_MACFACTORY_H_
#define __PROGRAMMING_SUMIT_ABSTRACTFACTORY_MACFACTORY_H_


#include "IComputerFactory.h"
#include "Desktop.h"
#include "I7.h"
#include "MAC.h"

class MACFactory: public IComputerFactory
{
    public:
    IBrand* Brand()
    {
            return new MAC();
    }
    
    IProcessor* Processor()
    {
            return new I7();
    }
    
    IComputerType* ComputerType()
    {
        return new Desktop();
    }
};
#endif // __PROGRAMMING_SUMIT_ABSTRACTFACTORY_MACFACTORY_H_