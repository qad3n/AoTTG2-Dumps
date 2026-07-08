using Il2CppDummyDll;

namespace UnityEngine.TextCore.Text;

[Token(Token = "0x2000030")]
internal struct HighlightState
{
	[Token(Token = "0x400021C")]
	[FieldOffset(Offset = "0x0")]
	public Color32 color;

	[Token(Token = "0x400021D")]
	[FieldOffset(Offset = "0x4")]
	public Offset padding;

	[Token(Token = "0x600012B")]
	[Address(RVA = "0x4BB4210", Offset = "0x4BB4210", VA = "0x4BB4210")]
	public HighlightState(Color32 color, Offset padding)
	{
	}

	[Token(Token = "0x600012C")]
	[Address(RVA = "0x4BB4220", Offset = "0x4BB4220", VA = "0x4BB4220")]
	public static bool operator ==(HighlightState lhs, HighlightState rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x600012D")]
	[Address(RVA = "0x4BB4320", Offset = "0x4BB4320", VA = "0x4BB4320")]
	public static bool operator !=(HighlightState lhs, HighlightState rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x600012E")]
	[Address(RVA = "0x4BB4450", Offset = "0x4BB4450", VA = "0x4BB4450", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600012F")]
	[Address(RVA = "0x4BB44B0", Offset = "0x4BB44B0", VA = "0x4BB44B0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}
}
