// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.BatchCullingContext
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using Unity.Collections;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000318")]
[UnityEngine.Bindings.NativeHeader("Runtime/Camera/BatchRendererGroup.h")]
[UnityEngine.Scripting.UsedByNativeCode]
public struct BatchCullingContext
{
	[Token(Token = "0x40009BE")]
	[FieldOffset(Offset = "0x0")]
	public readonly NativeArray<Plane> cullingPlanes;

	[Token(Token = "0x40009BF")]
	[FieldOffset(Offset = "0x10")]
	public readonly NativeArray<CullingSplit> cullingSplits;

	[Token(Token = "0x40009C0")]
	[FieldOffset(Offset = "0x20")]
	public readonly LODParameters lodParameters;

	[Token(Token = "0x40009C1")]
	[FieldOffset(Offset = "0x3C")]
	public readonly Matrix4x4 localToWorldMatrix;

	[Token(Token = "0x40009C2")]
	[FieldOffset(Offset = "0x7C")]
	public readonly BatchCullingViewType viewType;

	[Token(Token = "0x40009C3")]
	[FieldOffset(Offset = "0x80")]
	public readonly BatchCullingProjectionType projectionType;

	[Token(Token = "0x40009C4")]
	[FieldOffset(Offset = "0x84")]
	public readonly BatchCullingFlags cullingFlags;

	[Token(Token = "0x40009C5")]
	[FieldOffset(Offset = "0x88")]
	public readonly BatchPackedCullingViewID viewID;

	[Token(Token = "0x40009C6")]
	[FieldOffset(Offset = "0x90")]
	public readonly uint cullingLayerMask;

	[Token(Token = "0x40009C7")]
	[FieldOffset(Offset = "0x98")]
	public readonly ulong sceneCullingMask;

	[Token(Token = "0x40009C8")]
	[FieldOffset(Offset = "0xA0")]
	[Obsolete("BatchCullingContext.isOrthographic is deprecated. Use BatchCullingContext.projectionType instead.")]
	public readonly byte isOrthographic;

	[Token(Token = "0x40009C9")]
	[FieldOffset(Offset = "0xA4")]
	public readonly int receiverPlaneOffset;

	[Token(Token = "0x40009CA")]
	[FieldOffset(Offset = "0xA8")]
	public readonly int receiverPlaneCount;

	[Token(Token = "0x600110B")]
	[Address(RVA = "0x4E35320", Offset = "0x4E35320", VA = "0x4E35320")]
	internal BatchCullingContext(NativeArray<Plane> inCullingPlanes, NativeArray<CullingSplit> inCullingSplits, LODParameters inLodParameters, Matrix4x4 inLocalToWorldMatrix, BatchCullingViewType inViewType, BatchCullingProjectionType inProjectionType, BatchCullingFlags inBatchCullingFlags, ulong inViewID, uint inCullingLayerMask, ulong inSceneCullingMask, int inReceiverPlaneOffset, int inReceiverPlaneCount)
	{
	}
}
