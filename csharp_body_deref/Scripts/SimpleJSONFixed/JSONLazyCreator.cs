// ==================== AoTTG2 cross-reference ====================
// Type: SimpleJSONFixed.JSONLazyCreator
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/SimpleJSONFixed/JSONLazyCreator.c
// Prior real C# source (older reference): Assets/Scripts/Utility/SimpleJSON.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Text;
using Il2CppDummyDll;

namespace SimpleJSONFixed;

[Token(Token = "0x2000056")]
internal class JSONLazyCreator : JSONNode
{
	[Token(Token = "0x40001C1")]
	[FieldOffset(Offset = "0x10")]
	private JSONNode m_Node;

	[Token(Token = "0x40001C2")]
	[FieldOffset(Offset = "0x18")]
	private string m_Key;

	[Token(Token = "0x17000073")]
	public override JSONNodeType Tag
	{
		[Token(Token = "0x60002AF")]
		[Address(RVA = "0x106DD80", Offset = "0x106C380", VA = "0x18106DD80", Slot = "4")]
		get
		{
			return default(JSONNodeType);
		}
	}

	[Token(Token = "0x17000074")]
	public override JSONNode this[int aIndex]
	{
		[Token(Token = "0x60002B4")]
		[Address(RVA = "0x1DC1F30", Offset = "0x1DC0530", VA = "0x181DC1F30", Slot = "5")]
		get
		{
			return null;
		}
		[Token(Token = "0x60002B5")]
		[Address(RVA = "0x1DC26D0", Offset = "0x1DC0CD0", VA = "0x181DC26D0", Slot = "6")]
		set
		{
		}
	}

	[Token(Token = "0x17000075")]
	public override JSONNode this[string aKey]
	{
		[Token(Token = "0x60002B6")]
		[Address(RVA = "0x1DC1F90", Offset = "0x1DC0590", VA = "0x181DC1F90", Slot = "7")]
		get
		{
			return null;
		}
		[Token(Token = "0x60002B7")]
		[Address(RVA = "0x1DC2630", Offset = "0x1DC0C30", VA = "0x181DC2630", Slot = "8")]
		set
		{
		}
	}

	[Token(Token = "0x17000076")]
	public override int AsInt
	{
		[Token(Token = "0x60002BE")]
		[Address(RVA = "0x1DC1AF0", Offset = "0x1DC00F0", VA = "0x181DC1AF0", Slot = "35")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60002BF")]
		[Address(RVA = "0x1DC2230", Offset = "0x1DC0830", VA = "0x181DC2230", Slot = "36")]
		set
		{
		}
	}

	[Token(Token = "0x17000077")]
	public override float AsFloat
	{
		[Token(Token = "0x60002C0")]
		[Address(RVA = "0x1DC1A40", Offset = "0x1DC0040", VA = "0x181DC1A40", Slot = "37")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60002C1")]
		[Address(RVA = "0x1DC2170", Offset = "0x1DC0770", VA = "0x181DC2170", Slot = "38")]
		set
		{
		}
	}

	[Token(Token = "0x17000078")]
	public override double AsDouble
	{
		[Token(Token = "0x60002C2")]
		[Address(RVA = "0x1DC1990", Offset = "0x1DBFF90", VA = "0x181DC1990", Slot = "33")]
		get
		{
			return default(double);
		}
		[Token(Token = "0x60002C3")]
		[Address(RVA = "0x1DC20C0", Offset = "0x1DC06C0", VA = "0x181DC20C0", Slot = "34")]
		set
		{
		}
	}

	[Token(Token = "0x17000079")]
	public override long AsLong
	{
		[Token(Token = "0x60002C4")]
		[Address(RVA = "0x1DC1BA0", Offset = "0x1DC01A0", VA = "0x181DC1BA0", Slot = "41")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x60002C5")]
		[Address(RVA = "0x1DC22F0", Offset = "0x1DC08F0", VA = "0x181DC22F0", Slot = "42")]
		set
		{
		}
	}

	[Token(Token = "0x1700007A")]
	public override ulong AsULong
	{
		[Token(Token = "0x60002C6")]
		[Address(RVA = "0x1DC1DA0", Offset = "0x1DC03A0", VA = "0x181DC1DA0", Slot = "43")]
		get
		{
			return default(ulong);
		}
		[Token(Token = "0x60002C7")]
		[Address(RVA = "0x1DC2470", Offset = "0x1DC0A70", VA = "0x181DC2470", Slot = "44")]
		set
		{
		}
	}

	[Token(Token = "0x1700007B")]
	public override bool AsBool
	{
		[Token(Token = "0x60002C8")]
		[Address(RVA = "0x1DC18E0", Offset = "0x1DBFEE0", VA = "0x181DC18E0", Slot = "39")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60002C9")]
		[Address(RVA = "0x1DC2010", Offset = "0x1DC0610", VA = "0x181DC2010", Slot = "40")]
		set
		{
		}
	}

	[Token(Token = "0x1700007C")]
	public override JSONArray AsArray
	{
		[Token(Token = "0x60002CA")]
		[Address(RVA = "0x1DC1870", Offset = "0x1DBFE70", VA = "0x181DC1870", Slot = "45")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700007D")]
	public override JSONObject AsObject
	{
		[Token(Token = "0x60002CB")]
		[Address(RVA = "0x1DC1D30", Offset = "0x1DC0330", VA = "0x181DC1D30", Slot = "46")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60002B0")]
	[Address(RVA = "0x1DC13A0", Offset = "0x1DBF9A0", VA = "0x181DC13A0", Slot = "32")]
	public override Enumerator GetEnumerator()
	{
		return default(Enumerator);
	}

	[Token(Token = "0x60002B1")]
	[Address(RVA = "0x1DC17F0", Offset = "0x1DBFDF0", VA = "0x181DC17F0")]
	public JSONLazyCreator(JSONNode aNode)
	{
	}

	[Token(Token = "0x60002B2")]
	[Address(RVA = "0x1DC1760", Offset = "0x1DBFD60", VA = "0x181DC1760")]
	public JSONLazyCreator(JSONNode aNode, string aKey)
	{
	}

	[Token(Token = "0x60002B3")]
	private T Set<T>(T aVal) where T : JSONNode
	{
		return null;
	}

	[Token(Token = "0x60002B8")]
	[Address(RVA = "0x1DC1660", Offset = "0x1DBFC60", VA = "0x181DC1660", Slot = "21")]
	public override void Add(JSONNode aItem)
	{
	}

	[Token(Token = "0x60002B9")]
	[Address(RVA = "0x1DC15C0", Offset = "0x1DBFBC0", VA = "0x181DC15C0", Slot = "20")]
	public override void Add(string aKey, JSONNode aItem)
	{
	}

	[Token(Token = "0x60002BA")]
	[Address(RVA = "0x1DC1700", Offset = "0x1DBFD00", VA = "0x181DC1700")]
	public static bool operator ==(JSONLazyCreator a, object b)
	{
		return default(bool);
	}

	[Token(Token = "0x60002BB")]
	[Address(RVA = "0x1DC2000", Offset = "0x1DC0600", VA = "0x181DC2000")]
	public static bool operator !=(JSONLazyCreator a, object b)
	{
		return default(bool);
	}

	[Token(Token = "0x60002BC")]
	[Address(RVA = "0x1DC1700", Offset = "0x1DBFD00", VA = "0x181DC1700", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60002BD")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60002CC")]
	[Address(RVA = "0x1DC1710", Offset = "0x1DBFD10", VA = "0x181DC1710", Slot = "31")]
	internal override void WriteToStringBuilder(StringBuilder aSB, int aIndent, int aIndentInc, JSONTextMode aMode)
	{
	}
}
