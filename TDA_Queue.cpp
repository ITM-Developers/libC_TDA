#include "TDA_Queue.h"

TDA_Queue::TDA_Queue()
{
    this->numberOfElements = 0;
    this->cola = nullptr;
}

TDA_Queue::~TDA_Queue()
{
    delete this->cola;
}

bool TDA_Queue::empty()
{
    if( this->numberOfElements == 0 )
        return true;
    else
        return false;
}

size_t TDA_Queue::size()
{
    return this->numberOfElements + 1;
}

int* TDA_Queue::front()
{
    return this->cola;
}

int* TDA_Queue::back(){
    return this->cola + numberOfElements;
}

void TDA_Queue::push(size_t value)
{
    if(this->cola == nullptr)
    {
        this->cola = new int[1];
        this->cola[0] = value;
    }
    else
    {
        this->cola = (int*) realloc(this->cola, this->numberOfElements + 1);
        this->numberOfElements++;
        this->cola[ numberOfElements] = value;
    }
}

void TDA_Queue::pop()
{
    for(size_t i=1; i <= this->numberOfElements; i++)
    {
        this->cola[ i-1 ] = this->cola[ i ];
    }
    this->cola = (int*) realloc(this->cola, this->numberOfElements - 1);
    this->numberOfElements--;
}

int* TDA_Queue::get(size_t index)
{
    if(index > this->numberOfElements)
    {
        return nullptr;
    }
    else
    {
        return &this->cola[index];
    }
}
