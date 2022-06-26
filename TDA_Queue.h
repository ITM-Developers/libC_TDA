#ifndef TDA_QUEUE_H
#define TDA_QUEUE_H

#ifndef IOSTREAM_H
    #define IOSTREAM_H
    #include <iostream>
#endif

#ifndef CSTDLIB_H
    #define CSTDLIB_H
    #include <cstdlib>
#endif

class TDA_Queue
{
private:
    size_t numberOfElements;
    int* cola;
public:
    TDA_Queue();
    ~TDA_Queue();
    bool empty();
    size_t size();
    int* front();
    int* back();
    void push(size_t value);
    void pop();
    int* get(size_t index);
};

#endif // TDA_QUEUE_H
