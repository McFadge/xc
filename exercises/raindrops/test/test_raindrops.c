#include "vendor/unity.h"
#include "../src/raindrops.h"

#define BUFFER_LENGTH 100

void resetTest(void)
{
}


void test_one_yields_itself(void)
{
    char buffer[BUFFER_LENGTH];
    TEST_ASSERT_EQUAL_STRING("1", convert(buffer, sizeof(buffer), 1));
}

void test_three_yields_pling(void)
{
    char buffer[BUFFER_LENGTH];
    TEST_ASSERT_EQUAL_STRING("Pling", convert(buffer, sizeof(buffer), 3));
}

void test_five_yields_plang(void)
{
    char buffer[BUFFER_LENGTH];
    TEST_ASSERT_EQUAL_STRING("Plang", convert(buffer, sizeof(buffer), 5));
}

void test_seven_yields_plong(void)
{
    char buffer[BUFFER_LENGTH];
    TEST_ASSERT_EQUAL_STRING("Plong", convert(buffer, sizeof(buffer), 7));
}

void test_six_yields_pling(void)
{
    char buffer[BUFFER_LENGTH];
    TEST_ASSERT_EQUAL_STRING("Pling", convert(buffer, sizeof(buffer), 6));
}

void test_nine_yields_pling(void)
{
    char buffer[BUFFER_LENGTH];
    TEST_ASSERT_EQUAL_STRING("Pling", convert(buffer, sizeof(buffer), 9));
}

void test_ten_yields_plang(void)
{
    char buffer[BUFFER_LENGTH];
    TEST_ASSERT_EQUAL_STRING("Plang", convert(buffer, sizeof(buffer), 10));
}

void test_fourteen_yields_plong(void)
{
    char buffer[BUFFER_LENGTH];
    TEST_ASSERT_EQUAL_STRING("Plong", convert(buffer, sizeof(buffer), 14));
}

void test_fifteen_yields_plingplang(void)
{
    char buffer[BUFFER_LENGTH];
    TEST_ASSERT_EQUAL_STRING("PlingPlang", convert(buffer, sizeof(buffer), 15));
}

void test_twenty_one_yields_plingplong(void)
{
    char buffer[BUFFER_LENGTH];
    TEST_ASSERT_EQUAL_STRING("PlingPlong", convert(buffer, sizeof(buffer), 21));
}

void test_twenty_five_yields_plang(void)
{
    char buffer[BUFFER_LENGTH];
    TEST_ASSERT_EQUAL_STRING("Plang", convert(buffer, sizeof(buffer), 25));
}

void test_thirty_five_yields_plangplong(void)
{
    char buffer[BUFFER_LENGTH];
    TEST_ASSERT_EQUAL_STRING("PlangPlong", convert(buffer, sizeof(buffer), 35));
}

void test_forty_nine_yields_plong(void)
{
    char buffer[BUFFER_LENGTH];
    TEST_ASSERT_EQUAL_STRING("Plong", convert(buffer, sizeof(buffer), 49));
}

void test_fifty_two_yields_itself(void)
{
    char buffer[BUFFER_LENGTH];
    TEST_ASSERT_EQUAL_STRING("52", convert(buffer, sizeof(buffer), 52));
}

void test_one_hundred_five_yields_plingplangplong(void)
{
    char buffer[BUFFER_LENGTH];
    TEST_ASSERT_EQUAL_STRING("PlingPlangPlong", convert(buffer, sizeof(buffer), 105));
}

void test_big_prime_yields_itself(void)
{
    char buffer[BUFFER_LENGTH];
    TEST_ASSERT_EQUAL_STRING("12121", convert(buffer, sizeof(buffer), 12121));
}

int main(void)
{
  UnityBegin("raindrops.c");

  RUN_TEST(test_one_yields_itself);
  RUN_TEST(test_three_yields_pling);
  RUN_TEST(test_five_yields_plang);
  RUN_TEST(test_seven_yields_plong);
  RUN_TEST(test_six_yields_pling);
  RUN_TEST(test_nine_yields_pling);
  RUN_TEST(test_ten_yields_plang);
  RUN_TEST(test_fourteen_yields_plong);
  RUN_TEST(test_fifteen_yields_plingplang);
  RUN_TEST(test_twenty_one_yields_plingplong);
  RUN_TEST(test_twenty_five_yields_plang);
  RUN_TEST(test_thirty_five_yields_plangplong);
  RUN_TEST(test_forty_nine_yields_plong);
  RUN_TEST(test_fifty_two_yields_itself);
  RUN_TEST(test_one_hundred_five_yields_plingplangplong);
  RUN_TEST(test_big_prime_yields_itself);
  RUN_TEST(test_one_yields_itself);
  RUN_TEST(test_three_yields_pling);
  RUN_TEST(test_five_yields_plang);
  RUN_TEST(test_seven_yields_plong);
  RUN_TEST(test_six_yields_pling);
  RUN_TEST(test_nine_yields_pling);
  RUN_TEST(test_ten_yields_plang);
  RUN_TEST(test_fourteen_yields_plong);
  RUN_TEST(test_fifteen_yields_plingplang);
  RUN_TEST(test_twenty_one_yields_plingplong);
  RUN_TEST(test_twenty_five_yields_plang);
  RUN_TEST(test_thirty_five_yields_plangplong);
  RUN_TEST(test_forty_nine_yields_plong);
  RUN_TEST(test_fifty_two_yields_itself);
  RUN_TEST(test_one_hundred_five_yields_plingplangplong);
  RUN_TEST(test_big_prime_yields_itself);

  UnityEnd();
  return 0;
}