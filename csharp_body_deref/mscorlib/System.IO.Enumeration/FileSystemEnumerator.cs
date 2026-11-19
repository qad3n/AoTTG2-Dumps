// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.Enumeration.FileSystemEnumerator
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Collections.Generic;
using System.Runtime.ConstrainedExecution;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.IO.Enumeration;

[Token(Token = "0x2000694")]
public abstract class FileSystemEnumerator<TResult> : CriticalFinalizerObject, IEnumerator<TResult>, IDisposable, IEnumerator
{
	[Token(Token = "0x4001A93")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly string _originalRootDirectory;

	[Token(Token = "0x4001A94")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly string _rootDirectory;

	[Token(Token = "0x4001A95")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly EnumerationOptions _options;

	[Token(Token = "0x4001A96")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly object _lock;

	[Token(Token = "0x4001A97")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private string _currentPath;

	[Token(Token = "0x4001A98")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private IntPtr _directoryHandle;

	[Token(Token = "0x4001A99")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private bool _lastEntryFound;

	[Token(Token = "0x4001A9A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private Queue<string> _pending;

	[Token(Token = "0x4001A9B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private global::Interop.Sys.DirectoryEntry _entry;

	[Token(Token = "0x4001A9C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private TResult _current;

	[Token(Token = "0x4001A9D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private char[] _pathBuffer;

	[Token(Token = "0x4001A9E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private byte[] _entryBuffer;

	[Token(Token = "0x17000851")]
	public TResult Current
	{
		[Token(Token = "0x60033D8")]
		get
		{
			return (TResult)null;
		}
	}

	[Token(Token = "0x17000852")]
	private object System_002ECollections_002EIEnumerator_002ECurrent
	{
		[Token(Token = "0x60033D9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60033C8")]
	public FileSystemEnumerator(string directory, [Optional] EnumerationOptions options)
	{
	}

	[Token(Token = "0x60033C9")]
	private bool InternalContinueOnError(global::Interop.ErrorInfo info, bool ignoreNotFound = false)
	{
		return default(bool);
	}

	[Token(Token = "0x60033CA")]
	private static bool IsDirectoryNotFound(global::Interop.ErrorInfo info)
	{
		return default(bool);
	}

	[Token(Token = "0x60033CB")]
	private static bool IsAccessError(global::Interop.ErrorInfo info)
	{
		return default(bool);
	}

	[Token(Token = "0x60033CC")]
	private IntPtr CreateDirectoryHandle(string path, bool ignoreNotFound = false)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x60033CD")]
	private void CloseDirectoryHandle()
	{
	}

	[Token(Token = "0x60033CE")]
	public bool MoveNext()
	{
		return default(bool);
	}

	[Token(Token = "0x60033CF")]
	private void FindNextEntry()
	{
	}

	[Token(Token = "0x60033D0")]
	private unsafe void FindNextEntry(byte* entryBufferPtr, int bufferLength)
	{
	}

	[Token(Token = "0x60033D1")]
	private bool DequeueNextDirectory()
	{
		return default(bool);
	}

	[Token(Token = "0x60033D2")]
	private void InternalDispose(bool disposing)
	{
	}

	[Token(Token = "0x60033D3")]
	protected virtual bool ShouldIncludeEntry(ref FileSystemEntry entry)
	{
		return default(bool);
	}

	[Token(Token = "0x60033D4")]
	protected virtual bool ShouldRecurseIntoEntry(ref FileSystemEntry entry)
	{
		return default(bool);
	}

	[Token(Token = "0x60033D5")]
	protected abstract TResult TransformEntry(ref FileSystemEntry entry);

	[Token(Token = "0x60033D6")]
	protected virtual void OnDirectoryFinished(ReadOnlySpan<char> directory)
	{
	}

	[Token(Token = "0x60033D7")]
	protected virtual bool ContinueOnError(int error)
	{
		return default(bool);
	}

	[Token(Token = "0x60033DA")]
	private void DirectoryFinished()
	{
	}

	[Token(Token = "0x60033DB")]
	public void Reset()
	{
	}

	[Token(Token = "0x60033DC")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60033DD")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60033DE")]
	~FileSystemEnumerator()
	{
	}
}
