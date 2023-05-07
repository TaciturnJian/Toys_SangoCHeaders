#pragma once

#define i8 char
#define i16 short
#define i32 int
#define i64 long

#define u8 unsigned i8
#define u16 unsigned i16
#define u32 unsigned i32
#define u64 unsigned i64

#define TypePTR(Type) Type*
#define PTRName(Name) (*Name)
#define Func(Name) Name()
#define Body(x) {x}
#define CFunc_0A0R(Name) void Name(void)
#define CFunc_1A0R(Name,aType,aName) void Name(aType aName)

#define ActionFunc(Name) CFunc_0A0R(Name)