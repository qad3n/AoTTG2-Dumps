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

[Token(Token = "0x20003BC")]
[UnityEngine.Bindings.NativeHeader("Runtime/Camera/BatchRendererGroup.h")]
[UnityEngine.Scripting.UsedByNativeCode]
public struct BatchCullingContext
{
	[Token(Token = "0x4000BF6")]
	[FieldOffset(Offset = "0x0")]
	public readonly NativeArray<Plane> cullingPlanes;

	[Token(Token = "0x4000BF7")]
	[FieldOffset(Offset = "0x10")]
	public readonly NativeArray<CullingSplit> cullingSplits;

	[Token(Token = "0x4000BF8")]
	[FieldOffset(Offset = "0x20")]
	public readonly LODParameters lodParameters;

	[Token(Token = "0x4000BF9")]
	[FieldOffset(Offset = "0x3C")]
	public readonly Matrix4x4 localToWorldMatrix;

	[Token(Token = "0x4000BFA")]
	[FieldOffset(Offset = "0x7C")]
	public readonly BatchCullingViewType viewType;

	[Token(Token = "0x4000BFB")]
	[FieldOffset(Offset = "0x80")]
	public readonly BatchCullingProjectionType projectionType;

	[Token(Token = "0x4000BFC")]
	[FieldOffset(Offset = "0x84")]
	public readonly BatchCullingFlags cullingFlags;

	[Token(Token = "0x4000BFD")]
	[FieldOffset(Offset = "0x88")]
	public readonly BatchPackedCullingViewID viewID;

	[Token(Token = "0x4000BFE")]
	[FieldOffset(Offset = "0x90")]
	public readonly uint cullingLayerMask;

	[Token(Token = "0x4000BFF")]
	[FieldOffset(Offset = "0x98")]
	public readonly ulong sceneCullingMask;

	[Token(Token = "0x4000C00")]
	[FieldOffset(Offset = "0xA0")]
	public readonly ushort splitExclusionMask;

	[Token(Token = "0x4000C01")]
	[FieldOffset(Offset = "0xA2")]
	[Obsolete("BatchCullingContext.isOrthographic is deprecated. Use BatchCullingContext.projectionType instead.")]
	public readonly byte isOrthographic;

	[Token(Token = "0x4000C02")]
	[FieldOffset(Offset = "0xA4")]
	public readonly int receiverPlaneOffset;

	[Token(Token = "0x4000C03")]
	[FieldOffset(Offset = "0xA8")]
	public readonly int receiverPlaneCount;

	[Token(Token = "0x4000C04")]
	[FieldOffset(Offset = "0xB0")]
	internal readonly IntPtr occlusionBuffer;

	[Token(Token = "0x600172F")]
	[Address(RVA = "0x6964C80", Offset = "0x6963C80", VA = "0x6964C80")]
	internal BatchCullingContext(NativeArray<Plane> inCullingPlanes, NativeArray<CullingSplit> inCullingSplits, LODParameters inLodParameters, Matrix4x4 inLocalToWorldMatrix, BatchCullingViewType inViewType, BatchCullingProjectionType inProjectionType, BatchCullingFlags inBatchCullingFlags, ulong inViewID, uint inCullingLayerMask, ulong inSceneCullingMask, byte inExclusionSplitMask, int inReceiverPlaneOffset, int inReceiverPlaneCount, IntPtr inOcclusionBuffer)
	{
	}
}
