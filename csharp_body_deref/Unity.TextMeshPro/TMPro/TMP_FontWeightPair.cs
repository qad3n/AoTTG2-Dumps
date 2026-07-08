using System;
using Il2CppDummyDll;

namespace TMPro;

[Serializable]
[Token(Token = "0x200002D")]
public struct TMP_FontWeightPair
{
	[Token(Token = "0x400011B")]
	[FieldOffset(Offset = "0x0")]
	public TMP_FontAsset regularTypeface;

	[Token(Token = "0x400011C")]
	[FieldOffset(Offset = "0x8")]
	public TMP_FontAsset italicTypeface;
}
