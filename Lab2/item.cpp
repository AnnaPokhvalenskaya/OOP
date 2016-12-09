#include "item.h"

TItem::TItem(const TRectangle &rectangle) {
	Next = Prev = nullptr;
	Rectangle = rectangle;
}

TItem *TItem::GetNext() {
	return Next;
}

TItem *TItem::GetPrev() {
	return Prev;
}

TRectangle TItem::GetValue() {
	return Rectangle;
}

void TItem::SetNext(TItem *next) {
	Next = next;
}

void TItem::SetPrev(TItem *prev) {
	Prev = prev;
}