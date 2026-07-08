using System.Text;
using Il2CppDummyDll;

namespace SimpleJSONFixed;

[Token(Token = "0x2000054")]
public class JSONBool : JSONNode
{
	[Token(Token = "0x40001B2")]
	[FieldOffset(Offset = "0x10")]
	private bool m_Data;

	[Token(Token = "0x17000069")]
	public override JSONNodeType Tag
	{
		[Token(Token = "0x6000283")]
		[Address(RVA = "0x3C8A660", Offset = "0x3C8A660", VA = "0x3C8A660", Slot = "4")]
		get
		{
			return default(JSONNodeType);
		}
	}

	[Token(Token = "0x1700006A")]
	public override bool IsBoolean
	{
		[Token(Token = "0x6000284")]
		[Address(RVA = "0x3C8A670", Offset = "0x3C8A670", VA = "0x3C8A670", Slot = "14")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700006B")]
	public override string Value
	{
		[Token(Token = "0x6000286")]
		[Address(RVA = "0x3C8A6A0", Offset = "0x3C8A6A0", VA = "0x3C8A6A0", Slot = "9")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000287")]
		[Address(RVA = "0x3C8A6E0", Offset = "0x3C8A6E0", VA = "0x3C8A6E0", Slot = "10")]
		set
		{
		}
	}

	[Token(Token = "0x1700006C")]
	public override bool AsBool
	{
		[Token(Token = "0x6000288")]
		[Address(RVA = "0x3C8A730", Offset = "0x3C8A730", VA = "0x3C8A730", Slot = "39")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000289")]
		[Address(RVA = "0x3C8A740", Offset = "0x3C8A740", VA = "0x3C8A740", Slot = "40")]
		set
		{
		}
	}

	[Token(Token = "0x6000285")]
	[Address(RVA = "0x3C8A680", Offset = "0x3C8A680", VA = "0x3C8A680", Slot = "32")]
	public override Enumerator GetEnumerator()
	{
		return default(Enumerator);
	}

	[Token(Token = "0x600028A")]
	[Address(RVA = "0x3C84B80", Offset = "0x3C84B80", VA = "0x3C84B80")]
	public JSONBool(bool aData)
	{
	}

	[Token(Token = "0x600028B")]
	[Address(RVA = "0x3C8A750", Offset = "0x3C8A750", VA = "0x3C8A750")]
	public JSONBool(string aData)
	{
	}

	[Token(Token = "0x600028C")]
	[Address(RVA = "0x3C8A7C0", Offset = "0x3C8A7C0", VA = "0x3C8A7C0", Slot = "26")]
	public override JSONNode Clone()
	{
		return null;
	}

	[Token(Token = "0x600028D")]
	[Address(RVA = "0x3C8A850", Offset = "0x3C8A850", VA = "0x3C8A850", Slot = "31")]
	internal override void WriteToStringBuilder(StringBuilder aSB, int aIndent, int aIndentInc, JSONTextMode aMode)
	{
	}

	[Token(Token = "0x600028E")]
	[Address(RVA = "0x3C8A8C0", Offset = "0x3C8A8C0", VA = "0x3C8A8C0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600028F")]
	[Address(RVA = "0x3C8A8F0", Offset = "0x3C8A8F0", VA = "0x3C8A8F0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000290")]
	[Address(RVA = "0x3C8A930", Offset = "0x3C8A930", VA = "0x3C8A930", Slot = "25")]
	public override void Clear()
	{
	}
}
