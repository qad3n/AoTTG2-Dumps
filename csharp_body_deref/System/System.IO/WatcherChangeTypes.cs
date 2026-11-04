// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.WatcherChangeTypes
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.IO;

[Token(Token = "0x200028F")]
[Flags]
public enum WatcherChangeTypes
{
	[Token(Token = "0x4000918")]
	All = 0xF,
	[Token(Token = "0x4000919")]
	Changed = 4,
	[Token(Token = "0x400091A")]
	Created = 1,
	[Token(Token = "0x400091B")]
	Deleted = 2,
	[Token(Token = "0x400091C")]
	Renamed = 8
}
