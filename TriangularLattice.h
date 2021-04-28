#pragma once
#include <vector>

template <class T>
class TriangularLattice
{
private:
	std::vector<T> m_value;

public:
	TriangularLattice(int x, int y);

	int getUpperLeftIndex(int index) const;
	int getUpperRightIndex(int index) const;
	int getLeftIndex(int index) const;
	int getRightIndex(int index) const;
	int getLowerLeftIndex(int index) const;
	int getLowerRightIndex(int index) const;
};

#include "TriangularLattice.inl"