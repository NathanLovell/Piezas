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

TEST(PiezasTest, dropPiece1)
{
	Piezas board;
	ASSERT_EQ(board.dropPiece(1), X);
}

TEST(PiezasTest, dropPiece2)
{
	Piezas board;
	ASSERT_EQ(board.dropPiece(2), O);
}

TEST(PiezasTest, dropPiece3)
{
	Piezas board;
	ASSERT_EQ(board.dropPiece(3), X);
}

TEST(PiezasTest, dropPieceOverflow)
{
	Piezas board;
	board.dropPiece(1);
	board.dropPiece(1);
	board.dropPiece(1);
	ASSERT_EQ(board.dropPiece(1), Blank);
}

TEST(PiezasTest, dropPiece5)
{
	Piezas board;
	ASSERT_EQ(board.dropPiece(5), Invalid);
}

TEST(PiezasTest, dropPiece - 1)
{
	Piezas board;
	ASSERT_EQ(board.dropPiece(-1), Invalid);
}

TEST(PiezasTest, pieceAtX)
{
	Piezas board;
	board.dropPiece(1);
	ASSERT_EQ(board.pieceAt(0, 1), X);
}

TEST(PiezasTest, pieceAtO)
{
	Piezas board;
	board.dropPiece(1);
	board.dropPiece(1);
	ASSERT_EQ(board.pieceAt(1, 1), O);
}

TEST(PiezasTest, pieceAtInvalid)
{
	Piezas board;
	ASSERT_EQ(board.pieceAt(-1, 5), Invalid);
}

TEST(PiezasTest, gameState)
{
	Piezas board;
	ASSERT_EQ(board.gameState(), Invalid);
}
