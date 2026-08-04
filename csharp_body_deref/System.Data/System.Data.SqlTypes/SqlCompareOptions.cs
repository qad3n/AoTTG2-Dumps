// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.SqlTypes.SqlCompareOptions
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Data.SqlTypes;

[Token(Token = "0x20000AE")]
[Flags]
public enum SqlCompareOptions
{
	[Token(Token = "0x40003EF")]
	None = 0,
	[Token(Token = "0x40003F0")]
	IgnoreCase = 1,
	[Token(Token = "0x40003F1")]
	IgnoreNonSpace = 2,
	[Token(Token = "0x40003F2")]
	IgnoreKanaType = 8,
	[Token(Token = "0x40003F3")]
	IgnoreWidth = 0x10,
	[Token(Token = "0x40003F4")]
	BinarySort = 0x8000,
	[Token(Token = "0x40003F5")]
	BinarySort2 = 0x4000
}
