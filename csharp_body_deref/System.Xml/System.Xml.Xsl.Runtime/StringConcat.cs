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
		[Address(RVA = "0x4500100", Offset = "0x4500100", VA = "0x4500100")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000F1F")]
	[Address(RVA = "0x45000E0", Offset = "0x45000E0", VA = "0x45000E0")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000F21")]
	[Address(RVA = "0x4500110", Offset = "0x4500110", VA = "0x4500110")]
	public string GetResult()
	{
		return null;
	}

	[Token(Token = "0x6000F22")]
	[Address(RVA = "0x45001D0", Offset = "0x45001D0", VA = "0x45001D0")]
	internal void ConcatNoDelimiter(string s)
	{
	}
}
