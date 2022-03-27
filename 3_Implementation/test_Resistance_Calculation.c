#include "unity.h"
extern void test_series_resistance();
extern void test_parallel_resistance();

void setUp(void)
{

}
void tearDown(void)
{

}
int main(void)
{
    UnityBegin();
    RUN_TEST(test_series_resistance);
    RUN_TEST(test_parallel_resistance);
    return (UnityEnd());
}