// ==================== AoTTG2 cross-reference ====================
// Type: System.Reflection.PropertyAttributes
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Reflection;

[Token(Token = "0x20004F9")]
[Flags]
public enum PropertyAttributes
{
	[Token(Token = "0x40013BC")]
	None = 0,
	[Token(Token = "0x40013BD")]
	SpecialName = 0x200,
	[Token(Token = "0x40013BE")]
	RTSpecialName = 0x400,
	[Token(Token = "0x40013BF")]
	HasDefault = 0x1000,
	[Token(Token = "0x40013C0")]
	Reserved2 = 0x2000,
	[Token(Token = "0x40013C1")]
	Reserved3 = 0x4000,
	[Token(Token = "0x40013C2")]
	Reserved4 = 0x8000,
	[Token(Token = "0x40013C3")]
	ReservedMask = RTSpecialName | HasDefault | Reserved2 | Reserved3 | Reserved4
}
