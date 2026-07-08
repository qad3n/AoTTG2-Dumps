using System.Text;
using Il2CppDummyDll;

namespace SimpleJSONFixed;

[Token(Token = "0x2000056")]
internal class JSONLazyCreator : JSONNode
{
	[Token(Token = "0x40001B5")]
	[FieldOffset(Offset = "0x10")]
	private JSONNode m_Node;

	[Token(Token = "0x40001B6")]
	[FieldOffset(Offset = "0x18")]
	private string m_Key;

	[Token(Token = "0x17000071")]
	public override JSONNodeType Tag
	{
		[Token(Token = "0x600029F")]
		[Address(RVA = "0x3C8AC30", Offset = "0x3C8AC30", VA = "0x3C8AC30", Slot = "4")]
		get
		{
			return default(JSONNodeType);
		}
	}

	[Token(Token = "0x17000072")]
	public override JSONNode this[int aIndex]
	{
		[Token(Token = "0x60002A4")]
		[Address(RVA = "0x3C8AC60", Offset = "0x3C8AC60", VA = "0x3C8AC60", Slot = "5")]
		get
		{
			return null;
		}
		[Token(Token = "0x60002A5")]
		[Address(RVA = "0x3C8AD10", Offset = "0x3C8AD10", VA = "0x3C8AD10", Slot = "6")]
		set
		{
		}
	}

	[Token(Token = "0x17000073")]
	public override JSONNode this[string aKey]
	{
		[Token(Token = "0x60002A6")]
		[Address(RVA = "0x3C8ADA0", Offset = "0x3C8ADA0", VA = "0x3C8ADA0", Slot = "7")]
		get
		{
			return null;
		}
		[Token(Token = "0x60002A7")]
		[Address(RVA = "0x3C8AE50", Offset = "0x3C8AE50", VA = "0x3C8AE50", Slot = "8")]
		set
		{
		}
	}

	[Token(Token = "0x17000074")]
	public override int AsInt
	{
		[Token(Token = "0x60002AE")]
		[Address(RVA = "0x3C8B060", Offset = "0x3C8B060", VA = "0x3C8B060", Slot = "35")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60002AF")]
		[Address(RVA = "0x3C8B110", Offset = "0x3C8B110", VA = "0x3C8B110", Slot = "36")]
		set
		{
		}
	}

	[Token(Token = "0x17000075")]
	public override float AsFloat
	{
		[Token(Token = "0x60002B0")]
		[Address(RVA = "0x3C8B1D0", Offset = "0x3C8B1D0", VA = "0x3C8B1D0", Slot = "37")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60002B1")]
		[Address(RVA = "0x3C8B280", Offset = "0x3C8B280", VA = "0x3C8B280", Slot = "38")]
		set
		{
		}
	}

	[Token(Token = "0x17000076")]
	public override double AsDouble
	{
		[Token(Token = "0x60002B2")]
		[Address(RVA = "0x3C8B340", Offset = "0x3C8B340", VA = "0x3C8B340", Slot = "33")]
		get
		{
			return default(double);
		}
		[Token(Token = "0x60002B3")]
		[Address(RVA = "0x3C8B3F0", Offset = "0x3C8B3F0", VA = "0x3C8B3F0", Slot = "34")]
		set
		{
		}
	}

	[Token(Token = "0x17000077")]
	public override long AsLong
	{
		[Token(Token = "0x60002B4")]
		[Address(RVA = "0x3C8B4A0", Offset = "0x3C8B4A0", VA = "0x3C8B4A0", Slot = "41")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x60002B5")]
		[Address(RVA = "0x3C8B650", Offset = "0x3C8B650", VA = "0x3C8B650", Slot = "42")]
		set
		{
		}
	}

	[Token(Token = "0x17000078")]
	public override ulong AsULong
	{
		[Token(Token = "0x60002B6")]
		[Address(RVA = "0x3C8B820", Offset = "0x3C8B820", VA = "0x3C8B820", Slot = "43")]
		get
		{
			return default(ulong);
		}
		[Token(Token = "0x60002B7")]
		[Address(RVA = "0x3C8B9D0", Offset = "0x3C8B9D0", VA = "0x3C8B9D0", Slot = "44")]
		set
		{
		}
	}

	[Token(Token = "0x17000079")]
	public override bool AsBool
	{
		[Token(Token = "0x60002B8")]
		[Address(RVA = "0x3C8BBD0", Offset = "0x3C8BBD0", VA = "0x3C8BBD0", Slot = "39")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60002B9")]
		[Address(RVA = "0x3C8BC80", Offset = "0x3C8BC80", VA = "0x3C8BC80", Slot = "40")]
		set
		{
		}
	}

	[Token(Token = "0x1700007A")]
	public override JSONArray AsArray
	{
		[Token(Token = "0x60002BA")]
		[Address(RVA = "0x3C8BD20", Offset = "0x3C8BD20", VA = "0x3C8BD20", Slot = "45")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700007B")]
	public override JSONObject AsObject
	{
		[Token(Token = "0x60002BB")]
		[Address(RVA = "0x3C8BD90", Offset = "0x3C8BD90", VA = "0x3C8BD90", Slot = "46")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60002A0")]
	[Address(RVA = "0x3C8AC40", Offset = "0x3C8AC40", VA = "0x3C8AC40", Slot = "32")]
	public override Enumerator GetEnumerator()
	{
		return default(Enumerator);
	}

	[Token(Token = "0x60002A1")]
	[Address(RVA = "0x3C876E0", Offset = "0x3C876E0", VA = "0x3C876E0")]
	public JSONLazyCreator(JSONNode aNode)
	{
	}

	[Token(Token = "0x60002A2")]
	[Address(RVA = "0x3C887F0", Offset = "0x3C887F0", VA = "0x3C887F0")]
	public JSONLazyCreator(JSONNode aNode, string aKey)
	{
	}

	[Token(Token = "0x60002A3")]
	private T Set<T>(T aVal) where T : JSONNode
	{
		return null;
	}

	[Token(Token = "0x60002A8")]
	[Address(RVA = "0x3C8AEF0", Offset = "0x3C8AEF0", VA = "0x3C8AEF0", Slot = "21")]
	public override void Add(JSONNode aItem)
	{
	}

	[Token(Token = "0x60002A9")]
	[Address(RVA = "0x3C8AF80", Offset = "0x3C8AF80", VA = "0x3C8AF80", Slot = "20")]
	public override void Add(string aKey, JSONNode aItem)
	{
	}

	[Token(Token = "0x60002AA")]
	[Address(RVA = "0x3C8B020", Offset = "0x3C8B020", VA = "0x3C8B020")]
	public static bool operator ==(JSONLazyCreator a, object b)
	{
		return default(bool);
	}

	[Token(Token = "0x60002AB")]
	[Address(RVA = "0x3C8B030", Offset = "0x3C8B030", VA = "0x3C8B030")]
	public static bool operator !=(JSONLazyCreator a, object b)
	{
		return default(bool);
	}

	[Token(Token = "0x60002AC")]
	[Address(RVA = "0x3C8B040", Offset = "0x3C8B040", VA = "0x3C8B040", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60002AD")]
	[Address(RVA = "0x3C8B050", Offset = "0x3C8B050", VA = "0x3C8B050", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60002BC")]
	[Address(RVA = "0x3C8BE00", Offset = "0x3C8BE00", VA = "0x3C8BE00", Slot = "31")]
	internal override void WriteToStringBuilder(StringBuilder aSB, int aIndent, int aIndentInc, JSONTextMode aMode)
	{
	}
}
