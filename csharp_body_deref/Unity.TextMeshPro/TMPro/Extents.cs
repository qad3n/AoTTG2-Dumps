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

[Token(Token = "0x200001D")]
public struct Extents
{
	[Token(Token = "0x40000C2")]
	[FieldOffset(Offset = "0x0")]
	internal static Extents zero;

	[Token(Token = "0x40000C3")]
	[FieldOffset(Offset = "0x10")]
	internal static Extents uninitialized;

	[Token(Token = "0x40000C4")]
	[FieldOffset(Offset = "0x0")]
	public Vector2 min;

	[Token(Token = "0x40000C5")]
	[FieldOffset(Offset = "0x8")]
	public Vector2 max;

	[Token(Token = "0x600011A")]
	[Address(RVA = "0x4C44630", Offset = "0x4C44630", VA = "0x4C44630")]
	public Extents(Vector2 min, Vector2 max)
	{
	}

	[Token(Token = "0x600011B")]
	[Address(RVA = "0x4C44640", Offset = "0x4C44640", VA = "0x4C44640", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
