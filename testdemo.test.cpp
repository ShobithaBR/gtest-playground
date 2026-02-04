#include <gtest/gtest.h>
#include "testdemo.h"

//Test case
TEST(testdemo,addfunctio){
    //arrange - preconditions, prepare input data
    int operand1 = 10;
    int operand2 = 20;
    int actualresult = 0;
    int expectedresult = 30;
    //act - invoke code under test
    actualresult = add(operand1,operand2);
    //Assert - validate measurment points
    ASSERT_EQ(actualresult,expectedresult);
}
