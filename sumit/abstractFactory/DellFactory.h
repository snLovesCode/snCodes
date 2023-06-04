#ifndef _DELL_FACTORY_H_
#define _DELL_FACTORY_H_
#include "IComputerFactory.h"
#include "Desktop.h"
#include "I5.h"
#include "DELL.h"

class DellFactory: public IComputerFactory
{
    public:
    IBrand* Brand()
    {
            return new DELL();
    }
    
    IProcessor* Processor()
    {
            return new I5();
    }
    
    IComputerType* ComputerType()
    {
        return new Desktop();
    }
};
#endif