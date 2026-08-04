// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.FileInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.IO;

[Serializable]
[Token(Token = "0x200055E")]
public sealed class FileInfo : FileSystemInfo
{
	[Token(Token = "0x170005F9")]
	public string DirectoryName
	{
		[Token(Token = "0x600295E")]
		[Address(RVA = "0x3C01200", Offset = "0x3C01200", VA = "0x3C01200")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005FA")]
	public DirectoryInfo Directory
	{
		[Token(Token = "0x600295F")]
		[Address(RVA = "0x3C01260", Offset = "0x3C01260", VA = "0x3C01260")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005FB")]
	public override string Name
	{
		[Token(Token = "0x6002965")]
		[Address(RVA = "0x3C01A20", Offset = "0x3C01A20", VA = "0x3C01A20", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600295B")]
	[Address(RVA = "0x3C01090", Offset = "0x3C01090", VA = "0x3C01090")]
	private FileInfo()
	{
	}

	[Token(Token = "0x600295C")]
	[Address(RVA = "0x3C010A0", Offset = "0x3C010A0", VA = "0x3C010A0")]
	public FileInfo(string fileName)
	{
	}

	[Token(Token = "0x600295D")]
	[Address(RVA = "0x3C010B0", Offset = "0x3C010B0", VA = "0x3C010B0")]
	internal FileInfo(string originalPath, [Optional] string fullPath, [Optional] string fileName, bool isNormalized = false)
	{
	}

	[Token(Token = "0x6002960")]
	[Address(RVA = "0x3C01360", Offset = "0x3C01360", VA = "0x3C01360")]
	public StreamWriter CreateText()
	{
		return null;
	}

	[Token(Token = "0x6002961")]
	[Address(RVA = "0x3C013C0", Offset = "0x3C013C0", VA = "0x3C013C0")]
	public StreamWriter AppendText()
	{
		return null;
	}

	[Token(Token = "0x6002962")]
	[Address(RVA = "0x3C01420", Offset = "0x3C01420", VA = "0x3C01420")]
	public FileInfo CopyTo(string destFileName, bool overwrite)
	{
		return null;
	}

	[Token(Token = "0x6002963")]
	[Address(RVA = "0x3C01A00", Offset = "0x3C01A00", VA = "0x3C01A00", Slot = "11")]
	public override void Delete()
	{
	}

	[Token(Token = "0x6002964")]
	[Address(RVA = "0x3C01A10", Offset = "0x3C01A10", VA = "0x3C01A10")]
	private FileInfo(SerializationInfo info, StreamingContext context)
	{
	}
}
