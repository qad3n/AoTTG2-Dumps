using Il2CppDummyDll;

namespace System.IO;

[Token(Token = "0x200036A")]
internal class NullFileWatcher : IFileWatcher
{
	[Token(Token = "0x4000F8F")]
	[FieldOffset(Offset = "0x0")]
	private static IFileWatcher instance;

	[Token(Token = "0x60016D9")]
	[Address(RVA = "0x45C9CD0", Offset = "0x45C9CD0", VA = "0x45C9CD0", Slot = "4")]
	public void StartDispatching(object handle)
	{
	}

	[Token(Token = "0x60016DA")]
	[Address(RVA = "0x45C9CE0", Offset = "0x45C9CE0", VA = "0x45C9CE0", Slot = "5")]
	public void StopDispatching(object handle)
	{
	}

	[Token(Token = "0x60016DB")]
	[Address(RVA = "0x45C9CF0", Offset = "0x45C9CF0", VA = "0x45C9CF0", Slot = "6")]
	public void Dispose(object handle)
	{
	}

	[Token(Token = "0x60016DC")]
	[Address(RVA = "0x45C8460", Offset = "0x45C8460", VA = "0x45C8460")]
	public static bool GetInstance(out IFileWatcher watcher)
	{
		return default(bool);
	}

	[Token(Token = "0x60016DD")]
	[Address(RVA = "0x45C9D00", Offset = "0x45C9D00", VA = "0x45C9D00")]
	public NullFileWatcher()
	{
	}
}
