// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.UniversalAdditionalLightData
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x20001CB")]
[DisallowMultipleComponent]
[RequireComponent(typeof(Light))]
public class UniversalAdditionalLightData : MonoBehaviour, ISerializationCallbackReceiver, IAdditionalData
{
	[Token(Token = "0x20001CC")]
	private enum Version
	{
		[Token(Token = "0x40009F7")]
		Initial = 0,
		[Token(Token = "0x40009F8")]
		RenderingLayers = 2,
		[Token(Token = "0x40009F9")]
		SoftShadowQuality = 3,
		[Token(Token = "0x40009FA")]
		RenderingLayersMask = 4,
		[Token(Token = "0x40009FB")]
		Count = 5
	}

	[Token(Token = "0x40009E1")]
	[FieldOffset(Offset = "0x20")]
	[Tooltip("Controls if light Shadow Bias parameters use pipeline settings.")]
	[SerializeField]
	private bool m_UsePipelineSettings;

	[Token(Token = "0x40009E2")]
	[FieldOffset(Offset = "0x0")]
	public static readonly int AdditionalLightsShadowResolutionTierCustom;

	[Token(Token = "0x40009E3")]
	[FieldOffset(Offset = "0x4")]
	public static readonly int AdditionalLightsShadowResolutionTierLow;

	[Token(Token = "0x40009E4")]
	[FieldOffset(Offset = "0x8")]
	public static readonly int AdditionalLightsShadowResolutionTierMedium;

	[Token(Token = "0x40009E5")]
	[FieldOffset(Offset = "0xC")]
	public static readonly int AdditionalLightsShadowResolutionTierHigh;

	[Token(Token = "0x40009E6")]
	[FieldOffset(Offset = "0x10")]
	public static readonly int AdditionalLightsShadowDefaultResolutionTier;

	[Token(Token = "0x40009E7")]
	[FieldOffset(Offset = "0x14")]
	public static readonly int AdditionalLightsShadowDefaultCustomResolution;

	[NonSerialized]
	[Token(Token = "0x40009E8")]
	[FieldOffset(Offset = "0x28")]
	private Light m_Light;

	[Token(Token = "0x40009E9")]
	[FieldOffset(Offset = "0x18")]
	public static readonly int AdditionalLightsShadowMinimumResolution;

	[Token(Token = "0x40009EA")]
	[FieldOffset(Offset = "0x30")]
	[Tooltip("Controls if light shadow resolution uses pipeline settings.")]
	[SerializeField]
	private int m_AdditionalLightsShadowResolutionTier;

	[Token(Token = "0x40009EB")]
	[FieldOffset(Offset = "0x34")]
	[SerializeField]
	private bool m_CustomShadowLayers;

	[Token(Token = "0x40009EC")]
	[FieldOffset(Offset = "0x38")]
	[SerializeField]
	private Vector2 m_LightCookieSize;

	[Token(Token = "0x40009ED")]
	[FieldOffset(Offset = "0x40")]
	[SerializeField]
	private Vector2 m_LightCookieOffset;

	[Token(Token = "0x40009EE")]
	[FieldOffset(Offset = "0x48")]
	[SerializeField]
	private SoftShadowQuality m_SoftShadowQuality;

	[Token(Token = "0x40009EF")]
	[FieldOffset(Offset = "0x4C")]
	[SerializeField]
	private RenderingLayerMask m_RenderingLayersMask;

	[Token(Token = "0x40009F0")]
	[FieldOffset(Offset = "0x50")]
	[SerializeField]
	private RenderingLayerMask m_ShadowRenderingLayersMask;

	[Token(Token = "0x40009F1")]
	[FieldOffset(Offset = "0x54")]
	[SerializeField]
	private Version m_Version;

	[Token(Token = "0x40009F2")]
	[FieldOffset(Offset = "0x58")]
	[Obsolete("This is obsolete, please use m_RenderingLayerMask instead. #from(2023.1)")]
	[SerializeField]
	private LightLayerEnum m_LightLayerMask;

	[Token(Token = "0x40009F3")]
	[FieldOffset(Offset = "0x5C")]
	[Obsolete("This is obsolete, please use m_RenderingLayerMask instead. #from(2023.1)")]
	[SerializeField]
	private LightLayerEnum m_ShadowLayerMask;

	[Token(Token = "0x40009F4")]
	[FieldOffset(Offset = "0x60")]
	[SerializeField]
	[Obsolete("This is obsolete, please use m_RenderingLayersMask instead. #from(6000.2)")]
	private uint m_RenderingLayers;

	[Token(Token = "0x40009F5")]
	[FieldOffset(Offset = "0x64")]
	[SerializeField]
	[Obsolete("This is obsolete, please use renderingLayersMask instead. #from(6000.2)")]
	private uint m_ShadowRenderingLayers;

	[Token(Token = "0x1700025B")]
	public bool usePipelineSettings
	{
		[Token(Token = "0x60009F1")]
		[Address(RVA = "0x669F7C0", Offset = "0x669E7C0", VA = "0x669F7C0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60009F2")]
		[Address(RVA = "0x669F7D0", Offset = "0x669E7D0", VA = "0x669F7D0")]
		set
		{
		}
	}

	[Token(Token = "0x1700025C")]
	internal Light light
	{
		[Token(Token = "0x60009F3")]
		[Address(RVA = "0x669F7E0", Offset = "0x669E7E0", VA = "0x669F7E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700025D")]
	public int additionalLightsShadowResolutionTier
	{
		[Token(Token = "0x60009F4")]
		[Address(RVA = "0x669F860", Offset = "0x669E860", VA = "0x669F860")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700025E")]
	public bool customShadowLayers
	{
		[Token(Token = "0x60009F5")]
		[Address(RVA = "0x669F870", Offset = "0x669E870", VA = "0x669F870")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60009F6")]
		[Address(RVA = "0x669F880", Offset = "0x669E880", VA = "0x669F880")]
		set
		{
		}
	}

	[Token(Token = "0x1700025F")]
	[Tooltip("Controls the size of the cookie mask currently assigned to the light.")]
	public Vector2 lightCookieSize
	{
		[Token(Token = "0x60009F7")]
		[Address(RVA = "0x669FA20", Offset = "0x669EA20", VA = "0x669FA20")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x60009F8")]
		[Address(RVA = "0x669FA30", Offset = "0x669EA30", VA = "0x669FA30")]
		set
		{
		}
	}

	[Token(Token = "0x17000260")]
	[Tooltip("Controls the offset of the cookie mask currently assigned to the light.")]
	public Vector2 lightCookieOffset
	{
		[Token(Token = "0x60009F9")]
		[Address(RVA = "0x669FA40", Offset = "0x669EA40", VA = "0x669FA40")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x60009FA")]
		[Address(RVA = "0x669FA50", Offset = "0x669EA50", VA = "0x669FA50")]
		set
		{
		}
	}

	[Token(Token = "0x17000261")]
	[Tooltip("Controls the filtering quality of soft shadows. Higher quality has lower performance.")]
	public SoftShadowQuality softShadowQuality
	{
		[Token(Token = "0x60009FB")]
		[Address(RVA = "0x669FA60", Offset = "0x669EA60", VA = "0x669FA60")]
		get
		{
			return default(SoftShadowQuality);
		}
		[Token(Token = "0x60009FC")]
		[Address(RVA = "0x669FA70", Offset = "0x669EA70", VA = "0x669FA70")]
		set
		{
		}
	}

	[Token(Token = "0x17000262")]
	public RenderingLayerMask renderingLayers
	{
		[Token(Token = "0x60009FD")]
		[Address(RVA = "0x669FA80", Offset = "0x669EA80", VA = "0x669FA80")]
		get
		{
			return default(RenderingLayerMask);
		}
		[Token(Token = "0x60009FE")]
		[Address(RVA = "0x669FA90", Offset = "0x669EA90", VA = "0x669FA90")]
		set
		{
		}
	}

	[Token(Token = "0x17000263")]
	public RenderingLayerMask shadowRenderingLayers
	{
		[Token(Token = "0x60009FF")]
		[Address(RVA = "0x669FB00", Offset = "0x669EB00", VA = "0x669FB00")]
		get
		{
			return default(RenderingLayerMask);
		}
		[Token(Token = "0x6000A00")]
		[Address(RVA = "0x669FB10", Offset = "0x669EB10", VA = "0x669FB10")]
		set
		{
		}
	}

	[Token(Token = "0x17000264")]
	[Obsolete("This is obsolete, please use renderingLayerMask instead. #from(2023.1) #breakingFrom(2023.1)", true)]
	public LightLayerEnum lightLayerMask
	{
		[Token(Token = "0x6000A04")]
		[Address(RVA = "0x669FCB0", Offset = "0x669ECB0", VA = "0x669FCB0")]
		get
		{
			return default(LightLayerEnum);
		}
		[Token(Token = "0x6000A05")]
		[Address(RVA = "0x669FCC0", Offset = "0x669ECC0", VA = "0x669FCC0")]
		set
		{
		}
	}

	[Token(Token = "0x17000265")]
	[Obsolete("This is obsolete, please use shadowRenderingLayerMask instead. #from(2023.1) #breakingFrom(2023.1)", true)]
	public LightLayerEnum shadowLayerMask
	{
		[Token(Token = "0x6000A06")]
		[Address(RVA = "0x669FCD0", Offset = "0x669ECD0", VA = "0x669FCD0")]
		get
		{
			return default(LightLayerEnum);
		}
		[Token(Token = "0x6000A07")]
		[Address(RVA = "0x669FCE0", Offset = "0x669ECE0", VA = "0x669FCE0")]
		set
		{
		}
	}

	[Token(Token = "0x6000A01")]
	[Address(RVA = "0x669F890", Offset = "0x669E890", VA = "0x669F890")]
	private void SyncLightAndShadowLayers()
	{
	}

	[Token(Token = "0x6000A02")]
	[Address(RVA = "0x669FB80", Offset = "0x669EB80", VA = "0x669FB80", Slot = "4")]
	private void UnityEngine_002EISerializationCallbackReceiver_002EOnBeforeSerialize()
	{
	}

	[Token(Token = "0x6000A03")]
	[Address(RVA = "0x669FB90", Offset = "0x669EB90", VA = "0x669FB90", Slot = "5")]
	private void UnityEngine_002EISerializationCallbackReceiver_002EOnAfterDeserialize()
	{
	}

	[Token(Token = "0x6000A08")]
	[Address(RVA = "0x669FCF0", Offset = "0x669ECF0", VA = "0x669FCF0")]
	public UniversalAdditionalLightData()
	{
	}
}
