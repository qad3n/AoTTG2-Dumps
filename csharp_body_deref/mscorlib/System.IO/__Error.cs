using Il2CppDummyDll;

namespace System.IO;

[Token(Token = "0x2000570")]
internal static class __Error
{
	[Token(Token = "0x6002A03")]
	[Address(RVA = "0x4F42BA0", Offset = "0x4F42BA0", VA = "0x4F42BA0")]
	internal static void EndOfFile()
	{
	}

	[Token(Token = "0x6002A04")]
	[Address(RVA = "0x4F42C00", Offset = "0x4F42C00", VA = "0x4F42C00")]
	internal static void FileNotOpen()
	{
	}

	[Token(Token = "0x6002A05")]
	[Address(RVA = "0x4F42C60", Offset = "0x4F42C60", VA = "0x4F42C60")]
	internal static void ReaderClosed()
	{
	}

	[Token(Token = "0x6002A06")]
	[Address(RVA = "0x4F42CC0", Offset = "0x4F42CC0", VA = "0x4F42CC0")]
	internal static string GetDisplayablePath(string path, bool isInvalidPath)
	{
		return null;
	}

	[Token(Token = "0x6002A07")]
	[Address(RVA = "0x4F43000", Offset = "0x4F43000", VA = "0x4F43000")]
	internal static void WinIOError(int errorCode, string maybeFullPath)
	{
	}

	[Token(Token = "0x6002A08")]
	[Address(RVA = "0x4F435F0", Offset = "0x4F435F0", VA = "0x4F435F0")]
	internal static void WriterClosed()
	{
	}
}
