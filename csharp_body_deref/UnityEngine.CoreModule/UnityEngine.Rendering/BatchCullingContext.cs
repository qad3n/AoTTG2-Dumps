// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.BatchCullingContext
// Update status: CHANGED in this game update
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

[Token(Token = "0x2000380")]
[UnityEngine.Bindings.NativeHeader("Runtime/Camera/BatchRendererGroup.h")]
[UnityEngine.Scripting.UsedByNativeCode]
public struct BatchCullingContext
{
	[Token(Token = "0x4000A72")]
	[FieldOffset(Offset = "0x0")]
	public readonly NativeArray<Plane> cullingPlanes;

	[Token(Token = "0x4000A73")]
	[FieldOffset(Offset = "0x10")]
	public readonly NativeArray<CullingSplit> cullingSplits;

	[Token(Token = "0x4000A74")]
	[FieldOffset(Offset = "0x20")]
	public readonly LODParameters lodParameters;

	[Token(Token = "0x4000A75")]
	[FieldOffset(Offset = "0x3C")]
	public readonly Matrix4x4 localToWorldMatrix;

	[Token(Token = "0x4000A76")]
	[FieldOffset(Offset = "0x7C")]
	public readonly BatchCullingViewType viewType;

	[Token(Token = "0x4000A77")]
	[FieldOffset(Offset = "0x80")]
	public readonly BatchCullingProjectionType projectionType;

	[Token(Token = "0x4000A78")]
	[FieldOffset(Offset = "0x84")]
	public readonly BatchCullingFlags cullingFlags;

	[Token(Token = "0x4000A79")]
	[FieldOffset(Offset = "0x88")]
	public readonly BatchPackedCullingViewID viewID;

	[Token(Token = "0x4000A7A")]
	[FieldOffset(Offset = "0x90")]
	public readonly uint cullingLayerMask;

	[Token(Token = "0x4000A7B")]
	[FieldOffset(Offset = "0x98")]
	public readonly ulong sceneCullingMask;

	[Token(Token = "0x4000A7C")]
	[FieldOffset(Offset = "0xA0")]
	public readonly ushort splitExclusionMask;

	[Token(Token = "0x4000A7D")]
	[FieldOffset(Offset = "0xA2")]
	[Obsolete("BatchCullingContext.isOrthographic is deprecated. Use BatchCullingContext.projectionType instead.")]
	public readonly byte isOrthographic;

	[Token(Token = "0x4000A7E")]
	[FieldOffset(Offset = "0xA4")]
	public readonly int receiverPlaneOffset;

	[Token(Token = "0x4000A7F")]
	[FieldOffset(Offset = "0xA8")]
	public readonly int receiverPlaneCount;

	[Token(Token = "0x4000A80")]
	[FieldOffset(Offset = "0xB0")]
	internal readonly IntPtr occlusionBuffer;

	[Token(Token = "0x6001579")]
	[Address(RVA = "0x2F5FE20", Offset = "0x2F5E420", VA = "0x182F5FE20")]
	internal BatchCullingContext(NativeArray<Plane> inCullingPlanes, NativeArray<CullingSplit> inCullingSplits, LODParameters inLodParameters, Matrix4x4 inLocalToWorldMatrix, BatchCullingViewType inViewType, BatchCullingProjectionType inProjectionType, BatchCullingFlags inBatchCullingFlags, ulong inViewID, uint inCullingLayerMask, ulong inSceneCullingMask, byte inExclusionSplitMask, int inReceiverPlaneOffset, int inReceiverPlaneCount, IntPtr inOcclusionBuffer)
	{
	}
}
