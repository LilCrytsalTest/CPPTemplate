#include <gtest/gtest.h>
#include "TestTool.h"

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

TEST(TestToolTest, isNumeric_Case1)
{
    auto str = "Test";
    auto result = TestTool::isNumeric(str);
    ASSERT_EQ(result, false);
}

TEST(TestToolTest, isNumeric_Case2)
{
    auto str = "123456";
    auto result = TestTool::isNumeric(str);
    ASSERT_EQ(result, true);
}