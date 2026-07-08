using System;
using Il2CppDummyDll;
using UnityEngine.Internal;

namespace UnityEngine.TextCore.Text;

[Serializable]
[Token(Token = "0x2000006")]
[ExcludeFromDocs]
public struct FontAssetCreationEditorSettings
{
	[Token(Token = "0x400000D")]
	[FieldOffset(Offset = "0x0")]
	public string sourceFontFileGUID;

	[Token(Token = "0x400000E")]
	[FieldOffset(Offset = "0x8")]
	public int faceIndex;

	[Token(Token = "0x400000F")]
	[FieldOffset(Offset = "0xC")]
	public int pointSizeSamplingMode;

	[Token(Token = "0x4000010")]
	[FieldOffset(Offset = "0x10")]
	public int pointSize;

	[Token(Token = "0x4000011")]
	[FieldOffset(Offset = "0x14")]
	public int padding;

	[Token(Token = "0x4000012")]
	[FieldOffset(Offset = "0x18")]
	public int paddingMode;

	[Token(Token = "0x4000013")]
	[FieldOffset(Offset = "0x1C")]
	public int packingMode;

	[Token(Token = "0x4000014")]
	[FieldOffset(Offset = "0x20")]
	public int atlasWidth;

	[Token(Token = "0x4000015")]
	[FieldOffset(Offset = "0x24")]
	public int atlasHeight;

	[Token(Token = "0x4000016")]
	[FieldOffset(Offset = "0x28")]
	public int characterSetSelectionMode;

	[Token(Token = "0x4000017")]
	[FieldOffset(Offset = "0x30")]
	public string characterSequence;

	[Token(Token = "0x4000018")]
	[FieldOffset(Offset = "0x38")]
	public string referencedFontAssetGUID;

	[Token(Token = "0x4000019")]
	[FieldOffset(Offset = "0x40")]
	public string referencedTextAssetGUID;

	[Token(Token = "0x400001A")]
	[FieldOffset(Offset = "0x48")]
	public int fontStyle;

	[Token(Token = "0x400001B")]
	[FieldOffset(Offset = "0x4C")]
	public float fontStyleModifier;

	[Token(Token = "0x400001C")]
	[FieldOffset(Offset = "0x50")]
	public int renderMode;

	[Token(Token = "0x400001D")]
	[FieldOffset(Offset = "0x54")]
	public bool includeFontFeatures;
}
