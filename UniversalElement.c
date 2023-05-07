#include "UniversalElement.h"

UniversalElementPTR UniversalElement_Create(void *content, int size) {
	UniversalElementPTR result = (UniversalElementPTR)malloc(sizeof(UniversalElement));
	if (result == 0) {

#ifdef SG_ERRORALL
		//TODO throw errors
#endif
		return 0;
	}
	else {
		SetContent(result, content);
		result->Size = size;
		return result;
	}
}

UniversalElement_Dispose(UniversalElementPTR p) {
	free(p);
	p = 0;
}

void UniversalElement_Initialize() {
	UniversalElement_.Create = UniversalElement_Create;
	UniversalElement_.Dispose = UniversalElement_Dispose;
}