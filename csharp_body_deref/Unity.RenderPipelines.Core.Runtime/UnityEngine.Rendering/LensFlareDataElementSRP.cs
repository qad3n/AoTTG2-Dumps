using System;
using Il2CppDummyDll;
using UnityEngine.Serialization;

namespace UnityEngine.Rendering;

[Serializable]
[Token(Token = "0x2000166")]
public sealed class LensFlareDataElementSRP
{
	[Token(Token = "0x4000627")]
	[FieldOffset(Offset = "0x10")]
	public bool visible;

	[Token(Token = "0x4000628")]
	[FieldOffset(Offset = "0x14")]
	public float position;

	[Token(Token = "0x4000629")]
	[FieldOffset(Offset = "0x18")]
	public Vector2 positionOffset;

	[Token(Token = "0x400062A")]
	[FieldOffset(Offset = "0x20")]
	public float angularOffset;

	[Token(Token = "0x400062B")]
	[FieldOffset(Offset = "0x24")]
	public Vector2 translationScale;

	[Token(Token = "0x400062C")]
	[FieldOffset(Offset = "0x2C")]
	[Min(0f)]
	[SerializeField]
	[FormerlySerializedAs("localIntensity")]
	private float m_LocalIntensity;

	[Token(Token = "0x400062D")]
	[FieldOffset(Offset = "0x30")]
	public Texture lensFlareTexture;

	[Token(Token = "0x400062E")]
	[FieldOffset(Offset = "0x38")]
	public float uniformScale;

	[Token(Token = "0x400062F")]
	[FieldOffset(Offset = "0x3C")]
	public Vector2 sizeXY;

	[Token(Token = "0x4000630")]
	[FieldOffset(Offset = "0x44")]
	public bool allowMultipleElement;

	[Token(Token = "0x4000631")]
	[FieldOffset(Offset = "0x48")]
	[Min(1f)]
	[SerializeField]
	[FormerlySerializedAs("count")]
	private int m_Count;

	[Token(Token = "0x4000632")]
	[FieldOffset(Offset = "0x4C")]
	public bool preserveAspectRatio;

	[Token(Token = "0x4000633")]
	[FieldOffset(Offset = "0x50")]
	public float rotation;

	[Token(Token = "0x4000634")]
	[FieldOffset(Offset = "0x54")]
	public Color tint;

	[Token(Token = "0x4000635")]
	[FieldOffset(Offset = "0x64")]
	public SRPLensFlareBlendMode blendMode;

	[Token(Token = "0x4000636")]
	[FieldOffset(Offset = "0x68")]
	public bool autoRotate;

	[Token(Token = "0x4000637")]
	[FieldOffset(Offset = "0x6C")]
	public SRPLensFlareType flareType;

	[Token(Token = "0x4000638")]
	[FieldOffset(Offset = "0x70")]
	public bool modulateByLightColor;

	[Token(Token = "0x4000639")]
	[FieldOffset(Offset = "0x71")]
	[SerializeField]
	private bool isFoldOpened;

	[Token(Token = "0x400063A")]
	[FieldOffset(Offset = "0x74")]
	public SRPLensFlareDistribution distribution;

	[Token(Token = "0x400063B")]
	[FieldOffset(Offset = "0x78")]
	public float lengthSpread;

	[Token(Token = "0x400063C")]
	[FieldOffset(Offset = "0x80")]
	public AnimationCurve positionCurve;

	[Token(Token = "0x400063D")]
	[FieldOffset(Offset = "0x88")]
	public AnimationCurve scaleCurve;

	[Token(Token = "0x400063E")]
	[FieldOffset(Offset = "0x90")]
	public int seed;

	[Token(Token = "0x400063F")]
	[FieldOffset(Offset = "0x98")]
	public Gradient colorGradient;

	[Token(Token = "0x4000640")]
	[FieldOffset(Offset = "0xA0")]
	[Range(0f, 1f)]
	[SerializeField]
	[FormerlySerializedAs("intensityVariation")]
	private float m_IntensityVariation;

	[Token(Token = "0x4000641")]
	[FieldOffset(Offset = "0xA4")]
	public Vector2 positionVariation;

	[Token(Token = "0x4000642")]
	[FieldOffset(Offset = "0xAC")]
	public float scaleVariation;

	[Token(Token = "0x4000643")]
	[FieldOffset(Offset = "0xB0")]
	public float rotationVariation;

	[Token(Token = "0x4000644")]
	[FieldOffset(Offset = "0xB4")]
	public bool enableRadialDistortion;

	[Token(Token = "0x4000645")]
	[FieldOffset(Offset = "0xB8")]
	public Vector2 targetSizeDistortion;

	[Token(Token = "0x4000646")]
	[FieldOffset(Offset = "0xC0")]
	public AnimationCurve distortionCurve;

	[Token(Token = "0x4000647")]
	[FieldOffset(Offset = "0xC8")]
	public bool distortionRelativeToCenter;

	[Token(Token = "0x4000648")]
	[FieldOffset(Offset = "0xCC")]
	[Range(0f, 1f)]
	[SerializeField]
	[FormerlySerializedAs("fallOff")]
	private float m_FallOff;

	[Token(Token = "0x4000649")]
	[FieldOffset(Offset = "0xD0")]
	[Range(0f, 1f)]
	[SerializeField]
	[FormerlySerializedAs("edgeOffset")]
	private float m_EdgeOffset;

	[Token(Token = "0x400064A")]
	[FieldOffset(Offset = "0xD4")]
	[Min(3f)]
	[SerializeField]
	[FormerlySerializedAs("sideCount")]
	private int m_SideCount;

	[Token(Token = "0x400064B")]
	[FieldOffset(Offset = "0xD8")]
	[Range(0f, 1f)]
	[SerializeField]
	[FormerlySerializedAs("sdfRoundness")]
	private float m_SdfRoundness;

	[Token(Token = "0x400064C")]
	[FieldOffset(Offset = "0xDC")]
	public bool inverseSDF;

	[Token(Token = "0x400064D")]
	[FieldOffset(Offset = "0xE0")]
	public float uniformAngle;

	[Token(Token = "0x400064E")]
	[FieldOffset(Offset = "0xE8")]
	public AnimationCurve uniformAngleCurve;

	[Token(Token = "0x1700012D")]
	public float localIntensity
	{
		[Token(Token = "0x6000AAE")]
		[Address(RVA = "0x48B98C0", Offset = "0x48B98C0", VA = "0x48B98C0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000AAF")]
		[Address(RVA = "0x48B9810", Offset = "0x48B9810", VA = "0x48B9810")]
		set
		{
		}
	}

	[Token(Token = "0x1700012E")]
	public int count
	{
		[Token(Token = "0x6000AB0")]
		[Address(RVA = "0x48B98D0", Offset = "0x48B98D0", VA = "0x48B98D0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000AB1")]
		[Address(RVA = "0x48B9820", Offset = "0x48B9820", VA = "0x48B9820")]
		set
		{
		}
	}

	[Token(Token = "0x1700012F")]
	public float intensityVariation
	{
		[Token(Token = "0x6000AB2")]
		[Address(RVA = "0x48B98E0", Offset = "0x48B98E0", VA = "0x48B98E0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000AB3")]
		[Address(RVA = "0x48B9830", Offset = "0x48B9830", VA = "0x48B9830")]
		set
		{
		}
	}

	[Token(Token = "0x17000130")]
	public float fallOff
	{
		[Token(Token = "0x6000AB4")]
		[Address(RVA = "0x48B98F0", Offset = "0x48B98F0", VA = "0x48B98F0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000AB5")]
		[Address(RVA = "0x48B9840", Offset = "0x48B9840", VA = "0x48B9840")]
		set
		{
		}
	}

	[Token(Token = "0x17000131")]
	public float edgeOffset
	{
		[Token(Token = "0x6000AB6")]
		[Address(RVA = "0x48B9900", Offset = "0x48B9900", VA = "0x48B9900")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000AB7")]
		[Address(RVA = "0x48B9860", Offset = "0x48B9860", VA = "0x48B9860")]
		set
		{
		}
	}

	[Token(Token = "0x17000132")]
	public int sideCount
	{
		[Token(Token = "0x6000AB8")]
		[Address(RVA = "0x48B9910", Offset = "0x48B9910", VA = "0x48B9910")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000AB9")]
		[Address(RVA = "0x48B98A0", Offset = "0x48B98A0", VA = "0x48B98A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000133")]
	public float sdfRoundness
	{
		[Token(Token = "0x6000ABA")]
		[Address(RVA = "0x48B9920", Offset = "0x48B9920", VA = "0x48B9920")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000ABB")]
		[Address(RVA = "0x48B9880", Offset = "0x48B9880", VA = "0x48B9880")]
		set
		{
		}
	}

	[Token(Token = "0x6000AAD")]
	[Address(RVA = "0x48B9020", Offset = "0x48B9020", VA = "0x48B9020")]
	public LensFlareDataElementSRP()
	{
	}
}
