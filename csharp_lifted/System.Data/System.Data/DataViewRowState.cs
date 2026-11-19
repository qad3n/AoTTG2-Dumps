// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.DataViewRowState
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x2000055")]
[Flags]
public enum DataViewRowState
{
	[Token(Token = "0x40001A7")]
	None = 0,
	[Token(Token = "0x40001A8")]
	Unchanged = 2,
	[Token(Token = "0x40001A9")]
	Added = 4,
	[Token(Token = "0x40001AA")]
	Deleted = 8,
	[Token(Token = "0x40001AB")]
	ModifiedCurrent = 0x10,
	[Token(Token = "0x40001AC")]
	ModifiedOriginal = 0x20,
	[Token(Token = "0x40001AD")]
	OriginalRows = Unchanged | Deleted | ModifiedOriginal,
	[Token(Token = "0x40001AE")]
	CurrentRows = Unchanged | Added | ModifiedCurrent
}
