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

[Token(Token = "0x2000589")]
internal struct ConvertMeshJobData
{
	[Token(Token = "0x4001335")]
	[FieldOffset(Offset = "0x0")]
	public IntPtr vertSrc;

	[Token(Token = "0x4001336")]
	[FieldOffset(Offset = "0x8")]
	public IntPtr vertDst;

	[Token(Token = "0x4001337")]
	[FieldOffset(Offset = "0x10")]
	public int vertCount;

	[Token(Token = "0x4001338")]
	[FieldOffset(Offset = "0x14")]
	public Matrix4x4 transform;

	[Token(Token = "0x4001339")]
	[FieldOffset(Offset = "0x54")]
	public Color32 xformClipPages;

	[Token(Token = "0x400133A")]
	[FieldOffset(Offset = "0x58")]
	public Color32 ids;

	[Token(Token = "0x400133B")]
	[FieldOffset(Offset = "0x5C")]
	public Color32 addFlags;

	[Token(Token = "0x400133C")]
	[FieldOffset(Offset = "0x60")]
	public Color32 opacityPage;

	[Token(Token = "0x400133D")]
	[FieldOffset(Offset = "0x64")]
	public Color32 textCoreSettingsPage;

	[Token(Token = "0x400133E")]
	[FieldOffset(Offset = "0x68")]
	public int usesTextCoreSettings;

	[Token(Token = "0x400133F")]
	[FieldOffset(Offset = "0x6C")]
	public float textureId;

	[Token(Token = "0x4001340")]
	[FieldOffset(Offset = "0x70")]
	public int gradientSettingsIndexOffset;

	[Token(Token = "0x4001341")]
	[FieldOffset(Offset = "0x78")]
	public IntPtr indexSrc;

	[Token(Token = "0x4001342")]
	[FieldOffset(Offset = "0x80")]
	public IntPtr indexDst;

	[Token(Token = "0x4001343")]
	[FieldOffset(Offset = "0x88")]
	public int indexCount;

	[Token(Token = "0x4001344")]
	[FieldOffset(Offset = "0x8C")]
	public int indexOffset;

	[Token(Token = "0x4001345")]
	[FieldOffset(Offset = "0x90")]
	public int flipIndices;

	[Token(Token = "0x4001346")]
	[FieldOffset(Offset = "0x94")]
	public int forceZ;

	[Token(Token = "0x4001347")]
	[FieldOffset(Offset = "0x98")]
	public float positionZ;

	[Token(Token = "0x4001348")]
	[FieldOffset(Offset = "0x9C")]
	public int remapUVs;

	[Token(Token = "0x4001349")]
	[FieldOffset(Offset = "0xA0")]
	public Rect atlasRect;

	[Token(Token = "0x400134A")]
	[FieldOffset(Offset = "0xB0")]
	public Vector2 layoutSize;
}
