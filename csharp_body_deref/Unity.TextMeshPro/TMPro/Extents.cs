// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.Extents
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace TMPro;

[Token(Token = "0x20000AE")]
public struct Extents
{
	[Token(Token = "0x40005D4")]
	[FieldOffset(Offset = "0x0")]
	internal static Extents zero;

	[Token(Token = "0x40005D5")]
	[FieldOffset(Offset = "0x10")]
	internal static Extents uninitialized;

	[Token(Token = "0x40005D6")]
	[FieldOffset(Offset = "0x0")]
	public Vector2 min;

	[Token(Token = "0x40005D7")]
	[FieldOffset(Offset = "0x8")]
	public Vector2 max;

	[Token(Token = "0x6000659")]
	[Address(RVA = "0xB546F0", Offset = "0xB52CF0", VA = "0x180B546F0")]
	public Extents(Vector2 min, Vector2 max)
	{
	}

	[Token(Token = "0x600065A")]
	[Address(RVA = "0x2D60E70", Offset = "0x2D5F470", VA = "0x182D60E70", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
