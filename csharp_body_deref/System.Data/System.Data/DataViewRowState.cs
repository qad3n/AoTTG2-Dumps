// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.DataViewRowState
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x2000048")]
[Flags]
public enum DataViewRowState
{
	[Token(Token = "0x400015F")]
	None = 0,
	[Token(Token = "0x4000160")]
	Unchanged = 2,
	[Token(Token = "0x4000161")]
	Added = 4,
	[Token(Token = "0x4000162")]
	Deleted = 8,
	[Token(Token = "0x4000163")]
	ModifiedCurrent = 0x10,
	[Token(Token = "0x4000164")]
	ModifiedOriginal = 0x20,
	[Token(Token = "0x4000165")]
	OriginalRows = 0x2A,
	[Token(Token = "0x4000166")]
	CurrentRows = 0x16
}
