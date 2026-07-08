using System.Text;
using Il2CppDummyDll;

namespace SimpleJSONFixed;

[Token(Token = "0x2000053")]
public class JSONNumber : JSONNode
{
	[Token(Token = "0x40001B1")]
	[FieldOffset(Offset = "0x10")]
	private double m_Data;

	[Token(Token = "0x17000063")]
	public override JSONNodeType Tag
	{
		[Token(Token = "0x6000270")]
		[Address(RVA = "0x3C8A070", Offset = "0x3C8A070", VA = "0x3C8A070", Slot = "4")]
		get
		{
			return default(JSONNodeType);
		}
	}

	[Token(Token = "0x17000064")]
	public override bool IsNumber
	{
		[Token(Token = "0x6000271")]
		[Address(RVA = "0x3C8A080", Offset = "0x3C8A080", VA = "0x3C8A080", Slot = "12")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000065")]
	public override string Value
	{
		[Token(Token = "0x6000273")]
		[Address(RVA = "0x3C8A0B0", Offset = "0x3C8A0B0", VA = "0x3C8A0B0", Slot = "9")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000274")]
		[Address(RVA = "0x3C8A110", Offset = "0x3C8A110", VA = "0x3C8A110", Slot = "10")]
		set
		{
		}
	}

	[Token(Token = "0x17000066")]
	public override double AsDouble
	{
		[Token(Token = "0x6000275")]
		[Address(RVA = "0x3C8A190", Offset = "0x3C8A190", VA = "0x3C8A190", Slot = "33")]
		get
		{
			return default(double);
		}
		[Token(Token = "0x6000276")]
		[Address(RVA = "0x3C8A1A0", Offset = "0x3C8A1A0", VA = "0x3C8A1A0", Slot = "34")]
		set
		{
		}
	}

	[Token(Token = "0x17000067")]
	public override long AsLong
	{
		[Token(Token = "0x6000277")]
		[Address(RVA = "0x3C8A1B0", Offset = "0x3C8A1B0", VA = "0x3C8A1B0", Slot = "41")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x6000278")]
		[Address(RVA = "0x3C8A1C0", Offset = "0x3C8A1C0", VA = "0x3C8A1C0", Slot = "42")]
		set
		{
		}
	}

	[Token(Token = "0x17000068")]
	public override ulong AsULong
	{
		[Token(Token = "0x6000279")]
		[Address(RVA = "0x3C8A1D0", Offset = "0x3C8A1D0", VA = "0x3C8A1D0", Slot = "43")]
		get
		{
			return default(ulong);
		}
		[Token(Token = "0x600027A")]
		[Address(RVA = "0x3C8A220", Offset = "0x3C8A220", VA = "0x3C8A220", Slot = "44")]
		set
		{
		}
	}

	[Token(Token = "0x6000272")]
	[Address(RVA = "0x3C8A090", Offset = "0x3C8A090", VA = "0x3C8A090", Slot = "32")]
	public override Enumerator GetEnumerator()
	{
		return default(Enumerator);
	}

	[Token(Token = "0x600027B")]
	[Address(RVA = "0x3C84410", Offset = "0x3C84410", VA = "0x3C84410")]
	public JSONNumber(double aData)
	{
	}

	[Token(Token = "0x600027C")]
	[Address(RVA = "0x3C8A250", Offset = "0x3C8A250", VA = "0x3C8A250")]
	public JSONNumber(string aData)
	{
	}

	[Token(Token = "0x600027D")]
	[Address(RVA = "0x3C8A2C0", Offset = "0x3C8A2C0", VA = "0x3C8A2C0", Slot = "26")]
	public override JSONNode Clone()
	{
		return null;
	}

	[Token(Token = "0x600027E")]
	[Address(RVA = "0x3C8A350", Offset = "0x3C8A350", VA = "0x3C8A350", Slot = "31")]
	internal override void WriteToStringBuilder(StringBuilder aSB, int aIndent, int aIndentInc, JSONTextMode aMode)
	{
	}

	[Token(Token = "0x600027F")]
	[Address(RVA = "0x3C8A380", Offset = "0x3C8A380", VA = "0x3C8A380")]
	private static bool IsNumeric(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000280")]
	[Address(RVA = "0x3C8A410", Offset = "0x3C8A410", VA = "0x3C8A410", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000281")]
	[Address(RVA = "0x3C8A620", Offset = "0x3C8A620", VA = "0x3C8A620", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000282")]
	[Address(RVA = "0x3C8A650", Offset = "0x3C8A650", VA = "0x3C8A650", Slot = "25")]
	public override void Clear()
	{
	}
}
