// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.FileSystemEventArgs
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.IO;

[Token(Token = "0x2000278")]
public class FileSystemEventArgs : EventArgs
{
	[Token(Token = "0x40008BD")]
	[FieldOffset(Offset = "0x10")]
	private readonly WatcherChangeTypes _changeType;

	[Token(Token = "0x40008BE")]
	[FieldOffset(Offset = "0x18")]
	private readonly string _name;

	[Token(Token = "0x40008BF")]
	[FieldOffset(Offset = "0x20")]
	private readonly string _fullPath;

	[Token(Token = "0x600118D")]
	[Address(RVA = "0x28D3B30", Offset = "0x28D2130", VA = "0x1828D3B30")]
	public FileSystemEventArgs(WatcherChangeTypes changeType, string directory, string name)
	{
	}

	[Token(Token = "0x600118E")]
	[Address(RVA = "0x28D39F0", Offset = "0x28D1FF0", VA = "0x1828D39F0")]
	internal static string Combine(string directoryPath, string name)
	{
		return null;
	}
}
