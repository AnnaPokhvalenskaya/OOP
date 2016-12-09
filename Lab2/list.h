#ifndef LIST_H
#define LIST_H

#include <iostream>
#include "rectangle.h"
#include "item.h"

class TList {
public:
	TList(); 
	void Push(const TRectangle &rectangle); 
	TRectangle Pop();  
	friend std::ostream &operator<<(std::ostream &os, const TList &list); 
	~TList(); 
private:
	void PushFront(const TRectangle &rectangle); 
	void PushBack(const TRectangle &rectangle); 
	void PushAtIndex(const TRectangle &rectangle, const int &id); 
	TRectangle PopFront();
	TRectangle PopBack();
	TRectangle PopAtIndex(const int &id);
	int ListSize;
	TItem *Tail;
};

#endif