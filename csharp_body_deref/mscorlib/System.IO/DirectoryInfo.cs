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
[Token(Token = "0x2000685")]
public sealed class DirectoryInfo : FileSystemInfo
{
	[Token(Token = "0x600320A")]
	[Address(RVA = "0x1AE6B20", Offset = "0x1AE5120", VA = "0x181AE6B20")]
	public DirectoryInfo(string path)
	{
	}

	[Token(Token = "0x600320B")]
	[Address(RVA = "0x1AE6BF0", Offset = "0x1AE51F0", VA = "0x181AE6BF0")]
	internal DirectoryInfo(string originalPath, [Optional] string fullPath, [Optional] string fileName, bool isNormalized = false)
	{
	}

	[Token(Token = "0x600320C")]
	[Address(RVA = "0x1AE6510", Offset = "0x1AE4B10", VA = "0x181AE6510")]
	private void Init(string originalPath, [Optional] string fullPath, [Optional] string fileName, bool isNormalized = false)
	{
	}

	[Token(Token = "0x600320D")]
	[Address(RVA = "0x1AE5CD0", Offset = "0x1AE42D0", VA = "0x181AE5CD0")]
	public DirectoryInfo CreateSubdirectory(string path)
	{
		return null;
	}

	[Token(Token = "0x600320E")]
	[Address(RVA = "0x1AE6330", Offset = "0x1AE4930", VA = "0x181AE6330")]
	public FileInfo[] GetFiles()
	{
		return null;
	}

	[Token(Token = "0x600320F")]
	[Address(RVA = "0x1AE6460", Offset = "0x1AE4A60", VA = "0x181AE6460")]
	public FileInfo[] GetFiles(string searchPattern, EnumerationOptions enumerationOptions)
	{
		return null;
	}

	[Token(Token = "0x6003210")]
	[Address(RVA = "0x1AE6150", Offset = "0x1AE4750", VA = "0x181AE6150")]
	public DirectoryInfo[] GetDirectories()
	{
		return null;
	}

	[Token(Token = "0x6003211")]
	[Address(RVA = "0x1AE6280", Offset = "0x1AE4880", VA = "0x181AE6280")]
	public DirectoryInfo[] GetDirectories(string searchPattern, EnumerationOptions enumerationOptions)
	{
		return null;
	}

	[Token(Token = "0x6003212")]
	[Address(RVA = "0x1AE6930", Offset = "0x1AE4F30", VA = "0x181AE6930")]
	internal static IEnumerable<FileSystemInfo> InternalEnumerateInfos(string path, string searchPattern, System.IO.SearchTarget searchTarget, EnumerationOptions options)
	{
		return null;
	}

	[Token(Token = "0x6003213")]
	[Address(RVA = "0x1AE6140", Offset = "0x1AE4740", VA = "0x181AE6140", Slot = "11")]
	public override void Delete()
	{
	}

	[Token(Token = "0x6003214")]
	[Address(RVA = "0x1AE7020", Offset = "0x1AE5620", VA = "0x181AE7020")]
	private DirectoryInfo(SerializationInfo info, StreamingContext context)
	{
	}
}
