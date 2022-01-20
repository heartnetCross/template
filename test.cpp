#include "test.h"

//test::test()
//{
//    printf("test constructor complete\n");

//}

test::test(int value) : mTestValue(value)
{
    printf("test constructor complete\n");

}

test::~test()
{

}

void test::valuePrint()
{
    printf("test class memberValue %d \n", mTestValue);
}

void test::setValue(int value)
{
    mTestValue = value;
    printf("test::setValue = %d\n",mTestValue);
}

int test::getValue()
{
    return mTestValue;
}


