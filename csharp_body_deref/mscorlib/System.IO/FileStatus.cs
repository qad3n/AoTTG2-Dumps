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
		[Address(RVA = "0x4F1BF10", Offset = "0x4F1BF10", VA = "0x4F1BF10")]
		[CompilerGenerated]
		readonly get
		{
			return default(bool);
		}
		[Token(Token = "0x6002967")]
		[Address(RVA = "0x4F1BF20", Offset = "0x4F1BF20", VA = "0x4F1BF20")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6002968")]
	[Address(RVA = "0x4F1BF30", Offset = "0x4F1BF30", VA = "0x4F1BF30")]
	internal static void Initialize(ref System.IO.FileStatus status, bool isDirectory)
	{
	}

	[Token(Token = "0x6002969")]
	[Address(RVA = "0x4F1BF40", Offset = "0x4F1BF40", VA = "0x4F1BF40")]
	internal bool IsReadOnly(ReadOnlySpan<char> path, bool continueOnError = false)
	{
		return default(bool);
	}

	[Token(Token = "0x600296A")]
	[Address(RVA = "0x4F1C0C0", Offset = "0x4F1C0C0", VA = "0x4F1C0C0")]
	public FileAttributes GetAttributes(ReadOnlySpan<char> path, ReadOnlySpan<char> fileName)
	{
		return default(FileAttributes);
	}

	[Token(Token = "0x600296B")]
	[Address(RVA = "0x4F1C170", Offset = "0x4F1C170", VA = "0x4F1C170")]
	internal bool GetExists(ReadOnlySpan<char> path)
	{
		return default(bool);
	}

	[Token(Token = "0x600296C")]
	[Address(RVA = "0x4F1C320", Offset = "0x4F1C320", VA = "0x4F1C320")]
	internal DateTimeOffset GetCreationTime(ReadOnlySpan<char> path, bool continueOnError = false)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x600296D")]
	[Address(RVA = "0x4F1C600", Offset = "0x4F1C600", VA = "0x4F1C600")]
	internal DateTimeOffset GetLastWriteTime(ReadOnlySpan<char> path, bool continueOnError = false)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x600296E")]
	[Address(RVA = "0x4F1C550", Offset = "0x4F1C550", VA = "0x4F1C550")]
	private DateTimeOffset UnixTimeToDateTimeOffset(long seconds, long nanoseconds)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x600296F")]
	[Address(RVA = "0x4F1C1A0", Offset = "0x4F1C1A0", VA = "0x4F1C1A0")]
	public void Refresh(ReadOnlySpan<char> path)
	{
	}

	[Token(Token = "0x6002970")]
	[Address(RVA = "0x4F1C020", Offset = "0x4F1C020", VA = "0x4F1C020")]
	internal void EnsureStatInitialized(ReadOnlySpan<char> path, bool continueOnError = false)
	{
	}
}
