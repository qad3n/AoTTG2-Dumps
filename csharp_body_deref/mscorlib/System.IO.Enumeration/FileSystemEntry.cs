// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.Enumeration.FileSystemEntry
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.IO.Enumeration;

[Token(Token = "0x2000686")]
public ref struct FileSystemEntry
{
	[Token(Token = "0x4001A6D")]
	[FieldOffset(Offset = "0x0")]
	internal global::Interop.Sys.DirectoryEntry _directoryEntry;

	[Token(Token = "0x4001A6E")]
	[FieldOffset(Offset = "0x10")]
	private System.IO.FileStatus _status;

	[Token(Token = "0x4001A6F")]
	[FieldOffset(Offset = "0x88")]
	private Span<char> _pathBuffer;

	[Token(Token = "0x4001A70")]
	[FieldOffset(Offset = "0x98")]
	private ReadOnlySpan<char> _fullPath;

	[Token(Token = "0x4001A71")]
	[FieldOffset(Offset = "0xA8")]
	private ReadOnlySpan<char> _fileName;

	[Token(Token = "0x4001A72")]
	[FieldOffset(Offset = "0xB8")]
	private unsafe fixed char _fileNameBuffer[256];

	[Token(Token = "0x4001A73")]
	[FieldOffset(Offset = "0x2B8")]
	private FileAttributes _initialAttributes;

	[Token(Token = "0x17000848")]
	private ReadOnlySpan<char> FullPath
	{
		[Token(Token = "0x6003390")]
		[Address(RVA = "0x5490470", Offset = "0x548F470", VA = "0x5490470")]
		get
		{
			return default(ReadOnlySpan<char>);
		}
	}

	[Token(Token = "0x17000849")]
	public ReadOnlySpan<char> FileName
	{
		[Token(Token = "0x6003391")]
		[Address(RVA = "0x5490610", Offset = "0x548F610", VA = "0x5490610")]
		get
		{
			return default(ReadOnlySpan<char>);
		}
	}

	[Token(Token = "0x1700084A")]
	public ReadOnlySpan<char> Directory
	{
		[Token(Token = "0x6003392")]
		[Address(RVA = "0x5490680", Offset = "0x548F680", VA = "0x5490680")]
		[CompilerGenerated]
		readonly get
		{
			return default(ReadOnlySpan<char>);
		}
		[Token(Token = "0x6003393")]
		[Address(RVA = "0x5490690", Offset = "0x548F690", VA = "0x5490690")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700084B")]
	public ReadOnlySpan<char> RootDirectory
	{
		[Token(Token = "0x6003394")]
		[Address(RVA = "0x54906A0", Offset = "0x548F6A0", VA = "0x54906A0")]
		[CompilerGenerated]
		readonly get
		{
			return default(ReadOnlySpan<char>);
		}
		[Token(Token = "0x6003395")]
		[Address(RVA = "0x54906B0", Offset = "0x548F6B0", VA = "0x54906B0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700084C")]
	public ReadOnlySpan<char> OriginalRootDirectory
	{
		[Token(Token = "0x6003396")]
		[Address(RVA = "0x54906C0", Offset = "0x548F6C0", VA = "0x54906C0")]
		[CompilerGenerated]
		readonly get
		{
			return default(ReadOnlySpan<char>);
		}
		[Token(Token = "0x6003397")]
		[Address(RVA = "0x54906D0", Offset = "0x548F6D0", VA = "0x54906D0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700084D")]
	public FileAttributes Attributes
	{
		[Token(Token = "0x6003398")]
		[Address(RVA = "0x54906E0", Offset = "0x548F6E0", VA = "0x54906E0")]
		get
		{
			return default(FileAttributes);
		}
	}

	[Token(Token = "0x1700084E")]
	public bool IsDirectory
	{
		[Token(Token = "0x6003399")]
		[Address(RVA = "0x5490720", Offset = "0x548F720", VA = "0x5490720")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600338F")]
	[Address(RVA = "0x5490100", Offset = "0x548F100", VA = "0x5490100")]
	internal static FileAttributes Initialize(ref FileSystemEntry entry, global::Interop.Sys.DirectoryEntry directoryEntry, ReadOnlySpan<char> directory, ReadOnlySpan<char> rootDirectory, ReadOnlySpan<char> originalRootDirectory, Span<char> pathBuffer)
	{
		return default(FileAttributes);
	}

	[Token(Token = "0x600339A")]
	[Address(RVA = "0x5490730", Offset = "0x548F730", VA = "0x5490730")]
	public FileSystemInfo ToFileSystemInfo()
	{
		return null;
	}

	[Token(Token = "0x600339B")]
	[Address(RVA = "0x54907E0", Offset = "0x548F7E0", VA = "0x54907E0")]
	public string ToFullPath()
	{
		return null;
	}

	[Token(Token = "0x600339C")]
	[Address(RVA = "0x5490800", Offset = "0x548F800", VA = "0x5490800")]
	public string ToSpecifiedFullPath()
	{
		return null;
	}
}
