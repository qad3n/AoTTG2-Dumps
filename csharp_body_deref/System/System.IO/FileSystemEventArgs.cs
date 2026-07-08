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
	[Address(RVA = "0x45C4800", Offset = "0x45C4800", VA = "0x45C4800")]
	public FileSystemEventArgs(WatcherChangeTypes changeType, string directory, string name)
	{
	}

	[Token(Token = "0x600168C")]
	[Address(RVA = "0x45C48C0", Offset = "0x45C48C0", VA = "0x45C48C0")]
	internal static string Combine(string directoryPath, string name)
	{
		return null;
	}
}
