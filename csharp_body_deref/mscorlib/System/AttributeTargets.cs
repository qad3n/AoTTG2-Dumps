// ==================== AoTTG2 cross-reference ====================
// Type: System.AttributeTargets
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x20000BD")]
[Flags]
public enum AttributeTargets
{
	[Token(Token = "0x4000290")]
	Assembly = 1,
	[Token(Token = "0x4000291")]
	Module = 2,
	[Token(Token = "0x4000292")]
	Class = 4,
	[Token(Token = "0x4000293")]
	Struct = 8,
	[Token(Token = "0x4000294")]
	Enum = 0x10,
	[Token(Token = "0x4000295")]
	Constructor = 0x20,
	[Token(Token = "0x4000296")]
	Method = 0x40,
	[Token(Token = "0x4000297")]
	Property = 0x80,
	[Token(Token = "0x4000298")]
	Field = 0x100,
	[Token(Token = "0x4000299")]
	Event = 0x200,
	[Token(Token = "0x400029A")]
	Interface = 0x400,
	[Token(Token = "0x400029B")]
	Parameter = 0x800,
	[Token(Token = "0x400029C")]
	Delegate = 0x1000,
	[Token(Token = "0x400029D")]
	ReturnValue = 0x2000,
	[Token(Token = "0x400029E")]
	GenericParameter = 0x4000,
	[Token(Token = "0x400029F")]
	All = Assembly | Module | Class | Struct | Enum | Constructor | Method | Property | Field | Event | Interface | Parameter | Delegate | ReturnValue | GenericParameter
}
