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

[Token(Token = "0x2000054")]
public class JSONNull : JSONNode
{
	[Token(Token = "0x40001CE")]
	[FieldOffset(Offset = "0x0")]
	private static JSONNull m_StaticInstance;

	[Token(Token = "0x40001CF")]
	[FieldOffset(Offset = "0x8")]
	public static bool reuseSameInstance;

	[Token(Token = "0x17000068")]
	public override JSONNodeType Tag
	{
		[Token(Token = "0x60002AC")]
		[Address(RVA = "0x5769C00", Offset = "0x5768C00", VA = "0x5769C00", Slot = "4")]
		get
		{
			return default(JSONNodeType);
		}
	}

	[Token(Token = "0x17000069")]
	public override bool IsNull
	{
		[Token(Token = "0x60002AD")]
		[Address(RVA = "0x5769C10", Offset = "0x5768C10", VA = "0x5769C10", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700006A")]
	public override string Value
	{
		[Token(Token = "0x60002AF")]
		[Address(RVA = "0x5769C40", Offset = "0x5768C40", VA = "0x5769C40", Slot = "9")]
		get
		{
			return null;
		}
		[Token(Token = "0x60002B0")]
		[Address(RVA = "0x5769C70", Offset = "0x5768C70", VA = "0x5769C70", Slot = "10")]
		set
		{
		}
	}

	[Token(Token = "0x1700006B")]
	public override bool AsBool
	{
		[Token(Token = "0x60002B1")]
		[Address(RVA = "0x5769C80", Offset = "0x5768C80", VA = "0x5769C80", Slot = "39")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60002B2")]
		[Address(RVA = "0x5769C90", Offset = "0x5768C90", VA = "0x5769C90", Slot = "40")]
		set
		{
		}
	}

	[Token(Token = "0x60002AA")]
	[Address(RVA = "0x5763670", Offset = "0x5762670", VA = "0x5763670")]
	public static JSONNull CreateOrGet()
	{
		return null;
	}

	[Token(Token = "0x60002AB")]
	[Address(RVA = "0x5769B90", Offset = "0x5768B90", VA = "0x5769B90")]
	private JSONNull()
	{
	}

	[Token(Token = "0x60002AE")]
	[Address(RVA = "0x5769C20", Offset = "0x5768C20", VA = "0x5769C20", Slot = "32")]
	public override Enumerator GetEnumerator()
	{
		return default(Enumerator);
	}

	[Token(Token = "0x60002B3")]
	[Address(RVA = "0x5769CA0", Offset = "0x5768CA0", VA = "0x5769CA0", Slot = "26")]
	public override JSONNode Clone()
	{
		return null;
	}

	[Token(Token = "0x60002B4")]
	[Address(RVA = "0x5769D00", Offset = "0x5768D00", VA = "0x5769D00", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60002B5")]
	[Address(RVA = "0x5769D80", Offset = "0x5768D80", VA = "0x5769D80", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60002B6")]
	[Address(RVA = "0x5769D90", Offset = "0x5768D90", VA = "0x5769D90", Slot = "31")]
	internal override void WriteToStringBuilder(StringBuilder aSB, int aIndent, int aIndentInc, JSONTextMode aMode)
	{
	}
}
