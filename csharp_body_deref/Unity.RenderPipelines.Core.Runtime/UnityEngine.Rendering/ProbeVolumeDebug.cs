// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.ProbeVolumeDebug
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000133")]
internal class ProbeVolumeDebug : IDebugData
{
	[Token(Token = "0x400050F")]
	[FieldOffset(Offset = "0x10")]
	public bool drawProbes;

	[Token(Token = "0x4000510")]
	[FieldOffset(Offset = "0x11")]
	public bool drawBricks;

	[Token(Token = "0x4000511")]
	[FieldOffset(Offset = "0x12")]
	public bool drawCells;

	[Token(Token = "0x4000512")]
	[FieldOffset(Offset = "0x13")]
	public bool realtimeSubdivision;

	[Token(Token = "0x4000513")]
	[FieldOffset(Offset = "0x14")]
	public int subdivisionCellUpdatePerFrame;

	[Token(Token = "0x4000514")]
	[FieldOffset(Offset = "0x18")]
	public float subdivisionDelayInSeconds;

	[Token(Token = "0x4000515")]
	[FieldOffset(Offset = "0x1C")]
	public DebugProbeShadingMode probeShading;

	[Token(Token = "0x4000516")]
	[FieldOffset(Offset = "0x20")]
	public float probeSize;

	[Token(Token = "0x4000517")]
	[FieldOffset(Offset = "0x24")]
	public float subdivisionViewCullingDistance;

	[Token(Token = "0x4000518")]
	[FieldOffset(Offset = "0x28")]
	public float probeCullingDistance;

	[Token(Token = "0x4000519")]
	[FieldOffset(Offset = "0x2C")]
	public int maxSubdivToVisualize;

	[Token(Token = "0x400051A")]
	[FieldOffset(Offset = "0x30")]
	public int minSubdivToVisualize;

	[Token(Token = "0x400051B")]
	[FieldOffset(Offset = "0x34")]
	public float exposureCompensation;

	[Token(Token = "0x400051C")]
	[FieldOffset(Offset = "0x38")]
	public bool drawProbeSamplingDebug;

	[Token(Token = "0x400051D")]
	[FieldOffset(Offset = "0x3C")]
	public float probeSamplingDebugSize;

	[Token(Token = "0x400051E")]
	[FieldOffset(Offset = "0x40")]
	public bool drawVirtualOffsetPush;

	[Token(Token = "0x400051F")]
	[FieldOffset(Offset = "0x44")]
	public float offsetSize;

	[Token(Token = "0x4000520")]
	[FieldOffset(Offset = "0x48")]
	public bool freezeStreaming;

	[Token(Token = "0x4000521")]
	[FieldOffset(Offset = "0x49")]
	public bool displayCellStreamingScore;

	[Token(Token = "0x4000522")]
	[FieldOffset(Offset = "0x4A")]
	public bool displayIndexFragmentation;

	[Token(Token = "0x4000523")]
	[FieldOffset(Offset = "0x4C")]
	public int otherStateIndex;

	[Token(Token = "0x6000A0C")]
	[Address(RVA = "0x4BCCCA0", Offset = "0x4BCCCA0", VA = "0x4BCCCA0")]
	public ProbeVolumeDebug()
	{
	}

	[Token(Token = "0x6000A0D")]
	[Address(RVA = "0x4BCCD30", Offset = "0x4BCCD30", VA = "0x4BCCD30")]
	private void Init()
	{
	}

	[Token(Token = "0x6000A0E")]
	[Address(RVA = "0x4BCCD80", Offset = "0x4BCCD80", VA = "0x4BCCD80", Slot = "4")]
	public Action GetReset()
	{
		return null;
	}
}
