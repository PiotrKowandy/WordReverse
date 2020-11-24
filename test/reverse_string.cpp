#include "gtest/gtest.h"
#include "reverse_string.hpp"

#include <string>

//switch_string(std::string& word)
TEST(SwitchStringTests, emptyString){
    std::string test_word = "";
    switch_string(test_word);
    EXPECT_EQ("", test_word);
}

TEST(SwitchStringTests, compareIfThoseWordsAreTheSame){
    std::string test_word = "word";
    switch_string(test_word);
    EXPECT_EQ("drow", test_word);
}

TEST(SwitchStringTests, onlyOneLetter){
    std::string test_word = "s";
    switch_string(test_word);
    EXPECT_EQ("s", test_word);
}

TEST(SwitchStringTests, onlydigits){
    std::string test_word = "1";
    switch_string(test_word);
    EXPECT_EQ("1", test_word);
}

//switch_string2(std::string& word)
TEST(SwitchStringTests2, emptyString2){
    std::string test_word = "";
    switch_string2(test_word);
    EXPECT_EQ("", test_word);
}

TEST(SwitchStringTests2, compareIfThoseWordsAreTheSame2){
    std::string test_word = "word";
    switch_string2(test_word);
    EXPECT_EQ("drow", test_word);
}

TEST(SwitchStringTests2, onlyOneLetter2){
    std::string test_word = "s";
    switch_string2(test_word);
    EXPECT_EQ("s", test_word);
}

TEST(SwitchStringTests2, onlydigits2){
    std::string test_word = "1";
    switch_string2(test_word);
    EXPECT_EQ("1", test_word);
}

//switch_string3(std::string& word)
TEST(SwitchStringTests3, emptyString3){
    std::string test_word = "";
    switch_string3(test_word);
    EXPECT_EQ("", test_word);
}

TEST(SwitchStringTests3, compareIfThoseWordsAreTheSame3){
    std::string test_word = "word";
    switch_string3(test_word);
    EXPECT_EQ("drow", test_word);
}

TEST(SwitchStringTests3, onlyOneLetter3){
    std::string test_word = "s";
    switch_string3(test_word);
    EXPECT_EQ("s", test_word);
}

TEST(SwitchStringTests3, onlydigits3){
    std::string test_word = "1";
    switch_string3(test_word);
    EXPECT_EQ("1", test_word);
}


//switch_string4(std::string& word)
TEST(SwitchStringTests4, emptyString2){
    std::string test_word = "";
    switch_string4(test_word);
    EXPECT_EQ("", test_word);
}

TEST(SwitchStringTests4, compareIfThoseWordsAreTheSame2){
    std::string test_word = "word";
    switch_string4(test_word);
    EXPECT_EQ("drow", test_word);
}

TEST(SwitchStringTests4, onlyOneLetter2){
    std::string test_word = "s";
    switch_string4(test_word);
    EXPECT_EQ("s", test_word);
}

TEST(SwitchStringTests4, onlydigits2){
    std::string test_word = "1";
    switch_string4(test_word);
    EXPECT_EQ("1", test_word);
}