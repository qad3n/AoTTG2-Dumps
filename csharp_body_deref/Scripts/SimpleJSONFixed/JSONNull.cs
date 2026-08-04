// ==================== AoTTG2 cross-reference ====================
// Type: SimpleJSONFixed.JSONNull
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/SimpleJSONFixed/JSONNull.c
// Prior real C# source (older reference): Assets/Scripts/Utility/SimpleJSON.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x3F80300", Offset = "0x3F80300", VA = "0x3F80300", Slot = "4")]
		get
		{
			return default(JSONNodeType);
		}
	}

	[Token(Token = "0x1700006E")]
	public override bool IsNull
	{
		[Token(Token = "0x6000294")]
		[Address(RVA = "0x3F80310", Offset = "0x3F80310", VA = "0x3F80310", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700006F")]
	public override string Value
	{
		[Token(Token = "0x6000296")]
		[Address(RVA = "0x3F80340", Offset = "0x3F80340", VA = "0x3F80340", Slot = "9")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000297")]
		[Address(RVA = "0x3F80370", Offset = "0x3F80370", VA = "0x3F80370", Slot = "10")]
		set
		{
		}
	}

	[Token(Token = "0x17000070")]
	public override bool AsBool
	{
		[Token(Token = "0x6000298")]
		[Address(RVA = "0x3F80380", Offset = "0x3F80380", VA = "0x3F80380", Slot = "39")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000299")]
		[Address(RVA = "0x3F80390", Offset = "0x3F80390", VA = "0x3F80390", Slot = "40")]
		set
		{
		}
	}

	[Token(Token = "0x6000291")]
	[Address(RVA = "0x3F79A30", Offset = "0x3F79A30", VA = "0x3F79A30")]
	public static JSONNull CreateOrGet()
	{
		return null;
	}

	[Token(Token = "0x6000292")]
	[Address(RVA = "0x3F80290", Offset = "0x3F80290", VA = "0x3F80290")]
	private JSONNull()
	{
	}

	[Token(Token = "0x6000295")]
	[Address(RVA = "0x3F80320", Offset = "0x3F80320", VA = "0x3F80320", Slot = "32")]
	public override Enumerator GetEnumerator()
	{
		return default(Enumerator);
	}

	[Token(Token = "0x600029A")]
	[Address(RVA = "0x3F803A0", Offset = "0x3F803A0", VA = "0x3F803A0", Slot = "26")]
	public override JSONNode Clone()
	{
		return null;
	}

	[Token(Token = "0x600029B")]
	[Address(RVA = "0x3F80400", Offset = "0x3F80400", VA = "0x3F80400", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600029C")]
	[Address(RVA = "0x3F80480", Offset = "0x3F80480", VA = "0x3F80480", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600029D")]
	[Address(RVA = "0x3F80490", Offset = "0x3F80490", VA = "0x3F80490", Slot = "31")]
	internal override void WriteToStringBuilder(StringBuilder aSB, int aIndent, int aIndentInc, JSONTextMode aMode)
	{
	}
}
