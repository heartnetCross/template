#ifndef TEST_H
#define TEST_H

#include "stdio.h"

class test
{
public:
//    test();
    test(int value = 0);
    virtual ~test();

public:
    inline void valuePrint();
    void setValue(int value);
    int getValue();

private:
    int mTestValue;
};

#endif // TEST_H
