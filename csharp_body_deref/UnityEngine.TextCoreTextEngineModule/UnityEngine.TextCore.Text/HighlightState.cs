// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextCore.Text.HighlightState
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x4EDBB40", Offset = "0x4EDBB40", VA = "0x4EDBB40")]
	public HighlightState(Color32 color, Offset padding)
	{
	}

	[Token(Token = "0x600012C")]
	[Address(RVA = "0x4EDBB50", Offset = "0x4EDBB50", VA = "0x4EDBB50")]
	public static bool operator ==(HighlightState lhs, HighlightState rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x600012D")]
	[Address(RVA = "0x4EDBC50", Offset = "0x4EDBC50", VA = "0x4EDBC50")]
	public static bool operator !=(HighlightState lhs, HighlightState rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x600012E")]
	[Address(RVA = "0x4EDBD80", Offset = "0x4EDBD80", VA = "0x4EDBD80", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600012F")]
	[Address(RVA = "0x4EDBDE0", Offset = "0x4EDBDE0", VA = "0x4EDBDE0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}
}
