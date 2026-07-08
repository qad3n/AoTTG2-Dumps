using System.Collections;
using System.Threading;
using Il2CppDummyDll;

namespace System.IO;

[Token(Token = "0x200035E")]
internal class DefaultWatcher : IFileWatcher
{
	[Token(Token = "0x4000F5D")]
	[FieldOffset(Offset = "0x0")]
	private static DefaultWatcher instance;

	[Token(Token = "0x4000F5E")]
	[FieldOffset(Offset = "0x8")]
	private static Thread thread;

	[Token(Token = "0x4000F5F")]
	[FieldOffset(Offset = "0x10")]
	private static Hashtable watches;

	[Token(Token = "0x4000F60")]
	[FieldOffset(Offset = "0x18")]
	private static string[] NoStringsArray;

	[Token(Token = "0x600169A")]
	[Address(RVA = "0x45C4EC0", Offset = "0x45C4EC0", VA = "0x45C4EC0")]
	private DefaultWatcher()
	{
	}

	[Token(Token = "0x600169B")]
	[Address(RVA = "0x45C4ED0", Offset = "0x45C4ED0", VA = "0x45C4ED0")]
	public static bool GetInstance(out IFileWatcher watcher)
	{
		return default(bool);
	}

	[Token(Token = "0x600169C")]
	[Address(RVA = "0x45C4FC0", Offset = "0x45C4FC0", VA = "0x45C4FC0", Slot = "4")]
	public void StartDispatching(object handle)
	{
	}

	[Token(Token = "0x600169D")]
	[Address(RVA = "0x45C5AC0", Offset = "0x45C5AC0", VA = "0x45C5AC0", Slot = "5")]
	public void StopDispatching(object handle)
	{
	}

	[Token(Token = "0x600169E")]
	[Address(RVA = "0x45C5E40", Offset = "0x45C5E40", VA = "0x45C5E40", Slot = "6")]
	public void Dispose(object handle)
	{
	}

	[Token(Token = "0x600169F")]
	[Address(RVA = "0x45C5E50", Offset = "0x45C5E50", VA = "0x45C5E50")]
	private void Monitor()
	{
	}

	[Token(Token = "0x60016A0")]
	[Address(RVA = "0x45C59B0", Offset = "0x45C59B0", VA = "0x45C59B0")]
	private bool UpdateDataAndDispatch(DefaultWatcherData data, bool dispatch)
	{
		return default(bool);
	}

	[Token(Token = "0x60016A1")]
	[Address(RVA = "0x45C6910", Offset = "0x45C6910", VA = "0x45C6910")]
	private static void DispatchEvents(FileSystemWatcher fsw, FileAction action, string filename)
	{
	}

	[Token(Token = "0x60016A2")]
	[Address(RVA = "0x45C6690", Offset = "0x45C6690", VA = "0x45C6690")]
	private void DoFiles(DefaultWatcherData data, string directory, bool dispatch)
	{
	}

	[Token(Token = "0x60016A3")]
	[Address(RVA = "0x45C6F10", Offset = "0x45C6F10", VA = "0x45C6F10")]
	private void IterateAndModifyFilesData(DefaultWatcherData data, string directory, bool dispatch, string[] files)
	{
	}

	[Token(Token = "0x60016A4")]
	[Address(RVA = "0x45C7DD0", Offset = "0x45C7DD0", VA = "0x45C7DD0")]
	private static FileData CreateFileData(string directory, string filename)
	{
		return null;
	}
}
