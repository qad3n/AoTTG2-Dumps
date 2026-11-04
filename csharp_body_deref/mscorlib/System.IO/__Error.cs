// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.__Error
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.IO;

[Token(Token = "0x2000698")]
internal static class __Error
{
	[Token(Token = "0x60032CA")]
	[Address(RVA = "0x1B02970", Offset = "0x1B00F70", VA = "0x181B02970")]
	internal static void EndOfFile()
	{
	}

	[Token(Token = "0x60032CB")]
	[Address(RVA = "0x1B029D0", Offset = "0x1B00FD0", VA = "0x181B029D0")]
	internal static void FileNotOpen()
	{
	}

	[Token(Token = "0x60032CC")]
	[Address(RVA = "0x1B02B90", Offset = "0x1B01190", VA = "0x181B02B90")]
	internal static void ReaderClosed()
	{
	}

	[Token(Token = "0x60032CD")]
	[Address(RVA = "0x1B02A40", Offset = "0x1B01040", VA = "0x181B02A40")]
	internal static string GetDisplayablePath(string path, bool isInvalidPath)
	{
		return null;
	}

	[Token(Token = "0x60032CE")]
	[Address(RVA = "0x1B02C00", Offset = "0x1B01200", VA = "0x181B02C00")]
	internal static void WinIOError(int errorCode, string maybeFullPath)
	{
	}

	[Token(Token = "0x60032CF")]
	[Address(RVA = "0x1B03430", Offset = "0x1B01A30", VA = "0x181B03430")]
	internal static void WriterClosed()
	{
	}
}
