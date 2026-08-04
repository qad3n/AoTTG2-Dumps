// ==================== AoTTG2 cross-reference ====================
// Type: System.Reflection.ParameterAttributes
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Reflection;

[Token(Token = "0x20004EB")]
[Flags]
public enum ParameterAttributes
{
	[Token(Token = "0x400143F")]
	None = 0,
	[Token(Token = "0x4001440")]
	In = 1,
	[Token(Token = "0x4001441")]
	Out = 2,
	[Token(Token = "0x4001442")]
	Lcid = 4,
	[Token(Token = "0x4001443")]
	Retval = 8,
	[Token(Token = "0x4001444")]
	Optional = 0x10,
	[Token(Token = "0x4001445")]
	HasDefault = 0x1000,
	[Token(Token = "0x4001446")]
	HasFieldMarshal = 0x2000,
	[Token(Token = "0x4001447")]
	Reserved3 = 0x4000,
	[Token(Token = "0x4001448")]
	Reserved4 = 0x8000,
	[Token(Token = "0x4001449")]
	ReservedMask = 0xF000
}
