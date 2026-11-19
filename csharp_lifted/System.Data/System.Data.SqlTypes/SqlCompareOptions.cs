// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.SqlTypes.SqlCompareOptions
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Data.SqlTypes;

[Token(Token = "0x20000B8")]
[Flags]
public enum SqlCompareOptions
{
	[Token(Token = "0x4000402")]
	None = 0,
	[Token(Token = "0x4000403")]
	IgnoreCase = 1,
	[Token(Token = "0x4000404")]
	IgnoreNonSpace = 2,
	[Token(Token = "0x4000405")]
	IgnoreKanaType = 8,
	[Token(Token = "0x4000406")]
	IgnoreWidth = 0x10,
	[Token(Token = "0x4000407")]
	BinarySort = 0x8000,
	[Token(Token = "0x4000408")]
	BinarySort2 = 0x4000
}
