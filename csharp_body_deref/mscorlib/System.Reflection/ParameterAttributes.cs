// ==================== AoTTG2 cross-reference ====================
// Type: System.Reflection.ParameterAttributes
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Reflection;

[Token(Token = "0x20004F4")]
[Flags]
public enum ParameterAttributes
{
	[Token(Token = "0x400139F")]
	None = 0,
	[Token(Token = "0x40013A0")]
	In = 1,
	[Token(Token = "0x40013A1")]
	Out = 2,
	[Token(Token = "0x40013A2")]
	Lcid = 4,
	[Token(Token = "0x40013A3")]
	Retval = 8,
	[Token(Token = "0x40013A4")]
	Optional = 0x10,
	[Token(Token = "0x40013A5")]
	HasDefault = 0x1000,
	[Token(Token = "0x40013A6")]
	HasFieldMarshal = 0x2000,
	[Token(Token = "0x40013A7")]
	Reserved3 = 0x4000,
	[Token(Token = "0x40013A8")]
	Reserved4 = 0x8000,
	[Token(Token = "0x40013A9")]
	ReservedMask = HasDefault | HasFieldMarshal | Reserved3 | Reserved4
}
