#include "gtest/gtest.h"
//#include "../header/videogame.hpp"
#include "videogametests.hpp"
#include "collectiontests.hpp"

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}