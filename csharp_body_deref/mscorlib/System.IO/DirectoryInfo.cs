using System.Collections.Generic;
using System.Runtime.InteropServices;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.IO;

[Serializable]
[Token(Token = "0x200055B")]
public sealed class DirectoryInfo : FileSystemInfo
{
	[Token(Token = "0x600292E")]
	[Address(RVA = "0x4F18970", Offset = "0x4F18970", VA = "0x4F18970")]
	public DirectoryInfo(string path)
	{
	}

	[Token(Token = "0x600292F")]
	[Address(RVA = "0x4F17B50", Offset = "0x4F17B50", VA = "0x4F17B50")]
	internal DirectoryInfo(string originalPath, [Optional] string fullPath, [Optional] string fileName, bool isNormalized = false)
	{
	}

	[Token(Token = "0x6002930")]
	[Address(RVA = "0x4F189E0", Offset = "0x4F189E0", VA = "0x4F189E0")]
	private void Init(string originalPath, [Optional] string fullPath, [Optional] string fileName, bool isNormalized = false)
	{
	}

	[Token(Token = "0x6002931")]
	[Address(RVA = "0x4F18CD0", Offset = "0x4F18CD0", VA = "0x4F18CD0")]
	public DirectoryInfo CreateSubdirectory(string path)
	{
		return null;
	}

	[Token(Token = "0x6002932")]
	[Address(RVA = "0x4F190E0", Offset = "0x4F190E0", VA = "0x4F190E0")]
	public FileInfo[] GetFiles()
	{
		return null;
	}

	[Token(Token = "0x6002933")]
	[Address(RVA = "0x4F19250", Offset = "0x4F19250", VA = "0x4F19250")]
	public FileInfo[] GetFiles(string searchPattern, EnumerationOptions enumerationOptions)
	{
		return null;
	}

	[Token(Token = "0x6002934")]
	[Address(RVA = "0x4F19490", Offset = "0x4F19490", VA = "0x4F19490")]
	public DirectoryInfo[] GetDirectories()
	{
		return null;
	}

	[Token(Token = "0x6002935")]
	[Address(RVA = "0x4F19600", Offset = "0x4F19600", VA = "0x4F19600")]
	public DirectoryInfo[] GetDirectories(string searchPattern, EnumerationOptions enumerationOptions)
	{
		return null;
	}

	[Token(Token = "0x6002936")]
	[Address(RVA = "0x4F192F0", Offset = "0x4F192F0", VA = "0x4F192F0")]
	internal static IEnumerable<FileSystemInfo> InternalEnumerateInfos(string path, string searchPattern, System.IO.SearchTarget searchTarget, EnumerationOptions options)
	{
		return null;
	}

	[Token(Token = "0x6002937")]
	[Address(RVA = "0x4F196A0", Offset = "0x4F196A0", VA = "0x4F196A0", Slot = "11")]
	public override void Delete()
	{
	}

	[Token(Token = "0x6002938")]
	[Address(RVA = "0x4F196B0", Offset = "0x4F196B0", VA = "0x4F196B0")]
	private DirectoryInfo(SerializationInfo info, StreamingContext context)
	{
	}
}
