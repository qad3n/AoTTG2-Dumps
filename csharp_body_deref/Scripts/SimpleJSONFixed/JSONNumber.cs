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
	[Token(Token = "0x40001B1")]
	[FieldOffset(Offset = "0x10")]
	private double m_Data;

	[Token(Token = "0x17000063")]
	public override JSONNodeType Tag
	{
		[Token(Token = "0x6000270")]
		[Address(RVA = "0x3F7F9C0", Offset = "0x3F7F9C0", VA = "0x3F7F9C0", Slot = "4")]
		get
		{
			return default(JSONNodeType);
		}
	}

	[Token(Token = "0x17000064")]
	public override bool IsNumber
	{
		[Token(Token = "0x6000271")]
		[Address(RVA = "0x3F7F9D0", Offset = "0x3F7F9D0", VA = "0x3F7F9D0", Slot = "12")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000065")]
	public override string Value
	{
		[Token(Token = "0x6000273")]
		[Address(RVA = "0x3F7FA00", Offset = "0x3F7FA00", VA = "0x3F7FA00", Slot = "9")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000274")]
		[Address(RVA = "0x3F7FA60", Offset = "0x3F7FA60", VA = "0x3F7FA60", Slot = "10")]
		set
		{
		}
	}

	[Token(Token = "0x17000066")]
	public override double AsDouble
	{
		[Token(Token = "0x6000275")]
		[Address(RVA = "0x3F7FAE0", Offset = "0x3F7FAE0", VA = "0x3F7FAE0", Slot = "33")]
		get
		{
			return default(double);
		}
		[Token(Token = "0x6000276")]
		[Address(RVA = "0x3F7FAF0", Offset = "0x3F7FAF0", VA = "0x3F7FAF0", Slot = "34")]
		set
		{
		}
	}

	[Token(Token = "0x17000067")]
	public override long AsLong
	{
		[Token(Token = "0x6000277")]
		[Address(RVA = "0x3F7FB00", Offset = "0x3F7FB00", VA = "0x3F7FB00", Slot = "41")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x6000278")]
		[Address(RVA = "0x3F7FB10", Offset = "0x3F7FB10", VA = "0x3F7FB10", Slot = "42")]
		set
		{
		}
	}

	[Token(Token = "0x17000068")]
	public override ulong AsULong
	{
		[Token(Token = "0x6000279")]
		[Address(RVA = "0x3F7FB20", Offset = "0x3F7FB20", VA = "0x3F7FB20", Slot = "43")]
		get
		{
			return default(ulong);
		}
		[Token(Token = "0x600027A")]
		[Address(RVA = "0x3F7FB70", Offset = "0x3F7FB70", VA = "0x3F7FB70", Slot = "44")]
		set
		{
		}
	}

	[Token(Token = "0x6000272")]
	[Address(RVA = "0x3F7F9E0", Offset = "0x3F7F9E0", VA = "0x3F7F9E0", Slot = "32")]
	public override Enumerator GetEnumerator()
	{
		return default(Enumerator);
	}

	[Token(Token = "0x600027B")]
	[Address(RVA = "0x3F79D60", Offset = "0x3F79D60", VA = "0x3F79D60")]
	public JSONNumber(double aData)
	{
	}

	[Token(Token = "0x600027C")]
	[Address(RVA = "0x3F7FBA0", Offset = "0x3F7FBA0", VA = "0x3F7FBA0")]
	public JSONNumber(string aData)
	{
	}

	[Token(Token = "0x600027D")]
	[Address(RVA = "0x3F7FC10", Offset = "0x3F7FC10", VA = "0x3F7FC10", Slot = "26")]
	public override JSONNode Clone()
	{
		return null;
	}

	[Token(Token = "0x600027E")]
	[Address(RVA = "0x3F7FCA0", Offset = "0x3F7FCA0", VA = "0x3F7FCA0", Slot = "31")]
	internal override void WriteToStringBuilder(StringBuilder aSB, int aIndent, int aIndentInc, JSONTextMode aMode)
	{
	}

	[Token(Token = "0x600027F")]
	[Address(RVA = "0x3F7FCD0", Offset = "0x3F7FCD0", VA = "0x3F7FCD0")]
	private static bool IsNumeric(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000280")]
	[Address(RVA = "0x3F7FD60", Offset = "0x3F7FD60", VA = "0x3F7FD60", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000281")]
	[Address(RVA = "0x3F7FF70", Offset = "0x3F7FF70", VA = "0x3F7FF70", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000282")]
	[Address(RVA = "0x3F7FFA0", Offset = "0x3F7FFA0", VA = "0x3F7FFA0", Slot = "25")]
	public override void Clear()
	{
	}
}
