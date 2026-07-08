using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000162")]
[ExecuteAlways]
[AddComponentMenu("Rendering/Lens Flare (SRP)")]
public sealed class LensFlareComponentSRP : MonoBehaviour
{
	[Token(Token = "0x4000608")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	private LensFlareDataSRP m_LensFlareData;

	[Token(Token = "0x4000609")]
	[FieldOffset(Offset = "0x28")]
	[Min(0f)]
	public float intensity;

	[Token(Token = "0x400060A")]
	[FieldOffset(Offset = "0x2C")]
	[Min(1E-05f)]
	public float maxAttenuationDistance;

	[Token(Token = "0x400060B")]
	[FieldOffset(Offset = "0x30")]
	[Min(1E-05f)]
	public float maxAttenuationScale;

	[Token(Token = "0x400060C")]
	[FieldOffset(Offset = "0x38")]
	public AnimationCurve distanceAttenuationCurve;

	[Token(Token = "0x400060D")]
	[FieldOffset(Offset = "0x40")]
	public AnimationCurve scaleByDistanceCurve;

	[Token(Token = "0x400060E")]
	[FieldOffset(Offset = "0x48")]
	public bool attenuationByLightShape;

	[Token(Token = "0x400060F")]
	[FieldOffset(Offset = "0x50")]
	public AnimationCurve radialScreenAttenuationCurve;

	[Token(Token = "0x4000610")]
	[FieldOffset(Offset = "0x58")]
	public bool useOcclusion;

	[Token(Token = "0x4000611")]
	[FieldOffset(Offset = "0x59")]
	public bool useBackgroundCloudOcclusion;

	[Token(Token = "0x4000612")]
	[FieldOffset(Offset = "0x5C")]
	[Min(0f)]
	public float occlusionRadius;

	[Token(Token = "0x4000613")]
	[FieldOffset(Offset = "0x60")]
	[Range(1f, 64f)]
	public uint sampleCount;

	[Token(Token = "0x4000614")]
	[FieldOffset(Offset = "0x64")]
	public float occlusionOffset;

	[Token(Token = "0x4000615")]
	[FieldOffset(Offset = "0x68")]
	[Min(0f)]
	public float scale;

	[Token(Token = "0x4000616")]
	[FieldOffset(Offset = "0x6C")]
	public bool allowOffScreen;

	[Token(Token = "0x4000617")]
	[FieldOffset(Offset = "0x6D")]
	public bool volumetricCloudOcclusion;

	[Token(Token = "0x4000618")]
	[FieldOffset(Offset = "0x0")]
	private static float sCelestialAngularRadius;

	[Token(Token = "0x4000619")]
	[FieldOffset(Offset = "0x70")]
	public TextureCurve occlusionRemapCurve;

	[Token(Token = "0x1700012C")]
	public LensFlareDataSRP lensFlareData
	{
		[Token(Token = "0x6000AA5")]
		[Address(RVA = "0x48B89B0", Offset = "0x48B89B0", VA = "0x48B89B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000AA6")]
		[Address(RVA = "0x48B89C0", Offset = "0x48B89C0", VA = "0x48B89C0")]
		set
		{
		}
	}

	[Token(Token = "0x6000AA7")]
	[Address(RVA = "0x48B3AD0", Offset = "0x48B3AD0", VA = "0x48B3AD0")]
	public float celestialProjectedOcclusionRadius(Camera mainCam)
	{
		return default(float);
	}

	[Token(Token = "0x6000AA8")]
	[Address(RVA = "0x48B8AB0", Offset = "0x48B8AB0", VA = "0x48B8AB0")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x6000AA9")]
	[Address(RVA = "0x48B8B50", Offset = "0x48B8B50", VA = "0x48B8B50")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x6000AAA")]
	[Address(RVA = "0x48B89E0", Offset = "0x48B89E0", VA = "0x48B89E0")]
	private void OnValidate()
	{
	}

	[Token(Token = "0x6000AAB")]
	[Address(RVA = "0x48B8BC0", Offset = "0x48B8BC0", VA = "0x48B8BC0")]
	public LensFlareComponentSRP()
	{
	}
}
