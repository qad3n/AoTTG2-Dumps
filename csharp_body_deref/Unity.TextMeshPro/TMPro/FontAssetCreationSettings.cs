// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.FontAssetCreationSettings
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace TMPro;

[Serializable]
[Token(Token = "0x2000036")]
public struct FontAssetCreationSettings
{
	[Token(Token = "0x4000136")]
	[FieldOffset(Offset = "0x0")]
	public string sourceFontFileName;

	[Token(Token = "0x4000137")]
	[FieldOffset(Offset = "0x8")]
	public string sourceFontFileGUID;

	[Token(Token = "0x4000138")]
	[FieldOffset(Offset = "0x10")]
	public int faceIndex;

	[Token(Token = "0x4000139")]
	[FieldOffset(Offset = "0x14")]
	public int pointSizeSamplingMode;

	[Token(Token = "0x400013A")]
	[FieldOffset(Offset = "0x18")]
	public int pointSize;

	[Token(Token = "0x400013B")]
	[FieldOffset(Offset = "0x1C")]
	public int padding;

	[Token(Token = "0x400013C")]
	[FieldOffset(Offset = "0x20")]
	public int paddingMode;

	[Token(Token = "0x400013D")]
	[FieldOffset(Offset = "0x24")]
	public int packingMode;

	[Token(Token = "0x400013E")]
	[FieldOffset(Offset = "0x28")]
	public int atlasWidth;

	[Token(Token = "0x400013F")]
	[FieldOffset(Offset = "0x2C")]
	public int atlasHeight;

	[Token(Token = "0x4000140")]
	[FieldOffset(Offset = "0x30")]
	public int characterSetSelectionMode;

	[Token(Token = "0x4000141")]
	[FieldOffset(Offset = "0x38")]
	public string characterSequence;

	[Token(Token = "0x4000142")]
	[FieldOffset(Offset = "0x40")]
	public string referencedFontAssetGUID;

	[Token(Token = "0x4000143")]
	[FieldOffset(Offset = "0x48")]
	public string referencedTextAssetGUID;

	[Token(Token = "0x4000144")]
	[FieldOffset(Offset = "0x50")]
	public int fontStyle;

	[Token(Token = "0x4000145")]
	[FieldOffset(Offset = "0x54")]
	public float fontStyleModifier;

	[Token(Token = "0x4000146")]
	[FieldOffset(Offset = "0x58")]
	public int renderMode;

	[Token(Token = "0x4000147")]
	[FieldOffset(Offset = "0x5C")]
	public bool includeFontFeatures;

	[Token(Token = "0x60001A3")]
	[Address(RVA = "0x2CF4410", Offset = "0x2CF2A10", VA = "0x182CF4410")]
	internal FontAssetCreationSettings(string sourceFontFileGUID, int pointSize, int pointSizeSamplingMode, int padding, int packingMode, int atlasWidth, int atlasHeight, int characterSelectionMode, string characterSet, int renderMode)
	{
	}
}
