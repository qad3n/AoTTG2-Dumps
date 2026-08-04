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
[Token(Token = "0x2000045")]
public struct GlyphValueRecord_Legacy
{
	[Token(Token = "0x4000214")]
	[FieldOffset(Offset = "0x0")]
	public float xPlacement;

	[Token(Token = "0x4000215")]
	[FieldOffset(Offset = "0x4")]
	public float yPlacement;

	[Token(Token = "0x4000216")]
	[FieldOffset(Offset = "0x8")]
	public float xAdvance;

	[Token(Token = "0x4000217")]
	[FieldOffset(Offset = "0xC")]
	public float yAdvance;

	[Token(Token = "0x600023D")]
	[Address(RVA = "0x4C564B0", Offset = "0x4C564B0", VA = "0x4C564B0")]
	internal GlyphValueRecord_Legacy(GlyphValueRecord valueRecord)
	{
	}

	[Token(Token = "0x600023E")]
	[Address(RVA = "0x4C56510", Offset = "0x4C56510", VA = "0x4C56510")]
	public static GlyphValueRecord_Legacy operator +(GlyphValueRecord_Legacy a, GlyphValueRecord_Legacy b)
	{
		return default(GlyphValueRecord_Legacy);
	}
}
