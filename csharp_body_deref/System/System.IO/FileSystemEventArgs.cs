// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.FileSystemEventArgs
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.IO;

[Token(Token = "0x2000357")]
public class FileSystemEventArgs : EventArgs
{
	[Token(Token = "0x4000F45")]
	[FieldOffset(Offset = "0x10")]
	private readonly WatcherChangeTypes _changeType;

	[Token(Token = "0x4000F46")]
	[FieldOffset(Offset = "0x18")]
	private readonly string _name;

	[Token(Token = "0x4000F47")]
	[FieldOffset(Offset = "0x20")]
	private readonly string _fullPath;

	[Token(Token = "0x600168B")]
	[Address(RVA = "0x48E9900", Offset = "0x48E9900", VA = "0x48E9900")]
	public FileSystemEventArgs(WatcherChangeTypes changeType, string directory, string name)
	{
	}

	[Token(Token = "0x600168C")]
	[Address(RVA = "0x48E99C0", Offset = "0x48E99C0", VA = "0x48E99C0")]
	internal static string Combine(string directoryPath, string name)
	{
		return null;
	}
}
