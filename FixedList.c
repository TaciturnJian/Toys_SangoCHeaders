#include "FixedList.h"

FixedListPTR FixedList_Create(int size) {
	SimpleMalloc(elements, UniversalElement, size);
	CheckMalloc(elements);
	SimpleMalloc(result, FixedList, 1);
	CheckMalloc(result);
	result->Elements = elements;
	PTRName((TypePTR(u32))result) = size;

	return result;
}

void FixedList_Initialize() {
	FixedList_.Create = FixedList_Create;
}