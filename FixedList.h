#pragma once

#include "SimpleInclude.h"

typedef struct {
	const int Count;
	UniversalElement *Elements;
} FixedList, PTRName(FixedListPTR);

struct {
	FixedListPTR (*Create)(int);
	void (*Dispose)(FixedListPTR);
} FixedList_;

ActionFunc(FixedList_Initialize);

#define GetListElementAt(list,i) (UniversalElementPTR)(list->Elements+i)
#define GetListElementContentAt(list,i,type) GetContent(type,GetListElementAt(list,i))
