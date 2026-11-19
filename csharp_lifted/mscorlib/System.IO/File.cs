// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.File
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Text;
using Il2CppDummyDll;

namespace System.IO;

[Token(Token = "0x2000660")]
public static class File
{
	[Token(Token = "0x60031DE")]
	[Address(RVA = "0x5478A20", Offset = "0x5477A20", VA = "0x5478A20")]
	public static StreamReader OpenText(string path)
	{
		return null;
	}

	[Token(Token = "0x60031DF")]
	[Address(RVA = "0x5478AC0", Offset = "0x5477AC0", VA = "0x5478AC0")]
	public static void Copy(string sourceFileName, string destFileName)
	{
	}

	[Token(Token = "0x60031E0")]
	[Address(RVA = "0x5478AD0", Offset = "0x5477AD0", VA = "0x5478AD0")]
	public static void Copy(string sourceFileName, string destFileName, bool overwrite)
	{
	}

	[Token(Token = "0x60031E1")]
	[Address(RVA = "0x5478CF0", Offset = "0x5477CF0", VA = "0x5478CF0")]
	public static FileStream Create(string path)
	{
		return null;
	}

	[Token(Token = "0x60031E2")]
	[Address(RVA = "0x5478D60", Offset = "0x5477D60", VA = "0x5478D60")]
	public static FileStream Create(string path, int bufferSize)
	{
		return null;
	}

	[Token(Token = "0x60031E3")]
	[Address(RVA = "0x5478DF0", Offset = "0x5477DF0", VA = "0x5478DF0")]
	public static void Delete(string path)
	{
	}

	[Token(Token = "0x60031E4")]
	[Address(RVA = "0x5478EE0", Offset = "0x5477EE0", VA = "0x5478EE0")]
	public static bool Exists(string path)
	{
		return default(bool);
	}

	[Token(Token = "0x60031E5")]
	[Address(RVA = "0x54790C0", Offset = "0x54780C0", VA = "0x54790C0")]
	public static FileStream Open(string path, FileMode mode)
	{
		return null;
	}

	[Token(Token = "0x60031E6")]
	[Address(RVA = "0x5479190", Offset = "0x5478190", VA = "0x5479190")]
	public static FileStream Open(string path, FileMode mode, FileAccess access, FileShare share)
	{
		return null;
	}

	[Token(Token = "0x60031E7")]
	[Address(RVA = "0x5479230", Offset = "0x5478230", VA = "0x5479230")]
	public static DateTime GetCreationTime(string path)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60031E8")]
	[Address(RVA = "0x5479320", Offset = "0x5478320", VA = "0x5479320")]
	public static DateTime GetLastWriteTime(string path)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60031E9")]
	[Address(RVA = "0x5479410", Offset = "0x5478410", VA = "0x5479410")]
	public static FileAttributes GetAttributes(string path)
	{
		return default(FileAttributes);
	}

	[Token(Token = "0x60031EA")]
	[Address(RVA = "0x54794D0", Offset = "0x54784D0", VA = "0x54794D0")]
	public static FileStream OpenRead(string path)
	{
		return null;
	}

	[Token(Token = "0x60031EB")]
	[Address(RVA = "0x5479540", Offset = "0x5478540", VA = "0x5479540")]
	public static FileStream OpenWrite(string path)
	{
		return null;
	}

	[Token(Token = "0x60031EC")]
	[Address(RVA = "0x54795B0", Offset = "0x54785B0", VA = "0x54795B0")]
	public static string ReadAllText(string path)
	{
		return null;
	}

	[Token(Token = "0x60031ED")]
	[Address(RVA = "0x5479670", Offset = "0x5478670", VA = "0x5479670")]
	private static string InternalReadAllText(string path, Encoding encoding)
	{
		return null;
	}

	[Token(Token = "0x60031EE")]
	[Address(RVA = "0x54797F0", Offset = "0x54787F0", VA = "0x54797F0")]
	public static void WriteAllText(string path, string contents)
	{
	}

	[Token(Token = "0x60031EF")]
	[Address(RVA = "0x54799F0", Offset = "0x54789F0", VA = "0x54799F0")]
	public static byte[] ReadAllBytes(string path)
	{
		return null;
	}

	[Token(Token = "0x60031F0")]
	[Address(RVA = "0x5479C80", Offset = "0x5478C80", VA = "0x5479C80")]
	private static byte[] ReadAllBytesUnknownLength(FileStream fs)
	{
		return null;
	}

	[Token(Token = "0x60031F1")]
	[Address(RVA = "0x547A0C0", Offset = "0x54790C0", VA = "0x547A0C0")]
	public static void WriteAllBytes(string path, byte[] bytes)
	{
	}

	[Token(Token = "0x60031F2")]
	[Address(RVA = "0x547A1C0", Offset = "0x54791C0", VA = "0x547A1C0")]
	private static void InternalWriteAllBytes(string path, byte[] bytes)
	{
	}

	[Token(Token = "0x60031F3")]
	[Address(RVA = "0x547A350", Offset = "0x5479350", VA = "0x547A350")]
	public static void AppendAllText(string path, string contents)
	{
	}

	[Token(Token = "0x60031F4")]
	[Address(RVA = "0x547A550", Offset = "0x5479550", VA = "0x547A550")]
	public static void Replace(string sourceFileName, string destinationFileName, string destinationBackupFileName)
	{
	}

	[Token(Token = "0x60031F5")]
	[Address(RVA = "0x547A560", Offset = "0x5479560", VA = "0x547A560")]
	public static void Replace(string sourceFileName, string destinationFileName, string destinationBackupFileName, bool ignoreMetadataErrors)
	{
	}

	[Token(Token = "0x60031F6")]
	[Address(RVA = "0x547A780", Offset = "0x5479780", VA = "0x547A780")]
	public static void Move(string sourceFileName, string destFileName)
	{
	}
}
