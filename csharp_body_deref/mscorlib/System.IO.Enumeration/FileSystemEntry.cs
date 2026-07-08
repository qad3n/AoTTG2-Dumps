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
		[Address(RVA = "0x4F524F0", Offset = "0x4F524F0", VA = "0x4F524F0")]
		get
		{
			return default(ReadOnlySpan<char>);
		}
	}

	[Token(Token = "0x17000633")]
	public ReadOnlySpan<char> FileName
	{
		[Token(Token = "0x6002AFE")]
		[Address(RVA = "0x4F52690", Offset = "0x4F52690", VA = "0x4F52690")]
		get
		{
			return default(ReadOnlySpan<char>);
		}
	}

	[Token(Token = "0x17000634")]
	public ReadOnlySpan<char> Directory
	{
		[Token(Token = "0x6002AFF")]
		[Address(RVA = "0x4F52700", Offset = "0x4F52700", VA = "0x4F52700")]
		[CompilerGenerated]
		readonly get
		{
			return default(ReadOnlySpan<char>);
		}
		[Token(Token = "0x6002B00")]
		[Address(RVA = "0x4F52710", Offset = "0x4F52710", VA = "0x4F52710")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000635")]
	public ReadOnlySpan<char> RootDirectory
	{
		[Token(Token = "0x6002B01")]
		[Address(RVA = "0x4F52720", Offset = "0x4F52720", VA = "0x4F52720")]
		[CompilerGenerated]
		readonly get
		{
			return default(ReadOnlySpan<char>);
		}
		[Token(Token = "0x6002B02")]
		[Address(RVA = "0x4F52730", Offset = "0x4F52730", VA = "0x4F52730")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000636")]
	public ReadOnlySpan<char> OriginalRootDirectory
	{
		[Token(Token = "0x6002B03")]
		[Address(RVA = "0x4F52740", Offset = "0x4F52740", VA = "0x4F52740")]
		[CompilerGenerated]
		readonly get
		{
			return default(ReadOnlySpan<char>);
		}
		[Token(Token = "0x6002B04")]
		[Address(RVA = "0x4F52750", Offset = "0x4F52750", VA = "0x4F52750")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000637")]
	public FileAttributes Attributes
	{
		[Token(Token = "0x6002B05")]
		[Address(RVA = "0x4F52760", Offset = "0x4F52760", VA = "0x4F52760")]
		get
		{
			return default(FileAttributes);
		}
	}

	[Token(Token = "0x17000638")]
	public bool IsDirectory
	{
		[Token(Token = "0x6002B06")]
		[Address(RVA = "0x4F527A0", Offset = "0x4F527A0", VA = "0x4F527A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6002AFC")]
	[Address(RVA = "0x4F52200", Offset = "0x4F52200", VA = "0x4F52200")]
	internal static FileAttributes Initialize(ref FileSystemEntry entry, global::Interop.Sys.DirectoryEntry directoryEntry, ReadOnlySpan<char> directory, ReadOnlySpan<char> rootDirectory, ReadOnlySpan<char> originalRootDirectory, Span<char> pathBuffer)
	{
		return default(FileAttributes);
	}

	[Token(Token = "0x6002B07")]
	[Address(RVA = "0x4F527B0", Offset = "0x4F527B0", VA = "0x4F527B0")]
	public FileSystemInfo ToFileSystemInfo()
	{
		return null;
	}

	[Token(Token = "0x6002B08")]
	[Address(RVA = "0x4F52860", Offset = "0x4F52860", VA = "0x4F52860")]
	public string ToFullPath()
	{
		return null;
	}

	[Token(Token = "0x6002B09")]
	[Address(RVA = "0x4F52880", Offset = "0x4F52880", VA = "0x4F52880")]
	public string ToSpecifiedFullPath()
	{
		return null;
	}
}
