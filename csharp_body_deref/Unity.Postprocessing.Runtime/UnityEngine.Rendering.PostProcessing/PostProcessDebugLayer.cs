using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.PostProcessing;

[Serializable]
[Token(Token = "0x200005F")]
public sealed class PostProcessDebugLayer
{
	[Serializable]
	[Token(Token = "0x2000060")]
	public class OverlaySettings
	{
		[Token(Token = "0x4000185")]
		[FieldOffset(Offset = "0x10")]
		public bool linearDepth;

		[Token(Token = "0x4000186")]
		[FieldOffset(Offset = "0x14")]
		[Range(0f, 16f)]
		public float motionColorIntensity;

		[Token(Token = "0x4000187")]
		[FieldOffset(Offset = "0x18")]
		[Range(4f, 128f)]
		public int motionGridSize;

		[Token(Token = "0x4000188")]
		[FieldOffset(Offset = "0x1C")]
		public ColorBlindnessType colorBlindnessType;

		[Token(Token = "0x4000189")]
		[FieldOffset(Offset = "0x20")]
		[Range(0f, 1f)]
		public float colorBlindnessStrength;

		[Token(Token = "0x600010B")]
		[Address(RVA = "0x4829220", Offset = "0x4829220", VA = "0x4829220")]
		public OverlaySettings()
		{
		}
	}

	[Token(Token = "0x400017A")]
	[FieldOffset(Offset = "0x10")]
	public LightMeterMonitor lightMeter;

	[Token(Token = "0x400017B")]
	[FieldOffset(Offset = "0x18")]
	public HistogramMonitor histogram;

	[Token(Token = "0x400017C")]
	[FieldOffset(Offset = "0x20")]
	public WaveformMonitor waveform;

	[Token(Token = "0x400017D")]
	[FieldOffset(Offset = "0x28")]
	public VectorscopeMonitor vectorscope;

	[Token(Token = "0x400017E")]
	[FieldOffset(Offset = "0x30")]
	private Dictionary<MonitorType, Monitor> m_Monitors;

	[Token(Token = "0x400017F")]
	[FieldOffset(Offset = "0x38")]
	private int frameWidth;

	[Token(Token = "0x4000180")]
	[FieldOffset(Offset = "0x3C")]
	private int frameHeight;

	[Token(Token = "0x4000184")]
	[FieldOffset(Offset = "0x50")]
	public OverlaySettings overlaySettings;

	[Token(Token = "0x17000007")]
	public RenderTexture debugOverlayTarget
	{
		[Token(Token = "0x60000F9")]
		[Address(RVA = "0x4827BD0", Offset = "0x4827BD0", VA = "0x4827BD0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60000FA")]
		[Address(RVA = "0x4827BE0", Offset = "0x4827BE0", VA = "0x4827BE0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000008")]
	public bool debugOverlayActive
	{
		[Token(Token = "0x60000FB")]
		[Address(RVA = "0x4827BF0", Offset = "0x4827BF0", VA = "0x4827BF0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60000FC")]
		[Address(RVA = "0x4827C00", Offset = "0x4827C00", VA = "0x4827C00")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000009")]
	public DebugOverlay debugOverlay
	{
		[Token(Token = "0x60000FD")]
		[Address(RVA = "0x4827C10", Offset = "0x4827C10", VA = "0x4827C10")]
		[CompilerGenerated]
		get
		{
			return default(DebugOverlay);
		}
		[Token(Token = "0x60000FE")]
		[Address(RVA = "0x4827C20", Offset = "0x4827C20", VA = "0x4827C20")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x60000FF")]
	[Address(RVA = "0x4827C30", Offset = "0x4827C30", VA = "0x4827C30")]
	internal void OnEnable()
	{
	}

	[Token(Token = "0x6000100")]
	[Address(RVA = "0x4827F40", Offset = "0x4827F40", VA = "0x4827F40")]
	internal void OnDisable()
	{
	}

	[Token(Token = "0x6000101")]
	[Address(RVA = "0x48280D0", Offset = "0x48280D0", VA = "0x48280D0")]
	private void DestroyDebugOverlayTarget()
	{
	}

	[Token(Token = "0x6000102")]
	[Address(RVA = "0x48277D0", Offset = "0x48277D0", VA = "0x48277D0")]
	public void RequestMonitorPass(MonitorType monitor)
	{
	}

	[Token(Token = "0x6000103")]
	[Address(RVA = "0x4827830", Offset = "0x4827830", VA = "0x4827830")]
	public void RequestDebugOverlay(DebugOverlay mode)
	{
	}

	[Token(Token = "0x6000104")]
	[Address(RVA = "0x48281B0", Offset = "0x48281B0", VA = "0x48281B0")]
	internal void SetFrameSize(int width, int height)
	{
	}

	[Token(Token = "0x6000105")]
	[Address(RVA = "0x48281C0", Offset = "0x48281C0", VA = "0x48281C0")]
	public void PushDebugOverlay(CommandBuffer cmd, RenderTargetIdentifier source, PropertySheet sheet, int pass)
	{
	}

	[Token(Token = "0x6000106")]
	[Address(RVA = "0x4828680", Offset = "0x4828680", VA = "0x4828680")]
	internal DepthTextureMode GetCameraFlags()
	{
		return default(DepthTextureMode);
	}

	[Token(Token = "0x6000107")]
	[Address(RVA = "0x48286A0", Offset = "0x48286A0", VA = "0x48286A0")]
	internal void RenderMonitors(PostProcessRenderContext context)
	{
	}

	[Token(Token = "0x6000108")]
	[Address(RVA = "0x4828C00", Offset = "0x4828C00", VA = "0x4828C00")]
	internal void RenderSpecialOverlays(PostProcessRenderContext context)
	{
	}

	[Token(Token = "0x6000109")]
	[Address(RVA = "0x4829080", Offset = "0x4829080", VA = "0x4829080")]
	internal void EndFrame()
	{
	}

	[Token(Token = "0x600010A")]
	[Address(RVA = "0x4829210", Offset = "0x4829210", VA = "0x4829210")]
	public PostProcessDebugLayer()
	{
	}
}
