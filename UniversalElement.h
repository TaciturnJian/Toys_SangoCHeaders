#pragma once

#include "SimpleInclude.h"

typedef struct _UniversalElement {
	int Size;
	void *Content;
} UniversalElement, PTRName(UniversalElementPTR);

typedef struct _SangoElement {
	int mSize;
	char mElement[0];
} SangoElement, PTRName(SangoElementPointer);

struct {
	UniversalElementPTR (*Create)(void *content, int size);
	void (*Dispose)(UniversalElementPTR);
} UniversalElement_;

ActionFunc(UniversalElement_Initialize);

#define GetContent(c_type,ue_ptr) *(c_type*)(ue_ptr->Content)
#define SetContent(ue_ptr,c_ptr) ue_ptr->Content=c_ptr
#define SetContentValue(ue_ptr,c_type,value) GetContent(c_type,ue_ptr)=value
