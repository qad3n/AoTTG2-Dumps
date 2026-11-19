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

[Token(Token = "0x2000240")]
internal class DefaultWatcher : IFileWatcher
{
	[Token(Token = "0x4000806")]
	[FieldOffset(Offset = "0x0")]
	private static DefaultWatcher instance;

	[Token(Token = "0x4000807")]
	[FieldOffset(Offset = "0x8")]
	private static Thread thread;

	[Token(Token = "0x4000808")]
	[FieldOffset(Offset = "0x10")]
	private static Hashtable watches;

	[Token(Token = "0x4000809")]
	[FieldOffset(Offset = "0x18")]
	private static string[] NoStringsArray;

	[Token(Token = "0x6000FDC")]
	[Address(RVA = "0x62865E0", Offset = "0x62855E0", VA = "0x62865E0")]
	private DefaultWatcher()
	{
	}

	[Token(Token = "0x6000FDD")]
	[Address(RVA = "0x62865F0", Offset = "0x62855F0", VA = "0x62865F0")]
	public static bool GetInstance(out IFileWatcher watcher)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FDE")]
	[Address(RVA = "0x62866E0", Offset = "0x62856E0", VA = "0x62866E0", Slot = "4")]
	public void StartDispatching(object handle)
	{
	}

	[Token(Token = "0x6000FDF")]
	[Address(RVA = "0x62870E0", Offset = "0x62860E0", VA = "0x62870E0", Slot = "5")]
	public void StopDispatching(object handle)
	{
	}

	[Token(Token = "0x6000FE0")]
	[Address(RVA = "0x6287450", Offset = "0x6286450", VA = "0x6287450", Slot = "6")]
	public void Dispose(object handle)
	{
	}

	[Token(Token = "0x6000FE1")]
	[Address(RVA = "0x6287460", Offset = "0x6286460", VA = "0x6287460")]
	private void Monitor()
	{
	}

	[Token(Token = "0x6000FE2")]
	[Address(RVA = "0x6286FD0", Offset = "0x6285FD0", VA = "0x6286FD0")]
	private bool UpdateDataAndDispatch(DefaultWatcherData data, bool dispatch)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FE3")]
	[Address(RVA = "0x6287EC0", Offset = "0x6286EC0", VA = "0x6287EC0")]
	private static void DispatchEvents(FileSystemWatcher fsw, FileAction action, string filename)
	{
	}

	[Token(Token = "0x6000FE4")]
	[Address(RVA = "0x6287C60", Offset = "0x6286C60", VA = "0x6287C60")]
	private void DoFiles(DefaultWatcherData data, string directory, bool dispatch)
	{
	}

	[Token(Token = "0x6000FE5")]
	[Address(RVA = "0x62884B0", Offset = "0x62874B0", VA = "0x62884B0")]
	private void IterateAndModifyFilesData(DefaultWatcherData data, string directory, bool dispatch, string[] files)
	{
	}

	[Token(Token = "0x6000FE6")]
	[Address(RVA = "0x6289120", Offset = "0x6288120", VA = "0x6289120")]
	private static FileData CreateFileData(string directory, string filename)
	{
		return null;
	}
}
