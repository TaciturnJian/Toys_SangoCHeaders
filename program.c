#include <stdio.h>

#include "SimpleInclude.h"
#include "FixedList.h"

inline CFunc_1A0R(print_int, int, x) Body (
	printf("%d\n", x);
)

int main() {
	UniversalElement_Initialize();
	FixedList_Initialize();
	int a = 2;
	UniversalElementPTR p = UniversalElement_.Create(&a, 4);
	print_int(GetContent(int, p));
	SetContentValue(p, int, 4);
	print_int(GetContent(int, p));

	FixedListPTR plist = FixedList_.Create(1);

	plist->Elements[0] = *p;
	print_int(GetListElementContentAt(plist, 0, int));

	return 0;
}
