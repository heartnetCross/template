#ifndef TEST_H
#define TEST_H

#include <iostream>

class test
{
public:
    test(int value = 0);
    virtual ~test();

public:
    void valuePrint();
    void setValue(int value);
    int getValue();

private:
    int mTestValue;
};

#endif // TEST_H
