// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.ConvertMeshJobData
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x20004A5")]
internal struct ConvertMeshJobData
{
	[Token(Token = "0x4000E59")]
	[FieldOffset(Offset = "0x0")]
	public IntPtr vertSrc;

	[Token(Token = "0x4000E5A")]
	[FieldOffset(Offset = "0x8")]
	public IntPtr vertDst;

	[Token(Token = "0x4000E5B")]
	[FieldOffset(Offset = "0x10")]
	public int vertCount;

	[Token(Token = "0x4000E5C")]
	[FieldOffset(Offset = "0x14")]
	public Matrix4x4 transform;

	[Token(Token = "0x4000E5D")]
	[FieldOffset(Offset = "0x54")]
	public Color32 xformClipPages;

	[Token(Token = "0x4000E5E")]
	[FieldOffset(Offset = "0x58")]
	public Color32 ids;

	[Token(Token = "0x4000E5F")]
	[FieldOffset(Offset = "0x5C")]
	public Color32 addFlags;

	[Token(Token = "0x4000E60")]
	[FieldOffset(Offset = "0x60")]
	public Color32 opacityPage;

	[Token(Token = "0x4000E61")]
	[FieldOffset(Offset = "0x64")]
	public Color32 textCoreSettingsPage;

	[Token(Token = "0x4000E62")]
	[FieldOffset(Offset = "0x68")]
	public int isSdfText;

	[Token(Token = "0x4000E63")]
	[FieldOffset(Offset = "0x6C")]
	public float textureId;

	[Token(Token = "0x4000E64")]
	[FieldOffset(Offset = "0x70")]
	public int gradientSettingsIndexOffset;

	[Token(Token = "0x4000E65")]
	[FieldOffset(Offset = "0x78")]
	public IntPtr indexSrc;

	[Token(Token = "0x4000E66")]
	[FieldOffset(Offset = "0x80")]
	public IntPtr indexDst;

	[Token(Token = "0x4000E67")]
	[FieldOffset(Offset = "0x88")]
	public int indexCount;

	[Token(Token = "0x4000E68")]
	[FieldOffset(Offset = "0x8C")]
	public int indexOffset;

	[Token(Token = "0x4000E69")]
	[FieldOffset(Offset = "0x90")]
	public int flipIndices;

	[Token(Token = "0x4000E6A")]
	[FieldOffset(Offset = "0x94")]
	public float positionZ;

	[Token(Token = "0x4000E6B")]
	[FieldOffset(Offset = "0x98")]
	public int remapUVs;

	[Token(Token = "0x4000E6C")]
	[FieldOffset(Offset = "0x9C")]
	public Rect atlasRect;
}
