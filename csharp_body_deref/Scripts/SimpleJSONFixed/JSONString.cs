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
		[Address(RVA = "0x3C89D00", Offset = "0x3C89D00", VA = "0x3C89D00", Slot = "4")]
		get
		{
			return default(JSONNodeType);
		}
	}

	[Token(Token = "0x17000061")]
	public override bool IsString
	{
		[Token(Token = "0x6000266")]
		[Address(RVA = "0x3C89D10", Offset = "0x3C89D10", VA = "0x3C89D10", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000062")]
	public override string Value
	{
		[Token(Token = "0x6000268")]
		[Address(RVA = "0x3C89D40", Offset = "0x3C89D40", VA = "0x3C89D40", Slot = "9")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000269")]
		[Address(RVA = "0x3C89D50", Offset = "0x3C89D50", VA = "0x3C89D50", Slot = "10")]
		set
		{
		}
	}

	[Token(Token = "0x6000267")]
	[Address(RVA = "0x3C89D20", Offset = "0x3C89D20", VA = "0x3C89D20", Slot = "32")]
	public override Enumerator GetEnumerator()
	{
		return default(Enumerator);
	}

	[Token(Token = "0x600026A")]
	[Address(RVA = "0x3C84070", Offset = "0x3C84070", VA = "0x3C84070")]
	public JSONString(string aData)
	{
	}

	[Token(Token = "0x600026B")]
	[Address(RVA = "0x3C89D60", Offset = "0x3C89D60", VA = "0x3C89D60", Slot = "26")]
	public override JSONNode Clone()
	{
		return null;
	}

	[Token(Token = "0x600026C")]
	[Address(RVA = "0x3C89E00", Offset = "0x3C89E00", VA = "0x3C89E00", Slot = "31")]
	internal override void WriteToStringBuilder(StringBuilder aSB, int aIndent, int aIndentInc, JSONTextMode aMode)
	{
	}

	[Token(Token = "0x600026D")]
	[Address(RVA = "0x3C89EA0", Offset = "0x3C89EA0", VA = "0x3C89EA0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600026E")]
	[Address(RVA = "0x3C8A000", Offset = "0x3C8A000", VA = "0x3C8A000", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600026F")]
	[Address(RVA = "0x3C8A030", Offset = "0x3C8A030", VA = "0x3C8A030", Slot = "25")]
	public override void Clear()
	{
	}
}
