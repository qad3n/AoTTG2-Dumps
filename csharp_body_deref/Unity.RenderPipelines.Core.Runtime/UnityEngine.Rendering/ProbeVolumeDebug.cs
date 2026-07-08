using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x200011F")]
internal class ProbeVolumeDebug : IDebugData
{
	[Token(Token = "0x400042A")]
	[FieldOffset(Offset = "0x10")]
	public bool drawProbes;

	[Token(Token = "0x400042B")]
	[FieldOffset(Offset = "0x11")]
	public bool drawBricks;

	[Token(Token = "0x400042C")]
	[FieldOffset(Offset = "0x12")]
	public bool drawCells;

	[Token(Token = "0x400042D")]
	[FieldOffset(Offset = "0x13")]
	public bool realtimeSubdivision;

	[Token(Token = "0x400042E")]
	[FieldOffset(Offset = "0x14")]
	public int subdivisionCellUpdatePerFrame;

	[Token(Token = "0x400042F")]
	[FieldOffset(Offset = "0x18")]
	public float subdivisionDelayInSeconds;

	[Token(Token = "0x4000430")]
	[FieldOffset(Offset = "0x1C")]
	public DebugProbeShadingMode probeShading;

	[Token(Token = "0x4000431")]
	[FieldOffset(Offset = "0x20")]
	public float probeSize;

	[Token(Token = "0x4000432")]
	[FieldOffset(Offset = "0x24")]
	public float subdivisionViewCullingDistance;

	[Token(Token = "0x4000433")]
	[FieldOffset(Offset = "0x28")]
	public float probeCullingDistance;

	[Token(Token = "0x4000434")]
	[FieldOffset(Offset = "0x2C")]
	public int maxSubdivToVisualize;

	[Token(Token = "0x4000435")]
	[FieldOffset(Offset = "0x30")]
	public int minSubdivToVisualize;

	[Token(Token = "0x4000436")]
	[FieldOffset(Offset = "0x34")]
	public float exposureCompensation;

	[Token(Token = "0x4000437")]
	[FieldOffset(Offset = "0x38")]
	public bool drawProbeSamplingDebug;

	[Token(Token = "0x4000438")]
	[FieldOffset(Offset = "0x3C")]
	public float probeSamplingDebugSize;

	[Token(Token = "0x4000439")]
	[FieldOffset(Offset = "0x40")]
	public bool drawVirtualOffsetPush;

	[Token(Token = "0x400043A")]
	[FieldOffset(Offset = "0x44")]
	public float offsetSize;

	[Token(Token = "0x400043B")]
	[FieldOffset(Offset = "0x48")]
	public bool freezeStreaming;

	[Token(Token = "0x400043C")]
	[FieldOffset(Offset = "0x49")]
	public bool displayCellStreamingScore;

	[Token(Token = "0x400043D")]
	[FieldOffset(Offset = "0x4A")]
	public bool displayIndexFragmentation;

	[Token(Token = "0x400043E")]
	[FieldOffset(Offset = "0x4C")]
	public int otherStateIndex;

	[Token(Token = "0x600091B")]
	[Address(RVA = "0x4893D00", Offset = "0x4893D00", VA = "0x4893D00")]
	public ProbeVolumeDebug()
	{
	}

	[Token(Token = "0x600091C")]
	[Address(RVA = "0x4893D90", Offset = "0x4893D90", VA = "0x4893D90")]
	private void Init()
	{
	}

	[Token(Token = "0x600091D")]
	[Address(RVA = "0x4893DE0", Offset = "0x4893DE0", VA = "0x4893DE0", Slot = "4")]
	public Action GetReset()
	{
		return null;
	}
}
