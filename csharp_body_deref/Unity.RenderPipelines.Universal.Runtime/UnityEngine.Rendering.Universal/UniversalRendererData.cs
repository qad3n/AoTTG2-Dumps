// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.UniversalRendererData
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x6627E60", Offset = "0x6626E60", VA = "0x6627E60")]
		get
		{
			return default(LayerMask);
		}
		[Token(Token = "0x6000439")]
		[Address(RVA = "0x6627E70", Offset = "0x6626E70", VA = "0x6627E70")]
		set
		{
		}
	}

	[Token(Token = "0x1700010B")]
	public LayerMask opaqueLayerMask
	{
		[Token(Token = "0x600043A")]
		[Address(RVA = "0x6627E80", Offset = "0x6626E80", VA = "0x6627E80")]
		get
		{
			return default(LayerMask);
		}
		[Token(Token = "0x600043B")]
		[Address(RVA = "0x6627E90", Offset = "0x6626E90", VA = "0x6627E90")]
		set
		{
		}
	}

	[Token(Token = "0x1700010C")]
	public LayerMask transparentLayerMask
	{
		[Token(Token = "0x600043C")]
		[Address(RVA = "0x6627EA0", Offset = "0x6626EA0", VA = "0x6627EA0")]
		get
		{
			return default(LayerMask);
		}
		[Token(Token = "0x600043D")]
		[Address(RVA = "0x6627EB0", Offset = "0x6626EB0", VA = "0x6627EB0")]
		set
		{
		}
	}

	[Token(Token = "0x1700010D")]
	public StencilStateData defaultStencilState
	{
		[Token(Token = "0x600043E")]
		[Address(RVA = "0x6627EC0", Offset = "0x6626EC0", VA = "0x6627EC0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600043F")]
		[Address(RVA = "0x6627ED0", Offset = "0x6626ED0", VA = "0x6627ED0")]
		set
		{
		}
	}

	[Token(Token = "0x1700010E")]
	public bool shadowTransparentReceive
	{
		[Token(Token = "0x6000440")]
		[Address(RVA = "0x6627EF0", Offset = "0x6626EF0", VA = "0x6627EF0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000441")]
		[Address(RVA = "0x6627F00", Offset = "0x6626F00", VA = "0x6627F00")]
		set
		{
		}
	}

	[Token(Token = "0x1700010F")]
	public RenderingMode renderingMode
	{
		[Token(Token = "0x6000442")]
		[Address(RVA = "0x6627F10", Offset = "0x6626F10", VA = "0x6627F10")]
		get
		{
			return default(RenderingMode);
		}
		[Token(Token = "0x6000443")]
		[Address(RVA = "0x6627F20", Offset = "0x6626F20", VA = "0x6627F20")]
		set
		{
		}
	}

	[Token(Token = "0x17000110")]
	public DepthPrimingMode depthPrimingMode
	{
		[Token(Token = "0x6000444")]
		[Address(RVA = "0x6627F30", Offset = "0x6626F30", VA = "0x6627F30")]
		get
		{
			return default(DepthPrimingMode);
		}
		[Token(Token = "0x6000445")]
		[Address(RVA = "0x6627F40", Offset = "0x6626F40", VA = "0x6627F40")]
		set
		{
		}
	}

	[Token(Token = "0x17000111")]
	public CopyDepthMode copyDepthMode
	{
		[Token(Token = "0x6000446")]
		[Address(RVA = "0x6627F50", Offset = "0x6626F50", VA = "0x6627F50")]
		get
		{
			return default(CopyDepthMode);
		}
		[Token(Token = "0x6000447")]
		[Address(RVA = "0x6627F60", Offset = "0x6626F60", VA = "0x6627F60")]
		set
		{
		}
	}

	[Token(Token = "0x17000112")]
	public DepthFormat depthAttachmentFormat
	{
		[Token(Token = "0x6000448")]
		[Address(RVA = "0x6627F70", Offset = "0x6626F70", VA = "0x6627F70")]
		get
		{
			return default(DepthFormat);
		}
		[Token(Token = "0x6000449")]
		[Address(RVA = "0x6628000", Offset = "0x6627000", VA = "0x6628000")]
		set
		{
		}
	}

	[Token(Token = "0x17000113")]
	public DepthFormat depthTextureFormat
	{
		[Token(Token = "0x600044A")]
		[Address(RVA = "0x66280B0", Offset = "0x66270B0", VA = "0x66280B0")]
		get
		{
			return default(DepthFormat);
		}
		[Token(Token = "0x600044B")]
		[Address(RVA = "0x66281A0", Offset = "0x66271A0", VA = "0x66281A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000114")]
	public bool accurateGbufferNormals
	{
		[Token(Token = "0x600044C")]
		[Address(RVA = "0x66281B0", Offset = "0x66271B0", VA = "0x66281B0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600044D")]
		[Address(RVA = "0x66281C0", Offset = "0x66271C0", VA = "0x66281C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000115")]
	public IntermediateTextureMode intermediateTextureMode
	{
		[Token(Token = "0x600044E")]
		[Address(RVA = "0x66281D0", Offset = "0x66271D0", VA = "0x66281D0")]
		get
		{
			return default(IntermediateTextureMode);
		}
		[Token(Token = "0x600044F")]
		[Address(RVA = "0x66281E0", Offset = "0x66271E0", VA = "0x66281E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000116")]
	public bool usesDeferredLighting
	{
		[Token(Token = "0x6000450")]
		[Address(RVA = "0x66281F0", Offset = "0x66271F0", VA = "0x66281F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000117")]
	public bool usesClusterLightLoop
	{
		[Token(Token = "0x6000451")]
		[Address(RVA = "0x6628200", Offset = "0x6627200", VA = "0x6628200")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000118")]
	internal override bool stripShadowsOffVariants
	{
		[Token(Token = "0x6000452")]
		[Address(RVA = "0x6628210", Offset = "0x6627210", VA = "0x6628210", Slot = "4")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000453")]
		[Address(RVA = "0x6628220", Offset = "0x6627220", VA = "0x6628220", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x17000119")]
	internal override bool stripAdditionalLightOffVariants
	{
		[Token(Token = "0x6000454")]
		[Address(RVA = "0x6628230", Offset = "0x6627230", VA = "0x6628230", Slot = "6")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000455")]
		[Address(RVA = "0x6628240", Offset = "0x6627240", VA = "0x6628240", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x6000437")]
	[Address(RVA = "0x6627DD0", Offset = "0x6626DD0", VA = "0x6627DD0", Slot = "8")]
	protected override ScriptableRenderer Create()
	{
		return null;
	}

	[Token(Token = "0x6000456")]
	[Address(RVA = "0x6628250", Offset = "0x6627250", VA = "0x6628250", Slot = "10")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x6000457")]
	[Address(RVA = "0x6627E50", Offset = "0x6626E50", VA = "0x6627E50")]
	private void ReloadAllNullProperties()
	{
	}

	[Token(Token = "0x6000458")]
	[Address(RVA = "0x6628260", Offset = "0x6627260", VA = "0x6628260", Slot = "11")]
	private void UnityEngine_002EISerializationCallbackReceiver_002EOnBeforeSerialize()
	{
	}

	[Token(Token = "0x6000459")]
	[Address(RVA = "0x6628270", Offset = "0x6627270", VA = "0x6628270", Slot = "12")]
	private void UnityEngine_002EISerializationCallbackReceiver_002EOnAfterDeserialize()
	{
	}

	[Token(Token = "0x600045A")]
	[Address(RVA = "0x66282A0", Offset = "0x66272A0", VA = "0x66282A0")]
	public UniversalRendererData()
	{
	}
}
