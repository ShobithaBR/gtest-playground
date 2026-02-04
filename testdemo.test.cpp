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

TEST(testdemo,subfunction){
    //arrange - preconditions, prepare input data
    int operand1 = 20;
    int operand2 = 10;
    int actualresult = 0;
    int expectedresult = 10;
    //act - invoke code under test
    actualresult = Sub(operand1,operand2);
    //Assert - validate measurment points
    ASSERT_EQ(actualresult,expectedresult);
}


TEST(testdemo,mulfunction){
    //arrange - preconditions, prepare input data
    int operand1 = 20;
    int operand2 = 10;
    int actualresult = 0;
    int expectedresult = 200;
    //act - invoke code under test
    actualresult = Mul(operand1,operand2);
    //Assert - validate measurment points
    ASSERT_EQ(actualresult,expectedresult);
}

TEST(testdemo,divfunction){
    //arrange - preconditions, prepare input data
    int operand1 = 20;
    int operand2 = 10;
    int actualresult = 0;
    int expectedresult = 200;
    //act - invoke code under test
    actualresult = div(operand1,operand2);
    //Assert - validate measurment points
    ASSERT_EQ(actualresult,expectedresult);
}

TEST(testdemo,modfunction){
    //arrange - preconditions, prepare input data
    int operand1 = 20;
    int operand2 = 10;
    int actualresult = 0;
    int expectedresult = 200;
    //act - invoke code under test
    actualresult = mod(operand1,operand2);
    //Assert - validate measurment points
    ASSERT_EQ(actualresult,expectedresult);
}