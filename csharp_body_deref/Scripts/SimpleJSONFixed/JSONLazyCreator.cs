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

[Token(Token = "0x2000055")]
internal class JSONLazyCreator : JSONNode
{
	[Token(Token = "0x40001D0")]
	[FieldOffset(Offset = "0x10")]
	private JSONNode m_Node;

	[Token(Token = "0x40001D1")]
	[FieldOffset(Offset = "0x18")]
	private string m_Key;

	[Token(Token = "0x1700006C")]
	public override JSONNodeType Tag
	{
		[Token(Token = "0x60002B8")]
		[Address(RVA = "0x5769E80", Offset = "0x5768E80", VA = "0x5769E80", Slot = "4")]
		get
		{
			return default(JSONNodeType);
		}
	}

	[Token(Token = "0x1700006D")]
	public override JSONNode this[int aIndex]
	{
		[Token(Token = "0x60002BD")]
		[Address(RVA = "0x5769EB0", Offset = "0x5768EB0", VA = "0x5769EB0", Slot = "5")]
		get
		{
			return null;
		}
		[Token(Token = "0x60002BE")]
		[Address(RVA = "0x5769F60", Offset = "0x5768F60", VA = "0x5769F60", Slot = "6")]
		set
		{
		}
	}

	[Token(Token = "0x1700006E")]
	public override JSONNode this[string aKey]
	{
		[Token(Token = "0x60002BF")]
		[Address(RVA = "0x5769FF0", Offset = "0x5768FF0", VA = "0x5769FF0", Slot = "7")]
		get
		{
			return null;
		}
		[Token(Token = "0x60002C0")]
		[Address(RVA = "0x576A0A0", Offset = "0x57690A0", VA = "0x576A0A0", Slot = "8")]
		set
		{
		}
	}

	[Token(Token = "0x1700006F")]
	public override int AsInt
	{
		[Token(Token = "0x60002C7")]
		[Address(RVA = "0x576A2B0", Offset = "0x57692B0", VA = "0x576A2B0", Slot = "35")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60002C8")]
		[Address(RVA = "0x576A360", Offset = "0x5769360", VA = "0x576A360", Slot = "36")]
		set
		{
		}
	}

	[Token(Token = "0x17000070")]
	public override float AsFloat
	{
		[Token(Token = "0x60002C9")]
		[Address(RVA = "0x576A420", Offset = "0x5769420", VA = "0x576A420", Slot = "37")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60002CA")]
		[Address(RVA = "0x576A4D0", Offset = "0x57694D0", VA = "0x576A4D0", Slot = "38")]
		set
		{
		}
	}

	[Token(Token = "0x17000071")]
	public override double AsDouble
	{
		[Token(Token = "0x60002CB")]
		[Address(RVA = "0x576A590", Offset = "0x5769590", VA = "0x576A590", Slot = "33")]
		get
		{
			return default(double);
		}
		[Token(Token = "0x60002CC")]
		[Address(RVA = "0x576A640", Offset = "0x5769640", VA = "0x576A640", Slot = "34")]
		set
		{
		}
	}

	[Token(Token = "0x17000072")]
	public override long AsLong
	{
		[Token(Token = "0x60002CD")]
		[Address(RVA = "0x576A6F0", Offset = "0x57696F0", VA = "0x576A6F0", Slot = "41")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x60002CE")]
		[Address(RVA = "0x576A8A0", Offset = "0x57698A0", VA = "0x576A8A0", Slot = "42")]
		set
		{
		}
	}

	[Token(Token = "0x17000073")]
	public override ulong AsULong
	{
		[Token(Token = "0x60002CF")]
		[Address(RVA = "0x576AA70", Offset = "0x5769A70", VA = "0x576AA70", Slot = "43")]
		get
		{
			return default(ulong);
		}
		[Token(Token = "0x60002D0")]
		[Address(RVA = "0x576AC20", Offset = "0x5769C20", VA = "0x576AC20", Slot = "44")]
		set
		{
		}
	}

	[Token(Token = "0x17000074")]
	public override bool AsBool
	{
		[Token(Token = "0x60002D1")]
		[Address(RVA = "0x576AE20", Offset = "0x5769E20", VA = "0x576AE20", Slot = "39")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60002D2")]
		[Address(RVA = "0x576AED0", Offset = "0x5769ED0", VA = "0x576AED0", Slot = "40")]
		set
		{
		}
	}

	[Token(Token = "0x17000075")]
	public override JSONArray AsArray
	{
		[Token(Token = "0x60002D3")]
		[Address(RVA = "0x576AF70", Offset = "0x5769F70", VA = "0x576AF70", Slot = "45")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000076")]
	public override JSONObject AsObject
	{
		[Token(Token = "0x60002D4")]
		[Address(RVA = "0x576AFE0", Offset = "0x5769FE0", VA = "0x576AFE0", Slot = "46")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60002B9")]
	[Address(RVA = "0x5769E90", Offset = "0x5768E90", VA = "0x5769E90", Slot = "32")]
	public override Enumerator GetEnumerator()
	{
		return default(Enumerator);
	}

	[Token(Token = "0x60002BA")]
	[Address(RVA = "0x5766B50", Offset = "0x5765B50", VA = "0x5766B50")]
	public JSONLazyCreator(JSONNode aNode)
	{
	}

	[Token(Token = "0x60002BB")]
	[Address(RVA = "0x5767C70", Offset = "0x5766C70", VA = "0x5767C70")]
	public JSONLazyCreator(JSONNode aNode, string aKey)
	{
	}

	[Token(Token = "0x60002BC")]
	private T Set<T>(T aVal) where T : JSONNode
	{
		return null;
	}

	[Token(Token = "0x60002C1")]
	[Address(RVA = "0x576A140", Offset = "0x5769140", VA = "0x576A140", Slot = "21")]
	public override void Add(JSONNode aItem)
	{
	}

	[Token(Token = "0x60002C2")]
	[Address(RVA = "0x576A1D0", Offset = "0x57691D0", VA = "0x576A1D0", Slot = "20")]
	public override void Add(string aKey, JSONNode aItem)
	{
	}

	[Token(Token = "0x60002C3")]
	[Address(RVA = "0x576A270", Offset = "0x5769270", VA = "0x576A270")]
	public static bool operator ==(JSONLazyCreator a, object b)
	{
		return default(bool);
	}

	[Token(Token = "0x60002C4")]
	[Address(RVA = "0x576A280", Offset = "0x5769280", VA = "0x576A280")]
	public static bool operator !=(JSONLazyCreator a, object b)
	{
		return default(bool);
	}

	[Token(Token = "0x60002C5")]
	[Address(RVA = "0x576A290", Offset = "0x5769290", VA = "0x576A290", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60002C6")]
	[Address(RVA = "0x576A2A0", Offset = "0x57692A0", VA = "0x576A2A0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60002D5")]
	[Address(RVA = "0x576B050", Offset = "0x576A050", VA = "0x576B050", Slot = "31")]
	internal override void WriteToStringBuilder(StringBuilder aSB, int aIndent, int aIndentInc, JSONTextMode aMode)
	{
	}
}
