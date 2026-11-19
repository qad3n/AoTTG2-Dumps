// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.BatchRendererCullingOutput
// Update status: unchanged since the previous dump
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

[Token(Token = "0x20003BE")]
[UnityEngine.Bindings.NativeHeader("Runtime/Camera/BatchRendererGroup.h")]
[UnityEngine.Scripting.UsedByNativeCode]
internal struct BatchRendererCullingOutput
{
	[Token(Token = "0x4000C07")]
	[FieldOffset(Offset = "0x0")]
	public JobHandle cullingJobsFence;

	[Token(Token = "0x4000C08")]
	[FieldOffset(Offset = "0x10")]
	public Matrix4x4 localToWorldMatrix;

	[Token(Token = "0x4000C09")]
	[FieldOffset(Offset = "0x50")]
	public unsafe Plane* cullingPlanes;

	[Token(Token = "0x4000C0A")]
	[FieldOffset(Offset = "0x58")]
	public int cullingPlaneCount;

	[Token(Token = "0x4000C0B")]
	[FieldOffset(Offset = "0x5C")]
	public int receiverPlaneOffset;

	[Token(Token = "0x4000C0C")]
	[FieldOffset(Offset = "0x60")]
	public int receiverPlaneCount;

	[Token(Token = "0x4000C0D")]
	[FieldOffset(Offset = "0x68")]
	public unsafe CullingSplit* cullingSplits;

	[Token(Token = "0x4000C0E")]
	[FieldOffset(Offset = "0x70")]
	public int cullingSplitCount;

	[Token(Token = "0x4000C0F")]
	[FieldOffset(Offset = "0x74")]
	public BatchCullingViewType viewType;

	[Token(Token = "0x4000C10")]
	[FieldOffset(Offset = "0x78")]
	public BatchCullingProjectionType projectionType;

	[Token(Token = "0x4000C11")]
	[FieldOffset(Offset = "0x7C")]
	public BatchCullingFlags cullingFlags;

	[Token(Token = "0x4000C12")]
	[FieldOffset(Offset = "0x80")]
	public ulong viewID;

	[Token(Token = "0x4000C13")]
	[FieldOffset(Offset = "0x88")]
	public uint cullingLayerMask;

	[Token(Token = "0x4000C14")]
	[FieldOffset(Offset = "0x8C")]
	public byte splitExclusionMask;

	[Token(Token = "0x4000C15")]
	[FieldOffset(Offset = "0x90")]
	public ulong sceneCullingMask;

	[Token(Token = "0x4000C16")]
	[FieldOffset(Offset = "0x98")]
	public unsafe BatchCullingOutputDrawCommands* drawCommands;

	[Token(Token = "0x4000C17")]
	[FieldOffset(Offset = "0xA0")]
	public uint brgId;

	[Token(Token = "0x4000C18")]
	[FieldOffset(Offset = "0xA8")]
	public IntPtr occlusionBuffer;

	[Token(Token = "0x4000C19")]
	[FieldOffset(Offset = "0xB0")]
	public IntPtr customCullingResult;
}
