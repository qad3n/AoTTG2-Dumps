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
	[Address(RVA = "0x45C4B50", Offset = "0x45C4B50", VA = "0x45C4B50")]
	public RenamedEventArgs(WatcherChangeTypes changeType, string directory, string name, string oldName)
	{
	}
}
