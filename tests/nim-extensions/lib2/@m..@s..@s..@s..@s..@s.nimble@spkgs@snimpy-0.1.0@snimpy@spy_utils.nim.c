/* Generated by Nim Compiler v1.0.6 */
/*   (c) 2019 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
#undef LANGUAGE_C
#undef MIPSEB
#undef MIPSEL
#undef PPC
#undef R3000
#undef R4000
#undef i386
#undef linux
#undef mips
#undef near
#undef far
#undef powerpc
#undef unix
#define nimfr_(x, y)
#define nimln_(x, y)
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyObject_PyTypeObject3Obj__cRsC9bGvH9bX6A9aVx8UB6I5g tyObject_PyTypeObject3Obj__cRsC9bGvH9bX6A9aVx8UB6I5g;
typedef struct tyObject_PyObjectObj__aD5pkFWInXrZXinZ42cDEg tyObject_PyObjectObj__aD5pkFWInXrZXinZ42cDEg;
typedef struct tyObject_PyLibcolonObjectType___bTw708kK89b8Vj9cmSu9a4zig tyObject_PyLibcolonObjectType___bTw708kK89b8Vj9cmSu9a4zig;
typedef struct tyObject_RawPyBuffer__0qyRdSZKtLACJ1u4qMMP2w tyObject_RawPyBuffer__0qyRdSZKtLACJ1u4qMMP2w;
typedef struct tyObject_Complex__zWadV1X9aMO7qS9bsQFB0JFA tyObject_Complex__zWadV1X9aMO7qS9bsQFB0JFA;
typedef struct tyObject_PyMethodDef__9aWi1PsmvCuTKIYDHHnhfcw tyObject_PyMethodDef__9aWi1PsmvCuTKIYDHHnhfcw;
typedef struct Exception Exception;
typedef struct RootObj RootObj;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tySequence__uB9b75OUPRENsBAu4AnoePA tySequence__uB9b75OUPRENsBAu4AnoePA;
typedef struct tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g;
typedef struct tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w;
typedef struct tyObject_GcHeap__1TRH1TZMaVZTnLNcIHuNFQ tyObject_GcHeap__1TRH1TZMaVZTnLNcIHuNFQ;
typedef struct tyObject_GcStack__7fytPA5bBsob6See21YMRA tyObject_GcStack__7fytPA5bBsob6See21YMRA;
typedef struct tyObject_MemRegion__x81NhDv59b8ercDZ9bi85jyg tyObject_MemRegion__x81NhDv59b8ercDZ9bi85jyg;
typedef struct tyObject_SmallChunk__tXn60W2f8h3jgAYdEmy5NQ tyObject_SmallChunk__tXn60W2f8h3jgAYdEmy5NQ;
typedef struct tyObject_BigChunk__Rv9c70Uhp2TytkX7eH78qEg tyObject_BigChunk__Rv9c70Uhp2TytkX7eH78qEg;
typedef struct tyObject_LLChunk__XsENErzHIZV9bhvyJx56wGw tyObject_LLChunk__XsENErzHIZV9bhvyJx56wGw;
typedef struct tyObject_IntSet__EZObFrE3NC9bIb3YMkY9crZA tyObject_IntSet__EZObFrE3NC9bIb3YMkY9crZA;
typedef struct tyObject_Trunk__W0r8S0Y3UGke6T9bIUWnnuw tyObject_Trunk__W0r8S0Y3UGke6T9bIUWnnuw;
typedef struct tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw;
typedef struct tyObject_HeapLinks__PDV1HBZ8CQSQJC9aOBFNRSg tyObject_HeapLinks__PDV1HBZ8CQSQJC9aOBFNRSg;
typedef struct tyTuple__ujsjpB2O9cjj3uDHsXbnSzg tyTuple__ujsjpB2O9cjj3uDHsXbnSzg;
typedef struct tyObject_GcStat__0RwLoVBHZPfUAcLczmfQAg tyObject_GcStat__0RwLoVBHZPfUAcLczmfQAg;
typedef struct tyObject_CellSet__jG87P0AI9aZtss9ccTYBIISQ tyObject_CellSet__jG87P0AI9aZtss9ccTYBIISQ;
typedef struct tyObject_PageDesc__fublkgIY4LG3mT51LU2WHg tyObject_PageDesc__fublkgIY4LG3mT51LU2WHg;
typedef struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct tyObject_PyObjectObj__aD5pkFWInXrZXinZ42cDEg {
NI ob_refcnt;
void* ob_type;
};
typedef N_CDECL_PTR(void*, tyProc__SsjMo29bx9bP5kwe2xgM3Scg) (NCSTRING f, ...);
typedef N_CDECL_PTR(void*, tyProc__4wJmT85lsn175X0dPNQv7w) (NI sz);
typedef N_CDECL_PTR(NI, tyProc__YRQqZC12s3573tRGP8MV3g) (void* f);
typedef N_CDECL_PTR(void*, tyProc__oPIasAghCTvCKmvkMeB1xQ) (void* f, NI i);
typedef N_CDECL_PTR(int, tyProc__6slETyyIDJuDOSqkO0hUXA) (void* f, NI i, void* v);
typedef N_CDECL_PTR(int, tyProc__tgpXIILGoVcO9bvYnz9azTVQ) (tyObject_PyTypeObject3Obj__cRsC9bGvH9bX6A9aVx8UB6I5g* f);
typedef N_CDECL_PTR(void*, tyProc__eYT4U6bGFqFBUxk9b15mfOA) (tyObject_PyTypeObject3Obj__cRsC9bGvH9bX6A9aVx8UB6I5g* f, void* a, void* b);
typedef N_CDECL_PTR(int, tyProc__T08W9bgbY4bOv2q64h6irpw) (void* m, NCSTRING n, void* o);
typedef N_CDECL_PTR(void*, tyProc__uQWqJp3WAx8fOY1h9aCwjIg) (void* callable_object, void* args, void* kw);
typedef N_CDECL_PTR(int, tyProc__fbYpjfe38x3ujjAmVRbI1Q) (void* o);
typedef N_CDECL_PTR(void*, tyProc__YezmFzxOOyM9cb11Eoq1Elg) (void* o, NCSTRING name);
typedef N_CDECL_PTR(void*, tyProc__jvPpjMAkI9bwM1B9apOphnlA) (void* o);
typedef N_CDECL_PTR(void*, tyProc__VQ1ysQk017myXMGb79cPTVw) (void* o, void* k);
typedef N_CDECL_PTR(int, tyProc__7LMjBc4zOHVIsNdulNv7QQ) (void* o, void* k, void* v);
typedef N_CDECL_PTR(int, tyProc__eoRP3F9aLT3mtHj6OkcMSyQ) (void* a, void* b, int op);
typedef N_CDECL_PTR(int, tyProc__8hR9arLDkUs9ag3Pt9bWtjfsg) (void* o, tyObject_RawPyBuffer__0qyRdSZKtLACJ1u4qMMP2w* b, int flags);
typedef N_CDECL_PTR(void, tyProc__vFvpnKOere9bRFN9czzMRlTA) (tyObject_RawPyBuffer__0qyRdSZKtLACJ1u4qMMP2w* b);
typedef N_CDECL_PTR(void*, tyProc__BZ6N5NNdHcK05FTDxQbEWw) (NCSTRING name, void* base, void* dict);
typedef N_CDECL_PTR(NI64, tyProc__mIlNZ9aGaphVJCyIIofK8mg) (void* l);
typedef N_CDECL_PTR(double, tyProc__2su9b9chqHYibM7sMkbSaSkA) (void* l);
typedef N_CDECL_PTR(void*, tyProc__Fc4ZUx59aQs10dLxeMQ50mw) (long v);
typedef N_CDECL_PTR(int, tyProc__i2exZ7Vtp648U9crOFcq9beQ) (tyObject_PyTypeObject3Obj__cRsC9bGvH9bX6A9aVx8UB6I5g* t1, tyObject_PyTypeObject3Obj__cRsC9bGvH9bX6A9aVx8UB6I5g* t2);
struct tyObject_Complex__zWadV1X9aMO7qS9bsQFB0JFA {
NF re;
NF im;
};
typedef N_CDECL_PTR(tyObject_Complex__zWadV1X9aMO7qS9bsQFB0JFA, tyProc__N1A5ZvDSgO9c9aRXmVqfn9bAw) (void* op);
typedef N_CDECL_PTR(int, tyProc__3FKLKFzOaK7FD6dRLWM6Jw) (void* o, NIM_CHAR** s, NI* len);
typedef N_CDECL_PTR(void*, tyProc__YDKrw1adv61oVQkQhbYyaA) (NCSTRING s);
typedef N_CDECL_PTR(int, tyProc__B2MjSeo07a72ynTQRVYFKw) (void* o, NCSTRING s);
typedef N_CDECL_PTR(NCSTRING, tyProc__p1X2BwWx9a3wsChhykvf29aA) (void* o);
typedef N_CDECL_PTR(void*, tyProc__NzboHqZVJcbdtVGYrOosXQ) (void);
typedef N_CDECL_PTR(int, tyProc__MTei9bsKjha0o1cISO9aLMDg) (void* o, void* k);
typedef N_NIMCALL_PTR(void, tyProc__4SVlZZPmetqBimNsH9cHcOA) (void* o);
typedef N_CDECL_PTR(void, tyProc__ln4kdL5W9bbX4a1xl8nnVXQ) (void);
typedef N_CDECL_PTR(void, tyProc__WYY8i0I79agBofnUcEGCfig) (void* o, NCSTRING s);
typedef N_CDECL_PTR(void, tyProc__32w2ZypAyMWuajvi2Jt79cg) (void* o);
typedef N_CDECL_PTR(void*, tyProc__jcEovQ2rZUNUsYxohT50Ug) (void* p, NCSTRING name, tyProc__32w2ZypAyMWuajvi2Jt79cg destr);
typedef N_CDECL_PTR(void*, tyProc__9b2qzlf3LCKK0JvThQT1atg) (tyObject_PyMethodDef__9aWi1PsmvCuTKIYDHHnhfcw* md, void* self, void* module);
typedef N_CDECL_PTR(void, tyProc__U0oVFt576Ze44Q9a3eZc5wg) (void** ptype, void** pvalue, void** ptraceback);
struct tyObject_PyLibcolonObjectType___bTw708kK89b8Vj9cmSu9a4zig {
void* module;
tyProc__SsjMo29bx9bP5kwe2xgM3Scg Py_BuildValue;
tyProc__4wJmT85lsn175X0dPNQv7w PyTuple_New;
tyProc__YRQqZC12s3573tRGP8MV3g PyTuple_Size;
tyProc__oPIasAghCTvCKmvkMeB1xQ PyTuple_GetItem;
tyProc__6slETyyIDJuDOSqkO0hUXA PyTuple_SetItem;
void* Py_None;
tyProc__tgpXIILGoVcO9bvYnz9azTVQ PyType_Ready;
tyProc__eYT4U6bGFqFBUxk9b15mfOA PyType_GenericNew;
tyProc__T08W9bgbY4bOv2q64h6irpw PyModule_AddObject;
tyProc__4wJmT85lsn175X0dPNQv7w PyList_New;
tyProc__YRQqZC12s3573tRGP8MV3g PyList_Size;
tyProc__oPIasAghCTvCKmvkMeB1xQ PyList_GetItem;
tyProc__6slETyyIDJuDOSqkO0hUXA PyList_SetItem;
tyProc__uQWqJp3WAx8fOY1h9aCwjIg PyObject_Call;
tyProc__fbYpjfe38x3ujjAmVRbI1Q PyObject_IsTrue;
tyProc__YezmFzxOOyM9cb11Eoq1Elg PyObject_GetAttrString;
tyProc__T08W9bgbY4bOv2q64h6irpw PyObject_SetAttrString;
tyProc__jvPpjMAkI9bwM1B9apOphnlA PyObject_Dir;
tyProc__jvPpjMAkI9bwM1B9apOphnlA PyObject_Str;
tyProc__jvPpjMAkI9bwM1B9apOphnlA PyObject_GetIter;
tyProc__VQ1ysQk017myXMGb79cPTVw PyObject_GetItem;
tyProc__7LMjBc4zOHVIsNdulNv7QQ PyObject_SetItem;
tyProc__eoRP3F9aLT3mtHj6OkcMSyQ PyObject_RichCompareBool;
tyProc__8hR9arLDkUs9ag3Pt9bWtjfsg PyObject_GetBuffer;
tyProc__vFvpnKOere9bRFN9czzMRlTA PyBuffer_Release;
tyProc__BZ6N5NNdHcK05FTDxQbEWw PyErr_NewException;
tyProc__jvPpjMAkI9bwM1B9apOphnlA PyIter_Next;
tyProc__mIlNZ9aGaphVJCyIIofK8mg PyLong_AsLongLong;
tyProc__2su9b9chqHYibM7sMkbSaSkA PyFloat_AsDouble;
tyProc__Fc4ZUx59aQs10dLxeMQ50mw PyBool_FromLong;
tyObject_PyTypeObject3Obj__cRsC9bGvH9bX6A9aVx8UB6I5g* PyFloat_Type;
tyObject_PyTypeObject3Obj__cRsC9bGvH9bX6A9aVx8UB6I5g* PyComplex_Type;
tyObject_PyTypeObject3Obj__cRsC9bGvH9bX6A9aVx8UB6I5g* PyCapsule_Type;
tyObject_PyTypeObject3Obj__cRsC9bGvH9bX6A9aVx8UB6I5g* PyTuple_Type;
tyObject_PyTypeObject3Obj__cRsC9bGvH9bX6A9aVx8UB6I5g* PyList_Type;
tyObject_PyTypeObject3Obj__cRsC9bGvH9bX6A9aVx8UB6I5g* PyBytes_Type;
tyObject_PyTypeObject3Obj__cRsC9bGvH9bX6A9aVx8UB6I5g* PyUnicode_Type;
tyProc__i2exZ7Vtp648U9crOFcq9beQ PyType_IsSubtype;
tyProc__N1A5ZvDSgO9c9aRXmVqfn9bAw PyComplex_AsCComplex;
tyProc__2su9b9chqHYibM7sMkbSaSkA PyComplex_RealAsDouble;
tyProc__2su9b9chqHYibM7sMkbSaSkA PyComplex_ImagAsDouble;
tyProc__jvPpjMAkI9bwM1B9apOphnlA PyUnicode_AsUTF8String;
tyProc__3FKLKFzOaK7FD6dRLWM6Jw PyBytes_AsStringAndSize;
tyProc__YDKrw1adv61oVQkQhbYyaA PyUnicode_FromString;
tyProc__B2MjSeo07a72ynTQRVYFKw PyUnicode_CompareWithASCIIString;
tyProc__p1X2BwWx9a3wsChhykvf29aA PyString_AsString;
tyObject_PyTypeObject3Obj__cRsC9bGvH9bX6A9aVx8UB6I5g* PyDict_Type;
tyProc__NzboHqZVJcbdtVGYrOosXQ PyDict_New;
tyProc__YRQqZC12s3573tRGP8MV3g PyDict_Size;
tyProc__YezmFzxOOyM9cb11Eoq1Elg PyDict_GetItemString;
tyProc__T08W9bgbY4bOv2q64h6irpw PyDict_SetItemString;
tyProc__VQ1ysQk017myXMGb79cPTVw PyDict_GetItem;
tyProc__7LMjBc4zOHVIsNdulNv7QQ PyDict_SetItem;
tyProc__jvPpjMAkI9bwM1B9apOphnlA PyDict_Keys;
tyProc__jvPpjMAkI9bwM1B9apOphnlA PyDict_Values;
tyProc__MTei9bsKjha0o1cISO9aLMDg PyDict_Contains;
tyProc__4SVlZZPmetqBimNsH9cHcOA PyDealloc;
tyProc__ln4kdL5W9bbX4a1xl8nnVXQ PyErr_Clear;
tyProc__WYY8i0I79agBofnUcEGCfig PyErr_SetString;
tyProc__NzboHqZVJcbdtVGYrOosXQ PyErr_Occurred;
void* PyExc_TypeError;
tyProc__jcEovQ2rZUNUsYxohT50Ug PyCapsule_New;
tyProc__YezmFzxOOyM9cb11Eoq1Elg PyCapsule_GetPointer;
tyProc__YDKrw1adv61oVQkQhbYyaA PyImport_ImportModule;
tyProc__NzboHqZVJcbdtVGYrOosXQ PyEval_GetBuiltins;
tyProc__NzboHqZVJcbdtVGYrOosXQ PyEval_GetGlobals;
tyProc__NzboHqZVJcbdtVGYrOosXQ PyEval_GetLocals;
tyProc__9b2qzlf3LCKK0JvThQT1atg PyCFunction_NewEx;
NI pythonVersion;
tyProc__U0oVFt576Ze44Q9a3eZc5wg PyErr_Fetch;
tyProc__U0oVFt576Ze44Q9a3eZc5wg PyErr_NormalizeException;
tyProc__MTei9bsKjha0o1cISO9aLMDg PyErr_GivenExceptionMatches;
void* PyExc_BaseException;
void* PyExc_Exception;
void* PyExc_ArithmeticError;
void* PyExc_FloatingPointError;
void* PyExc_OverflowError;
void* PyExc_ZeroDivisionError;
void* PyExc_AssertionError;
void* PyExc_OSError;
void* PyExc_IOError;
void* PyExc_ValueError;
void* PyExc_EOFError;
void* PyExc_MemoryError;
void* PyExc_IndexError;
void* PyExc_KeyError;
void* NimPyException;
};
typedef NU8 tyEnum_TNimKind__jIBKr1ejBgsfM33Kxw4j7A;
typedef NU8 tySet_tyEnum_TNimTypeFlag__v8QUszD1sWlSIWZz7mC4bQ;
typedef N_NIMCALL_PTR(void, tyProc__ojoeKfW4VYIm36I9cpDTQIg) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, tyProc__WSm2xU5ARYv9aAR4l0z9c9auQ) (void* p);
struct TNimType {
NI size;
tyEnum_TNimKind__jIBKr1ejBgsfM33Kxw4j7A kind;
tySet_tyEnum_TNimTypeFlag__v8QUszD1sWlSIWZz7mC4bQ flags;
TNimType* base;
TNimNode* node;
void* finalizer;
tyProc__ojoeKfW4VYIm36I9cpDTQIg marker;
tyProc__WSm2xU5ARYv9aAR4l0z9c9auQ deepcopy;
};
struct RootObj {
TNimType* m_type;
};
struct Exception {
  RootObj Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
tySequence__uB9b75OUPRENsBAu4AnoePA* trace;
NU raiseId;
Exception* up;
};
typedef NU8 tyEnum_TNimNodeKind__unfNsxrcATrufDZmpBq4HQ;
struct TNimNode {
tyEnum_TNimNodeKind__unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g {
NI refcount;
TNimType* typ;
};
struct tyObject_GcStack__7fytPA5bBsob6See21YMRA {
void* bottom;
};
struct tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w {
NI len;
NI cap;
tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g** d;
};
typedef tyObject_SmallChunk__tXn60W2f8h3jgAYdEmy5NQ* tyArray__SiRwrEKZdLgxqz9a9aoVBglg[512];
typedef NU32 tyArray__BHbOSqU1t9b3Gt7K2c6fQig[24];
typedef tyObject_BigChunk__Rv9c70Uhp2TytkX7eH78qEg* tyArray__N1u1nqOgmuJN9cSZrnMHgOQ[32];
typedef tyArray__N1u1nqOgmuJN9cSZrnMHgOQ tyArray__B6durA4ZCi1xjJvRtyYxMg[24];
typedef tyObject_Trunk__W0r8S0Y3UGke6T9bIUWnnuw* tyArray__lh2A89ahMmYg9bCmpVaplLbA[256];
struct tyObject_IntSet__EZObFrE3NC9bIb3YMkY9crZA {
tyArray__lh2A89ahMmYg9bCmpVaplLbA data;
};
typedef tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw* tyArray__0aOLqZchNi8nWtMTi8ND8w[2];
struct tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw {
tyArray__0aOLqZchNi8nWtMTi8ND8w link;
NI key;
NI upperBound;
NI level;
};
struct tyTuple__ujsjpB2O9cjj3uDHsXbnSzg {
tyObject_BigChunk__Rv9c70Uhp2TytkX7eH78qEg* Field0;
NI Field1;
};
typedef tyTuple__ujsjpB2O9cjj3uDHsXbnSzg tyArray__LzOv2eCDGiceMKQstCLmhw[30];
struct tyObject_HeapLinks__PDV1HBZ8CQSQJC9aOBFNRSg {
NI len;
tyArray__LzOv2eCDGiceMKQstCLmhw chunks;
tyObject_HeapLinks__PDV1HBZ8CQSQJC9aOBFNRSg* next;
};
struct tyObject_MemRegion__x81NhDv59b8ercDZ9bi85jyg {
NI minLargeObj;
NI maxLargeObj;
tyArray__SiRwrEKZdLgxqz9a9aoVBglg freeSmallChunks;
NU32 flBitmap;
tyArray__BHbOSqU1t9b3Gt7K2c6fQig slBitmap;
tyArray__B6durA4ZCi1xjJvRtyYxMg matrix;
tyObject_LLChunk__XsENErzHIZV9bhvyJx56wGw* llmem;
NI currMem;
NI maxMem;
NI freeMem;
NI occ;
NI lastSize;
tyObject_IntSet__EZObFrE3NC9bIb3YMkY9crZA chunkStarts;
tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw* root;
tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw* deleted;
tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw* last;
tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw* freeAvlNodes;
NIM_BOOL locked;
NIM_BOOL blockChunkSizeIncrease;
NI nextChunkSize;
tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw bottomData;
tyObject_HeapLinks__PDV1HBZ8CQSQJC9aOBFNRSg heapLinks;
};
struct tyObject_GcStat__0RwLoVBHZPfUAcLczmfQAg {
NI stackScans;
NI cycleCollections;
NI maxThreshold;
NI maxStackSize;
NI maxStackCells;
NI cycleTableSize;
NI64 maxPause;
};
struct tyObject_CellSet__jG87P0AI9aZtss9ccTYBIISQ {
NI counter;
NI max;
tyObject_PageDesc__fublkgIY4LG3mT51LU2WHg* head;
tyObject_PageDesc__fublkgIY4LG3mT51LU2WHg** data;
};
struct tyObject_GcHeap__1TRH1TZMaVZTnLNcIHuNFQ {
tyObject_GcStack__7fytPA5bBsob6See21YMRA stack;
NI cycleThreshold;
NI zctThreshold;
tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w zct;
tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w decStack;
tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w tempStack;
NI recGcLock;
tyObject_MemRegion__x81NhDv59b8ercDZ9bi85jyg region;
tyObject_GcStat__0RwLoVBHZPfUAcLczmfQAg stat;
tyObject_CellSet__jG87P0AI9aZtss9ccTYBIISQ marked;
tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w additionalRoots;
NI gcThreadId;
};
struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA {
NCSTRING procname;
NI line;
NCSTRING filename;
};
struct tySequence__uB9b75OUPRENsBAu4AnoePA {
  TGenericSeq Sup;
  tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA data[SEQ_DECL_SIZE];
};
static N_INLINE(NIM_BOOL, checkObjSubclass__dy3LelvW4G2VSkE8TdlDDgpy_utils)(void* o, tyObject_PyTypeObject3Obj__cRsC9bGvH9bX6A9aVx8UB6I5g* ty);
N_LIB_PRIVATE N_NIMCALL(void, conversionToStringError__2YA4NXAzmPMdXt3hDLwaKQ)(void);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(void, decRef__AT1eRuflKWyTTBdLjEDZbgsystem)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(void, rtlAddZCT__AT1eRuflKWyTTBdLjEDZbg_2system)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
N_LIB_PRIVATE N_NOINLINE(void, addZCT__Y66tOYFjgwJ0k4aLz4bc0Q)(tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w* s, tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell__QFQqcLB3lgOdwipkv9a60xwsystem)(void* usr);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incRef__AT1eRuflKWyTTBdLjEDZbg_3system)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
N_NIMCALL(void, raiseExceptionEx)(Exception* e, NCSTRING ename, NCSTRING procname, NCSTRING filename, NI line);
static N_INLINE(void, decRef__CnqcscfOCAX2jCHv3dRPDw_2py_utils)(void* p);
static N_INLINE(tyObject_PyObjectObj__aD5pkFWInXrZXinZ42cDEg*, to__4gaYCHYBaCTIs6wfSrqsEApy_lib)(void* p);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
static N_INLINE(void, copyMem__i80o3k0SgEI5gTRCzYdyWAsystem)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_NOINLINE(void, raiseIndexError2)(NI i, NI n);
extern tyObject_PyLibcolonObjectType___bTw708kK89b8Vj9cmSu9a4zig* pyLib__nxKBiAukGMNwnUq9bpn9adyw;
extern TNimType NTI__vU9aO9cTqOMn6CBzhV8rX7Sw_;
extern TNimType NTI__XEycrCsme5C8CVWAYEcdBQ_;
extern tyObject_GcHeap__1TRH1TZMaVZTnLNcIHuNFQ gch__IcYaEuuWivYAS86vFMTS3Q;
extern NU pyObjectStartOffset__g20dGCi2MffsHqmxIpqX7Q;
STRING_LITERAL(TM__yNJ2G9b01RlVILlUjgj0ESA_2, "Can\'t convert python obj to string", 34);
static N_INLINE(NIM_BOOL, checkObjSubclass__dy3LelvW4G2VSkE8TdlDDgpy_utils)(void* o, tyObject_PyTypeObject3Obj__cRsC9bGvH9bX6A9aVx8UB6I5g* ty) {	NIM_BOOL result;
	tyObject_PyTypeObject3Obj__cRsC9bGvH9bX6A9aVx8UB6I5g* typ;
	NIM_BOOL T1_;
	int T3_;
	result = (NIM_BOOL)0;
	typ = ((tyObject_PyTypeObject3Obj__cRsC9bGvH9bX6A9aVx8UB6I5g*) ((*((tyObject_PyObjectObj__aD5pkFWInXrZXinZ42cDEg*) (o))).ob_type));
	T1_ = (NIM_BOOL)0;
	T1_ = (ty == typ);
	if (T1_) goto LA2_;
	T3_ = (int)0;
	T3_ = (*pyLib__nxKBiAukGMNwnUq9bpn9adyw).PyType_IsSubtype(typ, ty);
	T1_ = !((T3_ == ((NI32) 0)));
	LA2_: ;
	result = T1_;
	return result;
}
static N_INLINE(void, rtlAddZCT__AT1eRuflKWyTTBdLjEDZbg_2system)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c) {	addZCT__Y66tOYFjgwJ0k4aLz4bc0Q((&gch__IcYaEuuWivYAS86vFMTS3Q.zct), c);
}
static N_INLINE(void, decRef__AT1eRuflKWyTTBdLjEDZbgsystem)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c) {	(*c).refcount = (NI)((NU64)((*c).refcount) - (NU64)(((NI) 8)));
	{
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3_;
		rtlAddZCT__AT1eRuflKWyTTBdLjEDZbg_2system(c);
	}
	LA3_: ;
}
static N_INLINE(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell__QFQqcLB3lgOdwipkv9a60xwsystem)(void* usr) {	tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* result;
	result = (tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*)0;
	result = ((tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*) ((NI)((NU64)(((NI) (ptrdiff_t) (usr))) - (NU64)(((NI) 16)))));
	return result;
}
static N_INLINE(void, nimGCunrefNoCycle)(void* p) {	tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* T1_;
	T1_ = (tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*)0;
	T1_ = usrToCell__QFQqcLB3lgOdwipkv9a60xwsystem(p);
	decRef__AT1eRuflKWyTTBdLjEDZbgsystem(T1_);
}
static N_INLINE(void, incRef__AT1eRuflKWyTTBdLjEDZbg_3system)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c) {	(*c).refcount = (NI)((NU64)((*c).refcount) + (NU64)(((NI) 8)));
}
static N_INLINE(void, asgnRef)(void** dest, void* src) {	{
		tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* T5_;
		if (!!((src == NIM_NIL))) goto LA3_;
		T5_ = (tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*)0;
		T5_ = usrToCell__QFQqcLB3lgOdwipkv9a60xwsystem(src);
		incRef__AT1eRuflKWyTTBdLjEDZbg_3system(T5_);
	}
	LA3_: ;
	{
		tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* T10_;
		if (!!(((*dest) == NIM_NIL))) goto LA8_;
		T10_ = (tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*)0;
		T10_ = usrToCell__QFQqcLB3lgOdwipkv9a60xwsystem((*dest));
		decRef__AT1eRuflKWyTTBdLjEDZbgsystem(T10_);
	}
	LA8_: ;
	(*dest) = src;
}
N_LIB_PRIVATE N_NIMCALL(void, conversionToStringError__2YA4NXAzmPMdXt3hDLwaKQ)(void) {	Exception* eX60gensym366150_;
	NimStringDesc* T1_;
	(*pyLib__nxKBiAukGMNwnUq9bpn9adyw).PyErr_Clear();
	eX60gensym366150_ = (Exception*)0;
	eX60gensym366150_ = (Exception*) newObj((&NTI__vU9aO9cTqOMn6CBzhV8rX7Sw_), sizeof(Exception));
	(*eX60gensym366150_).Sup.m_type = (&NTI__XEycrCsme5C8CVWAYEcdBQ_);
	(*eX60gensym366150_).name = "Exception";
	T1_ = (NimStringDesc*)0;
	T1_ = (*eX60gensym366150_).message; (*eX60gensym366150_).message = copyStringRC1(((NimStringDesc*) &TM__yNJ2G9b01RlVILlUjgj0ESA_2));
	if (T1_) nimGCunrefNoCycle(T1_);
	asgnRef((void**) (&(*eX60gensym366150_).parent), NIM_NIL);
	raiseExceptionEx((Exception*)eX60gensym366150_, "Exception", "conversionToStringError", "py_utils.nim", 25);
}
static N_INLINE(tyObject_PyObjectObj__aD5pkFWInXrZXinZ42cDEg*, to__4gaYCHYBaCTIs6wfSrqsEApy_lib)(void* p) {	tyObject_PyObjectObj__aD5pkFWInXrZXinZ42cDEg* result;
	result = (tyObject_PyObjectObj__aD5pkFWInXrZXinZ42cDEg*)0;
	result = ((tyObject_PyObjectObj__aD5pkFWInXrZXinZ42cDEg*) ((NU)((NU64)(((NU) (ptrdiff_t) (p))) + (NU64)(pyObjectStartOffset__g20dGCi2MffsHqmxIpqX7Q))));
	return result;
}
static N_INLINE(NI, subInt)(NI a, NI b) {	NI result;
{	result = (NI)0;
	result = (NI)((NU64)(a) - (NU64)(b));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (((NI) 0) <= (NI)(result ^ a));
		if (T3_) goto LA4_;
		T3_ = (((NI) 0) <= (NI)(result ^ (NI)((NU64) ~(b))));
		LA4_: ;
		if (!T3_) goto LA5_;
		goto BeforeRet_;
	}
	LA5_: ;
	raiseOverflow();
	}BeforeRet_: ;
	return result;
}
static N_INLINE(void, decRef__CnqcscfOCAX2jCHv3dRPDw_2py_utils)(void* p) {	tyObject_PyObjectObj__aD5pkFWInXrZXinZ42cDEg* o;
	NI TM__yNJ2G9b01RlVILlUjgj0ESA_3;
	o = to__4gaYCHYBaCTIs6wfSrqsEApy_lib(p);
	TM__yNJ2G9b01RlVILlUjgj0ESA_3 = subInt((*o).ob_refcnt, ((NI) 1));
	(*o).ob_refcnt = (NI)(TM__yNJ2G9b01RlVILlUjgj0ESA_3);
	{
		if (!((*o).ob_refcnt == ((NI) 0))) goto LA3_;
		(*pyLib__nxKBiAukGMNwnUq9bpn9adyw).PyDealloc(p);
	}
	LA3_: ;
}
static N_INLINE(NI, chckRange)(NI i, NI a, NI b) {	NI result;
{	result = (NI)0;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (a <= i);
		if (!(T3_)) goto LA4_;
		T3_ = (i <= b);
		LA4_: ;
		if (!T3_) goto LA5_;
		result = i;
		goto BeforeRet_;
	}
	goto LA1_;
	LA5_: ;
	{
		raiseRangeError(((NI64) (i)));
	}
	LA1_: ;
	}BeforeRet_: ;
	return result;
}
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size) {	void* T1_;
	T1_ = (void*)0;
	T1_ = memcpy(dest, source, ((size_t) (size)));
}
static N_INLINE(void, copyMem__i80o3k0SgEI5gTRCzYdyWAsystem)(void* dest, void* source, NI size) {	nimCopyMem(dest, source, size);
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, pyStringToNim__9cjH8eaYe0aMdbQ9bg4rwiDw)(void* o, NimStringDesc** output) {	NIM_BOOL result;
	NIM_CHAR* s;
	NI l;
	void* b;
{	result = (NIM_BOOL)0;
	s = (NIM_CHAR*)0;
	l = (NI)0;
	b = (void*)0;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = checkObjSubclass__dy3LelvW4G2VSkE8TdlDDgpy_utils(o, (*pyLib__nxKBiAukGMNwnUq9bpn9adyw).PyUnicode_Type);
		if (!T3_) goto LA4_;
		b = (*pyLib__nxKBiAukGMNwnUq9bpn9adyw).PyUnicode_AsUTF8String(o);
		{
			if (!(b == 0)) goto LA8_;
			conversionToStringError__2YA4NXAzmPMdXt3hDLwaKQ();
		}
		LA8_: ;
		{
			int T12_;
			T12_ = (int)0;
			T12_ = (*pyLib__nxKBiAukGMNwnUq9bpn9adyw).PyBytes_AsStringAndSize(b, &s, (&l));
			if (!!((T12_ == ((NI32) 0)))) goto LA13_;
			decRef__CnqcscfOCAX2jCHv3dRPDw_2py_utils(b);
			conversionToStringError__2YA4NXAzmPMdXt3hDLwaKQ();
		}
		LA13_: ;
	}
	goto LA1_;
	LA4_: ;
	{
		NIM_BOOL T16_;
		T16_ = (NIM_BOOL)0;
		T16_ = checkObjSubclass__dy3LelvW4G2VSkE8TdlDDgpy_utils(o, (*pyLib__nxKBiAukGMNwnUq9bpn9adyw).PyBytes_Type);
		if (!T16_) goto LA17_;
		{
			int T21_;
			T21_ = (int)0;
			T21_ = (*pyLib__nxKBiAukGMNwnUq9bpn9adyw).PyBytes_AsStringAndSize(o, &s, (&l));
			if (!!((T21_ == ((NI32) 0)))) goto LA22_;
			conversionToStringError__2YA4NXAzmPMdXt3hDLwaKQ();
		}
		LA22_: ;
	}
	goto LA1_;
	LA17_: ;
	{
		goto BeforeRet_;
	}
	LA1_: ;
	unsureAsgnRef((void**) (&(*output)), mnewString(((NI)chckRange(l, ((NI) 0), ((NI) IL64(9223372036854775807))))));
	{
		if (!!((l == ((NI) 0)))) goto LA27_;
		if ((NU)(((NI) 0)) >= (NU)((*output) ? (*output)->Sup.len : 0)) raiseIndexError2(((NI) 0),((*output) ? (*output)->Sup.len : 0)-1);
		copyMem__i80o3k0SgEI5gTRCzYdyWAsystem(((void*) ((&(*output)->data[((NI) 0)]))), ((void*) (s)), ((NI)chckRange(l, ((NI) 0), ((NI) IL64(9223372036854775807)))));
	}
	LA27_: ;
	{
		if (!!((b == 0))) goto LA31_;
		decRef__CnqcscfOCAX2jCHv3dRPDw_2py_utils(b);
	}
	LA31_: ;
	result = NIM_TRUE;
	}BeforeRet_: ;
	return result;
}
