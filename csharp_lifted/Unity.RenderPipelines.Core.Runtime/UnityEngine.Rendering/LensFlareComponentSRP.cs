// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.LensFlareComponentSRP
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Serialization;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000155")]
[ExecuteAlways]
[AddComponentMenu("Rendering/Lens Flare (SRP)")]
public sealed class LensFlareComponentSRP : MonoBehaviour
{
	[Token(Token = "0x2000156")]
	private enum Version
	{
		[Token(Token = "0x400069E")]
		Initial
	}

	[Token(Token = "0x4000687")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	private LensFlareDataSRP m_LensFlareData;

	[Token(Token = "0x4000688")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	private Version version;

	[Token(Token = "0x4000689")]
	[FieldOffset(Offset = "0x2C")]
	[Min(0f)]
	public float intensity;

	[Token(Token = "0x400068A")]
	[FieldOffset(Offset = "0x30")]
	[Min(1E-05f)]
	public float maxAttenuationDistance;

	[Token(Token = "0x400068B")]
	[FieldOffset(Offset = "0x34")]
	[Min(1E-05f)]
	public float maxAttenuationScale;

	[Token(Token = "0x400068C")]
	[FieldOffset(Offset = "0x38")]
	public AnimationCurve distanceAttenuationCurve;

	[Token(Token = "0x400068D")]
	[FieldOffset(Offset = "0x40")]
	public AnimationCurve scaleByDistanceCurve;

	[Token(Token = "0x400068E")]
	[FieldOffset(Offset = "0x48")]
	public bool attenuationByLightShape;

	[Token(Token = "0x400068F")]
	[FieldOffset(Offset = "0x50")]
	public AnimationCurve radialScreenAttenuationCurve;

	[Token(Token = "0x4000690")]
	[FieldOffset(Offset = "0x58")]
	public bool useOcclusion;

	[Token(Token = "0x4000691")]
	[FieldOffset(Offset = "0x59")]
	[Obsolete("Replaced by environmentOcclusion. #from(6000.0)")]
	public bool useBackgroundCloudOcclusion;

	[Token(Token = "0x4000692")]
	[FieldOffset(Offset = "0x5A")]
	[FormerlySerializedAs("volumetricCloudOcclusion")]
	[FormerlySerializedAs("useFogOpacityOcclusion")]
	public bool environmentOcclusion;

	[Token(Token = "0x4000693")]
	[FieldOffset(Offset = "0x5B")]
	[Obsolete("Replaced by environmentOcclusion. #from(6000.0)")]
	public bool useWaterOcclusion;

	[Token(Token = "0x4000694")]
	[FieldOffset(Offset = "0x5C")]
	[Min(0f)]
	public float occlusionRadius;

	[Token(Token = "0x4000695")]
	[FieldOffset(Offset = "0x60")]
	[Range(1f, 64f)]
	public uint sampleCount;

	[Token(Token = "0x4000696")]
	[FieldOffset(Offset = "0x64")]
	public float occlusionOffset;

	[Token(Token = "0x4000697")]
	[FieldOffset(Offset = "0x68")]
	[Min(0f)]
	public float scale;

	[Token(Token = "0x4000698")]
	[FieldOffset(Offset = "0x6C")]
	public bool allowOffScreen;

	[Token(Token = "0x4000699")]
	[FieldOffset(Offset = "0x6D")]
	[Obsolete("Please use environmentOcclusion instead. #from(6000.0)")]
	public bool volumetricCloudOcclusion;

	[Token(Token = "0x400069A")]
	[FieldOffset(Offset = "0x0")]
	private static float sCelestialAngularRadius;

	[Token(Token = "0x400069B")]
	[FieldOffset(Offset = "0x70")]
	public TextureCurve occlusionRemapCurve;

	[Token(Token = "0x400069C")]
	[FieldOffset(Offset = "0x78")]
	public Light lightOverride;

	[Token(Token = "0x17000146")]
	public LensFlareDataSRP lensFlareData
	{
		[Token(Token = "0x6000B31")]
		[Address(RVA = "0x651B9D0", Offset = "0x651A9D0", VA = "0x651B9D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000B32")]
		[Address(RVA = "0x651B9E0", Offset = "0x651A9E0", VA = "0x651B9E0")]
		set
		{
		}
	}

	[Token(Token = "0x6000B33")]
	[Address(RVA = "0x6516FE0", Offset = "0x6515FE0", VA = "0x6516FE0")]
	public float celestialProjectedOcclusionRadius(Camera mainCam)
	{
		return default(float);
	}

	[Token(Token = "0x6000B34")]
	[Address(RVA = "0x651BAD0", Offset = "0x651AAD0", VA = "0x651BAD0")]
	private void Awake()
	{
	}

	[Token(Token = "0x6000B35")]
	[Address(RVA = "0x651BAE0", Offset = "0x651AAE0", VA = "0x651BAE0")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x6000B36")]
	[Address(RVA = "0x651BBA0", Offset = "0x651ABA0", VA = "0x651BBA0")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x6000B37")]
	[Address(RVA = "0x651BA00", Offset = "0x651AA00", VA = "0x651BA00")]
	private void OnValidate()
	{
	}

	[Token(Token = "0x6000B38")]
	[Address(RVA = "0x651BC10", Offset = "0x651AC10", VA = "0x651BC10")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6000B39")]
	[Address(RVA = "0x651BC30", Offset = "0x651AC30", VA = "0x651BC30")]
	public LensFlareComponentSRP()
	{
	}
}
