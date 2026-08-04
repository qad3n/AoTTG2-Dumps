// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.PostProcessing.PostProcessDebugLayer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4B4E310", Offset = "0x4B4E310", VA = "0x4B4E310")]
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
		[Address(RVA = "0x4B4CCC0", Offset = "0x4B4CCC0", VA = "0x4B4CCC0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60000FA")]
		[Address(RVA = "0x4B4CCD0", Offset = "0x4B4CCD0", VA = "0x4B4CCD0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000008")]
	public bool debugOverlayActive
	{
		[Token(Token = "0x60000FB")]
		[Address(RVA = "0x4B4CCE0", Offset = "0x4B4CCE0", VA = "0x4B4CCE0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60000FC")]
		[Address(RVA = "0x4B4CCF0", Offset = "0x4B4CCF0", VA = "0x4B4CCF0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000009")]
	public DebugOverlay debugOverlay
	{
		[Token(Token = "0x60000FD")]
		[Address(RVA = "0x4B4CD00", Offset = "0x4B4CD00", VA = "0x4B4CD00")]
		[CompilerGenerated]
		get
		{
			return default(DebugOverlay);
		}
		[Token(Token = "0x60000FE")]
		[Address(RVA = "0x4B4CD10", Offset = "0x4B4CD10", VA = "0x4B4CD10")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x60000FF")]
	[Address(RVA = "0x4B4CD20", Offset = "0x4B4CD20", VA = "0x4B4CD20")]
	internal void OnEnable()
	{
	}

	[Token(Token = "0x6000100")]
	[Address(RVA = "0x4B4D030", Offset = "0x4B4D030", VA = "0x4B4D030")]
	internal void OnDisable()
	{
	}

	[Token(Token = "0x6000101")]
	[Address(RVA = "0x4B4D1C0", Offset = "0x4B4D1C0", VA = "0x4B4D1C0")]
	private void DestroyDebugOverlayTarget()
	{
	}

	[Token(Token = "0x6000102")]
	[Address(RVA = "0x4B4C8C0", Offset = "0x4B4C8C0", VA = "0x4B4C8C0")]
	public void RequestMonitorPass(MonitorType monitor)
	{
	}

	[Token(Token = "0x6000103")]
	[Address(RVA = "0x4B4C920", Offset = "0x4B4C920", VA = "0x4B4C920")]
	public void RequestDebugOverlay(DebugOverlay mode)
	{
	}

	[Token(Token = "0x6000104")]
	[Address(RVA = "0x4B4D2A0", Offset = "0x4B4D2A0", VA = "0x4B4D2A0")]
	internal void SetFrameSize(int width, int height)
	{
	}

	[Token(Token = "0x6000105")]
	[Address(RVA = "0x4B4D2B0", Offset = "0x4B4D2B0", VA = "0x4B4D2B0")]
	public void PushDebugOverlay(CommandBuffer cmd, RenderTargetIdentifier source, PropertySheet sheet, int pass)
	{
	}

	[Token(Token = "0x6000106")]
	[Address(RVA = "0x4B4D770", Offset = "0x4B4D770", VA = "0x4B4D770")]
	internal DepthTextureMode GetCameraFlags()
	{
		return default(DepthTextureMode);
	}

	[Token(Token = "0x6000107")]
	[Address(RVA = "0x4B4D790", Offset = "0x4B4D790", VA = "0x4B4D790")]
	internal void RenderMonitors(PostProcessRenderContext context)
	{
	}

	[Token(Token = "0x6000108")]
	[Address(RVA = "0x4B4DCF0", Offset = "0x4B4DCF0", VA = "0x4B4DCF0")]
	internal void RenderSpecialOverlays(PostProcessRenderContext context)
	{
	}

	[Token(Token = "0x6000109")]
	[Address(RVA = "0x4B4E170", Offset = "0x4B4E170", VA = "0x4B4E170")]
	internal void EndFrame()
	{
	}

	[Token(Token = "0x600010A")]
	[Address(RVA = "0x4B4E300", Offset = "0x4B4E300", VA = "0x4B4E300")]
	public PostProcessDebugLayer()
	{
	}
}
