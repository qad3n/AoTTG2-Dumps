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

[Token(Token = "0x200027F")]
internal class DefaultWatcher : IFileWatcher
{
	[Token(Token = "0x40008D5")]
	[FieldOffset(Offset = "0x0")]
	private static DefaultWatcher instance;

	[Token(Token = "0x40008D6")]
	[FieldOffset(Offset = "0x8")]
	private static Thread thread;

	[Token(Token = "0x40008D7")]
	[FieldOffset(Offset = "0x10")]
	private static Hashtable watches;

	[Token(Token = "0x40008D8")]
	[FieldOffset(Offset = "0x18")]
	private static string[] NoStringsArray;

	[Token(Token = "0x600119C")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	private DefaultWatcher()
	{
	}

	[Token(Token = "0x600119D")]
	[Address(RVA = "0x28D0A10", Offset = "0x28CF010", VA = "0x1828D0A10")]
	public static bool GetInstance(out IFileWatcher watcher)
	{
		return default(bool);
	}

	[Token(Token = "0x600119E")]
	[Address(RVA = "0x28D1C30", Offset = "0x28D0230", VA = "0x1828D1C30", Slot = "4")]
	public void StartDispatching(object handle)
	{
	}

	[Token(Token = "0x600119F")]
	[Address(RVA = "0x28D2380", Offset = "0x28D0980", VA = "0x1828D2380", Slot = "5")]
	public void StopDispatching(object handle)
	{
	}

	[Token(Token = "0x60011A0")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "6")]
	public void Dispose(object handle)
	{
	}

	[Token(Token = "0x60011A1")]
	[Address(RVA = "0x28D1500", Offset = "0x28CFB00", VA = "0x1828D1500")]
	private void Monitor()
	{
	}

	[Token(Token = "0x60011A2")]
	[Address(RVA = "0x28D2720", Offset = "0x28D0D20", VA = "0x1828D2720")]
	private bool UpdateDataAndDispatch(DefaultWatcherData data, bool dispatch)
	{
		return default(bool);
	}

	[Token(Token = "0x60011A3")]
	[Address(RVA = "0x28D06C0", Offset = "0x28CECC0", VA = "0x1828D06C0")]
	private static void DispatchEvents(FileSystemWatcher fsw, FileAction action, string filename)
	{
	}

	[Token(Token = "0x60011A4")]
	[Address(RVA = "0x28D07A0", Offset = "0x28CEDA0", VA = "0x1828D07A0")]
	private void DoFiles(DefaultWatcherData data, string directory, bool dispatch)
	{
	}

	[Token(Token = "0x60011A5")]
	[Address(RVA = "0x28D0B10", Offset = "0x28CF110", VA = "0x1828D0B10")]
	private void IterateAndModifyFilesData(DefaultWatcherData data, string directory, bool dispatch, string[] files)
	{
	}

	[Token(Token = "0x60011A6")]
	[Address(RVA = "0x28D05E0", Offset = "0x28CEBE0", VA = "0x1828D05E0")]
	private static FileData CreateFileData(string directory, string filename)
	{
		return null;
	}
}
