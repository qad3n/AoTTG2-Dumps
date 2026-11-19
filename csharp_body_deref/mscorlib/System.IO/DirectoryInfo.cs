// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.DirectoryInfo
// Update status: CHANGED in this game update
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
[Token(Token = "0x200065E")]
public sealed class DirectoryInfo : FileSystemInfo
{
	[Token(Token = "0x60031C6")]
	[Address(RVA = "0x5477AF0", Offset = "0x5476AF0", VA = "0x5477AF0")]
	public DirectoryInfo(string path)
	{
	}

	[Token(Token = "0x60031C7")]
	[Address(RVA = "0x5476C80", Offset = "0x5475C80", VA = "0x5476C80")]
	internal DirectoryInfo(string originalPath, [Optional] string fullPath, [Optional] string fileName, bool isNormalized = false)
	{
	}

	[Token(Token = "0x60031C8")]
	[Address(RVA = "0x5477C60", Offset = "0x5476C60", VA = "0x5477C60")]
	private void Init(string originalPath, [Optional] string fullPath, [Optional] string fileName, bool isNormalized = false)
	{
	}

	[Token(Token = "0x60031C9")]
	[Address(RVA = "0x5478190", Offset = "0x5477190", VA = "0x5478190")]
	public FileInfo[] GetFiles()
	{
		return null;
	}

	[Token(Token = "0x60031CA")]
	[Address(RVA = "0x5478300", Offset = "0x5477300", VA = "0x5478300")]
	public FileInfo[] GetFiles(string searchPattern, EnumerationOptions enumerationOptions)
	{
		return null;
	}

	[Token(Token = "0x60031CB")]
	[Address(RVA = "0x54783A0", Offset = "0x54773A0", VA = "0x54783A0")]
	internal static IEnumerable<FileSystemInfo> InternalEnumerateInfos(string path, string searchPattern, System.IO.SearchTarget searchTarget, EnumerationOptions options)
	{
		return null;
	}

	[Token(Token = "0x60031CC")]
	[Address(RVA = "0x5478540", Offset = "0x5477540", VA = "0x5478540", Slot = "11")]
	public override void Delete()
	{
	}

	[Token(Token = "0x60031CD")]
	[Address(RVA = "0x5478550", Offset = "0x5477550", VA = "0x5478550")]
	private DirectoryInfo(SerializationInfo info, StreamingContext context)
	{
	}
}
