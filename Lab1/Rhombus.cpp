#include "Rhombus.h" 
#include <iostream>
#include <cmath>

Rhombus::Rhombus() : Rhombus(0, 0) { }
Rhombus::Rhombus(size_t i, size_t j) : side_a(i), side_b(j) {
std::cout << "Rhombus created: " << side_a << ", " << side_b << std::endl;
}
Rhombus::Rhombus(std::istream &is) { 
	is >> side_a;
	is >> side_b; 
}
Rhombus::Rhombus(const Rhombus& orig) {
std::cout << "Rhombus copy created" << std::endl; 
	side_a = orig.side_a;
	side_b = orig.side_b;
}
double Rhombus::Square() {
double p = (side_a * side_b/2);
return p ; 
}
void Rhombus::Print() {
std::cout << "a=" << side_a << ", b=" << side_b << 
std::endl;
}
Rhombus::~Rhombus() {
std::cout << "Rhombus deleted" << std::endl; 
}