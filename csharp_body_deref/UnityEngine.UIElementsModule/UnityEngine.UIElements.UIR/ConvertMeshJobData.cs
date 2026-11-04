// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.ConvertMeshJobData
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x200059E")]
internal struct ConvertMeshJobData
{
	[Token(Token = "0x40013F3")]
	[FieldOffset(Offset = "0x0")]
	public IntPtr vertSrc;

	[Token(Token = "0x40013F4")]
	[FieldOffset(Offset = "0x8")]
	public IntPtr vertDst;

	[Token(Token = "0x40013F5")]
	[FieldOffset(Offset = "0x10")]
	public int vertCount;

	[Token(Token = "0x40013F6")]
	[FieldOffset(Offset = "0x14")]
	public Matrix4x4 transform;

	[Token(Token = "0x40013F7")]
	[FieldOffset(Offset = "0x54")]
	public Color32 xformClipPages;

	[Token(Token = "0x40013F8")]
	[FieldOffset(Offset = "0x58")]
	public Color32 ids;

	[Token(Token = "0x40013F9")]
	[FieldOffset(Offset = "0x5C")]
	public Color32 addFlags;

	[Token(Token = "0x40013FA")]
	[FieldOffset(Offset = "0x60")]
	public Color32 opacityPage;

	[Token(Token = "0x40013FB")]
	[FieldOffset(Offset = "0x64")]
	public Color32 textCoreSettingsPage;

	[Token(Token = "0x40013FC")]
	[FieldOffset(Offset = "0x68")]
	public int usesTextCoreSettings;

	[Token(Token = "0x40013FD")]
	[FieldOffset(Offset = "0x6C")]
	public float textureId;

	[Token(Token = "0x40013FE")]
	[FieldOffset(Offset = "0x70")]
	public int gradientSettingsIndexOffset;

	[Token(Token = "0x40013FF")]
	[FieldOffset(Offset = "0x78")]
	public IntPtr indexSrc;

	[Token(Token = "0x4001400")]
	[FieldOffset(Offset = "0x80")]
	public IntPtr indexDst;

	[Token(Token = "0x4001401")]
	[FieldOffset(Offset = "0x88")]
	public int indexCount;

	[Token(Token = "0x4001402")]
	[FieldOffset(Offset = "0x8C")]
	public int indexOffset;

	[Token(Token = "0x4001403")]
	[FieldOffset(Offset = "0x90")]
	public int flipIndices;

	[Token(Token = "0x4001404")]
	[FieldOffset(Offset = "0x94")]
	public int forceZ;

	[Token(Token = "0x4001405")]
	[FieldOffset(Offset = "0x98")]
	public float positionZ;

	[Token(Token = "0x4001406")]
	[FieldOffset(Offset = "0x9C")]
	public int remapUVs;

	[Token(Token = "0x4001407")]
	[FieldOffset(Offset = "0xA0")]
	public Rect atlasRect;

	[Token(Token = "0x4001408")]
	[FieldOffset(Offset = "0xB0")]
	public Vector2 layoutSize;
}
