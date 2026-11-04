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
	[Token(Token = "0x40001BF")]
	[FieldOffset(Offset = "0x0")]
	private static JSONNull m_StaticInstance;

	[Token(Token = "0x40001C0")]
	[FieldOffset(Offset = "0x8")]
	public static bool reuseSameInstance;

	[Token(Token = "0x1700006F")]
	public override JSONNodeType Tag
	{
		[Token(Token = "0x60002A3")]
		[Address(RVA = "0x8680A0", Offset = "0x8666A0", VA = "0x1808680A0", Slot = "4")]
		get
		{
			return default(JSONNodeType);
		}
	}

	[Token(Token = "0x17000070")]
	public override bool IsNull
	{
		[Token(Token = "0x60002A4")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000071")]
	public override string Value
	{
		[Token(Token = "0x60002A6")]
		[Address(RVA = "0x1DC52D0", Offset = "0x1DC38D0", VA = "0x181DC52D0", Slot = "9")]
		get
		{
			return null;
		}
		[Token(Token = "0x60002A7")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "10")]
		set
		{
		}
	}

	[Token(Token = "0x17000072")]
	public override bool AsBool
	{
		[Token(Token = "0x60002A8")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "39")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60002A9")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "40")]
		set
		{
		}
	}

	[Token(Token = "0x60002A1")]
	[Address(RVA = "0x1DC5020", Offset = "0x1DC3620", VA = "0x181DC5020")]
	public static JSONNull CreateOrGet()
	{
		return null;
	}

	[Token(Token = "0x60002A2")]
	[Address(RVA = "0x1DC5280", Offset = "0x1DC3880", VA = "0x181DC5280")]
	private JSONNull()
	{
	}

	[Token(Token = "0x60002A5")]
	[Address(RVA = "0x1DC13A0", Offset = "0x1DBF9A0", VA = "0x181DC13A0", Slot = "32")]
	public override Enumerator GetEnumerator()
	{
		return default(Enumerator);
	}

	[Token(Token = "0x60002AA")]
	[Address(RVA = "0x1DC4FE0", Offset = "0x1DC35E0", VA = "0x181DC4FE0", Slot = "26")]
	public override JSONNode Clone()
	{
		return null;
	}

	[Token(Token = "0x60002AB")]
	[Address(RVA = "0x1DC50F0", Offset = "0x1DC36F0", VA = "0x181DC50F0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60002AC")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60002AD")]
	[Address(RVA = "0x1DC5180", Offset = "0x1DC3780", VA = "0x181DC5180", Slot = "31")]
	internal override void WriteToStringBuilder(StringBuilder aSB, int aIndent, int aIndentInc, JSONTextMode aMode)
	{
	}
}
