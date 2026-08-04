// ==================== AoTTG2 cross-reference ====================
// Type: SimpleJSONFixed.JSONString
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/SimpleJSONFixed/JSONString.c
// Prior real C# source (older reference): Assets/Scripts/Utility/SimpleJSON.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Text;
using Il2CppDummyDll;

namespace SimpleJSONFixed;

[Token(Token = "0x2000052")]
public class JSONString : JSONNode
{
	[Token(Token = "0x40001B0")]
	[FieldOffset(Offset = "0x10")]
	private string m_Data;

	[Token(Token = "0x17000060")]
	public override JSONNodeType Tag
	{
		[Token(Token = "0x6000265")]
		[Address(RVA = "0x3F7F650", Offset = "0x3F7F650", VA = "0x3F7F650", Slot = "4")]
		get
		{
			return default(JSONNodeType);
		}
	}

	[Token(Token = "0x17000061")]
	public override bool IsString
	{
		[Token(Token = "0x6000266")]
		[Address(RVA = "0x3F7F660", Offset = "0x3F7F660", VA = "0x3F7F660", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000062")]
	public override string Value
	{
		[Token(Token = "0x6000268")]
		[Address(RVA = "0x3F7F690", Offset = "0x3F7F690", VA = "0x3F7F690", Slot = "9")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000269")]
		[Address(RVA = "0x3F7F6A0", Offset = "0x3F7F6A0", VA = "0x3F7F6A0", Slot = "10")]
		set
		{
		}
	}

	[Token(Token = "0x6000267")]
	[Address(RVA = "0x3F7F670", Offset = "0x3F7F670", VA = "0x3F7F670", Slot = "32")]
	public override Enumerator GetEnumerator()
	{
		return default(Enumerator);
	}

	[Token(Token = "0x600026A")]
	[Address(RVA = "0x3F799C0", Offset = "0x3F799C0", VA = "0x3F799C0")]
	public JSONString(string aData)
	{
	}

	[Token(Token = "0x600026B")]
	[Address(RVA = "0x3F7F6B0", Offset = "0x3F7F6B0", VA = "0x3F7F6B0", Slot = "26")]
	public override JSONNode Clone()
	{
		return null;
	}

	[Token(Token = "0x600026C")]
	[Address(RVA = "0x3F7F750", Offset = "0x3F7F750", VA = "0x3F7F750", Slot = "31")]
	internal override void WriteToStringBuilder(StringBuilder aSB, int aIndent, int aIndentInc, JSONTextMode aMode)
	{
	}

	[Token(Token = "0x600026D")]
	[Address(RVA = "0x3F7F7F0", Offset = "0x3F7F7F0", VA = "0x3F7F7F0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600026E")]
	[Address(RVA = "0x3F7F950", Offset = "0x3F7F950", VA = "0x3F7F950", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600026F")]
	[Address(RVA = "0x3F7F980", Offset = "0x3F7F980", VA = "0x3F7F980", Slot = "25")]
	public override void Clear()
	{
	}
}
