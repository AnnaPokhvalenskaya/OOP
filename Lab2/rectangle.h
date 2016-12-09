#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <iostream>

class TRectangle {
public:
	TRectangle();
	TRectangle(std::istream &is);
	size_t Square() const;
	friend std::ostream &operator<<(std::ostream &os, const TRectangle &rectangle);
	friend std::istream &operator>>(std::istream &is, TRectangle &rectangle);
	TRectangle operator=(const TRectangle &right);
	bool operator==(const TRectangle &right);
	~TRectangle() {};
private:
	size_t SideA;
	size_t SideB;
};

#endif