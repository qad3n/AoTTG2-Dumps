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
		[Address(RVA = "0x483D860", Offset = "0x483D860", VA = "0x483D860")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000F1F")]
	[Address(RVA = "0x483D840", Offset = "0x483D840", VA = "0x483D840")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000F21")]
	[Address(RVA = "0x483D870", Offset = "0x483D870", VA = "0x483D870")]
	public string GetResult()
	{
		return null;
	}

	[Token(Token = "0x6000F22")]
	[Address(RVA = "0x483D930", Offset = "0x483D930", VA = "0x483D930")]
	internal void ConcatNoDelimiter(string s)
	{
	}
}
