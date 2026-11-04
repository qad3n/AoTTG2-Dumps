// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.DataRowAction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x200003D")]
[Flags]
public enum DataRowAction
{
	[Token(Token = "0x4000149")]
	Nothing = 0,
	[Token(Token = "0x400014A")]
	Delete = 1,
	[Token(Token = "0x400014B")]
	Change = 2,
	[Token(Token = "0x400014C")]
	Rollback = 4,
	[Token(Token = "0x400014D")]
	Commit = 8,
	[Token(Token = "0x400014E")]
	Add = 0x10,
	[Token(Token = "0x400014F")]
	ChangeOriginal = 0x20,
	[Token(Token = "0x4000150")]
	ChangeCurrentAndOriginal = 0x40
}
