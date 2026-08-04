// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.Enumeration.FileSystemEntry
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.IO.Enumeration;

[Token(Token = "0x2000584")]
public ref struct FileSystemEntry
{
	[Token(Token = "0x400172C")]
	[FieldOffset(Offset = "0x0")]
	internal global::Interop.Sys.DirectoryEntry _directoryEntry;

	[Token(Token = "0x400172D")]
	[FieldOffset(Offset = "0x10")]
	private System.IO.FileStatus _status;

	[Token(Token = "0x400172E")]
	[FieldOffset(Offset = "0x88")]
	private Span<char> _pathBuffer;

	[Token(Token = "0x400172F")]
	[FieldOffset(Offset = "0x98")]
	private ReadOnlySpan<char> _fullPath;

	[Token(Token = "0x4001730")]
	[FieldOffset(Offset = "0xA8")]
	private ReadOnlySpan<char> _fileName;

	[Token(Token = "0x4001731")]
	[FieldOffset(Offset = "0xB8")]
	private unsafe fixed char _fileNameBuffer[256];

	[Token(Token = "0x4001732")]
	[FieldOffset(Offset = "0x2B8")]
	private FileAttributes _initialAttributes;

	[Token(Token = "0x17000632")]
	private ReadOnlySpan<char> FullPath
	{
		[Token(Token = "0x6002AFD")]
		[Address(RVA = "0x3C38010", Offset = "0x3C38010", VA = "0x3C38010")]
		get
		{
			return default(ReadOnlySpan<char>);
		}
	}

	[Token(Token = "0x17000633")]
	public ReadOnlySpan<char> FileName
	{
		[Token(Token = "0x6002AFE")]
		[Address(RVA = "0x3C381B0", Offset = "0x3C381B0", VA = "0x3C381B0")]
		get
		{
			return default(ReadOnlySpan<char>);
		}
	}

	[Token(Token = "0x17000634")]
	public ReadOnlySpan<char> Directory
	{
		[Token(Token = "0x6002AFF")]
		[Address(RVA = "0x3C38220", Offset = "0x3C38220", VA = "0x3C38220")]
		[CompilerGenerated]
		readonly get
		{
			return default(ReadOnlySpan<char>);
		}
		[Token(Token = "0x6002B00")]
		[Address(RVA = "0x3C38230", Offset = "0x3C38230", VA = "0x3C38230")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000635")]
	public ReadOnlySpan<char> RootDirectory
	{
		[Token(Token = "0x6002B01")]
		[Address(RVA = "0x3C38240", Offset = "0x3C38240", VA = "0x3C38240")]
		[CompilerGenerated]
		readonly get
		{
			return default(ReadOnlySpan<char>);
		}
		[Token(Token = "0x6002B02")]
		[Address(RVA = "0x3C38250", Offset = "0x3C38250", VA = "0x3C38250")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000636")]
	public ReadOnlySpan<char> OriginalRootDirectory
	{
		[Token(Token = "0x6002B03")]
		[Address(RVA = "0x3C38260", Offset = "0x3C38260", VA = "0x3C38260")]
		[CompilerGenerated]
		readonly get
		{
			return default(ReadOnlySpan<char>);
		}
		[Token(Token = "0x6002B04")]
		[Address(RVA = "0x3C38270", Offset = "0x3C38270", VA = "0x3C38270")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000637")]
	public FileAttributes Attributes
	{
		[Token(Token = "0x6002B05")]
		[Address(RVA = "0x3C38280", Offset = "0x3C38280", VA = "0x3C38280")]
		get
		{
			return default(FileAttributes);
		}
	}

	[Token(Token = "0x17000638")]
	public bool IsDirectory
	{
		[Token(Token = "0x6002B06")]
		[Address(RVA = "0x3C382C0", Offset = "0x3C382C0", VA = "0x3C382C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6002AFC")]
	[Address(RVA = "0x3C37D20", Offset = "0x3C37D20", VA = "0x3C37D20")]
	internal static FileAttributes Initialize(ref FileSystemEntry entry, global::Interop.Sys.DirectoryEntry directoryEntry, ReadOnlySpan<char> directory, ReadOnlySpan<char> rootDirectory, ReadOnlySpan<char> originalRootDirectory, Span<char> pathBuffer)
	{
		return default(FileAttributes);
	}

	[Token(Token = "0x6002B07")]
	[Address(RVA = "0x3C382D0", Offset = "0x3C382D0", VA = "0x3C382D0")]
	public FileSystemInfo ToFileSystemInfo()
	{
		return null;
	}

	[Token(Token = "0x6002B08")]
	[Address(RVA = "0x3C38380", Offset = "0x3C38380", VA = "0x3C38380")]
	public string ToFullPath()
	{
		return null;
	}

	[Token(Token = "0x6002B09")]
	[Address(RVA = "0x3C383A0", Offset = "0x3C383A0", VA = "0x3C383A0")]
	public string ToSpecifiedFullPath()
	{
		return null;
	}
}
