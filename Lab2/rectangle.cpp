#include <iostream>
#include "rectangle.h"


TRectangle::TRectangle(){
	SideA = SideB = 0;
}

TRectangle::TRectangle(std::istream &is) {
	is >> SideA;
	is >> SideB;
}

size_t TRectangle::Square() const {
	return SideA * SideB;
}

std::ostream &operator<<(std::ostream &os, const TRectangle &rectangle) {
	os << '(' << rectangle.SideA << ' ' << rectangle.SideB << ')';
	return os;
}

std::istream &operator>>(std::istream &is, TRectangle &rectangle) {
	is >> rectangle.SideA;
	is >> rectangle.SideB;
	return is;
}

TRectangle TRectangle::operator=(const TRectangle &right) {
	if (this == &right) {
		return *this; 
	}
	SideA = right.SideA;
	SideB = right.SideB;
	return *this;
}

bool TRectangle::operator==(const TRectangle &right) {
	return (SideA == right.SideA && SideB == right.SideB);
}