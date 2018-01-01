#include "Board.h"
#include <assert.h>

Board::Board(Graphics & tempGfx)
	:
	gfx(tempGfx)
{

}

void Board::DrawCell(const Location& loc, Color c)
{
	assert(loc.x >= 0);
	assert(loc.x <= width);
	assert(loc.x >= 0);
	assert(loc.x <= height);

	gfx.DrawRectDim(loc.x * dimension, loc.y * dimension, dimension, dimension, c);
}

int Board::GetWidth() const
{
	return width;
}

int Board::GetHeight() const
{
	return height;
}

bool Board::IsInsideBoard(const Location & loc) const
{
	return loc.x  >= 0 && loc.x <width&&
		loc.y >= 0 && loc.y < height;
}
