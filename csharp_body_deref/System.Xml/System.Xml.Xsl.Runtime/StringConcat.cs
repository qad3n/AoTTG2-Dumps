// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Xsl.Runtime.StringConcat
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.ComponentModel;
using Il2CppDummyDll;

namespace System.Xml.Xsl.Runtime;

[Token(Token = "0x200015C")]
[EditorBrowsable(EditorBrowsableState.Never)]
public struct StringConcat
{
	[Token(Token = "0x4000714")]
	[FieldOffset(Offset = "0x0")]
	private string s1;

	[Token(Token = "0x4000715")]
	[FieldOffset(Offset = "0x8")]
	private string s2;

	[Token(Token = "0x4000716")]
	[FieldOffset(Offset = "0x10")]
	private string s3;

	[Token(Token = "0x4000717")]
	[FieldOffset(Offset = "0x18")]
	private string s4;

	[Token(Token = "0x4000718")]
	[FieldOffset(Offset = "0x20")]
	private string delimiter;

	[Token(Token = "0x4000719")]
	[FieldOffset(Offset = "0x28")]
	private List<string> strList;

	[Token(Token = "0x400071A")]
	[FieldOffset(Offset = "0x30")]
	private int idxStr;

	[Token(Token = "0x170003E5")]
	internal int Count
	{
		[Token(Token = "0x6000F20")]
		[Address(RVA = "0xAB9F60", Offset = "0xAB8560", VA = "0x180AB9F60")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000F1F")]
	[Address(RVA = "0x2784C70", Offset = "0x2783270", VA = "0x182784C70")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000F21")]
	[Address(RVA = "0x2784E30", Offset = "0x2783430", VA = "0x182784E30")]
	public string GetResult()
	{
		return null;
	}

	[Token(Token = "0x6000F22")]
	[Address(RVA = "0x2784C90", Offset = "0x2783290", VA = "0x182784C90")]
	internal void ConcatNoDelimiter(string s)
	{
	}
}
