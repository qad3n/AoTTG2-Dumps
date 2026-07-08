using System;
using Il2CppDummyDll;

namespace TMPro;

[Serializable]
[Token(Token = "0x200002C")]
public struct FontAssetCreationSettings
{
	[Token(Token = "0x400010B")]
	[FieldOffset(Offset = "0x0")]
	public string sourceFontFileName;

	[Token(Token = "0x400010C")]
	[FieldOffset(Offset = "0x8")]
	public string sourceFontFileGUID;

	[Token(Token = "0x400010D")]
	[FieldOffset(Offset = "0x10")]
	public int pointSizeSamplingMode;

	[Token(Token = "0x400010E")]
	[FieldOffset(Offset = "0x14")]
	public int pointSize;

	[Token(Token = "0x400010F")]
	[FieldOffset(Offset = "0x18")]
	public int padding;

	[Token(Token = "0x4000110")]
	[FieldOffset(Offset = "0x1C")]
	public int packingMode;

	[Token(Token = "0x4000111")]
	[FieldOffset(Offset = "0x20")]
	public int atlasWidth;

	[Token(Token = "0x4000112")]
	[FieldOffset(Offset = "0x24")]
	public int atlasHeight;

	[Token(Token = "0x4000113")]
	[FieldOffset(Offset = "0x28")]
	public int characterSetSelectionMode;

	[Token(Token = "0x4000114")]
	[FieldOffset(Offset = "0x30")]
	public string characterSequence;

	[Token(Token = "0x4000115")]
	[FieldOffset(Offset = "0x38")]
	public string referencedFontAssetGUID;

	[Token(Token = "0x4000116")]
	[FieldOffset(Offset = "0x40")]
	public string referencedTextAssetGUID;

	[Token(Token = "0x4000117")]
	[FieldOffset(Offset = "0x48")]
	public int fontStyle;

	[Token(Token = "0x4000118")]
	[FieldOffset(Offset = "0x4C")]
	public float fontStyleModifier;

	[Token(Token = "0x4000119")]
	[FieldOffset(Offset = "0x50")]
	public int renderMode;

	[Token(Token = "0x400011A")]
	[FieldOffset(Offset = "0x54")]
	public bool includeFontFeatures;

	[Token(Token = "0x600014A")]
	[Address(RVA = "0x4908E30", Offset = "0x4908E30", VA = "0x4908E30")]
	internal FontAssetCreationSettings(string sourceFontFileGUID, int pointSize, int pointSizeSamplingMode, int padding, int packingMode, int atlasWidth, int atlasHeight, int characterSelectionMode, string characterSet, int renderMode)
	{
	}
}
