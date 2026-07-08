using System.Text;
using Il2CppDummyDll;

namespace System.IO;

[Token(Token = "0x200055D")]
public static class File
{
	[Token(Token = "0x6002949")]
	[Address(RVA = "0x4F199E0", Offset = "0x4F199E0", VA = "0x4F199E0")]
	public static StreamReader OpenText(string path)
	{
		return null;
	}

	[Token(Token = "0x600294A")]
	[Address(RVA = "0x4F19A90", Offset = "0x4F19A90", VA = "0x4F19A90")]
	public static void Delete(string path)
	{
	}

	[Token(Token = "0x600294B")]
	[Address(RVA = "0x4F08640", Offset = "0x4F08640", VA = "0x4F08640")]
	public static bool Exists(string path)
	{
		return default(bool);
	}

	[Token(Token = "0x600294C")]
	[Address(RVA = "0x4F19D30", Offset = "0x4F19D30", VA = "0x4F19D30")]
	public static FileStream Open(string path, FileMode mode)
	{
		return null;
	}

	[Token(Token = "0x600294D")]
	[Address(RVA = "0x4F19DF0", Offset = "0x4F19DF0", VA = "0x4F19DF0")]
	public static FileStream Open(string path, FileMode mode, FileAccess access, FileShare share)
	{
		return null;
	}

	[Token(Token = "0x600294E")]
	[Address(RVA = "0x4F19E60", Offset = "0x4F19E60", VA = "0x4F19E60")]
	public static DateTime GetCreationTime(string path)
	{
		return default(DateTime);
	}

	[Token(Token = "0x600294F")]
	[Address(RVA = "0x4F19FA0", Offset = "0x4F19FA0", VA = "0x4F19FA0")]
	public static DateTime GetLastWriteTime(string path)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6002950")]
	[Address(RVA = "0x4F1A0E0", Offset = "0x4F1A0E0", VA = "0x4F1A0E0")]
	public static FileAttributes GetAttributes(string path)
	{
		return default(FileAttributes);
	}

	[Token(Token = "0x6002951")]
	[Address(RVA = "0x4F1A220", Offset = "0x4F1A220", VA = "0x4F1A220")]
	public static FileStream OpenRead(string path)
	{
		return null;
	}

	[Token(Token = "0x6002952")]
	[Address(RVA = "0x4F1A280", Offset = "0x4F1A280", VA = "0x4F1A280")]
	public static FileStream OpenWrite(string path)
	{
		return null;
	}

	[Token(Token = "0x6002953")]
	[Address(RVA = "0x4F1A2E0", Offset = "0x4F1A2E0", VA = "0x4F1A2E0")]
	public static string ReadAllText(string path)
	{
		return null;
	}

	[Token(Token = "0x6002954")]
	[Address(RVA = "0x4F1A3A0", Offset = "0x4F1A3A0", VA = "0x4F1A3A0")]
	private static string InternalReadAllText(string path, Encoding encoding)
	{
		return null;
	}

	[Token(Token = "0x6002955")]
	[Address(RVA = "0x4F1A580", Offset = "0x4F1A580", VA = "0x4F1A580")]
	public static void WriteAllText(string path, string contents)
	{
	}

	[Token(Token = "0x6002956")]
	[Address(RVA = "0x4F1A7E0", Offset = "0x4F1A7E0", VA = "0x4F1A7E0")]
	public static byte[] ReadAllBytes(string path)
	{
		return null;
	}

	[Token(Token = "0x6002957")]
	[Address(RVA = "0x4F1AB20", Offset = "0x4F1AB20", VA = "0x4F1AB20")]
	private static byte[] ReadAllBytesUnknownLength(FileStream fs)
	{
		return null;
	}

	[Token(Token = "0x6002958")]
	[Address(RVA = "0x4F1B020", Offset = "0x4F1B020", VA = "0x4F1B020")]
	public static void WriteAllBytes(string path, byte[] bytes)
	{
	}

	[Token(Token = "0x6002959")]
	[Address(RVA = "0x4F1B120", Offset = "0x4F1B120", VA = "0x4F1B120")]
	private static void InternalWriteAllBytes(string path, byte[] bytes)
	{
	}

	[Token(Token = "0x600295A")]
	[Address(RVA = "0x4F1B300", Offset = "0x4F1B300", VA = "0x4F1B300")]
	public static void AppendAllText(string path, string contents)
	{
	}
}
