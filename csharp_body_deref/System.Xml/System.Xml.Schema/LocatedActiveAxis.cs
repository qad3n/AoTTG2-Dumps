using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x200016B")]
internal class LocatedActiveAxis : ActiveAxis
{
	[Token(Token = "0x400075B")]
	[FieldOffset(Offset = "0x28")]
	private int column;

	[Token(Token = "0x400075C")]
	[FieldOffset(Offset = "0x2C")]
	internal bool isMatched;

	[Token(Token = "0x400075D")]
	[FieldOffset(Offset = "0x30")]
	internal KeySequence Ks;

	[Token(Token = "0x17000409")]
	internal int Column
	{
		[Token(Token = "0x6000F9F")]
		[Address(RVA = "0x4506170", Offset = "0x4506170", VA = "0x4506170")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000FA0")]
	[Address(RVA = "0x4506180", Offset = "0x4506180", VA = "0x4506180")]
	internal LocatedActiveAxis(Asttree astfield, KeySequence ks, int column)
	{
	}

	[Token(Token = "0x6000FA1")]
	[Address(RVA = "0x45061B0", Offset = "0x45061B0", VA = "0x45061B0")]
	internal void Reactivate(KeySequence ks)
	{
	}
}
