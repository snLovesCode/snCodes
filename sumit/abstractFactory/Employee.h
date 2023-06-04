
#ifndef __PROGRAMMING_SUMIT_ABSTRACTFACTORY_EMPLOYEE_H_
#define __PROGRAMMING_SUMIT_ABSTRACTFACTORY_EMPLOYEE_H_

class Employee
{
    std::string m_type;
    std::string m_designation;
    public:
        Employee(const std::string& type, const std::string& designation)
        {
            m_type = type;
            m_designation = designation;
        }
        std::string getDesignation()
        {
            return m_designation;
        }
        std::string getType()
        {
            return m_type;
        }
};

#endif // __PROGRAMMING_SUMIT_ABSTRACTFACTORY_EMPLOYEE_H_#include<string>