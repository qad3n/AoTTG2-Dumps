using Il2CppDummyDll;
using UnityEngine;

namespace TMPro;

[Token(Token = "0x2000010")]
public struct HighlightState
{
	[Token(Token = "0x400002D")]
	[FieldOffset(Offset = "0x0")]
	public Color32 color;

	[Token(Token = "0x400002E")]
	[FieldOffset(Offset = "0x4")]
	public TMP_Offset padding;

	[Token(Token = "0x600004C")]
	[Address(RVA = "0x48F7B20", Offset = "0x48F7B20", VA = "0x48F7B20")]
	public HighlightState(Color32 color, TMP_Offset padding)
	{
	}

	[Token(Token = "0x600004D")]
	[Address(RVA = "0x48F7B30", Offset = "0x48F7B30", VA = "0x48F7B30")]
	public static bool operator ==(HighlightState lhs, HighlightState rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x600004E")]
	[Address(RVA = "0x48F7C20", Offset = "0x48F7C20", VA = "0x48F7C20")]
	public static bool operator !=(HighlightState lhs, HighlightState rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x600004F")]
	[Address(RVA = "0x48F7CF0", Offset = "0x48F7CF0", VA = "0x48F7CF0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000050")]
	[Address(RVA = "0x48F7D50", Offset = "0x48F7D50", VA = "0x48F7D50", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000051")]
	[Address(RVA = "0x48F7DB0", Offset = "0x48F7DB0", VA = "0x48F7DB0")]
	public bool Equals(HighlightState other)
	{
		return default(bool);
	}
}
