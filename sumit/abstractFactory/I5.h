#ifndef __PROGRAMMING_SUMIT_ABSTRACTFACTORY_I5_H_
#define __PROGRAMMING_SUMIT_ABSTRACTFACTORY_I5_H_


#include "IProcessor.h"
#include<string>

class I5 : public IProcessor
{
    std::string GetProcessor()
    {
        return std::string("I5");
    }
};
#endif // __PROGRAMMING_SUMIT_ABSTRACTFACTORY_I5_H_