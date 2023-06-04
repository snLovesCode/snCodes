#ifndef __PROGRAMMING_SUMIT_ABSTRACTFACTORY_ICOMPUTERFACTORY_H_
#define __PROGRAMMING_SUMIT_ABSTRACTFACTORY_ICOMPUTERFACTORY_H_


#include<string>
#include "IBrand.h"
#include "IComputerType.h"
#include "IProcessor.h"

class IComputerFactory
{
    public:
    virtual IProcessor* Processor() = 0;
    virtual IBrand* Brand() = 0;
    virtual IComputerType* ComputerType() = 0;
};
#endif // __PROGRAMMING_SUMIT_ABSTRACTFACTORY_ICOMPUTERFACTORY_H_