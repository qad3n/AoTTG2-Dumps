// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.InstanceOcclusionEventStats
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000027")]
internal struct InstanceOcclusionEventStats
{
	[Token(Token = "0x4000074")]
	[FieldOffset(Offset = "0x0")]
	public int viewInstanceID;

	[Token(Token = "0x4000075")]
	[FieldOffset(Offset = "0x4")]
	public InstanceOcclusionEventType eventType;

	[Token(Token = "0x4000076")]
	[FieldOffset(Offset = "0x8")]
	public int occluderVersion;

	[Token(Token = "0x4000077")]
	[FieldOffset(Offset = "0xC")]
	public int subviewMask;

	[Token(Token = "0x4000078")]
	[FieldOffset(Offset = "0x10")]
	public OcclusionTest occlusionTest;

	[Token(Token = "0x4000079")]
	[FieldOffset(Offset = "0x14")]
	public int visibleInstances;

	[Token(Token = "0x400007A")]
	[FieldOffset(Offset = "0x18")]
	public int culledInstances;

	[Token(Token = "0x400007B")]
	[FieldOffset(Offset = "0x1C")]
	public int visiblePrimitives;

	[Token(Token = "0x400007C")]
	[FieldOffset(Offset = "0x20")]
	public int culledPrimitives;
}
