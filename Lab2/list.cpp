#include <iostream>
#include "rectangle.h"
#include "list.h"
#include "item.h"

TList::TList() {
	ListSize = 0;
	Tail = nullptr;
}

void TList::Push(const TRectangle &rectangle) {
	int index;
	std::cout << "Enter index = ";
	std::cin >> index;
	if (index > ListSize || index < 0) {
		std::cout << "This index doesn't exist\n";
		return;
	}
	if (index == 0) {
		this->PushBack(rectangle);
	}else if (index == ListSize) {
		this->PushFront(rectangle);
	} else {
		this->PushAtIndex(rectangle, index);
	}
	ListSize++;
}

void TList::PushFront(const TRectangle &rectangle) {
	TItem *iter = Tail;
	TItem *tmp = new TItem(rectangle);
	while (iter->GetNext()) {
		iter = iter->GetNext();
	}
	tmp->SetPrev(iter);
	iter->SetNext(tmp);
}

void TList::PushBack(const TRectangle &rectangle) {
	TItem *tmp = new TItem(rectangle);
	tmp->SetNext(Tail);
	Tail = tmp;
}
void TList::PushAtIndex(const TRectangle &rectangle, const int &id) {
	size_t i = 1;
	TItem *iter = Tail;
	TItem *tmp = new TItem(rectangle);
	while (i < id) {
		iter = iter->GetNext();
		i++;
	}
	tmp->SetNext(iter->GetNext());
	tmp->SetPrev(iter);
	iter->SetNext(tmp);
	iter->GetNext()->SetPrev(tmp);
}


TRectangle TList::Pop() {
	int index;
	std::cout << "Enter index = ";
	std::cin >> index;
	TRectangle result;
	if (index > ListSize || index < 0 || !ListSize) {
		std::cout << "This index doesn't exist, nothing to pop\n";
		return result;
	} 
	if (index == 0) {
		result = this->PopBack();
	}else if (index == ListSize - 1) {
		result = this->PopFront();
	} else {
		result = this->PopAtIndex(index);
	}
	ListSize--;
	return result;
}

TRectangle TList::PopFront() {
	TItem *iter = Tail;
	while (iter->GetNext()) {
		iter = iter->GetNext();
	}
	TRectangle result = iter->GetValue();
	iter->GetPrev()->SetNext(nullptr);
	delete iter;
	return result;
}

TRectangle TList::PopBack() {
	TItem *iter = Tail;
	TRectangle result = iter->GetValue();
	Tail = Tail->GetNext();
	delete iter;
	return result;
}

TRectangle TList::PopAtIndex(const int &id) {
	size_t i = 0;
	TItem *iter = Tail;
	while (i < id) {
		iter = iter->GetNext();
		i++;
	}
	TRectangle result = iter->GetValue();
	iter->GetNext()->SetPrev(iter->GetPrev());
	iter->GetPrev()->SetNext(iter->GetNext());
	return result;
}

std::ostream &operator<<(std::ostream &os, const TList &list) {
	if (list.ListSize) {
		TItem *iter = list.Tail;
		while (iter) {
			os << iter->GetValue() << '\t';
			iter = iter->GetNext(); 
		}
	} else {
		os << "List is empty";
	}
	return os;
}

TList::~TList() {
	TItem *iter;
	while (Tail) {
		iter = Tail;
		Tail = Tail->GetNext();
		delete iter;
	}
}