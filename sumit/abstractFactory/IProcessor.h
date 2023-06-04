#ifndef __PROGRAMMING_SUMIT_ABSTRACTFACTORY_IPROCESSOR_H_
#define __PROGRAMMING_SUMIT_ABSTRACTFACTORY_IPROCESSOR_H_


#include<string>

class IProcessor
{
    public:
    virtual std::string GetProcessor() = 0;
};
#endif // __PROGRAMMING_SUMIT_ABSTRACTFACTORY_IPROCESSOR_H_