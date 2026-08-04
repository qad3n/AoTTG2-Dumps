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
		[Address(RVA = "0x3F80580", Offset = "0x3F80580", VA = "0x3F80580", Slot = "4")]
		get
		{
			return default(JSONNodeType);
		}
	}

	[Token(Token = "0x17000072")]
	public override JSONNode this[int aIndex]
	{
		[Token(Token = "0x60002A4")]
		[Address(RVA = "0x3F805B0", Offset = "0x3F805B0", VA = "0x3F805B0", Slot = "5")]
		get
		{
			return null;
		}
		[Token(Token = "0x60002A5")]
		[Address(RVA = "0x3F80660", Offset = "0x3F80660", VA = "0x3F80660", Slot = "6")]
		set
		{
		}
	}

	[Token(Token = "0x17000073")]
	public override JSONNode this[string aKey]
	{
		[Token(Token = "0x60002A6")]
		[Address(RVA = "0x3F806F0", Offset = "0x3F806F0", VA = "0x3F806F0", Slot = "7")]
		get
		{
			return null;
		}
		[Token(Token = "0x60002A7")]
		[Address(RVA = "0x3F807A0", Offset = "0x3F807A0", VA = "0x3F807A0", Slot = "8")]
		set
		{
		}
	}

	[Token(Token = "0x17000074")]
	public override int AsInt
	{
		[Token(Token = "0x60002AE")]
		[Address(RVA = "0x3F809B0", Offset = "0x3F809B0", VA = "0x3F809B0", Slot = "35")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60002AF")]
		[Address(RVA = "0x3F80A60", Offset = "0x3F80A60", VA = "0x3F80A60", Slot = "36")]
		set
		{
		}
	}

	[Token(Token = "0x17000075")]
	public override float AsFloat
	{
		[Token(Token = "0x60002B0")]
		[Address(RVA = "0x3F80B20", Offset = "0x3F80B20", VA = "0x3F80B20", Slot = "37")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60002B1")]
		[Address(RVA = "0x3F80BD0", Offset = "0x3F80BD0", VA = "0x3F80BD0", Slot = "38")]
		set
		{
		}
	}

	[Token(Token = "0x17000076")]
	public override double AsDouble
	{
		[Token(Token = "0x60002B2")]
		[Address(RVA = "0x3F80C90", Offset = "0x3F80C90", VA = "0x3F80C90", Slot = "33")]
		get
		{
			return default(double);
		}
		[Token(Token = "0x60002B3")]
		[Address(RVA = "0x3F80D40", Offset = "0x3F80D40", VA = "0x3F80D40", Slot = "34")]
		set
		{
		}
	}

	[Token(Token = "0x17000077")]
	public override long AsLong
	{
		[Token(Token = "0x60002B4")]
		[Address(RVA = "0x3F80DF0", Offset = "0x3F80DF0", VA = "0x3F80DF0", Slot = "41")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x60002B5")]
		[Address(RVA = "0x3F80FA0", Offset = "0x3F80FA0", VA = "0x3F80FA0", Slot = "42")]
		set
		{
		}
	}

	[Token(Token = "0x17000078")]
	public override ulong AsULong
	{
		[Token(Token = "0x60002B6")]
		[Address(RVA = "0x3F81170", Offset = "0x3F81170", VA = "0x3F81170", Slot = "43")]
		get
		{
			return default(ulong);
		}
		[Token(Token = "0x60002B7")]
		[Address(RVA = "0x3F81320", Offset = "0x3F81320", VA = "0x3F81320", Slot = "44")]
		set
		{
		}
	}

	[Token(Token = "0x17000079")]
	public override bool AsBool
	{
		[Token(Token = "0x60002B8")]
		[Address(RVA = "0x3F81520", Offset = "0x3F81520", VA = "0x3F81520", Slot = "39")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60002B9")]
		[Address(RVA = "0x3F815D0", Offset = "0x3F815D0", VA = "0x3F815D0", Slot = "40")]
		set
		{
		}
	}

	[Token(Token = "0x1700007A")]
	public override JSONArray AsArray
	{
		[Token(Token = "0x60002BA")]
		[Address(RVA = "0x3F81670", Offset = "0x3F81670", VA = "0x3F81670", Slot = "45")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700007B")]
	public override JSONObject AsObject
	{
		[Token(Token = "0x60002BB")]
		[Address(RVA = "0x3F816E0", Offset = "0x3F816E0", VA = "0x3F816E0", Slot = "46")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60002A0")]
	[Address(RVA = "0x3F80590", Offset = "0x3F80590", VA = "0x3F80590", Slot = "32")]
	public override Enumerator GetEnumerator()
	{
		return default(Enumerator);
	}

	[Token(Token = "0x60002A1")]
	[Address(RVA = "0x3F7D030", Offset = "0x3F7D030", VA = "0x3F7D030")]
	public JSONLazyCreator(JSONNode aNode)
	{
	}

	[Token(Token = "0x60002A2")]
	[Address(RVA = "0x3F7E140", Offset = "0x3F7E140", VA = "0x3F7E140")]
	public JSONLazyCreator(JSONNode aNode, string aKey)
	{
	}

	[Token(Token = "0x60002A3")]
	private T Set<T>(T aVal) where T : JSONNode
	{
		return null;
	}

	[Token(Token = "0x60002A8")]
	[Address(RVA = "0x3F80840", Offset = "0x3F80840", VA = "0x3F80840", Slot = "21")]
	public override void Add(JSONNode aItem)
	{
	}

	[Token(Token = "0x60002A9")]
	[Address(RVA = "0x3F808D0", Offset = "0x3F808D0", VA = "0x3F808D0", Slot = "20")]
	public override void Add(string aKey, JSONNode aItem)
	{
	}

	[Token(Token = "0x60002AA")]
	[Address(RVA = "0x3F80970", Offset = "0x3F80970", VA = "0x3F80970")]
	public static bool operator ==(JSONLazyCreator a, object b)
	{
		return default(bool);
	}

	[Token(Token = "0x60002AB")]
	[Address(RVA = "0x3F80980", Offset = "0x3F80980", VA = "0x3F80980")]
	public static bool operator !=(JSONLazyCreator a, object b)
	{
		return default(bool);
	}

	[Token(Token = "0x60002AC")]
	[Address(RVA = "0x3F80990", Offset = "0x3F80990", VA = "0x3F80990", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60002AD")]
	[Address(RVA = "0x3F809A0", Offset = "0x3F809A0", VA = "0x3F809A0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60002BC")]
	[Address(RVA = "0x3F81750", Offset = "0x3F81750", VA = "0x3F81750", Slot = "31")]
	internal override void WriteToStringBuilder(StringBuilder aSB, int aIndent, int aIndentInc, JSONTextMode aMode)
	{
	}
}
