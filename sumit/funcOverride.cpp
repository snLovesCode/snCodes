#include <iostream>
using namespace std;

class Invoice
{
public:
    virtual void printInvoice(){}
};

class clsInvoiceWithHeader : public Invoice
{
public:
    void printInvoice()
    {
        cout << "Hello Client -  I am clsInvoiceWithHeader" << endl;
    }
};

class clsInvoiceWithoutHeader : public Invoice
{
public:
    void printInvoice()
    {
        cout << "Hello Client -  I am clsInvoiceWithoutHeader" << endl;
    }
};

class clsInvoiceWithoutFooter : public Invoice
{
public:
    void printInvoice()
    {
        cout << "Hello Client -  I am clsInvoiceWithoutFooter" << endl;
    }
};

class FactoryInvoice
{
public:
    static Invoice * getInvoiceType( int inttype) ;
};
//static Invoice * invoice = nullptr;



Invoice * FactoryInvoice::getInvoiceType( int inttype)
{
        
        if( inttype == 1)
        {
            return (new clsInvoiceWithHeader());
        }
        if ( inttype == 2)
        {
            return (new clsInvoiceWithoutHeader());
        }
        if ( inttype == 3)
        {
            return (new clsInvoiceWithoutFooter());
        }
        else
            return nullptr;
}

int main()
{
    Invoice* iv = nullptr;
   
        iv = FactoryInvoice::getInvoiceType(1);
    if (iv != nullptr){
            iv -> printInvoice();
        }
    
        iv = FactoryInvoice::getInvoiceType(2);
        if (iv != nullptr){
            iv -> printInvoice();
        }

        iv = FactoryInvoice::getInvoiceType(3);
    if (iv != nullptr){
        iv -> printInvoice();
    }
    return 0;
}

