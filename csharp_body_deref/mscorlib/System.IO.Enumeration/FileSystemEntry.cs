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

[Token(Token = "0x20006AD")]
public ref struct FileSystemEntry
{
	[Token(Token = "0x4001B13")]
	[FieldOffset(Offset = "0x0")]
	internal unsafe global::Interop.NtDll.FILE_FULL_DIR_INFORMATION* _info;

	[Token(Token = "0x1700084A")]
	public ReadOnlySpan<char> Directory
	{
		[Token(Token = "0x60033DF")]
		[Address(RVA = "0xADC2D0", Offset = "0xADA8D0", VA = "0x180ADC2D0")]
		[CompilerGenerated]
		readonly get
		{
			return default(ReadOnlySpan<char>);
		}
		[Token(Token = "0x60033E0")]
		[Address(RVA = "0x1B040E0", Offset = "0x1B026E0", VA = "0x181B040E0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700084B")]
	public ReadOnlySpan<char> RootDirectory
	{
		[Token(Token = "0x60033E1")]
		[Address(RVA = "0x8E7990", Offset = "0x8E5F90", VA = "0x1808E7990")]
		[CompilerGenerated]
		readonly get
		{
			return default(ReadOnlySpan<char>);
		}
		[Token(Token = "0x60033E2")]
		[Address(RVA = "0x111C9E0", Offset = "0x111AFE0", VA = "0x18111C9E0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700084C")]
	public ReadOnlySpan<char> OriginalRootDirectory
	{
		[Token(Token = "0x60033E3")]
		[Address(RVA = "0x181CEB0", Offset = "0x181B4B0", VA = "0x18181CEB0")]
		[CompilerGenerated]
		readonly get
		{
			return default(ReadOnlySpan<char>);
		}
		[Token(Token = "0x60033E4")]
		[Address(RVA = "0x1B040F0", Offset = "0x1B026F0", VA = "0x181B040F0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700084D")]
	public ReadOnlySpan<char> FileName
	{
		[Token(Token = "0x60033E5")]
		[Address(RVA = "0x1B04090", Offset = "0x1B02690", VA = "0x181B04090")]
		get
		{
			return default(ReadOnlySpan<char>);
		}
	}

	[Token(Token = "0x1700084E")]
	public FileAttributes Attributes
	{
		[Token(Token = "0x60033E6")]
		[Address(RVA = "0x1B04070", Offset = "0x1B02670", VA = "0x181B04070")]
		get
		{
			return default(FileAttributes);
		}
	}

	[Token(Token = "0x1700084F")]
	public bool IsDirectory
	{
		[Token(Token = "0x60033E7")]
		[Address(RVA = "0x1B040C0", Offset = "0x1B026C0", VA = "0x181B040C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60033DE")]
	[Address(RVA = "0x1B03E00", Offset = "0x1B02400", VA = "0x181B03E00")]
	internal unsafe static void Initialize(ref FileSystemEntry entry, global::Interop.NtDll.FILE_FULL_DIR_INFORMATION* info, ReadOnlySpan<char> directory, ReadOnlySpan<char> rootDirectory, ReadOnlySpan<char> originalRootDirectory)
	{
	}

	[Token(Token = "0x60033E8")]
	[Address(RVA = "0x1B03E20", Offset = "0x1B02420", VA = "0x181B03E20")]
	public FileSystemInfo ToFileSystemInfo()
	{
		return null;
	}

	[Token(Token = "0x60033E9")]
	[Address(RVA = "0x1B03EC0", Offset = "0x1B024C0", VA = "0x181B03EC0")]
	public string ToSpecifiedFullPath()
	{
		return null;
	}
}
