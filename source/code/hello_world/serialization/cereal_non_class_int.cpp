#include "gtest/gtest.h"
#include <iostream>
#include <sstream>
#include <string>
#include <utility>
#include "cereal/archives/binary.hpp"

TEST(HelloTest, CerealInt) {
	
	std::stringstream ss;
	{
		cereal::BinaryOutputArchive oarchive(ss);
		int i = 5;
		oarchive(i);
	}
	{
		cereal::BinaryInputArchive iarchive(ss);
		int i = 0;
		iarchive(i);
		EXPECT_EQ(i,5);
	}
}