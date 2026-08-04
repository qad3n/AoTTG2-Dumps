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
	[Token(Token = "0x40001B2")]
	[FieldOffset(Offset = "0x10")]
	private bool m_Data;

	[Token(Token = "0x17000069")]
	public override JSONNodeType Tag
	{
		[Token(Token = "0x6000283")]
		[Address(RVA = "0x3F7FFB0", Offset = "0x3F7FFB0", VA = "0x3F7FFB0", Slot = "4")]
		get
		{
			return default(JSONNodeType);
		}
	}

	[Token(Token = "0x1700006A")]
	public override bool IsBoolean
	{
		[Token(Token = "0x6000284")]
		[Address(RVA = "0x3F7FFC0", Offset = "0x3F7FFC0", VA = "0x3F7FFC0", Slot = "14")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700006B")]
	public override string Value
	{
		[Token(Token = "0x6000286")]
		[Address(RVA = "0x3F7FFF0", Offset = "0x3F7FFF0", VA = "0x3F7FFF0", Slot = "9")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000287")]
		[Address(RVA = "0x3F80030", Offset = "0x3F80030", VA = "0x3F80030", Slot = "10")]
		set
		{
		}
	}

	[Token(Token = "0x1700006C")]
	public override bool AsBool
	{
		[Token(Token = "0x6000288")]
		[Address(RVA = "0x3F80080", Offset = "0x3F80080", VA = "0x3F80080", Slot = "39")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000289")]
		[Address(RVA = "0x3F80090", Offset = "0x3F80090", VA = "0x3F80090", Slot = "40")]
		set
		{
		}
	}

	[Token(Token = "0x6000285")]
	[Address(RVA = "0x3F7FFD0", Offset = "0x3F7FFD0", VA = "0x3F7FFD0", Slot = "32")]
	public override Enumerator GetEnumerator()
	{
		return default(Enumerator);
	}

	[Token(Token = "0x600028A")]
	[Address(RVA = "0x3F7A4D0", Offset = "0x3F7A4D0", VA = "0x3F7A4D0")]
	public JSONBool(bool aData)
	{
	}

	[Token(Token = "0x600028B")]
	[Address(RVA = "0x3F800A0", Offset = "0x3F800A0", VA = "0x3F800A0")]
	public JSONBool(string aData)
	{
	}

	[Token(Token = "0x600028C")]
	[Address(RVA = "0x3F80110", Offset = "0x3F80110", VA = "0x3F80110", Slot = "26")]
	public override JSONNode Clone()
	{
		return null;
	}

	[Token(Token = "0x600028D")]
	[Address(RVA = "0x3F801A0", Offset = "0x3F801A0", VA = "0x3F801A0", Slot = "31")]
	internal override void WriteToStringBuilder(StringBuilder aSB, int aIndent, int aIndentInc, JSONTextMode aMode)
	{
	}

	[Token(Token = "0x600028E")]
	[Address(RVA = "0x3F80210", Offset = "0x3F80210", VA = "0x3F80210", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600028F")]
	[Address(RVA = "0x3F80240", Offset = "0x3F80240", VA = "0x3F80240", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000290")]
	[Address(RVA = "0x3F80280", Offset = "0x3F80280", VA = "0x3F80280", Slot = "25")]
	public override void Clear()
	{
	}
}
