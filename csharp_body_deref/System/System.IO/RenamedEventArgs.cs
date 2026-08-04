// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.RenamedEventArgs
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.IO;

[Token(Token = "0x2000359")]
public class RenamedEventArgs : FileSystemEventArgs
{
	[Token(Token = "0x4000F48")]
	[FieldOffset(Offset = "0x28")]
	private readonly string _oldName;

	[Token(Token = "0x4000F49")]
	[FieldOffset(Offset = "0x30")]
	private readonly string _oldFullPath;

	[Token(Token = "0x600168F")]
	[Address(RVA = "0x48E9C50", Offset = "0x48E9C50", VA = "0x48E9C50")]
	public RenamedEventArgs(WatcherChangeTypes changeType, string directory, string name, string oldName)
	{
	}
}
