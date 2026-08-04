// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.LensFlareComponentSRP
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4BDDA50", Offset = "0x4BDDA50", VA = "0x4BDDA50")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000AA6")]
		[Address(RVA = "0x4BDDA60", Offset = "0x4BDDA60", VA = "0x4BDDA60")]
		set
		{
		}
	}

	[Token(Token = "0x6000AA7")]
	[Address(RVA = "0x4BD8B70", Offset = "0x4BD8B70", VA = "0x4BD8B70")]
	public float celestialProjectedOcclusionRadius(Camera mainCam)
	{
		return default(float);
	}

	[Token(Token = "0x6000AA8")]
	[Address(RVA = "0x4BDDB50", Offset = "0x4BDDB50", VA = "0x4BDDB50")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x6000AA9")]
	[Address(RVA = "0x4BDDBF0", Offset = "0x4BDDBF0", VA = "0x4BDDBF0")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x6000AAA")]
	[Address(RVA = "0x4BDDA80", Offset = "0x4BDDA80", VA = "0x4BDDA80")]
	private void OnValidate()
	{
	}

	[Token(Token = "0x6000AAB")]
	[Address(RVA = "0x4BDDC60", Offset = "0x4BDDC60", VA = "0x4BDDC60")]
	public LensFlareComponentSRP()
	{
	}
}
