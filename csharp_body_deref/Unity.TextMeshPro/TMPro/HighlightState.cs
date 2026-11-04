// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.HighlightState
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace TMPro;

[Token(Token = "0x2000017")]
public struct HighlightState
{
	[Token(Token = "0x400003E")]
	[FieldOffset(Offset = "0x0")]
	public Color32 color;

	[Token(Token = "0x400003F")]
	[FieldOffset(Offset = "0x4")]
	public TMP_Offset padding;

	[Token(Token = "0x6000077")]
	[Address(RVA = "0x180D1A0", Offset = "0x180B7A0", VA = "0x18180D1A0")]
	public HighlightState(Color32 color, TMP_Offset padding)
	{
	}

	[Token(Token = "0x6000078")]
	[Address(RVA = "0x2CDDE00", Offset = "0x2CDC400", VA = "0x182CDDE00")]
	public static bool operator ==(HighlightState lhs, HighlightState rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6000079")]
	[Address(RVA = "0x2CDDEC0", Offset = "0x2CDC4C0", VA = "0x182CDDEC0")]
	public static bool operator !=(HighlightState lhs, HighlightState rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x600007A")]
	[Address(RVA = "0x2CDDDA0", Offset = "0x2CDC3A0", VA = "0x182CDDDA0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600007B")]
	[Address(RVA = "0x2CDDCA0", Offset = "0x2CDC2A0", VA = "0x182CDDCA0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600007C")]
	[Address(RVA = "0x2CDDD10", Offset = "0x2CDC310", VA = "0x182CDDD10")]
	public bool Equals(HighlightState other)
	{
		return default(bool);
	}
}
