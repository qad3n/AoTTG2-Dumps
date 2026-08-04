// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.DefaultWatcher
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x48E9FC0", Offset = "0x48E9FC0", VA = "0x48E9FC0")]
	private DefaultWatcher()
	{
	}

	[Token(Token = "0x600169B")]
	[Address(RVA = "0x48E9FD0", Offset = "0x48E9FD0", VA = "0x48E9FD0")]
	public static bool GetInstance(out IFileWatcher watcher)
	{
		return default(bool);
	}

	[Token(Token = "0x600169C")]
	[Address(RVA = "0x48EA0C0", Offset = "0x48EA0C0", VA = "0x48EA0C0", Slot = "4")]
	public void StartDispatching(object handle)
	{
	}

	[Token(Token = "0x600169D")]
	[Address(RVA = "0x48EABC0", Offset = "0x48EABC0", VA = "0x48EABC0", Slot = "5")]
	public void StopDispatching(object handle)
	{
	}

	[Token(Token = "0x600169E")]
	[Address(RVA = "0x48EAF40", Offset = "0x48EAF40", VA = "0x48EAF40", Slot = "6")]
	public void Dispose(object handle)
	{
	}

	[Token(Token = "0x600169F")]
	[Address(RVA = "0x48EAF50", Offset = "0x48EAF50", VA = "0x48EAF50")]
	private void Monitor()
	{
	}

	[Token(Token = "0x60016A0")]
	[Address(RVA = "0x48EAAB0", Offset = "0x48EAAB0", VA = "0x48EAAB0")]
	private bool UpdateDataAndDispatch(DefaultWatcherData data, bool dispatch)
	{
		return default(bool);
	}

	[Token(Token = "0x60016A1")]
	[Address(RVA = "0x48EBA10", Offset = "0x48EBA10", VA = "0x48EBA10")]
	private static void DispatchEvents(FileSystemWatcher fsw, FileAction action, string filename)
	{
	}

	[Token(Token = "0x60016A2")]
	[Address(RVA = "0x48EB790", Offset = "0x48EB790", VA = "0x48EB790")]
	private void DoFiles(DefaultWatcherData data, string directory, bool dispatch)
	{
	}

	[Token(Token = "0x60016A3")]
	[Address(RVA = "0x48EC010", Offset = "0x48EC010", VA = "0x48EC010")]
	private void IterateAndModifyFilesData(DefaultWatcherData data, string directory, bool dispatch, string[] files)
	{
	}

	[Token(Token = "0x60016A4")]
	[Address(RVA = "0x48ECED0", Offset = "0x48ECED0", VA = "0x48ECED0")]
	private static FileData CreateFileData(string directory, string filename)
	{
		return null;
	}
}
