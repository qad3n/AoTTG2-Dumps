// ==================== AoTTG2 cross-reference ====================
// Type: SimpleJSONFixed.JSONNumber
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/SimpleJSONFixed/JSONNumber.c
// Prior real C# source (older reference): Assets/Scripts/Utility/SimpleJSON.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Text;
using Il2CppDummyDll;

namespace SimpleJSONFixed;

[Token(Token = "0x2000053")]
public class JSONNumber : JSONNode
{
	[Token(Token = "0x40001BD")]
	[FieldOffset(Offset = "0x10")]
	private double m_Data;

	[Token(Token = "0x17000065")]
	public override JSONNodeType Tag
	{
		[Token(Token = "0x6000280")]
		[Address(RVA = "0x846F40", Offset = "0x845540", VA = "0x180846F40", Slot = "4")]
		get
		{
			return default(JSONNodeType);
		}
	}

	[Token(Token = "0x17000066")]
	public override bool IsNumber
	{
		[Token(Token = "0x6000281")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "12")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000067")]
	public override string Value
	{
		[Token(Token = "0x6000283")]
		[Address(RVA = "0x1DC59B0", Offset = "0x1DC3FB0", VA = "0x181DC59B0", Slot = "9")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000284")]
		[Address(RVA = "0x1DC5A60", Offset = "0x1DC4060", VA = "0x181DC5A60", Slot = "10")]
		set
		{
		}
	}

	[Token(Token = "0x17000068")]
	public override double AsDouble
	{
		[Token(Token = "0x6000285")]
		[Address(RVA = "0x1537000", Offset = "0x1535600", VA = "0x181537000", Slot = "33")]
		get
		{
			return default(double);
		}
		[Token(Token = "0x6000286")]
		[Address(RVA = "0x1DC5A10", Offset = "0x1DC4010", VA = "0x181DC5A10", Slot = "34")]
		set
		{
		}
	}

	[Token(Token = "0x17000069")]
	public override long AsLong
	{
		[Token(Token = "0x6000287")]
		[Address(RVA = "0x1DC5950", Offset = "0x1DC3F50", VA = "0x181DC5950", Slot = "41")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x6000288")]
		[Address(RVA = "0x1DC5A20", Offset = "0x1DC4020", VA = "0x181DC5A20", Slot = "42")]
		set
		{
		}
	}

	[Token(Token = "0x1700006A")]
	public override ulong AsULong
	{
		[Token(Token = "0x6000289")]
		[Address(RVA = "0x1DC5960", Offset = "0x1DC3F60", VA = "0x181DC5960", Slot = "43")]
		get
		{
			return default(ulong);
		}
		[Token(Token = "0x600028A")]
		[Address(RVA = "0x1DC5A30", Offset = "0x1DC4030", VA = "0x181DC5A30", Slot = "44")]
		set
		{
		}
	}

	[Token(Token = "0x6000282")]
	[Address(RVA = "0x1DC13A0", Offset = "0x1DBF9A0", VA = "0x181DC13A0", Slot = "32")]
	public override Enumerator GetEnumerator()
	{
		return default(Enumerator);
	}

	[Token(Token = "0x600028B")]
	[Address(RVA = "0x1DC5880", Offset = "0x1DC3E80", VA = "0x181DC5880")]
	public JSONNumber(double aData)
	{
	}

	[Token(Token = "0x600028C")]
	[Address(RVA = "0x1DC58E0", Offset = "0x1DC3EE0", VA = "0x181DC58E0")]
	public JSONNumber(string aData)
	{
	}

	[Token(Token = "0x600028D")]
	[Address(RVA = "0x1DC5310", Offset = "0x1DC3910", VA = "0x181DC5310", Slot = "26")]
	public override JSONNode Clone()
	{
		return null;
	}

	[Token(Token = "0x600028E")]
	[Address(RVA = "0x1DC5840", Offset = "0x1DC3E40", VA = "0x181DC5840", Slot = "31")]
	internal override void WriteToStringBuilder(StringBuilder aSB, int aIndent, int aIndentInc, JSONTextMode aMode)
	{
	}

	[Token(Token = "0x600028F")]
	[Address(RVA = "0x1DC56F0", Offset = "0x1DC3CF0", VA = "0x181DC56F0")]
	private static bool IsNumeric(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000290")]
	[Address(RVA = "0x1DC53A0", Offset = "0x1DC39A0", VA = "0x181DC53A0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000291")]
	[Address(RVA = "0x1DC56B0", Offset = "0x1DC3CB0", VA = "0x181DC56B0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000292")]
	[Address(RVA = "0x1DC5300", Offset = "0x1DC3900", VA = "0x181DC5300", Slot = "25")]
	public override void Clear()
	{
	}
}
