// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.TemporalAA
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Experimental.Rendering;
using UnityEngine.Rendering.RenderGraphModule;
using UnityEngine.Serialization;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x20001AF")]
public static class TemporalAA
{
	[Token(Token = "0x20001B0")]
	internal static class ShaderConstants
	{
		[Token(Token = "0x4000948")]
		[FieldOffset(Offset = "0x0")]
		public static readonly int _TaaAccumulationTex;

		[Token(Token = "0x4000949")]
		[FieldOffset(Offset = "0x4")]
		public static readonly int _TaaMotionVectorTex;

		[Token(Token = "0x400094A")]
		[FieldOffset(Offset = "0x8")]
		public static readonly int _TaaFilterWeights;

		[Token(Token = "0x400094B")]
		[FieldOffset(Offset = "0xC")]
		public static readonly int _TaaFrameInfluence;

		[Token(Token = "0x400094C")]
		[FieldOffset(Offset = "0x10")]
		public static readonly int _TaaVarianceClampScale;

		[Token(Token = "0x400094D")]
		[FieldOffset(Offset = "0x14")]
		public static readonly int _CameraDepthTexture;
	}

	[Token(Token = "0x20001B1")]
	internal static class ShaderKeywords
	{
		[Token(Token = "0x400094E")]
		[FieldOffset(Offset = "0x0")]
		public static readonly string TAA_LOW_PRECISION_SOURCE;
	}

	[Serializable]
	[Token(Token = "0x20001B2")]
	public struct Settings
	{
		[Token(Token = "0x400094F")]
		[FieldOffset(Offset = "0x0")]
		[SerializeField]
		[FormerlySerializedAs("quality")]
		internal TemporalAAQuality m_Quality;

		[Token(Token = "0x4000950")]
		[FieldOffset(Offset = "0x4")]
		[SerializeField]
		[FormerlySerializedAs("frameInfluence")]
		internal float m_FrameInfluence;

		[Token(Token = "0x4000951")]
		[FieldOffset(Offset = "0x8")]
		[SerializeField]
		[FormerlySerializedAs("jitterScale")]
		internal float m_JitterScale;

		[Token(Token = "0x4000952")]
		[FieldOffset(Offset = "0xC")]
		[SerializeField]
		[FormerlySerializedAs("mipBias")]
		internal float m_MipBias;

		[Token(Token = "0x4000953")]
		[FieldOffset(Offset = "0x10")]
		[SerializeField]
		[FormerlySerializedAs("varianceClampScale")]
		internal float m_VarianceClampScale;

		[Token(Token = "0x4000954")]
		[FieldOffset(Offset = "0x14")]
		[SerializeField]
		[FormerlySerializedAs("contrastAdaptiveSharpening")]
		internal float m_ContrastAdaptiveSharpening;

		[NonSerialized]
		[Token(Token = "0x4000955")]
		[FieldOffset(Offset = "0x18")]
		internal int resetHistoryFrames;

		[NonSerialized]
		[Token(Token = "0x4000956")]
		[FieldOffset(Offset = "0x1C")]
		internal int jitterFrameCountOffset;

		[Token(Token = "0x17000233")]
		public TemporalAAQuality quality
		{
			[Token(Token = "0x6000964")]
			[Address(RVA = "0x6692480", Offset = "0x6691480", VA = "0x6692480")]
			get
			{
				return default(TemporalAAQuality);
			}
			[Token(Token = "0x6000965")]
			[Address(RVA = "0x6692490", Offset = "0x6691490", VA = "0x6692490")]
			set
			{
			}
		}

		[Token(Token = "0x17000234")]
		public float baseBlendFactor
		{
			[Token(Token = "0x6000966")]
			[Address(RVA = "0x66924B0", Offset = "0x66914B0", VA = "0x66924B0")]
			get
			{
				return default(float);
			}
			[Token(Token = "0x6000967")]
			[Address(RVA = "0x66924C0", Offset = "0x66914C0", VA = "0x66924C0")]
			set
			{
			}
		}

		[Token(Token = "0x17000235")]
		public float jitterScale
		{
			[Token(Token = "0x6000968")]
			[Address(RVA = "0x66924F0", Offset = "0x66914F0", VA = "0x66924F0")]
			get
			{
				return default(float);
			}
			[Token(Token = "0x6000969")]
			[Address(RVA = "0x6692500", Offset = "0x6691500", VA = "0x6692500")]
			set
			{
			}
		}

		[Token(Token = "0x17000236")]
		public float mipBias
		{
			[Token(Token = "0x600096A")]
			[Address(RVA = "0x6692520", Offset = "0x6691520", VA = "0x6692520")]
			get
			{
				return default(float);
			}
			[Token(Token = "0x600096B")]
			[Address(RVA = "0x6692530", Offset = "0x6691530", VA = "0x6692530")]
			set
			{
			}
		}

		[Token(Token = "0x17000237")]
		public float varianceClampScale
		{
			[Token(Token = "0x600096C")]
			[Address(RVA = "0x6692560", Offset = "0x6691560", VA = "0x6692560")]
			get
			{
				return default(float);
			}
			[Token(Token = "0x600096D")]
			[Address(RVA = "0x6692570", Offset = "0x6691570", VA = "0x6692570")]
			set
			{
			}
		}

		[Token(Token = "0x17000238")]
		public float contrastAdaptiveSharpening
		{
			[Token(Token = "0x600096E")]
			[Address(RVA = "0x66925A0", Offset = "0x66915A0", VA = "0x66925A0")]
			get
			{
				return default(float);
			}
			[Token(Token = "0x600096F")]
			[Address(RVA = "0x66925B0", Offset = "0x66915B0", VA = "0x66925B0")]
			set
			{
			}
		}

		[Token(Token = "0x6000970")]
		[Address(RVA = "0x66925D0", Offset = "0x66915D0", VA = "0x66925D0")]
		public static Settings Create()
		{
			return default(Settings);
		}
	}

	[Token(Token = "0x20001B3")]
	internal delegate void JitterFunc(int frameIndex, out Vector2 jitter, out bool allowScaling);

	[Token(Token = "0x20001B4")]
	private class TaaPassData
	{
		[Token(Token = "0x4000957")]
		[FieldOffset(Offset = "0x10")]
		internal TextureHandle dstTex;

		[Token(Token = "0x4000958")]
		[FieldOffset(Offset = "0x20")]
		internal TextureHandle srcColorTex;

		[Token(Token = "0x4000959")]
		[FieldOffset(Offset = "0x30")]
		internal TextureHandle srcDepthTex;

		[Token(Token = "0x400095A")]
		[FieldOffset(Offset = "0x40")]
		internal TextureHandle srcMotionVectorTex;

		[Token(Token = "0x400095B")]
		[FieldOffset(Offset = "0x50")]
		internal TextureHandle srcTaaAccumTex;

		[Token(Token = "0x400095C")]
		[FieldOffset(Offset = "0x60")]
		internal Material material;

		[Token(Token = "0x400095D")]
		[FieldOffset(Offset = "0x68")]
		internal int passIndex;

		[Token(Token = "0x400095E")]
		[FieldOffset(Offset = "0x6C")]
		internal float taaFrameInfluence;

		[Token(Token = "0x400095F")]
		[FieldOffset(Offset = "0x70")]
		internal float taaVarianceClampScale;

		[Token(Token = "0x4000960")]
		[FieldOffset(Offset = "0x78")]
		internal float[] taaFilterWeights;

		[Token(Token = "0x4000961")]
		[FieldOffset(Offset = "0x80")]
		internal bool taaLowPrecisionSource;

		[Token(Token = "0x4000962")]
		[FieldOffset(Offset = "0x81")]
		internal bool taaAlphaOutput;

		[Token(Token = "0x6000975")]
		[Address(RVA = "0x66926F0", Offset = "0x66916F0", VA = "0x66926F0")]
		public TaaPassData()
		{
		}
	}

	[Token(Token = "0x4000943")]
	[FieldOffset(Offset = "0x0")]
	internal static JitterFunc s_JitterFunc;

	[Token(Token = "0x4000944")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Vector2[] taaFilterOffsets;

	[Token(Token = "0x4000945")]
	[FieldOffset(Offset = "0x10")]
	private static readonly float[] taaFilterWeights;

	[Token(Token = "0x4000946")]
	[FieldOffset(Offset = "0x18")]
	internal static GraphicsFormat[] AccumulationFormatList;

	[Token(Token = "0x4000947")]
	[FieldOffset(Offset = "0x20")]
	private static uint s_warnCounter;

	[Token(Token = "0x6000959")]
	[Address(RVA = "0x668F6D0", Offset = "0x668E6D0", VA = "0x668F6D0")]
	internal static int CalculateTaaFrameIndex(ref Settings settings)
	{
		return default(int);
	}

	[Token(Token = "0x600095A")]
	[Address(RVA = "0x668FEA0", Offset = "0x668EEA0", VA = "0x668FEA0")]
	internal static Matrix4x4 CalculateJitterMatrix(UniversalCameraData cameraData, JitterFunc jitterFunc)
	{
		return default(Matrix4x4);
	}

	[Token(Token = "0x600095B")]
	[Address(RVA = "0x6690080", Offset = "0x668F080", VA = "0x6690080")]
	internal static void CalculateJitter(int frameIndex, out Vector2 jitter, out bool allowScaling)
	{
	}

	[Token(Token = "0x600095C")]
	[Address(RVA = "0x66900E0", Offset = "0x668F0E0", VA = "0x66900E0")]
	internal static float[] CalculateFilterWeights(ref Settings settings)
	{
		return null;
	}

	[Token(Token = "0x600095D")]
	[Address(RVA = "0x66905C0", Offset = "0x668F5C0", VA = "0x66905C0")]
	internal static RenderTextureDescriptor TemporalAADescFromCameraDesc(ref RenderTextureDescriptor cameraDesc)
	{
		return default(RenderTextureDescriptor);
	}

	[Token(Token = "0x600095E")]
	[Address(RVA = "0x66907F0", Offset = "0x668F7F0", VA = "0x66907F0")]
	internal static string ValidateAndWarn(UniversalCameraData cameraData, bool isSTPRequested = false)
	{
		return null;
	}

	[Token(Token = "0x600095F")]
	[Address(RVA = "0x6690C60", Offset = "0x668FC60", VA = "0x6690C60")]
	internal static void ExecutePass(CommandBuffer cmd, Material taaMaterial, ref CameraData cameraData, RTHandle source, RTHandle destination, RenderTexture motionVectors)
	{
	}

	[Token(Token = "0x6000960")]
	[Address(RVA = "0x6691170", Offset = "0x6690170", VA = "0x6691170")]
	internal static void Render(RenderGraph renderGraph, Material taaMaterial, UniversalCameraData cameraData, ref TextureHandle srcColor, ref TextureHandle srcDepth, ref TextureHandle srcMotionVectors, ref TextureHandle dstColor)
	{
	}
}
