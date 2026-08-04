// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.DataRowAction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x200002C")]
[Flags]
public enum DataRowAction
{
	[Token(Token = "0x4000097")]
	Nothing = 0,
	[Token(Token = "0x4000098")]
	Delete = 1,
	[Token(Token = "0x4000099")]
	Change = 2,
	[Token(Token = "0x400009A")]
	Rollback = 4,
	[Token(Token = "0x400009B")]
	Commit = 8,
	[Token(Token = "0x400009C")]
	Add = 0x10,
	[Token(Token = "0x400009D")]
	ChangeOriginal = 0x20,
	[Token(Token = "0x400009E")]
	ChangeCurrentAndOriginal = 0x40
}
