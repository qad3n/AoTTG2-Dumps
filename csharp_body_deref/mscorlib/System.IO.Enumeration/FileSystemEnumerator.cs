// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.Enumeration.FileSystemEnumerator
// Update status: unchanged since the previous dump
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

[Token(Token = "0x2000592")]
public abstract class FileSystemEnumerator<TResult> : CriticalFinalizerObject, IEnumerator<TResult>, IDisposable, IEnumerator
{
	[Token(Token = "0x4001752")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly string _originalRootDirectory;

	[Token(Token = "0x4001753")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly string _rootDirectory;

	[Token(Token = "0x4001754")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly EnumerationOptions _options;

	[Token(Token = "0x4001755")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly object _lock;

	[Token(Token = "0x4001756")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private string _currentPath;

	[Token(Token = "0x4001757")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private IntPtr _directoryHandle;

	[Token(Token = "0x4001758")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private bool _lastEntryFound;

	[Token(Token = "0x4001759")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private Queue<string> _pending;

	[Token(Token = "0x400175A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private global::Interop.Sys.DirectoryEntry _entry;

	[Token(Token = "0x400175B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private TResult _current;

	[Token(Token = "0x400175C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private char[] _pathBuffer;

	[Token(Token = "0x400175D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private byte[] _entryBuffer;

	[Token(Token = "0x1700063B")]
	public TResult Current
	{
		[Token(Token = "0x6002B45")]
		get
		{
			return (TResult)null;
		}
	}

	[Token(Token = "0x1700063C")]
	private object System_002ECollections_002EIEnumerator_002ECurrent
	{
		[Token(Token = "0x6002B46")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002B35")]
	public FileSystemEnumerator(string directory, [Optional] EnumerationOptions options)
	{
	}

	[Token(Token = "0x6002B36")]
	private bool InternalContinueOnError(global::Interop.ErrorInfo info, bool ignoreNotFound = false)
	{
		return default(bool);
	}

	[Token(Token = "0x6002B37")]
	private static bool IsDirectoryNotFound(global::Interop.ErrorInfo info)
	{
		return default(bool);
	}

	[Token(Token = "0x6002B38")]
	private static bool IsAccessError(global::Interop.ErrorInfo info)
	{
		return default(bool);
	}

	[Token(Token = "0x6002B39")]
	private IntPtr CreateDirectoryHandle(string path, bool ignoreNotFound = false)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6002B3A")]
	private void CloseDirectoryHandle()
	{
	}

	[Token(Token = "0x6002B3B")]
	public bool MoveNext()
	{
		return default(bool);
	}

	[Token(Token = "0x6002B3C")]
	private void FindNextEntry()
	{
	}

	[Token(Token = "0x6002B3D")]
	private unsafe void FindNextEntry(byte* entryBufferPtr, int bufferLength)
	{
	}

	[Token(Token = "0x6002B3E")]
	private bool DequeueNextDirectory()
	{
		return default(bool);
	}

	[Token(Token = "0x6002B3F")]
	private void InternalDispose(bool disposing)
	{
	}

	[Token(Token = "0x6002B40")]
	protected virtual bool ShouldIncludeEntry(ref FileSystemEntry entry)
	{
		return default(bool);
	}

	[Token(Token = "0x6002B41")]
	protected virtual bool ShouldRecurseIntoEntry(ref FileSystemEntry entry)
	{
		return default(bool);
	}

	[Token(Token = "0x6002B42")]
	protected abstract TResult TransformEntry(ref FileSystemEntry entry);

	[Token(Token = "0x6002B43")]
	protected virtual void OnDirectoryFinished(ReadOnlySpan<char> directory)
	{
	}

	[Token(Token = "0x6002B44")]
	protected virtual bool ContinueOnError(int error)
	{
		return default(bool);
	}

	[Token(Token = "0x6002B47")]
	private void DirectoryFinished()
	{
	}

	[Token(Token = "0x6002B48")]
	public void Reset()
	{
	}

	[Token(Token = "0x6002B49")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6002B4A")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6002B4B")]
	~FileSystemEnumerator()
	{
	}
}
