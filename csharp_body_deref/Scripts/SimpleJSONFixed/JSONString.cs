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
	[Token(Token = "0x40001BC")]
	[FieldOffset(Offset = "0x10")]
	private string m_Data;

	[Token(Token = "0x17000062")]
	public override JSONNodeType Tag
	{
		[Token(Token = "0x6000275")]
		[Address(RVA = "0x565FB0", Offset = "0x5645B0", VA = "0x180565FB0", Slot = "4")]
		get
		{
			return default(JSONNodeType);
		}
	}

	[Token(Token = "0x17000063")]
	public override bool IsString
	{
		[Token(Token = "0x6000276")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000064")]
	public override string Value
	{
		[Token(Token = "0x6000278")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0", Slot = "9")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000279")]
		[Address(RVA = "0xB8AC00", Offset = "0xB89200", VA = "0x180B8AC00", Slot = "10")]
		set
		{
		}
	}

	[Token(Token = "0x6000277")]
	[Address(RVA = "0x1DC13A0", Offset = "0x1DBF9A0", VA = "0x181DC13A0", Slot = "32")]
	public override Enumerator GetEnumerator()
	{
		return default(Enumerator);
	}

	[Token(Token = "0x600027A")]
	[Address(RVA = "0x1DC7080", Offset = "0x1DC5680", VA = "0x181DC7080")]
	public JSONString(string aData)
	{
	}

	[Token(Token = "0x600027B")]
	[Address(RVA = "0x1DC6D50", Offset = "0x1DC5350", VA = "0x181DC6D50", Slot = "26")]
	public override JSONNode Clone()
	{
		return null;
	}

	[Token(Token = "0x600027C")]
	[Address(RVA = "0x1DC6FE0", Offset = "0x1DC55E0", VA = "0x181DC6FE0", Slot = "31")]
	internal override void WriteToStringBuilder(StringBuilder aSB, int aIndent, int aIndentInc, JSONTextMode aMode)
	{
	}

	[Token(Token = "0x600027D")]
	[Address(RVA = "0x1DC6DF0", Offset = "0x1DC53F0", VA = "0x181DC6DF0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600027E")]
	[Address(RVA = "0xC8D900", Offset = "0xC8BF00", VA = "0x180C8D900", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600027F")]
	[Address(RVA = "0x1DC6D00", Offset = "0x1DC5300", VA = "0x181DC6D00", Slot = "25")]
	public override void Clear()
	{
	}
}
