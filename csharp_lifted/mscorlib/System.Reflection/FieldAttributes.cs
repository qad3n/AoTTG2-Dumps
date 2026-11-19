// ==================== AoTTG2 cross-reference ====================
// Type: System.Reflection.FieldAttributes
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Reflection;

[Token(Token = "0x20004E3")]
[Flags]
public enum FieldAttributes
{
	[Token(Token = "0x4001346")]
	FieldAccessMask = 7,
	[Token(Token = "0x4001347")]
	PrivateScope = 0,
	[Token(Token = "0x4001348")]
	Private = 1,
	[Token(Token = "0x4001349")]
	FamANDAssem = 2,
	[Token(Token = "0x400134A")]
	Assembly = 3,
	[Token(Token = "0x400134B")]
	Family = 4,
	[Token(Token = "0x400134C")]
	FamORAssem = 5,
	[Token(Token = "0x400134D")]
	Public = 6,
	[Token(Token = "0x400134E")]
	Static = 0x10,
	[Token(Token = "0x400134F")]
	InitOnly = 0x20,
	[Token(Token = "0x4001350")]
	Literal = 0x40,
	[Token(Token = "0x4001351")]
	NotSerialized = 0x80,
	[Token(Token = "0x4001352")]
	SpecialName = 0x200,
	[Token(Token = "0x4001353")]
	PinvokeImpl = 0x2000,
	[Token(Token = "0x4001354")]
	RTSpecialName = 0x400,
	[Token(Token = "0x4001355")]
	HasFieldMarshal = 0x1000,
	[Token(Token = "0x4001356")]
	HasDefault = 0x8000,
	[Token(Token = "0x4001357")]
	HasFieldRVA = 0x100,
	[Token(Token = "0x4001358")]
	ReservedMask = RTSpecialName | HasFieldMarshal | HasDefault | HasFieldRVA
}
