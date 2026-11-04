// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextCore.Text.HighlightState
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.TextCore.Text;

[Token(Token = "0x2000057")]
internal struct HighlightState
{
	[Token(Token = "0x400034D")]
	[FieldOffset(Offset = "0x0")]
	public Color32 color;

	[Token(Token = "0x400034E")]
	[FieldOffset(Offset = "0x4")]
	public Offset padding;

	[Token(Token = "0x6000256")]
	[Address(RVA = "0x180D1A0", Offset = "0x180B7A0", VA = "0x18180D1A0")]
	public HighlightState(Color32 color, Offset padding)
	{
	}

	[Token(Token = "0x6000257")]
	[Address(RVA = "0x3042E90", Offset = "0x3041490", VA = "0x183042E90")]
	public static bool operator ==(HighlightState lhs, HighlightState rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6000258")]
	[Address(RVA = "0x3042F50", Offset = "0x3041550", VA = "0x183042F50")]
	public static bool operator !=(HighlightState lhs, HighlightState rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6000259")]
	[Address(RVA = "0x3042E30", Offset = "0x3041430", VA = "0x183042E30", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600025A")]
	[Address(RVA = "0x3042DC0", Offset = "0x30413C0", VA = "0x183042DC0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}
}
