// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.UniversalRendererData
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.Universal;

[Serializable]
[Token(Token = "0x20000B3")]
[ReloadGroup]
[ExcludeFromPreset]
public class UniversalRendererData : ScriptableRendererData, ISerializationCallbackReceiver
{
	[Token(Token = "0x4000385")]
	[FieldOffset(Offset = "0x48")]
	[Obsolete("Moved to UniversalRenderPipelineRuntimeXRResources on GraphicsSettings. #from(2023.3)")]
	public XRSystemData xrSystemData;

	[Token(Token = "0x4000386")]
	[FieldOffset(Offset = "0x50")]
	public PostProcessData postProcessData;

	[Token(Token = "0x4000387")]
	private const int k_LatestAssetVersion = 3;

	[Token(Token = "0x4000388")]
	[FieldOffset(Offset = "0x58")]
	[SerializeField]
	private int m_AssetVersion;

	[Token(Token = "0x4000389")]
	[FieldOffset(Offset = "0x5C")]
	[SerializeField]
	private LayerMask m_PrepassLayerMask;

	[Token(Token = "0x400038A")]
	[FieldOffset(Offset = "0x60")]
	[SerializeField]
	private LayerMask m_OpaqueLayerMask;

	[Token(Token = "0x400038B")]
	[FieldOffset(Offset = "0x64")]
	[SerializeField]
	private LayerMask m_TransparentLayerMask;

	[Token(Token = "0x400038C")]
	[FieldOffset(Offset = "0x68")]
	[SerializeField]
	private StencilStateData m_DefaultStencilState;

	[Token(Token = "0x400038D")]
	[FieldOffset(Offset = "0x70")]
	[SerializeField]
	private bool m_ShadowTransparentReceive;

	[Token(Token = "0x400038E")]
	[FieldOffset(Offset = "0x74")]
	[SerializeField]
	private RenderingMode m_RenderingMode;

	[Token(Token = "0x400038F")]
	[FieldOffset(Offset = "0x78")]
	[SerializeField]
	private DepthPrimingMode m_DepthPrimingMode;

	[Token(Token = "0x4000390")]
	[FieldOffset(Offset = "0x7C")]
	[SerializeField]
	private CopyDepthMode m_CopyDepthMode;

	[Token(Token = "0x4000391")]
	[FieldOffset(Offset = "0x80")]
	[SerializeField]
	private DepthFormat m_DepthAttachmentFormat;

	[Token(Token = "0x4000392")]
	[FieldOffset(Offset = "0x84")]
	[SerializeField]
	private DepthFormat m_DepthTextureFormat;

	[Token(Token = "0x4000393")]
	[FieldOffset(Offset = "0x88")]
	[SerializeField]
	private bool m_AccurateGbufferNormals;

	[Token(Token = "0x4000394")]
	[FieldOffset(Offset = "0x8C")]
	[SerializeField]
	private IntermediateTextureMode m_IntermediateTextureMode;

	[NonSerialized]
	[Token(Token = "0x4000395")]
	[FieldOffset(Offset = "0x90")]
	private bool m_StripShadowsOffVariants;

	[NonSerialized]
	[Token(Token = "0x4000396")]
	[FieldOffset(Offset = "0x91")]
	private bool m_StripAdditionalLightOffVariants;

	[Token(Token = "0x1700010A")]
	public LayerMask prepassLayerMask
	{
		[Token(Token = "0x6000438")]
		[Address(RVA = "0x1A4F710", Offset = "0x1A4DD10", VA = "0x181A4F710")]
		get
		{
			return default(LayerMask);
		}
		[Token(Token = "0x6000439")]
		[Address(RVA = "0x2C34990", Offset = "0x2C32F90", VA = "0x182C34990")]
		set
		{
		}
	}

	[Token(Token = "0x1700010B")]
	public LayerMask opaqueLayerMask
	{
		[Token(Token = "0x600043A")]
		[Address(RVA = "0x1A2A530", Offset = "0x1A28B30", VA = "0x181A2A530")]
		get
		{
			return default(LayerMask);
		}
		[Token(Token = "0x600043B")]
		[Address(RVA = "0x2C34980", Offset = "0x2C32F80", VA = "0x182C34980")]
		set
		{
		}
	}

	[Token(Token = "0x1700010C")]
	public LayerMask transparentLayerMask
	{
		[Token(Token = "0x600043C")]
		[Address(RVA = "0xCDE980", Offset = "0xCDCF80", VA = "0x180CDE980")]
		get
		{
			return default(LayerMask);
		}
		[Token(Token = "0x600043D")]
		[Address(RVA = "0x2C349C0", Offset = "0x2C32FC0", VA = "0x182C349C0")]
		set
		{
		}
	}

	[Token(Token = "0x1700010D")]
	public StencilStateData defaultStencilState
	{
		[Token(Token = "0x600043E")]
		[Address(RVA = "0x58A6F0", Offset = "0x588CF0", VA = "0x18058A6F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600043F")]
		[Address(RVA = "0x2C34870", Offset = "0x2C32E70", VA = "0x182C34870")]
		set
		{
		}
	}

	[Token(Token = "0x1700010E")]
	public bool shadowTransparentReceive
	{
		[Token(Token = "0x6000440")]
		[Address(RVA = "0xABD390", Offset = "0xABB990", VA = "0x180ABD390")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000441")]
		[Address(RVA = "0x2C349B0", Offset = "0x2C32FB0", VA = "0x182C349B0")]
		set
		{
		}
	}

	[Token(Token = "0x1700010F")]
	public RenderingMode renderingMode
	{
		[Token(Token = "0x6000442")]
		[Address(RVA = "0x187BA40", Offset = "0x187A040", VA = "0x18187BA40")]
		get
		{
			return default(RenderingMode);
		}
		[Token(Token = "0x6000443")]
		[Address(RVA = "0x2C349A0", Offset = "0x2C32FA0", VA = "0x182C349A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000110")]
	public DepthPrimingMode depthPrimingMode
	{
		[Token(Token = "0x6000444")]
		[Address(RVA = "0x58A600", Offset = "0x588C00", VA = "0x18058A600")]
		get
		{
			return default(DepthPrimingMode);
		}
		[Token(Token = "0x6000445")]
		[Address(RVA = "0x2C34950", Offset = "0x2C32F50", VA = "0x182C34950")]
		set
		{
		}
	}

	[Token(Token = "0x17000111")]
	public CopyDepthMode copyDepthMode
	{
		[Token(Token = "0x6000446")]
		[Address(RVA = "0x1BF1B70", Offset = "0x1BF0170", VA = "0x181BF1B70")]
		get
		{
			return default(CopyDepthMode);
		}
		[Token(Token = "0x6000447")]
		[Address(RVA = "0x2C34860", Offset = "0x2C32E60", VA = "0x182C34860")]
		set
		{
		}
	}

	[Token(Token = "0x17000112")]
	public DepthFormat depthAttachmentFormat
	{
		[Token(Token = "0x6000448")]
		[Address(RVA = "0x2C34690", Offset = "0x2C32C90", VA = "0x182C34690")]
		get
		{
			return default(DepthFormat);
		}
		[Token(Token = "0x6000449")]
		[Address(RVA = "0x2C34890", Offset = "0x2C32E90", VA = "0x182C34890")]
		set
		{
		}
	}

	[Token(Token = "0x17000113")]
	public DepthFormat depthTextureFormat
	{
		[Token(Token = "0x600044A")]
		[Address(RVA = "0x2C34720", Offset = "0x2C32D20", VA = "0x182C34720")]
		get
		{
			return default(DepthFormat);
		}
		[Token(Token = "0x600044B")]
		[Address(RVA = "0x2C34960", Offset = "0x2C32F60", VA = "0x182C34960")]
		set
		{
		}
	}

	[Token(Token = "0x17000114")]
	public bool accurateGbufferNormals
	{
		[Token(Token = "0x600044C")]
		[Address(RVA = "0x1C40680", Offset = "0x1C3EC80", VA = "0x181C40680")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600044D")]
		[Address(RVA = "0x2C34850", Offset = "0x2C32E50", VA = "0x182C34850")]
		set
		{
		}
	}

	[Token(Token = "0x17000115")]
	public IntermediateTextureMode intermediateTextureMode
	{
		[Token(Token = "0x600044E")]
		[Address(RVA = "0xA4D580", Offset = "0xA4BB80", VA = "0x180A4D580")]
		get
		{
			return default(IntermediateTextureMode);
		}
		[Token(Token = "0x600044F")]
		[Address(RVA = "0x2C34970", Offset = "0x2C32F70", VA = "0x182C34970")]
		set
		{
		}
	}

	[Token(Token = "0x17000116")]
	public bool usesDeferredLighting
	{
		[Token(Token = "0x6000450")]
		[Address(RVA = "0x2C34830", Offset = "0x2C32E30", VA = "0x182C34830")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000117")]
	public bool usesClusterLightLoop
	{
		[Token(Token = "0x6000451")]
		[Address(RVA = "0x2C34810", Offset = "0x2C32E10", VA = "0x182C34810")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000118")]
	internal override bool stripShadowsOffVariants
	{
		[Token(Token = "0x6000452")]
		[Address(RVA = "0xB5B960", Offset = "0xB59F60", VA = "0x180B5B960", Slot = "4")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000453")]
		[Address(RVA = "0xB5BDB0", Offset = "0xB5A3B0", VA = "0x180B5BDB0", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x17000119")]
	internal override bool stripAdditionalLightOffVariants
	{
		[Token(Token = "0x6000454")]
		[Address(RVA = "0x24C53F0", Offset = "0x24C39F0", VA = "0x1824C53F0", Slot = "6")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000455")]
		[Address(RVA = "0x2C12940", Offset = "0x2C10F40", VA = "0x182C12940", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x6000437")]
	[Address(RVA = "0x2C34460", Offset = "0x2C32A60", VA = "0x182C34460", Slot = "8")]
	protected override ScriptableRenderer Create()
	{
		return null;
	}

	[Token(Token = "0x6000456")]
	[Address(RVA = "0x2ABF3A0", Offset = "0x2ABD9A0", VA = "0x182ABF3A0", Slot = "10")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x6000457")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	private void ReloadAllNullProperties()
	{
	}

	[Token(Token = "0x6000458")]
	[Address(RVA = "0x2C34510", Offset = "0x2C32B10", VA = "0x182C34510", Slot = "11")]
	private void UnityEngine_002EISerializationCallbackReceiver_002EOnBeforeSerialize()
	{
	}

	[Token(Token = "0x6000459")]
	[Address(RVA = "0x2C344E0", Offset = "0x2C32AE0", VA = "0x182C344E0", Slot = "12")]
	private void UnityEngine_002EISerializationCallbackReceiver_002EOnAfterDeserialize()
	{
	}

	[Token(Token = "0x600045A")]
	[Address(RVA = "0x2C34520", Offset = "0x2C32B20", VA = "0x182C34520")]
	public UniversalRendererData()
	{
	}
}
