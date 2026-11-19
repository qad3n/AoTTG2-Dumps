// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.FileInfo
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.IO;

[Serializable]
[Token(Token = "0x2000661")]
public sealed class FileInfo : FileSystemInfo
{
	[Token(Token = "0x1700080C")]
	public long Length
	{
		[Token(Token = "0x60031FA")]
		[Address(RVA = "0x547ADB0", Offset = "0x5479DB0", VA = "0x547ADB0")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x1700080D")]
	public string DirectoryName
	{
		[Token(Token = "0x60031FB")]
		[Address(RVA = "0x547B070", Offset = "0x547A070", VA = "0x547B070")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700080E")]
	public DirectoryInfo Directory
	{
		[Token(Token = "0x60031FC")]
		[Address(RVA = "0x547B460", Offset = "0x547A460", VA = "0x547B460")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700080F")]
	public override string Name
	{
		[Token(Token = "0x6003201")]
		[Address(RVA = "0x547B5F0", Offset = "0x547A5F0", VA = "0x547B5F0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60031F7")]
	[Address(RVA = "0x547AA40", Offset = "0x5479A40", VA = "0x547AA40")]
	private FileInfo()
	{
	}

	[Token(Token = "0x60031F8")]
	[Address(RVA = "0x547AAA0", Offset = "0x5479AA0", VA = "0x547AAA0")]
	public FileInfo(string fileName)
	{
	}

	[Token(Token = "0x60031F9")]
	[Address(RVA = "0x547AAB0", Offset = "0x5479AB0", VA = "0x547AAB0")]
	internal FileInfo(string originalPath, [Optional] string fullPath, [Optional] string fileName, bool isNormalized = false)
	{
	}

	[Token(Token = "0x60031FD")]
	[Address(RVA = "0x547B510", Offset = "0x547A510", VA = "0x547B510")]
	public StreamWriter CreateText()
	{
		return null;
	}

	[Token(Token = "0x60031FE")]
	[Address(RVA = "0x547B570", Offset = "0x547A570", VA = "0x547B570")]
	public StreamWriter AppendText()
	{
		return null;
	}

	[Token(Token = "0x60031FF")]
	[Address(RVA = "0x547B5D0", Offset = "0x547A5D0", VA = "0x547B5D0", Slot = "11")]
	public override void Delete()
	{
	}

	[Token(Token = "0x6003200")]
	[Address(RVA = "0x547B5E0", Offset = "0x547A5E0", VA = "0x547B5E0")]
	private FileInfo(SerializationInfo info, StreamingContext context)
	{
	}
}
