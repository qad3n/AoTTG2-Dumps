using System.Collections;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x2000174")]
internal class Positions
{
	[Token(Token = "0x400077B")]
	[FieldOffset(Offset = "0x10")]
	private ArrayList positions;

	[Token(Token = "0x1700041B")]
	public Position this[int pos]
	{
		[Token(Token = "0x6000FD2")]
		[Address(RVA = "0x4509740", Offset = "0x4509740", VA = "0x4509740")]
		get
		{
			return default(Position);
		}
	}

	[Token(Token = "0x1700041C")]
	public int Count
	{
		[Token(Token = "0x6000FD3")]
		[Address(RVA = "0x45097C0", Offset = "0x45097C0", VA = "0x45097C0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000FD1")]
	[Address(RVA = "0x45096A0", Offset = "0x45096A0", VA = "0x45096A0")]
	public int Add(int symbol, object particle)
	{
		return default(int);
	}

	[Token(Token = "0x6000FD4")]
	[Address(RVA = "0x45097F0", Offset = "0x45097F0", VA = "0x45097F0")]
	public Positions()
	{
	}
}
