// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.ProbeVolumeDebug
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x200011B")]
internal class ProbeVolumeDebug : IDebugData
{
	[Token(Token = "0x40004FF")]
	[FieldOffset(Offset = "0x10")]
	public bool drawProbes;

	[Token(Token = "0x4000500")]
	[FieldOffset(Offset = "0x11")]
	public bool drawBricks;

	[Token(Token = "0x4000501")]
	[FieldOffset(Offset = "0x12")]
	public bool drawCells;

	[Token(Token = "0x4000502")]
	[FieldOffset(Offset = "0x13")]
	public bool realtimeSubdivision;

	[Token(Token = "0x4000503")]
	[FieldOffset(Offset = "0x14")]
	public int subdivisionCellUpdatePerFrame;

	[Token(Token = "0x4000504")]
	[FieldOffset(Offset = "0x18")]
	public float subdivisionDelayInSeconds;

	[Token(Token = "0x4000505")]
	[FieldOffset(Offset = "0x1C")]
	public DebugProbeShadingMode probeShading;

	[Token(Token = "0x4000506")]
	[FieldOffset(Offset = "0x20")]
	public float probeSize;

	[Token(Token = "0x4000507")]
	[FieldOffset(Offset = "0x24")]
	public float subdivisionViewCullingDistance;

	[Token(Token = "0x4000508")]
	[FieldOffset(Offset = "0x28")]
	public float probeCullingDistance;

	[Token(Token = "0x4000509")]
	[FieldOffset(Offset = "0x2C")]
	public int maxSubdivToVisualize;

	[Token(Token = "0x400050A")]
	[FieldOffset(Offset = "0x30")]
	public int minSubdivToVisualize;

	[Token(Token = "0x400050B")]
	[FieldOffset(Offset = "0x34")]
	public float exposureCompensation;

	[Token(Token = "0x400050C")]
	[FieldOffset(Offset = "0x38")]
	public bool drawProbeSamplingDebug;

	[Token(Token = "0x400050D")]
	[FieldOffset(Offset = "0x3C")]
	public float probeSamplingDebugSize;

	[Token(Token = "0x400050E")]
	[FieldOffset(Offset = "0x40")]
	public bool debugWithSamplingNoise;

	[Token(Token = "0x400050F")]
	[FieldOffset(Offset = "0x44")]
	public uint samplingRenderingLayer;

	[Token(Token = "0x4000510")]
	[FieldOffset(Offset = "0x48")]
	public bool drawVirtualOffsetPush;

	[Token(Token = "0x4000511")]
	[FieldOffset(Offset = "0x4C")]
	public float offsetSize;

	[Token(Token = "0x4000512")]
	[FieldOffset(Offset = "0x50")]
	public bool freezeStreaming;

	[Token(Token = "0x4000513")]
	[FieldOffset(Offset = "0x51")]
	public bool displayCellStreamingScore;

	[Token(Token = "0x4000514")]
	[FieldOffset(Offset = "0x52")]
	public bool displayIndexFragmentation;

	[Token(Token = "0x4000515")]
	[FieldOffset(Offset = "0x54")]
	public int otherStateIndex;

	[Token(Token = "0x4000516")]
	[FieldOffset(Offset = "0x58")]
	public bool verboseStreamingLog;

	[Token(Token = "0x4000517")]
	[FieldOffset(Offset = "0x59")]
	public bool debugStreaming;

	[Token(Token = "0x4000518")]
	[FieldOffset(Offset = "0x5A")]
	public bool autoDrawProbes;

	[Token(Token = "0x4000519")]
	[FieldOffset(Offset = "0x5B")]
	public bool isolationProbeDebug;

	[Token(Token = "0x400051A")]
	[FieldOffset(Offset = "0x5C")]
	public byte visibleLayers;

	[Token(Token = "0x400051B")]
	[FieldOffset(Offset = "0x0")]
	public static Vector3 currentOffset;

	[Token(Token = "0x400051C")]
	[FieldOffset(Offset = "0xC")]
	internal static int s_ActiveAdjustmentVolumes;

	[Token(Token = "0x6000A44")]
	[Address(RVA = "0x2B190E0", Offset = "0x2B176E0", VA = "0x182B190E0")]
	public ProbeVolumeDebug()
	{
	}

	[Token(Token = "0x6000A45")]
	[Address(RVA = "0x2B19070", Offset = "0x2B17670", VA = "0x182B19070")]
	private void Init()
	{
	}

	[Token(Token = "0x6000A46")]
	[Address(RVA = "0x2B19000", Offset = "0x2B17600", VA = "0x182B19000", Slot = "4")]
	public Action GetReset()
	{
		return null;
	}
}
