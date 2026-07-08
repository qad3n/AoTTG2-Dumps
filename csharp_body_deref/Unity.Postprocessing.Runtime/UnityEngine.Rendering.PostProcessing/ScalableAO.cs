using System;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine.Rendering.PostProcessing;

[Serializable]
[Token(Token = "0x2000035")]
[Preserve]
internal sealed class ScalableAO : IAmbientOcclusionMethod
{
	[Token(Token = "0x2000036")]
	private enum Pass
	{
		[Token(Token = "0x40000E6")]
		OcclusionEstimationForward,
		[Token(Token = "0x40000E7")]
		OcclusionEstimationDeferred,
		[Token(Token = "0x40000E8")]
		HorizontalBlurForward,
		[Token(Token = "0x40000E9")]
		HorizontalBlurDeferred,
		[Token(Token = "0x40000EA")]
		VerticalBlur,
		[Token(Token = "0x40000EB")]
		CompositionForward,
		[Token(Token = "0x40000EC")]
		CompositionDeferred,
		[Token(Token = "0x40000ED")]
		DebugOverlay
	}

	[Token(Token = "0x40000E0")]
	[FieldOffset(Offset = "0x10")]
	private RenderTexture m_Result;

	[Token(Token = "0x40000E1")]
	[FieldOffset(Offset = "0x18")]
	private PropertySheet m_PropertySheet;

	[Token(Token = "0x40000E2")]
	[FieldOffset(Offset = "0x20")]
	private AmbientOcclusion m_Settings;

	[Token(Token = "0x40000E3")]
	[FieldOffset(Offset = "0x28")]
	private readonly RenderTargetIdentifier[] m_MRT;

	[Token(Token = "0x40000E4")]
	[FieldOffset(Offset = "0x30")]
	private readonly int[] m_SampleCount;

	[Token(Token = "0x6000076")]
	[Address(RVA = "0x480DF60", Offset = "0x480DF60", VA = "0x480DF60")]
	public ScalableAO(AmbientOcclusion settings)
	{
	}

	[Token(Token = "0x6000077")]
	[Address(RVA = "0x481DB50", Offset = "0x481DB50", VA = "0x481DB50", Slot = "4")]
	public DepthTextureMode GetCameraFlags()
	{
		return default(DepthTextureMode);
	}

	[Token(Token = "0x6000078")]
	[Address(RVA = "0x481DB60", Offset = "0x481DB60", VA = "0x481DB60")]
	private void DoLazyInitialization(PostProcessRenderContext context)
	{
	}

	[Token(Token = "0x6000079")]
	[Address(RVA = "0x481DD50", Offset = "0x481DD50", VA = "0x481DD50")]
	private void Render(PostProcessRenderContext context, CommandBuffer cmd, int occlusionSource)
	{
	}

	[Token(Token = "0x600007A")]
	[Address(RVA = "0x481E550", Offset = "0x481E550", VA = "0x481E550", Slot = "5")]
	public void RenderAfterOpaque(PostProcessRenderContext context)
	{
	}

	[Token(Token = "0x600007B")]
	[Address(RVA = "0x481E7C0", Offset = "0x481E7C0", VA = "0x481E7C0", Slot = "6")]
	public void RenderAmbientOnly(PostProcessRenderContext context)
	{
	}

	[Token(Token = "0x600007C")]
	[Address(RVA = "0x481E840", Offset = "0x481E840", VA = "0x481E840", Slot = "7")]
	public void CompositeAmbientOnly(PostProcessRenderContext context)
	{
	}

	[Token(Token = "0x600007D")]
	[Address(RVA = "0x481EAA0", Offset = "0x481EAA0", VA = "0x481EAA0", Slot = "8")]
	public void Release()
	{
	}
}
