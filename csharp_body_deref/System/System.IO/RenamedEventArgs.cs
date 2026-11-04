// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.RenamedEventArgs
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.IO;

[Token(Token = "0x200027A")]
public class RenamedEventArgs : FileSystemEventArgs
{
	[Token(Token = "0x40008C0")]
	[FieldOffset(Offset = "0x28")]
	private readonly string _oldName;

	[Token(Token = "0x40008C1")]
	[FieldOffset(Offset = "0x30")]
	private readonly string _oldFullPath;

	[Token(Token = "0x6001191")]
	[Address(RVA = "0x28DAFF0", Offset = "0x28D95F0", VA = "0x1828DAFF0")]
	public RenamedEventArgs(WatcherChangeTypes changeType, string directory, string name, string oldName)
	{
	}
}
