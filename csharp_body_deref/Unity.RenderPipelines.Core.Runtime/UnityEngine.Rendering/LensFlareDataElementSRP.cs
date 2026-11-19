// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.LensFlareDataElementSRP
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Serialization;

namespace UnityEngine.Rendering;

[Serializable]
[Token(Token = "0x200015B")]
public sealed class LensFlareDataElementSRP
{
	[Token(Token = "0x40006B2")]
	[FieldOffset(Offset = "0x10")]
	public LensFlareDataSRP lensFlareDataSRP;

	[Token(Token = "0x40006B3")]
	[FieldOffset(Offset = "0x18")]
	public bool visible;

	[Token(Token = "0x40006B4")]
	[FieldOffset(Offset = "0x1C")]
	public float position;

	[Token(Token = "0x40006B5")]
	[FieldOffset(Offset = "0x20")]
	public Vector2 positionOffset;

	[Token(Token = "0x40006B6")]
	[FieldOffset(Offset = "0x28")]
	public float angularOffset;

	[Token(Token = "0x40006B7")]
	[FieldOffset(Offset = "0x2C")]
	public Vector2 translationScale;

	[Token(Token = "0x40006B8")]
	[FieldOffset(Offset = "0x34")]
	[Range(0f, 1f)]
	public float ringThickness;

	[Token(Token = "0x40006B9")]
	[FieldOffset(Offset = "0x38")]
	[Range(-1f, 1f)]
	public float hoopFactor;

	[Token(Token = "0x40006BA")]
	[FieldOffset(Offset = "0x3C")]
	public float noiseAmplitude;

	[Token(Token = "0x40006BB")]
	[FieldOffset(Offset = "0x40")]
	public int noiseFrequency;

	[Token(Token = "0x40006BC")]
	[FieldOffset(Offset = "0x44")]
	public float noiseSpeed;

	[Token(Token = "0x40006BD")]
	[FieldOffset(Offset = "0x48")]
	public float shapeCutOffSpeed;

	[Token(Token = "0x40006BE")]
	[FieldOffset(Offset = "0x4C")]
	public float shapeCutOffRadius;

	[Token(Token = "0x40006BF")]
	[FieldOffset(Offset = "0x50")]
	[Min(0f)]
	[SerializeField]
	[FormerlySerializedAs("localIntensity")]
	private float m_LocalIntensity;

	[Token(Token = "0x40006C0")]
	[FieldOffset(Offset = "0x58")]
	public Texture lensFlareTexture;

	[Token(Token = "0x40006C1")]
	[FieldOffset(Offset = "0x60")]
	public float uniformScale;

	[Token(Token = "0x40006C2")]
	[FieldOffset(Offset = "0x64")]
	public Vector2 sizeXY;

	[Token(Token = "0x40006C3")]
	[FieldOffset(Offset = "0x6C")]
	public bool allowMultipleElement;

	[Token(Token = "0x40006C4")]
	[FieldOffset(Offset = "0x70")]
	[Min(1f)]
	[SerializeField]
	[FormerlySerializedAs("count")]
	private int m_Count;

	[Token(Token = "0x40006C5")]
	[FieldOffset(Offset = "0x74")]
	public bool preserveAspectRatio;

	[Token(Token = "0x40006C6")]
	[FieldOffset(Offset = "0x78")]
	public float rotation;

	[Token(Token = "0x40006C7")]
	[FieldOffset(Offset = "0x7C")]
	public SRPLensFlareColorType tintColorType;

	[Token(Token = "0x40006C8")]
	[FieldOffset(Offset = "0x80")]
	public Color tint;

	[Token(Token = "0x40006C9")]
	[FieldOffset(Offset = "0x90")]
	public TextureGradient tintGradient;

	[Token(Token = "0x40006CA")]
	[FieldOffset(Offset = "0x98")]
	public SRPLensFlareBlendMode blendMode;

	[Token(Token = "0x40006CB")]
	[FieldOffset(Offset = "0x9C")]
	public bool autoRotate;

	[Token(Token = "0x40006CC")]
	[FieldOffset(Offset = "0xA0")]
	public SRPLensFlareType flareType;

	[Token(Token = "0x40006CD")]
	[FieldOffset(Offset = "0xA4")]
	public bool modulateByLightColor;

	[Token(Token = "0x40006CE")]
	[FieldOffset(Offset = "0xA5")]
	[SerializeField]
	private bool isFoldOpened;

	[Token(Token = "0x40006CF")]
	[FieldOffset(Offset = "0xA8")]
	public SRPLensFlareDistribution distribution;

	[Token(Token = "0x40006D0")]
	[FieldOffset(Offset = "0xAC")]
	public float lengthSpread;

	[Token(Token = "0x40006D1")]
	[FieldOffset(Offset = "0xB0")]
	public AnimationCurve positionCurve;

	[Token(Token = "0x40006D2")]
	[FieldOffset(Offset = "0xB8")]
	public AnimationCurve scaleCurve;

	[Token(Token = "0x40006D3")]
	[FieldOffset(Offset = "0xC0")]
	public int seed;

	[Token(Token = "0x40006D4")]
	[FieldOffset(Offset = "0xC8")]
	public Gradient colorGradient;

	[Token(Token = "0x40006D5")]
	[FieldOffset(Offset = "0xD0")]
	[Range(0f, 1f)]
	[SerializeField]
	[FormerlySerializedAs("intensityVariation")]
	private float m_IntensityVariation;

	[Token(Token = "0x40006D6")]
	[FieldOffset(Offset = "0xD4")]
	public Vector2 positionVariation;

	[Token(Token = "0x40006D7")]
	[FieldOffset(Offset = "0xDC")]
	public float scaleVariation;

	[Token(Token = "0x40006D8")]
	[FieldOffset(Offset = "0xE0")]
	public float rotationVariation;

	[Token(Token = "0x40006D9")]
	[FieldOffset(Offset = "0xE4")]
	public bool enableRadialDistortion;

	[Token(Token = "0x40006DA")]
	[FieldOffset(Offset = "0xE8")]
	public Vector2 targetSizeDistortion;

	[Token(Token = "0x40006DB")]
	[FieldOffset(Offset = "0xF0")]
	public AnimationCurve distortionCurve;

	[Token(Token = "0x40006DC")]
	[FieldOffset(Offset = "0xF8")]
	public bool distortionRelativeToCenter;

	[Token(Token = "0x40006DD")]
	[FieldOffset(Offset = "0xFC")]
	[Range(0f, 1f)]
	[SerializeField]
	[FormerlySerializedAs("fallOff")]
	private float m_FallOff;

	[Token(Token = "0x40006DE")]
	[FieldOffset(Offset = "0x100")]
	[Range(0f, 1f)]
	[SerializeField]
	[FormerlySerializedAs("edgeOffset")]
	private float m_EdgeOffset;

	[Token(Token = "0x40006DF")]
	[FieldOffset(Offset = "0x104")]
	[Min(3f)]
	[SerializeField]
	[FormerlySerializedAs("sideCount")]
	private int m_SideCount;

	[Token(Token = "0x40006E0")]
	[FieldOffset(Offset = "0x108")]
	[Range(0f, 1f)]
	[SerializeField]
	[FormerlySerializedAs("sdfRoundness")]
	private float m_SdfRoundness;

	[Token(Token = "0x40006E1")]
	[FieldOffset(Offset = "0x10C")]
	public bool inverseSDF;

	[Token(Token = "0x40006E2")]
	[FieldOffset(Offset = "0x110")]
	public float uniformAngle;

	[Token(Token = "0x40006E3")]
	[FieldOffset(Offset = "0x118")]
	public AnimationCurve uniformAngleCurve;

	[Token(Token = "0x17000147")]
	public float localIntensity
	{
		[Token(Token = "0x6000B3D")]
		[Address(RVA = "0x651D080", Offset = "0x651C080", VA = "0x651D080")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000B3E")]
		[Address(RVA = "0x651C9E0", Offset = "0x651B9E0", VA = "0x651C9E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000148")]
	public int count
	{
		[Token(Token = "0x6000B3F")]
		[Address(RVA = "0x651D090", Offset = "0x651C090", VA = "0x651D090")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000B40")]
		[Address(RVA = "0x651C9F0", Offset = "0x651B9F0", VA = "0x651C9F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000149")]
	public float intensityVariation
	{
		[Token(Token = "0x6000B41")]
		[Address(RVA = "0x651D0A0", Offset = "0x651C0A0", VA = "0x651D0A0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000B42")]
		[Address(RVA = "0x651CA00", Offset = "0x651BA00", VA = "0x651CA00")]
		set
		{
		}
	}

	[Token(Token = "0x1700014A")]
	public float fallOff
	{
		[Token(Token = "0x6000B43")]
		[Address(RVA = "0x651D0B0", Offset = "0x651C0B0", VA = "0x651D0B0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000B44")]
		[Address(RVA = "0x651CA10", Offset = "0x651BA10", VA = "0x651CA10")]
		set
		{
		}
	}

	[Token(Token = "0x1700014B")]
	public float edgeOffset
	{
		[Token(Token = "0x6000B45")]
		[Address(RVA = "0x651D0C0", Offset = "0x651C0C0", VA = "0x651D0C0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000B46")]
		[Address(RVA = "0x651CA30", Offset = "0x651BA30", VA = "0x651CA30")]
		set
		{
		}
	}

	[Token(Token = "0x1700014C")]
	public int sideCount
	{
		[Token(Token = "0x6000B47")]
		[Address(RVA = "0x651D0D0", Offset = "0x651C0D0", VA = "0x651D0D0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000B48")]
		[Address(RVA = "0x651CA70", Offset = "0x651BA70", VA = "0x651CA70")]
		set
		{
		}
	}

	[Token(Token = "0x1700014D")]
	public float sdfRoundness
	{
		[Token(Token = "0x6000B49")]
		[Address(RVA = "0x651D0E0", Offset = "0x651C0E0", VA = "0x651D0E0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000B4A")]
		[Address(RVA = "0x651CA50", Offset = "0x651BA50", VA = "0x651CA50")]
		set
		{
		}
	}

	[Token(Token = "0x6000B3B")]
	[Address(RVA = "0x651C040", Offset = "0x651B040", VA = "0x651C040")]
	public LensFlareDataElementSRP()
	{
	}

	[Token(Token = "0x6000B3C")]
	[Address(RVA = "0x651CA90", Offset = "0x651BA90", VA = "0x651CA90")]
	public LensFlareDataElementSRP Clone()
	{
		return null;
	}
}
