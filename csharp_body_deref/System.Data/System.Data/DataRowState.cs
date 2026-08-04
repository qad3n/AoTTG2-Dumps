// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.DataRowState
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x2000033")]
[Flags]
public enum DataRowState
{
	[Token(Token = "0x40000A5")]
	Detached = 1,
	[Token(Token = "0x40000A6")]
	Unchanged = 2,
	[Token(Token = "0x40000A7")]
	Added = 4,
	[Token(Token = "0x40000A8")]
	Deleted = 8,
	[Token(Token = "0x40000A9")]
	Modified = 0x10
}
