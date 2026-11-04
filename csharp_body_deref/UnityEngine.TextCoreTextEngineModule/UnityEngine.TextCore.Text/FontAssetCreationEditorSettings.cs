// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextCore.Text.FontAssetCreationEditorSettings
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Internal;

namespace UnityEngine.TextCore.Text;

[Serializable]
[Token(Token = "0x200002F")]
[ExcludeFromDocs]
public struct FontAssetCreationEditorSettings
{
	[Token(Token = "0x400012C")]
	[FieldOffset(Offset = "0x0")]
	public string sourceFontFileGUID;

	[Token(Token = "0x400012D")]
	[FieldOffset(Offset = "0x8")]
	public int faceIndex;

	[Token(Token = "0x400012E")]
	[FieldOffset(Offset = "0xC")]
	public int pointSizeSamplingMode;

	[Token(Token = "0x400012F")]
	[FieldOffset(Offset = "0x10")]
	public float pointSize;

	[Token(Token = "0x4000130")]
	[FieldOffset(Offset = "0x14")]
	public int padding;

	[Token(Token = "0x4000131")]
	[FieldOffset(Offset = "0x18")]
	public int paddingMode;

	[Token(Token = "0x4000132")]
	[FieldOffset(Offset = "0x1C")]
	public int packingMode;

	[Token(Token = "0x4000133")]
	[FieldOffset(Offset = "0x20")]
	public int atlasWidth;

	[Token(Token = "0x4000134")]
	[FieldOffset(Offset = "0x24")]
	public int atlasHeight;

	[Token(Token = "0x4000135")]
	[FieldOffset(Offset = "0x28")]
	public int characterSetSelectionMode;

	[Token(Token = "0x4000136")]
	[FieldOffset(Offset = "0x30")]
	public string characterSequence;

	[Token(Token = "0x4000137")]
	[FieldOffset(Offset = "0x38")]
	public string referencedFontAssetGUID;

	[Token(Token = "0x4000138")]
	[FieldOffset(Offset = "0x40")]
	public string referencedTextAssetGUID;

	[Token(Token = "0x4000139")]
	[FieldOffset(Offset = "0x48")]
	public int fontStyle;

	[Token(Token = "0x400013A")]
	[FieldOffset(Offset = "0x4C")]
	public float fontStyleModifier;

	[Token(Token = "0x400013B")]
	[FieldOffset(Offset = "0x50")]
	public int renderMode;

	[Token(Token = "0x400013C")]
	[FieldOffset(Offset = "0x54")]
	public bool includeFontFeatures;
}
