using System.Text;
using Il2CppDummyDll;

namespace SimpleJSONFixed;

[Token(Token = "0x2000055")]
public class JSONNull : JSONNode
{
	[Token(Token = "0x40001B3")]
	[FieldOffset(Offset = "0x0")]
	private static JSONNull m_StaticInstance;

	[Token(Token = "0x40001B4")]
	[FieldOffset(Offset = "0x8")]
	public static bool reuseSameInstance;

	[Token(Token = "0x1700006D")]
	public override JSONNodeType Tag
	{
		[Token(Token = "0x6000293")]
		[Address(RVA = "0x3C8A9B0", Offset = "0x3C8A9B0", VA = "0x3C8A9B0", Slot = "4")]
		get
		{
			return default(JSONNodeType);
		}
	}

	[Token(Token = "0x1700006E")]
	public override bool IsNull
	{
		[Token(Token = "0x6000294")]
		[Address(RVA = "0x3C8A9C0", Offset = "0x3C8A9C0", VA = "0x3C8A9C0", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700006F")]
	public override string Value
	{
		[Token(Token = "0x6000296")]
		[Address(RVA = "0x3C8A9F0", Offset = "0x3C8A9F0", VA = "0x3C8A9F0", Slot = "9")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000297")]
		[Address(RVA = "0x3C8AA20", Offset = "0x3C8AA20", VA = "0x3C8AA20", Slot = "10")]
		set
		{
		}
	}

	[Token(Token = "0x17000070")]
	public override bool AsBool
	{
		[Token(Token = "0x6000298")]
		[Address(RVA = "0x3C8AA30", Offset = "0x3C8AA30", VA = "0x3C8AA30", Slot = "39")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000299")]
		[Address(RVA = "0x3C8AA40", Offset = "0x3C8AA40", VA = "0x3C8AA40", Slot = "40")]
		set
		{
		}
	}

	[Token(Token = "0x6000291")]
	[Address(RVA = "0x3C840E0", Offset = "0x3C840E0", VA = "0x3C840E0")]
	public static JSONNull CreateOrGet()
	{
		return null;
	}

	[Token(Token = "0x6000292")]
	[Address(RVA = "0x3C8A940", Offset = "0x3C8A940", VA = "0x3C8A940")]
	private JSONNull()
	{
	}

	[Token(Token = "0x6000295")]
	[Address(RVA = "0x3C8A9D0", Offset = "0x3C8A9D0", VA = "0x3C8A9D0", Slot = "32")]
	public override Enumerator GetEnumerator()
	{
		return default(Enumerator);
	}

	[Token(Token = "0x600029A")]
	[Address(RVA = "0x3C8AA50", Offset = "0x3C8AA50", VA = "0x3C8AA50", Slot = "26")]
	public override JSONNode Clone()
	{
		return null;
	}

	[Token(Token = "0x600029B")]
	[Address(RVA = "0x3C8AAB0", Offset = "0x3C8AAB0", VA = "0x3C8AAB0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600029C")]
	[Address(RVA = "0x3C8AB30", Offset = "0x3C8AB30", VA = "0x3C8AB30", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600029D")]
	[Address(RVA = "0x3C8AB40", Offset = "0x3C8AB40", VA = "0x3C8AB40", Slot = "31")]
	internal override void WriteToStringBuilder(StringBuilder aSB, int aIndent, int aIndentInc, JSONTextMode aMode)
	{
	}
}
