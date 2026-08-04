// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.File
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Text;
using Il2CppDummyDll;

namespace System.IO;

[Token(Token = "0x200055D")]
public static class File
{
	[Token(Token = "0x6002949")]
	[Address(RVA = "0x3BFF500", Offset = "0x3BFF500", VA = "0x3BFF500")]
	public static StreamReader OpenText(string path)
	{
		return null;
	}

	[Token(Token = "0x600294A")]
	[Address(RVA = "0x3BFF5B0", Offset = "0x3BFF5B0", VA = "0x3BFF5B0")]
	public static void Delete(string path)
	{
	}

	[Token(Token = "0x600294B")]
	[Address(RVA = "0x3BEE160", Offset = "0x3BEE160", VA = "0x3BEE160")]
	public static bool Exists(string path)
	{
		return default(bool);
	}

	[Token(Token = "0x600294C")]
	[Address(RVA = "0x3BFF850", Offset = "0x3BFF850", VA = "0x3BFF850")]
	public static FileStream Open(string path, FileMode mode)
	{
		return null;
	}

	[Token(Token = "0x600294D")]
	[Address(RVA = "0x3BFF910", Offset = "0x3BFF910", VA = "0x3BFF910")]
	public static FileStream Open(string path, FileMode mode, FileAccess access, FileShare share)
	{
		return null;
	}

	[Token(Token = "0x600294E")]
	[Address(RVA = "0x3BFF980", Offset = "0x3BFF980", VA = "0x3BFF980")]
	public static DateTime GetCreationTime(string path)
	{
		return default(DateTime);
	}

	[Token(Token = "0x600294F")]
	[Address(RVA = "0x3BFFAC0", Offset = "0x3BFFAC0", VA = "0x3BFFAC0")]
	public static DateTime GetLastWriteTime(string path)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6002950")]
	[Address(RVA = "0x3BFFC00", Offset = "0x3BFFC00", VA = "0x3BFFC00")]
	public static FileAttributes GetAttributes(string path)
	{
		return default(FileAttributes);
	}

	[Token(Token = "0x6002951")]
	[Address(RVA = "0x3BFFD40", Offset = "0x3BFFD40", VA = "0x3BFFD40")]
	public static FileStream OpenRead(string path)
	{
		return null;
	}

	[Token(Token = "0x6002952")]
	[Address(RVA = "0x3BFFDA0", Offset = "0x3BFFDA0", VA = "0x3BFFDA0")]
	public static FileStream OpenWrite(string path)
	{
		return null;
	}

	[Token(Token = "0x6002953")]
	[Address(RVA = "0x3BFFE00", Offset = "0x3BFFE00", VA = "0x3BFFE00")]
	public static string ReadAllText(string path)
	{
		return null;
	}

	[Token(Token = "0x6002954")]
	[Address(RVA = "0x3BFFEC0", Offset = "0x3BFFEC0", VA = "0x3BFFEC0")]
	private static string InternalReadAllText(string path, Encoding encoding)
	{
		return null;
	}

	[Token(Token = "0x6002955")]
	[Address(RVA = "0x3C000A0", Offset = "0x3C000A0", VA = "0x3C000A0")]
	public static void WriteAllText(string path, string contents)
	{
	}

	[Token(Token = "0x6002956")]
	[Address(RVA = "0x3C00300", Offset = "0x3C00300", VA = "0x3C00300")]
	public static byte[] ReadAllBytes(string path)
	{
		return null;
	}

	[Token(Token = "0x6002957")]
	[Address(RVA = "0x3C00640", Offset = "0x3C00640", VA = "0x3C00640")]
	private static byte[] ReadAllBytesUnknownLength(FileStream fs)
	{
		return null;
	}

	[Token(Token = "0x6002958")]
	[Address(RVA = "0x3C00B40", Offset = "0x3C00B40", VA = "0x3C00B40")]
	public static void WriteAllBytes(string path, byte[] bytes)
	{
	}

	[Token(Token = "0x6002959")]
	[Address(RVA = "0x3C00C40", Offset = "0x3C00C40", VA = "0x3C00C40")]
	private static void InternalWriteAllBytes(string path, byte[] bytes)
	{
	}

	[Token(Token = "0x600295A")]
	[Address(RVA = "0x3C00E20", Offset = "0x3C00E20", VA = "0x3C00E20")]
	public static void AppendAllText(string path, string contents)
	{
	}
}
