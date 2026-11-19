// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.FileSystemEventArgs
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.IO;

[Token(Token = "0x2000239")]
public class FileSystemEventArgs : EventArgs
{
	[Token(Token = "0x40007EE")]
	[FieldOffset(Offset = "0x10")]
	private readonly WatcherChangeTypes _changeType;

	[Token(Token = "0x40007EF")]
	[FieldOffset(Offset = "0x18")]
	private readonly string _name;

	[Token(Token = "0x40007F0")]
	[FieldOffset(Offset = "0x20")]
	private readonly string _fullPath;

	[Token(Token = "0x6000FCD")]
	[Address(RVA = "0x6285F40", Offset = "0x6284F40", VA = "0x6285F40")]
	public FileSystemEventArgs(WatcherChangeTypes changeType, string directory, string name)
	{
	}

	[Token(Token = "0x6000FCE")]
	[Address(RVA = "0x6286000", Offset = "0x6285000", VA = "0x6286000")]
	internal static string Combine(string directoryPath, string name)
	{
		return null;
	}
}
