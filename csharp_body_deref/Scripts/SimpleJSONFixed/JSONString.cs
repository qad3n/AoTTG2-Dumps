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

[Token(Token = "0x2000051")]
public class JSONString : JSONNode
{
	[Token(Token = "0x40001CB")]
	[FieldOffset(Offset = "0x10")]
	private string m_Data;

	[Token(Token = "0x1700005B")]
	public override JSONNodeType Tag
	{
		[Token(Token = "0x600027E")]
		[Address(RVA = "0x5768F70", Offset = "0x5767F70", VA = "0x5768F70", Slot = "4")]
		get
		{
			return default(JSONNodeType);
		}
	}

	[Token(Token = "0x1700005C")]
	public override bool IsString
	{
		[Token(Token = "0x600027F")]
		[Address(RVA = "0x5768F80", Offset = "0x5767F80", VA = "0x5768F80", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700005D")]
	public override string Value
	{
		[Token(Token = "0x6000281")]
		[Address(RVA = "0x5768FB0", Offset = "0x5767FB0", VA = "0x5768FB0", Slot = "9")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000282")]
		[Address(RVA = "0x5768FC0", Offset = "0x5767FC0", VA = "0x5768FC0", Slot = "10")]
		set
		{
		}
	}

	[Token(Token = "0x6000280")]
	[Address(RVA = "0x5768F90", Offset = "0x5767F90", VA = "0x5768F90", Slot = "32")]
	public override Enumerator GetEnumerator()
	{
		return default(Enumerator);
	}

	[Token(Token = "0x6000283")]
	[Address(RVA = "0x5763600", Offset = "0x5762600", VA = "0x5763600")]
	public JSONString(string aData)
	{
	}

	[Token(Token = "0x6000284")]
	[Address(RVA = "0x5768FD0", Offset = "0x5767FD0", VA = "0x5768FD0", Slot = "26")]
	public override JSONNode Clone()
	{
		return null;
	}

	[Token(Token = "0x6000285")]
	[Address(RVA = "0x5769070", Offset = "0x5768070", VA = "0x5769070", Slot = "31")]
	internal override void WriteToStringBuilder(StringBuilder aSB, int aIndent, int aIndentInc, JSONTextMode aMode)
	{
	}

	[Token(Token = "0x6000286")]
	[Address(RVA = "0x5769110", Offset = "0x5768110", VA = "0x5769110", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000287")]
	[Address(RVA = "0x5769270", Offset = "0x5768270", VA = "0x5769270", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000288")]
	[Address(RVA = "0x57692A0", Offset = "0x57682A0", VA = "0x57692A0", Slot = "25")]
	public override void Clear()
	{
	}
}
