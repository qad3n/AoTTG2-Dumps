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
	[Address(RVA = "0x6A48A40", Offset = "0x6A47A40", VA = "0x6A48A40")]
	public HighlightState(Color32 color, Offset padding)
	{
	}

	[Token(Token = "0x6000257")]
	[Address(RVA = "0x6A48A50", Offset = "0x6A47A50", VA = "0x6A48A50")]
	public static bool operator ==(HighlightState lhs, HighlightState rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6000258")]
	[Address(RVA = "0x6A48B40", Offset = "0x6A47B40", VA = "0x6A48B40")]
	public static bool operator !=(HighlightState lhs, HighlightState rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6000259")]
	[Address(RVA = "0x6A48C50", Offset = "0x6A47C50", VA = "0x6A48C50", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600025A")]
	[Address(RVA = "0x6A48CB0", Offset = "0x6A47CB0", VA = "0x6A48CB0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}
}
