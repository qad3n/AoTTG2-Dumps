// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.FileStatus
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.IO;

[Token(Token = "0x2000662")]
internal struct FileStatus
{
	[Token(Token = "0x40019AC")]
	[FieldOffset(Offset = "0x0")]
	private global::Interop.Sys.FileStatus _fileStatus;

	[Token(Token = "0x40019AD")]
	[FieldOffset(Offset = "0x70")]
	private int _fileStatusInitialized;

	[Token(Token = "0x40019AF")]
	[FieldOffset(Offset = "0x75")]
	internal bool _isDirectory;

	[Token(Token = "0x40019B0")]
	[FieldOffset(Offset = "0x76")]
	private bool _exists;

	[Token(Token = "0x17000810")]
	internal bool InitiallyDirectory
	{
		[Token(Token = "0x6003202")]
		[Address(RVA = "0x547B600", Offset = "0x547A600", VA = "0x547B600")]
		[CompilerGenerated]
		readonly get
		{
			return default(bool);
		}
		[Token(Token = "0x6003203")]
		[Address(RVA = "0x547B610", Offset = "0x547A610", VA = "0x547B610")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6003204")]
	[Address(RVA = "0x547B620", Offset = "0x547A620", VA = "0x547B620")]
	internal static void Initialize(ref System.IO.FileStatus status, bool isDirectory)
	{
	}

	[Token(Token = "0x6003205")]
	[Address(RVA = "0x547B630", Offset = "0x547A630", VA = "0x547B630")]
	internal bool IsReadOnly(ReadOnlySpan<char> path, bool continueOnError = false)
	{
		return default(bool);
	}

	[Token(Token = "0x6003206")]
	[Address(RVA = "0x547B7B0", Offset = "0x547A7B0", VA = "0x547B7B0")]
	public FileAttributes GetAttributes(ReadOnlySpan<char> path, ReadOnlySpan<char> fileName)
	{
		return default(FileAttributes);
	}

	[Token(Token = "0x6003207")]
	[Address(RVA = "0x547B860", Offset = "0x547A860", VA = "0x547B860")]
	internal bool GetExists(ReadOnlySpan<char> path)
	{
		return default(bool);
	}

	[Token(Token = "0x6003208")]
	[Address(RVA = "0x547BA00", Offset = "0x547AA00", VA = "0x547BA00")]
	internal DateTimeOffset GetCreationTime(ReadOnlySpan<char> path, bool continueOnError = false)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x6003209")]
	[Address(RVA = "0x547BD30", Offset = "0x547AD30", VA = "0x547BD30")]
	internal DateTimeOffset GetLastWriteTime(ReadOnlySpan<char> path, bool continueOnError = false)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x600320A")]
	[Address(RVA = "0x547BC80", Offset = "0x547AC80", VA = "0x547BC80")]
	private DateTimeOffset UnixTimeToDateTimeOffset(long seconds, long nanoseconds)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x600320B")]
	[Address(RVA = "0x547BE60", Offset = "0x547AE60", VA = "0x547BE60")]
	internal long GetLength(ReadOnlySpan<char> path, bool continueOnError = false)
	{
		return default(long);
	}

	[Token(Token = "0x600320C")]
	[Address(RVA = "0x547B890", Offset = "0x547A890", VA = "0x547B890")]
	public void Refresh(ReadOnlySpan<char> path)
	{
	}

	[Token(Token = "0x600320D")]
	[Address(RVA = "0x547B710", Offset = "0x547A710", VA = "0x547B710")]
	internal void EnsureStatInitialized(ReadOnlySpan<char> path, bool continueOnError = false)
	{
	}
}
