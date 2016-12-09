#include "Trapeze.h" 
#include <iostream>
#include <cmath>
Trapeze::Trapeze() : Trapeze(0, 0, 0, 0) { }
Trapeze::Trapeze(size_t i, size_t j, size_t k, size_t l) : side_a(i), side_b(j), side_c(k), side_d(l) {
std::cout << "Trapeze created: " << side_a << ", " << side_b << ", " << side_c << ", " << side_d << std::endl;
}
Trapeze::Trapeze(std::istream &is) { 
	is >> side_a;
	is >> side_b; 
	is >> side_c;
	is >> side_d;
}
Trapeze::Trapeze(const Trapeze& orig) {
std::cout << "Trapeze copy created" << std::endl; 
	side_a = orig.side_a;
	side_b = orig.side_b;
	side_c = orig.side_c;
	side_d = orig.side_d;
}
double Trapeze::Square() {
double h = sqrt((side_c * side_c) - ((side_b - side_a) * (side_b - side_a) / 4));
double p = ((side_a + side_b) * h / 2);
return p ; 
}
void Trapeze::Print() {
std::cout << "a=" << side_a << ", b=" << side_b << ", c=" << side_c << ", d=" << side_d << 
std::endl;
}
Trapeze::~Trapeze() {
std::cout << "Trapeze deleted" << std::endl; 
}