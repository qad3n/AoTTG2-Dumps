using System;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine.Rendering.PostProcessing;

[Serializable]
[Token(Token = "0x2000032")]
[Preserve]
internal sealed class MultiScaleVO : IAmbientOcclusionMethod
{
	[Token(Token = "0x2000033")]
	internal enum MipLevel
	{
		[Token(Token = "0x40000D4")]
		Original,
		[Token(Token = "0x40000D5")]
		L1,
		[Token(Token = "0x40000D6")]
		L2,
		[Token(Token = "0x40000D7")]
		L3,
		[Token(Token = "0x40000D8")]
		L4,
		[Token(Token = "0x40000D9")]
		L5,
		[Token(Token = "0x40000DA")]
		L6
	}

	[Token(Token = "0x2000034")]
	private enum Pass
	{
		[Token(Token = "0x40000DC")]
		DepthCopy,
		[Token(Token = "0x40000DD")]
		CompositionDeferred,
		[Token(Token = "0x40000DE")]
		CompositionForward,
		[Token(Token = "0x40000DF")]
		DebugOverlay
	}

	[Token(Token = "0x40000C7")]
	[FieldOffset(Offset = "0x10")]
	private readonly float[] m_SampleThickness;

	[Token(Token = "0x40000C8")]
	[FieldOffset(Offset = "0x18")]
	private readonly float[] m_InvThicknessTable;

	[Token(Token = "0x40000C9")]
	[FieldOffset(Offset = "0x20")]
	private readonly float[] m_SampleWeightTable;

	[Token(Token = "0x40000CA")]
	[FieldOffset(Offset = "0x28")]
	private readonly int[] m_Widths;

	[Token(Token = "0x40000CB")]
	[FieldOffset(Offset = "0x30")]
	private readonly int[] m_Heights;

	[Token(Token = "0x40000CC")]
	[FieldOffset(Offset = "0x38")]
	private readonly int[] m_ScaledWidths;

	[Token(Token = "0x40000CD")]
	[FieldOffset(Offset = "0x40")]
	private readonly int[] m_ScaledHeights;

	[Token(Token = "0x40000CE")]
	[FieldOffset(Offset = "0x48")]
	private AmbientOcclusion m_Settings;

	[Token(Token = "0x40000CF")]
	[FieldOffset(Offset = "0x50")]
	private PropertySheet m_PropertySheet;

	[Token(Token = "0x40000D0")]
	[FieldOffset(Offset = "0x58")]
	private PostProcessResources m_Resources;

	[Token(Token = "0x40000D1")]
	[FieldOffset(Offset = "0x60")]
	private RenderTexture m_AmbientOnlyAO;

	[Token(Token = "0x40000D2")]
	[FieldOffset(Offset = "0x68")]
	private readonly RenderTargetIdentifier[] m_MRT;

	[Token(Token = "0x600005F")]
	[Address(RVA = "0x480E120", Offset = "0x480E120", VA = "0x480E120")]
	public MultiScaleVO(AmbientOcclusion settings)
	{
	}

	[Token(Token = "0x6000060")]
	[Address(RVA = "0x4819F50", Offset = "0x4819F50", VA = "0x4819F50", Slot = "4")]
	public DepthTextureMode GetCameraFlags()
	{
		return default(DepthTextureMode);
	}

	[Token(Token = "0x6000061")]
	[Address(RVA = "0x4819F60", Offset = "0x4819F60", VA = "0x4819F60")]
	public void SetResources(PostProcessResources resources)
	{
	}

	[Token(Token = "0x6000062")]
	[Address(RVA = "0x4819F70", Offset = "0x4819F70", VA = "0x4819F70")]
	private void Alloc(CommandBuffer cmd, int id, MipLevel size, RenderTextureFormat format, bool uav, bool dynamicScale)
	{
	}

	[Token(Token = "0x6000063")]
	[Address(RVA = "0x481A0F0", Offset = "0x481A0F0", VA = "0x481A0F0")]
	private void AllocArray(CommandBuffer cmd, int id, MipLevel size, RenderTextureFormat format, bool uav, bool dynamicScale)
	{
	}

	[Token(Token = "0x6000064")]
	[Address(RVA = "0x481A270", Offset = "0x481A270", VA = "0x481A270")]
	private void Release(CommandBuffer cmd, int id)
	{
	}

	[Token(Token = "0x6000065")]
	[Address(RVA = "0x481A290", Offset = "0x481A290", VA = "0x481A290")]
	private Vector4 CalculateZBufferParams(Camera camera)
	{
		return default(Vector4);
	}

	[Token(Token = "0x6000066")]
	[Address(RVA = "0x481A310", Offset = "0x481A310", VA = "0x481A310")]
	private float CalculateTanHalfFovHeight(Camera camera)
	{
		return default(float);
	}

	[Token(Token = "0x6000067")]
	[Address(RVA = "0x481A390", Offset = "0x481A390", VA = "0x481A390")]
	private Vector2 GetSize(MipLevel mip)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000068")]
	[Address(RVA = "0x481A3D0", Offset = "0x481A3D0", VA = "0x481A3D0")]
	private Vector3 GetSizeArray(MipLevel mip)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000069")]
	[Address(RVA = "0x481A420", Offset = "0x481A420", VA = "0x481A420")]
	public void GenerateAOMap(CommandBuffer cmd, Camera camera, RenderTargetIdentifier destination, RenderTargetIdentifier? depthMap, bool invert, bool isMSAA)
	{
	}

	[Token(Token = "0x600006A")]
	[Address(RVA = "0x481AEF0", Offset = "0x481AEF0", VA = "0x481AEF0")]
	private void PushAllocCommands(CommandBuffer cmd, bool isMSAA, Camera camera)
	{
	}

	[Token(Token = "0x600006B")]
	[Address(RVA = "0x481B250", Offset = "0x481B250", VA = "0x481B250")]
	private void PushDownsampleCommands(CommandBuffer cmd, Camera camera, RenderTargetIdentifier? depthMap, bool isMSAA)
	{
	}

	[Token(Token = "0x600006C")]
	[Address(RVA = "0x481BDB0", Offset = "0x481BDB0", VA = "0x481BDB0")]
	private void PushRenderCommands(CommandBuffer cmd, int source, int destination, Vector3 sourceSize, float tanHalfFovH, bool isMSAA)
	{
	}

	[Token(Token = "0x600006D")]
	[Address(RVA = "0x481C620", Offset = "0x481C620", VA = "0x481C620")]
	private void PushUpsampleCommands(CommandBuffer cmd, int lowResDepth, int interleavedAO, int highResDepth, int? highResAO, RenderTargetIdentifier dest, Vector3 lowResDepthSize, Vector2 highResDepthSize, bool isMSAA, bool invert = false)
	{
	}

	[Token(Token = "0x600006E")]
	[Address(RVA = "0x481CBF0", Offset = "0x481CBF0", VA = "0x481CBF0")]
	private void PushReleaseCommands(CommandBuffer cmd)
	{
	}

	[Token(Token = "0x600006F")]
	[Address(RVA = "0x481CDE0", Offset = "0x481CDE0", VA = "0x481CDE0")]
	private void PreparePropertySheet(PostProcessRenderContext context)
	{
	}

	[Token(Token = "0x6000070")]
	[Address(RVA = "0x481CEF0", Offset = "0x481CEF0", VA = "0x481CEF0")]
	private void CheckAOTexture(PostProcessRenderContext context)
	{
	}

	[Token(Token = "0x6000071")]
	[Address(RVA = "0x481D120", Offset = "0x481D120", VA = "0x481D120")]
	private void PushDebug(PostProcessRenderContext context)
	{
	}

	[Token(Token = "0x6000072")]
	[Address(RVA = "0x481D1D0", Offset = "0x481D1D0", VA = "0x481D1D0", Slot = "5")]
	public void RenderAfterOpaque(PostProcessRenderContext context)
	{
	}

	[Token(Token = "0x6000073")]
	[Address(RVA = "0x481D690", Offset = "0x481D690", VA = "0x481D690", Slot = "6")]
	public void RenderAmbientOnly(PostProcessRenderContext context)
	{
	}

	[Token(Token = "0x6000074")]
	[Address(RVA = "0x481D880", Offset = "0x481D880", VA = "0x481D880", Slot = "7")]
	public void CompositeAmbientOnly(PostProcessRenderContext context)
	{
	}

	[Token(Token = "0x6000075")]
	[Address(RVA = "0x481DAE0", Offset = "0x481DAE0", VA = "0x481DAE0", Slot = "8")]
	public void Release()
	{
	}
}
