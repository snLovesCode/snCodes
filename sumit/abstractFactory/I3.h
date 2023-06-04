#ifndef __PROGRAMMING_SUMIT_ABSTRACTFACTORY_I3_H_
#define __PROGRAMMING_SUMIT_ABSTRACTFACTORY_I3_H_


#include "IProcessor.h"
#include<string>

class I3 : public IProcessor
{
    std::string GetProcessor()
    {
        return std::string("I3");
    }
};
#endif // __PROGRAMMING_SUMIT_ABSTRACTFACTORY_I3_H_