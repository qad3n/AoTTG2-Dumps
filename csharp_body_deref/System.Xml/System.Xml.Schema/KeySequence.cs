// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.KeySequence
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0xA4C170", Offset = "0xA4A770", VA = "0x180A4C170")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000414")]
	public int PosCol
	{
		[Token(Token = "0x6000FBA")]
		[Address(RVA = "0xBDB280", Offset = "0xBD9880", VA = "0x180BDB280")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000415")]
	public object this[int index]
	{
		[Token(Token = "0x6000FBB")]
		[Address(RVA = "0x277EF80", Offset = "0x277D580", VA = "0x18277EF80")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000FBC")]
		[Address(RVA = "0x277EFB0", Offset = "0x277D5B0", VA = "0x18277EFB0")]
		set
		{
		}
	}

	[Token(Token = "0x6000FB8")]
	[Address(RVA = "0x277EF00", Offset = "0x277D500", VA = "0x18277EF00")]
	internal KeySequence(int dim, int line, int col)
	{
	}

	[Token(Token = "0x6000FBD")]
	[Address(RVA = "0x277ED60", Offset = "0x277D360", VA = "0x18277ED60")]
	internal bool IsQualified()
	{
		return default(bool);
	}

	[Token(Token = "0x6000FBE")]
	[Address(RVA = "0x277E930", Offset = "0x277CF30", VA = "0x18277E930", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000FBF")]
	[Address(RVA = "0x277E820", Offset = "0x277CE20", VA = "0x18277E820", Slot = "0")]
	public override bool Equals(object other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FC0")]
	[Address(RVA = "0x277EDC0", Offset = "0x277D3C0", VA = "0x18277EDC0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
