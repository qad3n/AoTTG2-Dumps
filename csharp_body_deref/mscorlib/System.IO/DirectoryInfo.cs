// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.DirectoryInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x3BFE490", Offset = "0x3BFE490", VA = "0x3BFE490")]
	public DirectoryInfo(string path)
	{
	}

	[Token(Token = "0x600292F")]
	[Address(RVA = "0x3BFD670", Offset = "0x3BFD670", VA = "0x3BFD670")]
	internal DirectoryInfo(string originalPath, [Optional] string fullPath, [Optional] string fileName, bool isNormalized = false)
	{
	}

	[Token(Token = "0x6002930")]
	[Address(RVA = "0x3BFE500", Offset = "0x3BFE500", VA = "0x3BFE500")]
	private void Init(string originalPath, [Optional] string fullPath, [Optional] string fileName, bool isNormalized = false)
	{
	}

	[Token(Token = "0x6002931")]
	[Address(RVA = "0x3BFE7F0", Offset = "0x3BFE7F0", VA = "0x3BFE7F0")]
	public DirectoryInfo CreateSubdirectory(string path)
	{
		return null;
	}

	[Token(Token = "0x6002932")]
	[Address(RVA = "0x3BFEC00", Offset = "0x3BFEC00", VA = "0x3BFEC00")]
	public FileInfo[] GetFiles()
	{
		return null;
	}

	[Token(Token = "0x6002933")]
	[Address(RVA = "0x3BFED70", Offset = "0x3BFED70", VA = "0x3BFED70")]
	public FileInfo[] GetFiles(string searchPattern, EnumerationOptions enumerationOptions)
	{
		return null;
	}

	[Token(Token = "0x6002934")]
	[Address(RVA = "0x3BFEFB0", Offset = "0x3BFEFB0", VA = "0x3BFEFB0")]
	public DirectoryInfo[] GetDirectories()
	{
		return null;
	}

	[Token(Token = "0x6002935")]
	[Address(RVA = "0x3BFF120", Offset = "0x3BFF120", VA = "0x3BFF120")]
	public DirectoryInfo[] GetDirectories(string searchPattern, EnumerationOptions enumerationOptions)
	{
		return null;
	}

	[Token(Token = "0x6002936")]
	[Address(RVA = "0x3BFEE10", Offset = "0x3BFEE10", VA = "0x3BFEE10")]
	internal static IEnumerable<FileSystemInfo> InternalEnumerateInfos(string path, string searchPattern, System.IO.SearchTarget searchTarget, EnumerationOptions options)
	{
		return null;
	}

	[Token(Token = "0x6002937")]
	[Address(RVA = "0x3BFF1C0", Offset = "0x3BFF1C0", VA = "0x3BFF1C0", Slot = "11")]
	public override void Delete()
	{
	}

	[Token(Token = "0x6002938")]
	[Address(RVA = "0x3BFF1D0", Offset = "0x3BFF1D0", VA = "0x3BFF1D0")]
	private DirectoryInfo(SerializationInfo info, StreamingContext context)
	{
	}
}
