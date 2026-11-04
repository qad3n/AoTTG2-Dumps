// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.Enumeration.FileSystemEnumerator
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.ConstrainedExecution;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.IO.Enumeration;

[Token(Token = "0x20006AC")]
public abstract class FileSystemEnumerator<TResult> : CriticalFinalizerObject, IEnumerator<TResult>, IDisposable, IEnumerator
{
	[Token(Token = "0x4001B07")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly string _originalRootDirectory;

	[Token(Token = "0x4001B08")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly string _rootDirectory;

	[Token(Token = "0x4001B09")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly EnumerationOptions _options;

	[Token(Token = "0x4001B0A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly object _lock;

	[Token(Token = "0x4001B0B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private unsafe global::Interop.NtDll.FILE_FULL_DIR_INFORMATION* _entry;

	[Token(Token = "0x4001B0C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private TResult _current;

	[Token(Token = "0x4001B0D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private IntPtr _buffer;

	[Token(Token = "0x4001B0E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private int _bufferLength;

	[Token(Token = "0x4001B0F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private IntPtr _directoryHandle;

	[Token(Token = "0x4001B10")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private string _currentPath;

	[Token(Token = "0x4001B11")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private bool _lastEntryFound;

	[Token(Token = "0x4001B12")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private Queue<(IntPtr Handle, string Path)> _pending;

	[Token(Token = "0x17000848")]
	public TResult Current
	{
		[Token(Token = "0x60033D7")]
		get
		{
			return (TResult)null;
		}
	}

	[Token(Token = "0x17000849")]
	private object System_002ECollections_002EIEnumerator_002ECurrent
	{
		[Token(Token = "0x60033D8")]
		get
		{
			return null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60033C6")]
	private bool GetDataUWP()
	{
		return default(bool);
	}

	[Token(Token = "0x60033C7")]
	private IntPtr CreateRelativeDirectoryHandleUWP(ReadOnlySpan<char> relativePath, string fullPath)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x60033C8")]
	public FileSystemEnumerator(string directory, [Optional] EnumerationOptions options)
	{
	}

	[Token(Token = "0x60033C9")]
	private void CloseDirectoryHandle()
	{
	}

	[Token(Token = "0x60033CA")]
	private IntPtr CreateDirectoryHandle(string path, bool ignoreNotFound = false)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x60033CB")]
	private bool ContinueOnDirectoryError(int error, bool ignoreNotFound)
	{
		return default(bool);
	}

	[Token(Token = "0x60033CC")]
	public bool MoveNext()
	{
		return default(bool);
	}

	[Token(Token = "0x60033CD")]
	private void FindNextEntry()
	{
	}

	[Token(Token = "0x60033CE")]
	private bool DequeueNextDirectory()
	{
		return default(bool);
	}

	[Token(Token = "0x60033CF")]
	private void InternalDispose(bool disposing)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60033D0")]
	private bool GetData()
	{
		return default(bool);
	}

	[Token(Token = "0x60033D1")]
	private IntPtr CreateRelativeDirectoryHandle(ReadOnlySpan<char> relativePath, string fullPath)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x60033D2")]
	protected virtual bool ShouldIncludeEntry(ref FileSystemEntry entry)
	{
		return default(bool);
	}

	[Token(Token = "0x60033D3")]
	protected virtual bool ShouldRecurseIntoEntry(ref FileSystemEntry entry)
	{
		return default(bool);
	}

	[Token(Token = "0x60033D4")]
	protected abstract TResult TransformEntry(ref FileSystemEntry entry);

	[Token(Token = "0x60033D5")]
	protected virtual void OnDirectoryFinished(ReadOnlySpan<char> directory)
	{
	}

	[Token(Token = "0x60033D6")]
	protected virtual bool ContinueOnError(int error)
	{
		return default(bool);
	}

	[Token(Token = "0x60033D9")]
	private void DirectoryFinished()
	{
	}

	[Token(Token = "0x60033DA")]
	public void Reset()
	{
	}

	[Token(Token = "0x60033DB")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60033DC")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60033DD")]
	~FileSystemEnumerator()
	{
	}
}
