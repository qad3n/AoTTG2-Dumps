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

[Token(Token = "0x2000687")]
public static class File
{
	[Token(Token = "0x6003226")]
	[Address(RVA = "0x1AEEAF0", Offset = "0x1AED0F0", VA = "0x181AEEAF0")]
	public static StreamReader OpenText(string path)
	{
		return null;
	}

	[Token(Token = "0x6003227")]
	[Address(RVA = "0x1AEE150", Offset = "0x1AEC750", VA = "0x181AEE150")]
	public static void Delete(string path)
	{
	}

	[Token(Token = "0x6003228")]
	[Address(RVA = "0x1AEE230", Offset = "0x1AEC830", VA = "0x181AEE230")]
	public static bool Exists(string path)
	{
		return default(bool);
	}

	[Token(Token = "0x6003229")]
	[Address(RVA = "0x1AEEC20", Offset = "0x1AED220", VA = "0x181AEEC20")]
	public static FileStream Open(string path, FileMode mode)
	{
		return null;
	}

	[Token(Token = "0x600322A")]
	[Address(RVA = "0x1AEECB0", Offset = "0x1AED2B0", VA = "0x181AEECB0")]
	public static FileStream Open(string path, FileMode mode, FileAccess access, FileShare share)
	{
		return null;
	}

	[Token(Token = "0x600322B")]
	[Address(RVA = "0x1AEE3E0", Offset = "0x1AEC9E0", VA = "0x181AEE3E0")]
	public static DateTime GetCreationTime(string path)
	{
		return default(DateTime);
	}

	[Token(Token = "0x600322C")]
	[Address(RVA = "0x1AEE4C0", Offset = "0x1AECAC0", VA = "0x181AEE4C0")]
	public static DateTime GetLastWriteTime(string path)
	{
		return default(DateTime);
	}

	[Token(Token = "0x600322D")]
	[Address(RVA = "0x1AEE350", Offset = "0x1AEC950", VA = "0x181AEE350")]
	public static FileAttributes GetAttributes(string path)
	{
		return default(FileAttributes);
	}

	[Token(Token = "0x600322E")]
	[Address(RVA = "0x1AEEA70", Offset = "0x1AED070", VA = "0x181AEEA70")]
	public static FileStream OpenRead(string path)
	{
		return null;
	}

	[Token(Token = "0x600322F")]
	[Address(RVA = "0x1AEEBA0", Offset = "0x1AED1A0", VA = "0x181AEEBA0")]
	public static FileStream OpenWrite(string path)
	{
		return null;
	}

	[Token(Token = "0x6003230")]
	[Address(RVA = "0x1AEF3F0", Offset = "0x1AED9F0", VA = "0x181AEF3F0")]
	public static string ReadAllText(string path)
	{
		return null;
	}

	[Token(Token = "0x6003231")]
	[Address(RVA = "0x1AEE5A0", Offset = "0x1AECBA0", VA = "0x181AEE5A0")]
	private static string InternalReadAllText(string path, Encoding encoding)
	{
		return null;
	}

	[Token(Token = "0x6003232")]
	[Address(RVA = "0x1AEF9B0", Offset = "0x1AEDFB0", VA = "0x181AEF9B0")]
	public static void WriteAllText(string path, string contents)
	{
	}

	[Token(Token = "0x6003233")]
	[Address(RVA = "0x1AEF190", Offset = "0x1AED790", VA = "0x181AEF190")]
	public static byte[] ReadAllBytes(string path)
	{
		return null;
	}

	[Token(Token = "0x6003234")]
	[Address(RVA = "0x1AEED30", Offset = "0x1AED330", VA = "0x181AEED30")]
	private static byte[] ReadAllBytesUnknownLength(FileStream fs)
	{
		return null;
	}

	[Token(Token = "0x6003235")]
	[Address(RVA = "0x1AEF880", Offset = "0x1AEDE80", VA = "0x181AEF880")]
	public static void WriteAllBytes(string path, byte[] bytes)
	{
	}

	[Token(Token = "0x6003236")]
	[Address(RVA = "0x1AEE6B0", Offset = "0x1AECCB0", VA = "0x181AEE6B0")]
	private static void InternalWriteAllBytes(string path, byte[] bytes)
	{
	}

	[Token(Token = "0x6003237")]
	[Address(RVA = "0x1AEDFA0", Offset = "0x1AEC5A0", VA = "0x181AEDFA0")]
	public static void AppendAllText(string path, string contents)
	{
	}

	[Token(Token = "0x6003238")]
	[Address(RVA = "0x1AEF4D0", Offset = "0x1AEDAD0", VA = "0x181AEF4D0")]
	public static void Replace(string sourceFileName, string destinationFileName, string destinationBackupFileName)
	{
	}

	[Token(Token = "0x6003239")]
	[Address(RVA = "0x1AEF6B0", Offset = "0x1AEDCB0", VA = "0x181AEF6B0")]
	public static void Replace(string sourceFileName, string destinationFileName, string destinationBackupFileName, bool ignoreMetadataErrors)
	{
	}

	[Token(Token = "0x600323A")]
	[Address(RVA = "0x1AEE7F0", Offset = "0x1AECDF0", VA = "0x181AEE7F0")]
	public static void Move(string sourceFileName, string destFileName)
	{
	}
}
