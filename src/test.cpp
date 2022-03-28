#include <gtest/gtest.h>

#include "./smartCalc_V2/model/creditModel.cpp"
#include "./smartCalc_V2/model/smartCalcModel.cpp"

using s21::CreditModel;
using s21::SmartCalcModel;

TEST(calculateBase, case_1) {
    double result = 14 + 5;
    SmartCalcModel testCalc;
    double myResult = testCalc.getResult("14 + 5");
    ASSERT_EQ(myResult, result);
}

TEST(calculateBase, case_2) {
    double result = M_E + M_PI;
    SmartCalcModel testCalc;
    double myResult = testCalc.getResult("e+π");
    ASSERT_EQ(myResult, result);
}

TEST(calculateBase, case_3) {
    double result = sqrt(4.12) + asin(0);
    SmartCalcModel testCalc;
    double myResult = testCalc.getResult("√(4.12)+asin(0)");
    ASSERT_EQ(myResult, result);
}

TEST(calculateBase, case_4) {
    double result = sin(M_PI / 2) * pow(2.231, 3) - acos(0.123);
    SmartCalcModel testCalc;
    double myResult = testCalc.getResult("sin(π÷2)*2.231^3-acos(0.123)");
    ASSERT_EQ(myResult, result);
}

TEST(calculateBase, case_5) {
    double result = cos(M_PI * 3) + log(0.0541);
    SmartCalcModel testCalc;
    double myResult = testCalc.getResult("cos(π*3) + ln(0.0541)");
    ASSERT_EQ(myResult, result);
}

TEST(calculateBase, case_6) {
    double result = atan(0.5422 / 23.12) + tan(0.256) + log10(2.21);
    SmartCalcModel testCalc;
    double myResult = testCalc.getResult("atan(0.5422 ÷ 23.12) + tan(0.256) + log(2.21)");
    ASSERT_EQ(myResult, result);
}

TEST(calculateBase, case_7) {
    double result = fmod(21.123, 2);
    SmartCalcModel testCalc;
    double myResult = testCalc.getResult("21.123mod2");
    ASSERT_EQ(myResult, result);
}

TEST(calculateBase, case_8) {
    double result = 2;
    SmartCalcModel testCalc;
    double myResult = testCalc.getResult("(2)");
    ASSERT_EQ(myResult, result);
}

TEST(calculateBase, case_9) {
    double result = 12 + (cos(23.12 + sin(12.12 - cos(2.21 / 12))));
    SmartCalcModel testCalc;
    double myResult = testCalc.getResult("12 + (cos(23.12 + sin(12.12 - cos(2.21 ÷ 12))))");
    ASSERT_EQ(myResult, result);
}

TEST(calculateBase, case_10) {
    double result = -3 - -4;
    SmartCalcModel testCalc;
    double myResult = testCalc.getResult("-3--4");
    ASSERT_EQ(myResult, result);
}

TEST(calculateBase, case_11) {
    double result = +5 + 1.2;
    SmartCalcModel testCalc;
    double myResult = testCalc.getResult("+5+1.2");
    ASSERT_EQ(myResult, result);
}

TEST(calculateBase, case_12) {
    SmartCalcModel testCalc;
    double myResult = testCalc.getResult("tan(π÷2)");
    ASSERT_FALSE(myResult == myResult);
}

TEST(calculateError, case_1) {
    SmartCalcModel testCalc;
    EXPECT_THROW(testCalc.getResult("."), std::exception);
}

TEST(calculateError, case_2) {
    SmartCalcModel testCalc;
    EXPECT_THROW(testCalc.getResult("+"), std::exception);
}

TEST(calculateError, case_3) {
    SmartCalcModel testCalc;
    EXPECT_THROW(testCalc.getResult("1 - 3 +"), std::exception);
}

TEST(calculateError, case_4) {
    SmartCalcModel testCalc;
    EXPECT_THROW(testCalc.getResult("cos(()"), std::exception);
}

TEST(calculateError, case_5) {
    SmartCalcModel testCalc;
    EXPECT_THROW(testCalc.getResult("1 + (23 - 1"), std::exception);
}

TEST(calculateError, case_6) {
    SmartCalcModel testCalc;
    EXPECT_THROW(testCalc.getResult("1 + d"), std::exception);
}

TEST(calculateError, case_7) {
    SmartCalcModel testCalc;
    EXPECT_THROW(testCalc.getResult(""), std::exception);
}

TEST(calculateError, case_8) {
    SmartCalcModel testCalc;
    EXPECT_THROW(testCalc.getResult("1 1"), std::exception);
}

TEST(calculateError, case_9) {
    SmartCalcModel testCalc;
    EXPECT_THROW(testCalc.getResult("cos"), std::exception);
}

TEST(calculateError, case_10) {
    SmartCalcModel testCalc;
    EXPECT_THROW(testCalc.getResult(")"), std::exception);
}

TEST(calculateEquations, case_1) {
    double result = 14 + 5;
    SmartCalcModel testCalc;
    double myResult = testCalc.getResult("x + 5", 14);
    ASSERT_EQ(myResult, result);
}

TEST(calculateEquations, case_2) {
    double result = 2 * 2;
    SmartCalcModel testCalc;
    double myResult = testCalc.getResult("x^2", 2);
    ASSERT_EQ(myResult, result);
}

TEST(calculateEquations, case_3) {
    double result = 2.21 + 13 - 2.21 * 2.21 + 3;
    SmartCalcModel testCalc;
    double myResult = testCalc.getResult("x + 13 - x*x +3", 2.21);
    ASSERT_EQ(myResult, result);
}

TEST(calculateEquations, case_4) {
    double result = sin(1.21 / 2) * pow(2.231, 3) - acos(0.123);
    SmartCalcModel testCalc;
    double myResult = testCalc.getResult("sin(x÷2)*2.231^3-acos(0.123)", 1.21);
    bool check = true;
    if (myResult - result > 10E-7) {
        check = false;
    }
    ASSERT_TRUE(check);
}

TEST(calculatePlot, case_1) {
    SmartCalcModel testCalc;
    auto myResult = testCalc.getPlotting("x * x", -5, 5);
    ASSERT_EQ(myResult.first[0], 25);
    ASSERT_EQ(myResult.second[0], -5);
}

TEST(calculateCredit, case_1) {
    CreditModel credit;
    credit.setSumCredit(5000000);
    credit.setTermCredit(12);
    credit.setDate(YEAR);
    credit.setPercentCredit(8.21);
    credit.setTypeCredit(ANNUITY);
    credit.checkValue();
    credit.calculateCredit();
    ASSERT_EQ(credit.getMonthlyPayment(), 54700.01);
    ASSERT_EQ(credit.getOverpayment(), 2876801.44);
    ASSERT_EQ(credit.getTotalPayment(), 7876801.44);
}

TEST(calculateCredit, case_2) {
    CreditModel credit;
    credit.setSumCredit(5000000);
    credit.setTermCredit(12);
    credit.setDate(YEAR);
    credit.setPercentCredit(8.21);
    credit.setTypeCredit(DIFFERENTIATED);
    credit.checkValue();
    credit.calculateCredit();
    ASSERT_EQ(credit.getTotalPayment(), 7480104.17);
    ASSERT_EQ(credit.getOverpayment(), 2480104.17);
    ASSERT_EQ(credit.getMaxMonthlyPayment(), 68930.56);
    ASSERT_EQ(credit.getMinMonthlyPayment(), 34959.78);
}

TEST(calculateCredit, case_3) {
    CreditModel credit;
    credit.setSumCredit(12312000);
    credit.setTermCredit(44);
    credit.setDate(MONTH);
    credit.setPercentCredit(13);
    credit.setTypeCredit(ANNUITY);
    credit.checkValue();
    credit.calculateCredit();
    ASSERT_EQ(credit.getMonthlyPayment(), 353271.16);
    ASSERT_EQ(credit.getOverpayment(), 3231931.04);
    ASSERT_EQ(credit.getTotalPayment(), 15543931.04);
}

TEST(calculateCredit, case_4) {
    CreditModel credit;
    credit.setSumCredit(12312000);
    credit.setTermCredit(44);
    credit.setDate(MONTH);
    credit.setPercentCredit(13);
    credit.setTypeCredit(DIFFERENTIATED);
    credit.checkValue();
    credit.calculateCredit();
    ASSERT_EQ(credit.getTotalPayment(), 15313050.00);
    ASSERT_EQ(credit.getOverpayment(), 3001050.00);
    ASSERT_EQ(credit.getMaxMonthlyPayment(), 413198.18);
    ASSERT_EQ(credit.getMinMonthlyPayment(), 282849.55);
}

TEST(calculateCredit, case_5) {
    CreditModel credit;
    credit.setSumCredit(-12312000);
    credit.setTermCredit(44);
    credit.setDate(MONTH);
    credit.setPercentCredit(13);
    credit.setTypeCredit(DIFFERENTIATED);
    ASSERT_FALSE(credit.checkValue());
}

TEST(calculateCredit, case_6) {
    CreditModel credit;
    credit.setSumCredit(12312000);
    credit.setTermCredit(1212);
    credit.setDate(MONTH);
    credit.setPercentCredit(13);
    credit.setTypeCredit(DIFFERENTIATED);
    ASSERT_FALSE(credit.checkValue());
}

TEST(calculateCredit, case_7) {
    CreditModel credit;
    credit.setSumCredit(12312000);
    credit.setTermCredit(12);
    credit.setDate(MONTH);
    credit.setPercentCredit(1213);
    credit.setTypeCredit(DIFFERENTIATED);
    ASSERT_FALSE(credit.checkValue());
}

int main(int argc, char* argv[]) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
