using System;
using Il2CppDummyDll;
using UnityEngine.TextCore.LowLevel;

namespace TMPro;

[Serializable]
[Token(Token = "0x200002F")]
public struct GlyphValueRecord_Legacy
{
	[Token(Token = "0x4000120")]
	[FieldOffset(Offset = "0x0")]
	public float xPlacement;

	[Token(Token = "0x4000121")]
	[FieldOffset(Offset = "0x4")]
	public float yPlacement;

	[Token(Token = "0x4000122")]
	[FieldOffset(Offset = "0x8")]
	public float xAdvance;

	[Token(Token = "0x4000123")]
	[FieldOffset(Offset = "0xC")]
	public float yAdvance;

	[Token(Token = "0x600014C")]
	[Address(RVA = "0x4908F30", Offset = "0x4908F30", VA = "0x4908F30")]
	internal GlyphValueRecord_Legacy(GlyphValueRecord valueRecord)
	{
	}

	[Token(Token = "0x600014D")]
	[Address(RVA = "0x4908F90", Offset = "0x4908F90", VA = "0x4908F90")]
	public static GlyphValueRecord_Legacy operator +(GlyphValueRecord_Legacy a, GlyphValueRecord_Legacy b)
	{
		return default(GlyphValueRecord_Legacy);
	}
}
