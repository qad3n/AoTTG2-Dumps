// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.Compression.ZipHelper
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.IO.Compression;

[Token(Token = "0x200003A")]
internal static class ZipHelper
{
	[Token(Token = "0x4000155")]
	[FieldOffset(Offset = "0x0")]
	private static readonly DateTime s_invalidDateIndicator;

	[Token(Token = "0x60001A3")]
	[Address(RVA = "0x5F753A0", Offset = "0x5F743A0", VA = "0x5F753A0")]
	internal static bool RequiresUnicode(string test)
	{
		return default(bool);
	}

	[Token(Token = "0x60001A4")]
	[Address(RVA = "0x5F75400", Offset = "0x5F74400", VA = "0x5F75400")]
	internal static void ReadBytes(Stream stream, byte[] buffer, int bytesToRead)
	{
	}

	[Token(Token = "0x60001A5")]
	[Address(RVA = "0x5F754A0", Offset = "0x5F744A0", VA = "0x5F754A0")]
	internal static DateTime DosTimeToDateTime(uint dateTime)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60001A6")]
	[Address(RVA = "0x5F75600", Offset = "0x5F74600", VA = "0x5F75600")]
	internal static uint DateTimeToDosTime(DateTime dateTime)
	{
		return default(uint);
	}

	[Token(Token = "0x60001A7")]
	[Address(RVA = "0x5F756E0", Offset = "0x5F746E0", VA = "0x5F756E0")]
	internal static bool SeekBackwardsToSignature(Stream stream, uint signatureToFind)
	{
		return default(bool);
	}

	[Token(Token = "0x60001A8")]
	[Address(RVA = "0x5F759E0", Offset = "0x5F749E0", VA = "0x5F759E0")]
	internal static void AdvanceToPosition(this Stream stream, long position)
	{
	}

	[Token(Token = "0x60001A9")]
	[Address(RVA = "0x5F75870", Offset = "0x5F74870", VA = "0x5F75870")]
	private static bool SeekBackwardsAndRead(Stream stream, byte[] buffer, out int bufferPointer)
	{
		return default(bool);
	}
}
