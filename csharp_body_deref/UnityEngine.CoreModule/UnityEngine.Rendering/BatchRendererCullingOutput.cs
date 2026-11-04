// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.BatchRendererCullingOutput
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using Unity.Jobs;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000382")]
[UnityEngine.Bindings.NativeHeader("Runtime/Camera/BatchRendererGroup.h")]
[UnityEngine.Scripting.UsedByNativeCode]
internal struct BatchRendererCullingOutput
{
	[Token(Token = "0x4000A83")]
	[FieldOffset(Offset = "0x0")]
	public JobHandle cullingJobsFence;

	[Token(Token = "0x4000A84")]
	[FieldOffset(Offset = "0x10")]
	public Matrix4x4 localToWorldMatrix;

	[Token(Token = "0x4000A85")]
	[FieldOffset(Offset = "0x50")]
	public unsafe Plane* cullingPlanes;

	[Token(Token = "0x4000A86")]
	[FieldOffset(Offset = "0x58")]
	public int cullingPlaneCount;

	[Token(Token = "0x4000A87")]
	[FieldOffset(Offset = "0x5C")]
	public int receiverPlaneOffset;

	[Token(Token = "0x4000A88")]
	[FieldOffset(Offset = "0x60")]
	public int receiverPlaneCount;

	[Token(Token = "0x4000A89")]
	[FieldOffset(Offset = "0x68")]
	public unsafe CullingSplit* cullingSplits;

	[Token(Token = "0x4000A8A")]
	[FieldOffset(Offset = "0x70")]
	public int cullingSplitCount;

	[Token(Token = "0x4000A8B")]
	[FieldOffset(Offset = "0x74")]
	public BatchCullingViewType viewType;

	[Token(Token = "0x4000A8C")]
	[FieldOffset(Offset = "0x78")]
	public BatchCullingProjectionType projectionType;

	[Token(Token = "0x4000A8D")]
	[FieldOffset(Offset = "0x7C")]
	public BatchCullingFlags cullingFlags;

	[Token(Token = "0x4000A8E")]
	[FieldOffset(Offset = "0x80")]
	public ulong viewID;

	[Token(Token = "0x4000A8F")]
	[FieldOffset(Offset = "0x88")]
	public uint cullingLayerMask;

	[Token(Token = "0x4000A90")]
	[FieldOffset(Offset = "0x8C")]
	public byte splitExclusionMask;

	[Token(Token = "0x4000A91")]
	[FieldOffset(Offset = "0x90")]
	public ulong sceneCullingMask;

	[Token(Token = "0x4000A92")]
	[FieldOffset(Offset = "0x98")]
	public unsafe BatchCullingOutputDrawCommands* drawCommands;

	[Token(Token = "0x4000A93")]
	[FieldOffset(Offset = "0xA0")]
	public uint brgId;

	[Token(Token = "0x4000A94")]
	[FieldOffset(Offset = "0xA8")]
	public IntPtr occlusionBuffer;

	[Token(Token = "0x4000A95")]
	[FieldOffset(Offset = "0xB0")]
	public IntPtr customCullingResult;
}
