// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.UniversalAdditionalLightData
// Update status: NEW in this game update
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
		[Address(RVA = "0xF40050", Offset = "0xF3E650", VA = "0x180F40050")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60009F2")]
		[Address(RVA = "0x138BAA0", Offset = "0x138A0A0", VA = "0x18138BAA0")]
		set
		{
		}
	}

	[Token(Token = "0x1700025C")]
	internal Light light
	{
		[Token(Token = "0x60009F3")]
		[Address(RVA = "0x2CA4A30", Offset = "0x2CA3030", VA = "0x182CA4A30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700025D")]
	public int additionalLightsShadowResolutionTier
	{
		[Token(Token = "0x60009F4")]
		[Address(RVA = "0xAB9F60", Offset = "0xAB8560", VA = "0x180AB9F60")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700025E")]
	public bool customShadowLayers
	{
		[Token(Token = "0x60009F5")]
		[Address(RVA = "0xAB9F70", Offset = "0xAB8570", VA = "0x180AB9F70")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60009F6")]
		[Address(RVA = "0x2CA4AB0", Offset = "0x2CA30B0", VA = "0x182CA4AB0")]
		set
		{
		}
	}

	[Token(Token = "0x1700025F")]
	[Tooltip("Controls the size of the cookie mask currently assigned to the light.")]
	public Vector2 lightCookieSize
	{
		[Token(Token = "0x60009F7")]
		[Address(RVA = "0x2CA4A10", Offset = "0x2CA3010", VA = "0x182CA4A10")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x60009F8")]
		[Address(RVA = "0x16EF920", Offset = "0x16EDF20", VA = "0x1816EF920")]
		set
		{
		}
	}

	[Token(Token = "0x17000260")]
	[Tooltip("Controls the offset of the cookie mask currently assigned to the light.")]
	public Vector2 lightCookieOffset
	{
		[Token(Token = "0x60009F9")]
		[Address(RVA = "0x2C25BF0", Offset = "0x2C241F0", VA = "0x182C25BF0")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x60009FA")]
		[Address(RVA = "0xE8F710", Offset = "0xE8DD10", VA = "0x180E8F710")]
		set
		{
		}
	}

	[Token(Token = "0x17000261")]
	[Tooltip("Controls the filtering quality of soft shadows. Higher quality has lower performance.")]
	public SoftShadowQuality softShadowQuality
	{
		[Token(Token = "0x60009FB")]
		[Address(RVA = "0xB3DFC0", Offset = "0xB3C5C0", VA = "0x180B3DFC0")]
		get
		{
			return default(SoftShadowQuality);
		}
		[Token(Token = "0x60009FC")]
		[Address(RVA = "0xB3E0D0", Offset = "0xB3C6D0", VA = "0x180B3E0D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000262")]
	public RenderingLayerMask renderingLayers
	{
		[Token(Token = "0x60009FD")]
		[Address(RVA = "0x58A610", Offset = "0x588C10", VA = "0x18058A610")]
		get
		{
			return default(RenderingLayerMask);
		}
		[Token(Token = "0x60009FE")]
		[Address(RVA = "0x2CA4AC0", Offset = "0x2CA30C0", VA = "0x182CA4AC0")]
		set
		{
		}
	}

	[Token(Token = "0x17000263")]
	public RenderingLayerMask shadowRenderingLayers
	{
		[Token(Token = "0x60009FF")]
		[Address(RVA = "0x58A540", Offset = "0x588B40", VA = "0x18058A540")]
		get
		{
			return default(RenderingLayerMask);
		}
		[Token(Token = "0x6000A00")]
		[Address(RVA = "0x2CA4B40", Offset = "0x2CA3140", VA = "0x182CA4B40")]
		set
		{
		}
	}

	[Token(Token = "0x17000264")]
	[Obsolete("This is obsolete, please use renderingLayerMask instead. #from(2023.1) #breakingFrom(2023.1)", true)]
	public LightLayerEnum lightLayerMask
	{
		[Token(Token = "0x6000A04")]
		[Address(RVA = "0x1BD3CB0", Offset = "0x1BD22B0", VA = "0x181BD3CB0")]
		get
		{
			return default(LightLayerEnum);
		}
		[Token(Token = "0x6000A05")]
		[Address(RVA = "0x1ADFEB0", Offset = "0x1ADE4B0", VA = "0x181ADFEB0")]
		set
		{
		}
	}

	[Token(Token = "0x17000265")]
	[Obsolete("This is obsolete, please use shadowRenderingLayerMask instead. #from(2023.1) #breakingFrom(2023.1)", true)]
	public LightLayerEnum shadowLayerMask
	{
		[Token(Token = "0x6000A06")]
		[Address(RVA = "0x1A4F710", Offset = "0x1A4DD10", VA = "0x181A4F710")]
		get
		{
			return default(LightLayerEnum);
		}
		[Token(Token = "0x6000A07")]
		[Address(RVA = "0x1CFDDD0", Offset = "0x1CFC3D0", VA = "0x181CFDDD0")]
		set
		{
		}
	}

	[Token(Token = "0x6000A01")]
	[Address(RVA = "0x2CA45B0", Offset = "0x2CA2BB0", VA = "0x182CA45B0")]
	private void SyncLightAndShadowLayers()
	{
	}

	[Token(Token = "0x6000A02")]
	[Address(RVA = "0x2CA4790", Offset = "0x2CA2D90", VA = "0x182CA4790", Slot = "4")]
	private void UnityEngine_002EISerializationCallbackReceiver_002EOnBeforeSerialize()
	{
	}

	[Token(Token = "0x6000A03")]
	[Address(RVA = "0x2CA4680", Offset = "0x2CA2C80", VA = "0x182CA4680", Slot = "5")]
	private void UnityEngine_002EISerializationCallbackReceiver_002EOnAfterDeserialize()
	{
	}

	[Token(Token = "0x6000A08")]
	[Address(RVA = "0x2CA4860", Offset = "0x2CA2E60", VA = "0x182CA4860")]
	public UniversalAdditionalLightData()
	{
	}
}
