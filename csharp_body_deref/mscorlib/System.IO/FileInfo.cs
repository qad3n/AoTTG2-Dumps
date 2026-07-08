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
		[Address(RVA = "0x4F1B6E0", Offset = "0x4F1B6E0", VA = "0x4F1B6E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005FA")]
	public DirectoryInfo Directory
	{
		[Token(Token = "0x600295F")]
		[Address(RVA = "0x4F1B740", Offset = "0x4F1B740", VA = "0x4F1B740")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005FB")]
	public override string Name
	{
		[Token(Token = "0x6002965")]
		[Address(RVA = "0x4F1BF00", Offset = "0x4F1BF00", VA = "0x4F1BF00", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600295B")]
	[Address(RVA = "0x4F1B570", Offset = "0x4F1B570", VA = "0x4F1B570")]
	private FileInfo()
	{
	}

	[Token(Token = "0x600295C")]
	[Address(RVA = "0x4F1B580", Offset = "0x4F1B580", VA = "0x4F1B580")]
	public FileInfo(string fileName)
	{
	}

	[Token(Token = "0x600295D")]
	[Address(RVA = "0x4F1B590", Offset = "0x4F1B590", VA = "0x4F1B590")]
	internal FileInfo(string originalPath, [Optional] string fullPath, [Optional] string fileName, bool isNormalized = false)
	{
	}

	[Token(Token = "0x6002960")]
	[Address(RVA = "0x4F1B840", Offset = "0x4F1B840", VA = "0x4F1B840")]
	public StreamWriter CreateText()
	{
		return null;
	}

	[Token(Token = "0x6002961")]
	[Address(RVA = "0x4F1B8A0", Offset = "0x4F1B8A0", VA = "0x4F1B8A0")]
	public StreamWriter AppendText()
	{
		return null;
	}

	[Token(Token = "0x6002962")]
	[Address(RVA = "0x4F1B900", Offset = "0x4F1B900", VA = "0x4F1B900")]
	public FileInfo CopyTo(string destFileName, bool overwrite)
	{
		return null;
	}

	[Token(Token = "0x6002963")]
	[Address(RVA = "0x4F1BEE0", Offset = "0x4F1BEE0", VA = "0x4F1BEE0", Slot = "11")]
	public override void Delete()
	{
	}

	[Token(Token = "0x6002964")]
	[Address(RVA = "0x4F1BEF0", Offset = "0x4F1BEF0", VA = "0x4F1BEF0")]
	private FileInfo(SerializationInfo info, StreamingContext context)
	{
	}
}
