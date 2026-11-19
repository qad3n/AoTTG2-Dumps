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

[Token(Token = "0x2000052")]
public class JSONNumber : JSONNode
{
	[Token(Token = "0x40001CC")]
	[FieldOffset(Offset = "0x10")]
	private double m_Data;

	[Token(Token = "0x1700005E")]
	public override JSONNodeType Tag
	{
		[Token(Token = "0x6000289")]
		[Address(RVA = "0x57692E0", Offset = "0x57682E0", VA = "0x57692E0", Slot = "4")]
		get
		{
			return default(JSONNodeType);
		}
	}

	[Token(Token = "0x1700005F")]
	public override bool IsNumber
	{
		[Token(Token = "0x600028A")]
		[Address(RVA = "0x57692F0", Offset = "0x57682F0", VA = "0x57692F0", Slot = "12")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000060")]
	public override string Value
	{
		[Token(Token = "0x600028C")]
		[Address(RVA = "0x5769320", Offset = "0x5768320", VA = "0x5769320", Slot = "9")]
		get
		{
			return null;
		}
		[Token(Token = "0x600028D")]
		[Address(RVA = "0x5769380", Offset = "0x5768380", VA = "0x5769380", Slot = "10")]
		set
		{
		}
	}

	[Token(Token = "0x17000061")]
	public override double AsDouble
	{
		[Token(Token = "0x600028E")]
		[Address(RVA = "0x5769400", Offset = "0x5768400", VA = "0x5769400", Slot = "33")]
		get
		{
			return default(double);
		}
		[Token(Token = "0x600028F")]
		[Address(RVA = "0x5769410", Offset = "0x5768410", VA = "0x5769410", Slot = "34")]
		set
		{
		}
	}

	[Token(Token = "0x17000062")]
	public override long AsLong
	{
		[Token(Token = "0x6000290")]
		[Address(RVA = "0x5769420", Offset = "0x5768420", VA = "0x5769420", Slot = "41")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x6000291")]
		[Address(RVA = "0x5769430", Offset = "0x5768430", VA = "0x5769430", Slot = "42")]
		set
		{
		}
	}

	[Token(Token = "0x17000063")]
	public override ulong AsULong
	{
		[Token(Token = "0x6000292")]
		[Address(RVA = "0x5769440", Offset = "0x5768440", VA = "0x5769440", Slot = "43")]
		get
		{
			return default(ulong);
		}
		[Token(Token = "0x6000293")]
		[Address(RVA = "0x5769480", Offset = "0x5768480", VA = "0x5769480", Slot = "44")]
		set
		{
		}
	}

	[Token(Token = "0x600028B")]
	[Address(RVA = "0x5769300", Offset = "0x5768300", VA = "0x5769300", Slot = "32")]
	public override Enumerator GetEnumerator()
	{
		return default(Enumerator);
	}

	[Token(Token = "0x6000294")]
	[Address(RVA = "0x5763980", Offset = "0x5762980", VA = "0x5763980")]
	public JSONNumber(double aData)
	{
	}

	[Token(Token = "0x6000295")]
	[Address(RVA = "0x57694B0", Offset = "0x57684B0", VA = "0x57694B0")]
	public JSONNumber(string aData)
	{
	}

	[Token(Token = "0x6000296")]
	[Address(RVA = "0x5769520", Offset = "0x5768520", VA = "0x5769520", Slot = "26")]
	public override JSONNode Clone()
	{
		return null;
	}

	[Token(Token = "0x6000297")]
	[Address(RVA = "0x57695C0", Offset = "0x57685C0", VA = "0x57695C0", Slot = "31")]
	internal override void WriteToStringBuilder(StringBuilder aSB, int aIndent, int aIndentInc, JSONTextMode aMode)
	{
	}

	[Token(Token = "0x6000298")]
	[Address(RVA = "0x57695F0", Offset = "0x57685F0", VA = "0x57695F0")]
	private static bool IsNumeric(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000299")]
	[Address(RVA = "0x5769680", Offset = "0x5768680", VA = "0x5769680", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600029A")]
	[Address(RVA = "0x5769890", Offset = "0x5768890", VA = "0x5769890", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600029B")]
	[Address(RVA = "0x57698C0", Offset = "0x57688C0", VA = "0x57698C0", Slot = "25")]
	public override void Clear()
	{
	}
}
