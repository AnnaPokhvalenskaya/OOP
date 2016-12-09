#ifndef ITEM_H
#define ITEM_H

#include "rectangle.h"

class TItem {
public:
	TItem(const TRectangle &rectangle);
	TItem *GetNext();
	TItem *GetPrev();
	TRectangle GetValue();
	void SetNext(TItem *next);
	void SetPrev(TItem *prev);
	~TItem() {};
private:
	TItem *Next;
	TItem *Prev;
	TRectangle Rectangle;
};

#endif