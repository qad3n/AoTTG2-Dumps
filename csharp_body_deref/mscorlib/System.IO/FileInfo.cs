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
[Token(Token = "0x2000688")]
public sealed class FileInfo : FileSystemInfo
{
	[Token(Token = "0x17000811")]
	public long Length
	{
		[Token(Token = "0x600323E")]
		[Address(RVA = "0x1AE87F0", Offset = "0x1AE6DF0", VA = "0x181AE87F0")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x17000812")]
	public string DirectoryName
	{
		[Token(Token = "0x600323F")]
		[Address(RVA = "0x1AE86F0", Offset = "0x1AE6CF0", VA = "0x181AE86F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000813")]
	public DirectoryInfo Directory
	{
		[Token(Token = "0x6003240")]
		[Address(RVA = "0x1AE8740", Offset = "0x1AE6D40", VA = "0x181AE8740")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000814")]
	public override string Name
	{
		[Token(Token = "0x6003246")]
		[Address(RVA = "0x5853D0", Offset = "0x5839D0", VA = "0x1805853D0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600323B")]
	[Address(RVA = "0x1AE86E0", Offset = "0x1AE6CE0", VA = "0x181AE86E0")]
	private FileInfo()
	{
	}

	[Token(Token = "0x600323C")]
	[Address(RVA = "0x1AE8430", Offset = "0x1AE6A30", VA = "0x181AE8430")]
	public FileInfo(string fileName)
	{
	}

	[Token(Token = "0x600323D")]
	[Address(RVA = "0x1AE8580", Offset = "0x1AE6B80", VA = "0x181AE8580")]
	internal FileInfo(string originalPath, [Optional] string fullPath, [Optional] string fileName, bool isNormalized = false)
	{
	}

	[Token(Token = "0x6003241")]
	[Address(RVA = "0x1AE83B0", Offset = "0x1AE69B0", VA = "0x181AE83B0")]
	public StreamWriter CreateText()
	{
		return null;
	}

	[Token(Token = "0x6003242")]
	[Address(RVA = "0x1AE80C0", Offset = "0x1AE66C0", VA = "0x181AE80C0")]
	public StreamWriter AppendText()
	{
		return null;
	}

	[Token(Token = "0x6003243")]
	[Address(RVA = "0x1AE8130", Offset = "0x1AE6730", VA = "0x181AE8130")]
	public FileInfo CopyTo(string destFileName, bool overwrite)
	{
		return null;
	}

	[Token(Token = "0x6003244")]
	[Address(RVA = "0x1AE8420", Offset = "0x1AE6A20", VA = "0x181AE8420", Slot = "11")]
	public override void Delete()
	{
	}

	[Token(Token = "0x6003245")]
	[Address(RVA = "0x1AE7020", Offset = "0x1AE5620", VA = "0x181AE7020")]
	private FileInfo(SerializationInfo info, StreamingContext context)
	{
	}
}
