// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.GlyphValueRecord_Legacy
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.TextCore.LowLevel;

namespace TMPro;

[Serializable]
[Token(Token = "0x2000039")]
public struct GlyphValueRecord_Legacy
{
	[Token(Token = "0x400014D")]
	[FieldOffset(Offset = "0x0")]
	public float xPlacement;

	[Token(Token = "0x400014E")]
	[FieldOffset(Offset = "0x4")]
	public float yPlacement;

	[Token(Token = "0x400014F")]
	[FieldOffset(Offset = "0x8")]
	public float xAdvance;

	[Token(Token = "0x4000150")]
	[FieldOffset(Offset = "0xC")]
	public float yAdvance;

	[Token(Token = "0x60001A5")]
	[Address(RVA = "0x2CF4560", Offset = "0x2CF2B60", VA = "0x182CF4560")]
	internal GlyphValueRecord_Legacy(GlyphValueRecord valueRecord)
	{
	}

	[Token(Token = "0x60001A6")]
	[Address(RVA = "0x2CF45C0", Offset = "0x2CF2BC0", VA = "0x182CF45C0")]
	public static GlyphValueRecord_Legacy operator +(GlyphValueRecord_Legacy a, GlyphValueRecord_Legacy b)
	{
		return default(GlyphValueRecord_Legacy);
	}
}
