// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.GPUDrivenLODGroupData
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Unity.Collections;

namespace UnityEngine.Rendering;

[Token(Token = "0x20003D4")]
internal struct GPUDrivenLODGroupData
{
	[Token(Token = "0x4000C83")]
	[FieldOffset(Offset = "0x0")]
	public NativeArray<EntityId> lodGroupID;

	[Token(Token = "0x4000C84")]
	[FieldOffset(Offset = "0x10")]
	public NativeArray<int> lodOffset;

	[Token(Token = "0x4000C85")]
	[FieldOffset(Offset = "0x20")]
	public NativeArray<int> lodCount;

	[Token(Token = "0x4000C86")]
	[FieldOffset(Offset = "0x30")]
	public NativeArray<LODFadeMode> fadeMode;

	[Token(Token = "0x4000C87")]
	[FieldOffset(Offset = "0x40")]
	public NativeArray<Vector3> worldSpaceReferencePoint;

	[Token(Token = "0x4000C88")]
	[FieldOffset(Offset = "0x50")]
	public NativeArray<float> worldSpaceSize;

	[Token(Token = "0x4000C89")]
	[FieldOffset(Offset = "0x60")]
	public NativeArray<short> renderersCount;

	[Token(Token = "0x4000C8A")]
	[FieldOffset(Offset = "0x70")]
	public NativeArray<bool> lastLODIsBillboard;

	[Token(Token = "0x4000C8B")]
	[FieldOffset(Offset = "0x80")]
	public NativeArray<byte> forceLODMask;

	[Token(Token = "0x4000C8C")]
	[FieldOffset(Offset = "0x90")]
	public NativeArray<EntityId> invalidLODGroupID;

	[Token(Token = "0x4000C8D")]
	[FieldOffset(Offset = "0xA0")]
	public NativeArray<short> lodRenderersCount;

	[Token(Token = "0x4000C8E")]
	[FieldOffset(Offset = "0xB0")]
	public NativeArray<float> lodScreenRelativeTransitionHeight;

	[Token(Token = "0x4000C8F")]
	[FieldOffset(Offset = "0xC0")]
	public NativeArray<float> lodFadeTransitionWidth;
}
