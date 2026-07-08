using Il2CppDummyDll;
using Unity.Jobs;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000317")]
[UnityEngine.Bindings.NativeHeader("Runtime/Camera/BatchRendererGroup.h")]
[UnityEngine.Scripting.UsedByNativeCode]
internal struct BatchRendererCullingOutput
{
	[Token(Token = "0x40009CC")]
	[FieldOffset(Offset = "0x0")]
	public JobHandle cullingJobsFence;

	[Token(Token = "0x40009CD")]
	[FieldOffset(Offset = "0x10")]
	public Matrix4x4 localToWorldMatrix;

	[Token(Token = "0x40009CE")]
	[FieldOffset(Offset = "0x50")]
	public unsafe Plane* cullingPlanes;

	[Token(Token = "0x40009CF")]
	[FieldOffset(Offset = "0x58")]
	public int cullingPlaneCount;

	[Token(Token = "0x40009D0")]
	[FieldOffset(Offset = "0x5C")]
	public int receiverPlaneOffset;

	[Token(Token = "0x40009D1")]
	[FieldOffset(Offset = "0x60")]
	public int receiverPlaneCount;

	[Token(Token = "0x40009D2")]
	[FieldOffset(Offset = "0x68")]
	public unsafe CullingSplit* cullingSplits;

	[Token(Token = "0x40009D3")]
	[FieldOffset(Offset = "0x70")]
	public int cullingSplitCount;

	[Token(Token = "0x40009D4")]
	[FieldOffset(Offset = "0x74")]
	public BatchCullingViewType viewType;

	[Token(Token = "0x40009D5")]
	[FieldOffset(Offset = "0x78")]
	public BatchCullingProjectionType projectionType;

	[Token(Token = "0x40009D6")]
	[FieldOffset(Offset = "0x7C")]
	public BatchCullingFlags cullingFlags;

	[Token(Token = "0x40009D7")]
	[FieldOffset(Offset = "0x80")]
	public ulong viewID;

	[Token(Token = "0x40009D8")]
	[FieldOffset(Offset = "0x88")]
	public uint cullingLayerMask;

	[Token(Token = "0x40009D9")]
	[FieldOffset(Offset = "0x90")]
	public ulong sceneCullingMask;

	[Token(Token = "0x40009DA")]
	[FieldOffset(Offset = "0x98")]
	public unsafe BatchCullingOutputDrawCommands* drawCommands;
}
