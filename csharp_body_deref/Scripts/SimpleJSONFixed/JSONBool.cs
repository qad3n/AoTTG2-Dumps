// ==================== AoTTG2 cross-reference ====================
// Type: SimpleJSONFixed.JSONBool
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/SimpleJSONFixed/JSONBool.c
// Prior real C# source (older reference): Assets/Scripts/Utility/SimpleJSON.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Text;
using Il2CppDummyDll;

namespace SimpleJSONFixed;

[Token(Token = "0x2000054")]
public class JSONBool : JSONNode
{
	[Token(Token = "0x40001BE")]
	[FieldOffset(Offset = "0x10")]
	private bool m_Data;

	[Token(Token = "0x1700006B")]
	public override JSONNodeType Tag
	{
		[Token(Token = "0x6000293")]
		[Address(RVA = "0x868060", Offset = "0x866660", VA = "0x180868060", Slot = "4")]
		get
		{
			return default(JSONNodeType);
		}
	}

	[Token(Token = "0x1700006C")]
	public override bool IsBoolean
	{
		[Token(Token = "0x6000294")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "14")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700006D")]
	public override string Value
	{
		[Token(Token = "0x6000296")]
		[Address(RVA = "0x1DC1530", Offset = "0x1DBFB30", VA = "0x181DC1530", Slot = "9")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000297")]
		[Address(RVA = "0x1DC1560", Offset = "0x1DBFB60", VA = "0x181DC1560", Slot = "10")]
		set
		{
		}
	}

	[Token(Token = "0x1700006E")]
	public override bool AsBool
	{
		[Token(Token = "0x6000298")]
		[Address(RVA = "0xE5A320", Offset = "0xE58920", VA = "0x180E5A320", Slot = "39")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000299")]
		[Address(RVA = "0x11124D0", Offset = "0x1110AD0", VA = "0x1811124D0", Slot = "40")]
		set
		{
		}
	}

	[Token(Token = "0x6000295")]
	[Address(RVA = "0x1DC13A0", Offset = "0x1DBF9A0", VA = "0x181DC13A0", Slot = "32")]
	public override Enumerator GetEnumerator()
	{
		return default(Enumerator);
	}

	[Token(Token = "0x600029A")]
	[Address(RVA = "0x1DC1460", Offset = "0x1DBFA60", VA = "0x181DC1460")]
	public JSONBool(bool aData)
	{
	}

	[Token(Token = "0x600029B")]
	[Address(RVA = "0x1DC14C0", Offset = "0x1DBFAC0", VA = "0x181DC14C0")]
	public JSONBool(string aData)
	{
	}

	[Token(Token = "0x600029C")]
	[Address(RVA = "0x1DC12B0", Offset = "0x1DBF8B0", VA = "0x181DC12B0", Slot = "26")]
	public override JSONNode Clone()
	{
		return null;
	}

	[Token(Token = "0x600029D")]
	[Address(RVA = "0x1DC13F0", Offset = "0x1DBF9F0", VA = "0x181DC13F0", Slot = "31")]
	internal override void WriteToStringBuilder(StringBuilder aSB, int aIndent, int aIndentInc, JSONTextMode aMode)
	{
	}

	[Token(Token = "0x600029E")]
	[Address(RVA = "0x1DC1340", Offset = "0x1DBF940", VA = "0x181DC1340", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600029F")]
	[Address(RVA = "0x1DC13C0", Offset = "0x1DBF9C0", VA = "0x181DC13C0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60002A0")]
	[Address(RVA = "0x1C6F5D0", Offset = "0x1C6DBD0", VA = "0x181C6F5D0", Slot = "25")]
	public override void Clear()
	{
	}
}
