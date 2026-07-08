using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x2000170")]
internal class KeySequence
{
	[Token(Token = "0x400076C")]
	[FieldOffset(Offset = "0x10")]
	private TypedObject[] ks;

	[Token(Token = "0x400076D")]
	[FieldOffset(Offset = "0x18")]
	private int dim;

	[Token(Token = "0x400076E")]
	[FieldOffset(Offset = "0x1C")]
	private int hashcode;

	[Token(Token = "0x400076F")]
	[FieldOffset(Offset = "0x20")]
	private int posline;

	[Token(Token = "0x4000770")]
	[FieldOffset(Offset = "0x24")]
	private int poscol;

	[Token(Token = "0x17000413")]
	public int PosLine
	{
		[Token(Token = "0x6000FB9")]
		[Address(RVA = "0x4507260", Offset = "0x4507260", VA = "0x4507260")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000414")]
	public int PosCol
	{
		[Token(Token = "0x6000FBA")]
		[Address(RVA = "0x4507270", Offset = "0x4507270", VA = "0x4507270")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000415")]
	public object this[int index]
	{
		[Token(Token = "0x6000FBB")]
		[Address(RVA = "0x4507280", Offset = "0x4507280", VA = "0x4507280")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000FBC")]
		[Address(RVA = "0x45072B0", Offset = "0x45072B0", VA = "0x45072B0")]
		set
		{
		}
	}

	[Token(Token = "0x6000FB8")]
	[Address(RVA = "0x4506690", Offset = "0x4506690", VA = "0x4506690")]
	internal KeySequence(int dim, int line, int col)
	{
	}

	[Token(Token = "0x6000FBD")]
	[Address(RVA = "0x45073A0", Offset = "0x45073A0", VA = "0x45073A0")]
	internal bool IsQualified()
	{
		return default(bool);
	}

	[Token(Token = "0x6000FBE")]
	[Address(RVA = "0x45073F0", Offset = "0x45073F0", VA = "0x45073F0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000FBF")]
	[Address(RVA = "0x4507800", Offset = "0x4507800", VA = "0x4507800", Slot = "0")]
	public override bool Equals(object other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FC0")]
	[Address(RVA = "0x45078E0", Offset = "0x45078E0", VA = "0x45078E0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
