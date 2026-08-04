// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.PostProcessing.ScalableAO
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x4B33050", Offset = "0x4B33050", VA = "0x4B33050")]
	public ScalableAO(AmbientOcclusion settings)
	{
	}

	[Token(Token = "0x6000077")]
	[Address(RVA = "0x4B42C40", Offset = "0x4B42C40", VA = "0x4B42C40", Slot = "4")]
	public DepthTextureMode GetCameraFlags()
	{
		return default(DepthTextureMode);
	}

	[Token(Token = "0x6000078")]
	[Address(RVA = "0x4B42C50", Offset = "0x4B42C50", VA = "0x4B42C50")]
	private void DoLazyInitialization(PostProcessRenderContext context)
	{
	}

	[Token(Token = "0x6000079")]
	[Address(RVA = "0x4B42E40", Offset = "0x4B42E40", VA = "0x4B42E40")]
	private void Render(PostProcessRenderContext context, CommandBuffer cmd, int occlusionSource)
	{
	}

	[Token(Token = "0x600007A")]
	[Address(RVA = "0x4B43640", Offset = "0x4B43640", VA = "0x4B43640", Slot = "5")]
	public void RenderAfterOpaque(PostProcessRenderContext context)
	{
	}

	[Token(Token = "0x600007B")]
	[Address(RVA = "0x4B438B0", Offset = "0x4B438B0", VA = "0x4B438B0", Slot = "6")]
	public void RenderAmbientOnly(PostProcessRenderContext context)
	{
	}

	[Token(Token = "0x600007C")]
	[Address(RVA = "0x4B43930", Offset = "0x4B43930", VA = "0x4B43930", Slot = "7")]
	public void CompositeAmbientOnly(PostProcessRenderContext context)
	{
	}

	[Token(Token = "0x600007D")]
	[Address(RVA = "0x4B43B90", Offset = "0x4B43B90", VA = "0x4B43B90", Slot = "8")]
	public void Release()
	{
	}
}
