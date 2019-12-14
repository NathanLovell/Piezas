/**
 * Unit Tests for Piezas
**/

#include <gtest/gtest.h>
#include "Piezas.h"

class PiezasTest : public ::testing::Test
{
protected:
	PiezasTest() {}			   //constructor runs before each test
	virtual ~PiezasTest() {}   //destructor cleans up after tests
	virtual void SetUp() {}	//sets up before each test (after constructor)
	virtual void TearDown() {} //clean up after each test, (before destructor)
};

TEST(PiezasTest, sanityCheck)
{
	ASSERT_TRUE(true);
}

TEST(PiezasTest, dropPiece)
{
	Piezas board;
	ASSERT_EQ(board.dropPiece(1), X);
}

TEST(PiezasTest, pieceAt)
{
	Piezas board;
	ASSERT_EQ(board.pieceAt(1, 5), Invalid);
}

TEST(PiezasTest, gameState)
{
	Piezas board;
	ASSERT_EQ(board.gameState(), Invalid);
}
