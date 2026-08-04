// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.FileStatus
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.IO;

[Token(Token = "0x200055F")]
internal struct FileStatus
{
	[Token(Token = "0x4001668")]
	[FieldOffset(Offset = "0x0")]
	private global::Interop.Sys.FileStatus _fileStatus;

	[Token(Token = "0x4001669")]
	[FieldOffset(Offset = "0x70")]
	private int _fileStatusInitialized;

	[Token(Token = "0x400166B")]
	[FieldOffset(Offset = "0x75")]
	internal bool _isDirectory;

	[Token(Token = "0x400166C")]
	[FieldOffset(Offset = "0x76")]
	private bool _exists;

	[Token(Token = "0x170005FC")]
	internal bool InitiallyDirectory
	{
		[Token(Token = "0x6002966")]
		[Address(RVA = "0x3C01A30", Offset = "0x3C01A30", VA = "0x3C01A30")]
		[CompilerGenerated]
		readonly get
		{
			return default(bool);
		}
		[Token(Token = "0x6002967")]
		[Address(RVA = "0x3C01A40", Offset = "0x3C01A40", VA = "0x3C01A40")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6002968")]
	[Address(RVA = "0x3C01A50", Offset = "0x3C01A50", VA = "0x3C01A50")]
	internal static void Initialize(ref System.IO.FileStatus status, bool isDirectory)
	{
	}

	[Token(Token = "0x6002969")]
	[Address(RVA = "0x3C01A60", Offset = "0x3C01A60", VA = "0x3C01A60")]
	internal bool IsReadOnly(ReadOnlySpan<char> path, bool continueOnError = false)
	{
		return default(bool);
	}

	[Token(Token = "0x600296A")]
	[Address(RVA = "0x3C01BE0", Offset = "0x3C01BE0", VA = "0x3C01BE0")]
	public FileAttributes GetAttributes(ReadOnlySpan<char> path, ReadOnlySpan<char> fileName)
	{
		return default(FileAttributes);
	}

	[Token(Token = "0x600296B")]
	[Address(RVA = "0x3C01C90", Offset = "0x3C01C90", VA = "0x3C01C90")]
	internal bool GetExists(ReadOnlySpan<char> path)
	{
		return default(bool);
	}

	[Token(Token = "0x600296C")]
	[Address(RVA = "0x3C01E40", Offset = "0x3C01E40", VA = "0x3C01E40")]
	internal DateTimeOffset GetCreationTime(ReadOnlySpan<char> path, bool continueOnError = false)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x600296D")]
	[Address(RVA = "0x3C02120", Offset = "0x3C02120", VA = "0x3C02120")]
	internal DateTimeOffset GetLastWriteTime(ReadOnlySpan<char> path, bool continueOnError = false)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x600296E")]
	[Address(RVA = "0x3C02070", Offset = "0x3C02070", VA = "0x3C02070")]
	private DateTimeOffset UnixTimeToDateTimeOffset(long seconds, long nanoseconds)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x600296F")]
	[Address(RVA = "0x3C01CC0", Offset = "0x3C01CC0", VA = "0x3C01CC0")]
	public void Refresh(ReadOnlySpan<char> path)
	{
	}

	[Token(Token = "0x6002970")]
	[Address(RVA = "0x3C01B40", Offset = "0x3C01B40", VA = "0x3C01B40")]
	internal void EnsureStatInitialized(ReadOnlySpan<char> path, bool continueOnError = false)
	{
	}
}
