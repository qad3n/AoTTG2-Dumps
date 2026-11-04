// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.UniversalAdditionalCameraData
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine.Serialization;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x20001C6")]
[DisallowMultipleComponent]
[RequireComponent(typeof(Camera))]
[ExecuteAlways]
public class UniversalAdditionalCameraData : MonoBehaviour, ISerializationCallbackReceiver, IAdditionalData
{
	[Token(Token = "0x20001C7")]
	private enum Version
	{
		[Token(Token = "0x40009D9")]
		Initial = 0,
		[Token(Token = "0x40009DA")]
		DepthAndOpaqueTextureOptions = 2,
		[Token(Token = "0x40009DB")]
		Count = 3
	}

	[Token(Token = "0x40009B6")]
	private const string k_GizmoPath = "Packages/com.unity.render-pipelines.universal/Editor/Gizmos/";

	[Token(Token = "0x40009B7")]
	private const string k_BaseCameraGizmoPath = "Packages/com.unity.render-pipelines.universal/Editor/Gizmos/Camera_Base.png";

	[Token(Token = "0x40009B8")]
	private const string k_OverlayCameraGizmoPath = "Packages/com.unity.render-pipelines.universal/Editor/Gizmos/Camera_Base.png";

	[Token(Token = "0x40009B9")]
	private const string k_PostProcessingGizmoPath = "Packages/com.unity.render-pipelines.universal/Editor/Gizmos/Camera_PostProcessing.png";

	[Token(Token = "0x40009BA")]
	[FieldOffset(Offset = "0x20")]
	[FormerlySerializedAs("renderShadows")]
	[SerializeField]
	private bool m_RenderShadows;

	[Token(Token = "0x40009BB")]
	[FieldOffset(Offset = "0x24")]
	[SerializeField]
	private CameraOverrideOption m_RequiresDepthTextureOption;

	[Token(Token = "0x40009BC")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	private CameraOverrideOption m_RequiresOpaqueTextureOption;

	[Token(Token = "0x40009BD")]
	[FieldOffset(Offset = "0x2C")]
	[SerializeField]
	private CameraRenderType m_CameraType;

	[Token(Token = "0x40009BE")]
	[FieldOffset(Offset = "0x30")]
	[SerializeField]
	private List<Camera> m_Cameras;

	[Token(Token = "0x40009BF")]
	[FieldOffset(Offset = "0x38")]
	[SerializeField]
	private int m_RendererIndex;

	[Token(Token = "0x40009C0")]
	[FieldOffset(Offset = "0x3C")]
	[SerializeField]
	private LayerMask m_VolumeLayerMask;

	[Token(Token = "0x40009C1")]
	[FieldOffset(Offset = "0x40")]
	[SerializeField]
	private Transform m_VolumeTrigger;

	[Token(Token = "0x40009C2")]
	[FieldOffset(Offset = "0x48")]
	[SerializeField]
	private VolumeFrameworkUpdateMode m_VolumeFrameworkUpdateModeOption;

	[Token(Token = "0x40009C3")]
	[FieldOffset(Offset = "0x4C")]
	[SerializeField]
	private bool m_RenderPostProcessing;

	[Token(Token = "0x40009C4")]
	[FieldOffset(Offset = "0x50")]
	[SerializeField]
	private AntialiasingMode m_Antialiasing;

	[Token(Token = "0x40009C5")]
	[FieldOffset(Offset = "0x54")]
	[SerializeField]
	private AntialiasingQuality m_AntialiasingQuality;

	[Token(Token = "0x40009C6")]
	[FieldOffset(Offset = "0x58")]
	[SerializeField]
	private bool m_StopNaN;

	[Token(Token = "0x40009C7")]
	[FieldOffset(Offset = "0x59")]
	[SerializeField]
	private bool m_Dithering;

	[Token(Token = "0x40009C8")]
	[FieldOffset(Offset = "0x5A")]
	[SerializeField]
	private bool m_ClearDepth;

	[Token(Token = "0x40009C9")]
	[FieldOffset(Offset = "0x5B")]
	[SerializeField]
	private bool m_AllowXRRendering;

	[Token(Token = "0x40009CA")]
	[FieldOffset(Offset = "0x5C")]
	[SerializeField]
	private bool m_AllowHDROutput;

	[Token(Token = "0x40009CB")]
	[FieldOffset(Offset = "0x5D")]
	[SerializeField]
	private bool m_UseScreenCoordOverride;

	[Token(Token = "0x40009CC")]
	[FieldOffset(Offset = "0x60")]
	[SerializeField]
	private Vector4 m_ScreenSizeOverride;

	[Token(Token = "0x40009CD")]
	[FieldOffset(Offset = "0x70")]
	[SerializeField]
	private Vector4 m_ScreenCoordScaleBias;

	[NonSerialized]
	[Token(Token = "0x40009CE")]
	[FieldOffset(Offset = "0x80")]
	private Camera m_Camera;

	[Token(Token = "0x40009CF")]
	[FieldOffset(Offset = "0x88")]
	[FormerlySerializedAs("requiresDepthTexture")]
	[SerializeField]
	private bool m_RequiresDepthTexture;

	[Token(Token = "0x40009D0")]
	[FieldOffset(Offset = "0x89")]
	[FormerlySerializedAs("requiresColorTexture")]
	[SerializeField]
	private bool m_RequiresColorTexture;

	[NonSerialized]
	[Token(Token = "0x40009D1")]
	[FieldOffset(Offset = "0x90")]
	private MotionVectorsPersistentData m_MotionVectorsPersistentData;

	[NonSerialized]
	[Token(Token = "0x40009D2")]
	[FieldOffset(Offset = "0x98")]
	internal UniversalCameraHistory m_History;

	[Token(Token = "0x40009D3")]
	[FieldOffset(Offset = "0xA0")]
	[SerializeField]
	internal TemporalAA.Settings m_TaaSettings;

	[Token(Token = "0x40009D4")]
	[FieldOffset(Offset = "0x0")]
	private static UniversalAdditionalCameraData s_DefaultAdditionalCameraData;

	[Token(Token = "0x40009D5")]
	[FieldOffset(Offset = "0x8")]
	private static List<VolumeStack> s_CachedVolumeStacks;

	[Token(Token = "0x40009D6")]
	[FieldOffset(Offset = "0xC0")]
	private VolumeStack m_VolumeStack;

	[Token(Token = "0x40009D7")]
	[FieldOffset(Offset = "0xC8")]
	[SerializeField]
	private Version m_Version;

	[Token(Token = "0x1700023B")]
	internal static UniversalAdditionalCameraData defaultAdditionalCameraData
	{
		[Token(Token = "0x60009AD")]
		[Address(RVA = "0x2CA3E80", Offset = "0x2CA2480", VA = "0x182CA3E80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700023C")]
	internal Camera camera
	{
		[Token(Token = "0x60009AE")]
		[Address(RVA = "0x2CA3DD0", Offset = "0x2CA23D0", VA = "0x182CA3DD0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700023D")]
	public bool renderShadows
	{
		[Token(Token = "0x60009B0")]
		[Address(RVA = "0xF40050", Offset = "0xF3E650", VA = "0x180F40050")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60009B1")]
		[Address(RVA = "0x138BAA0", Offset = "0x138A0A0", VA = "0x18138BAA0")]
		set
		{
		}
	}

	[Token(Token = "0x1700023E")]
	public CameraOverrideOption requiresDepthOption
	{
		[Token(Token = "0x60009B2")]
		[Address(RVA = "0xBDB280", Offset = "0xBD9880", VA = "0x180BDB280")]
		get
		{
			return default(CameraOverrideOption);
		}
		[Token(Token = "0x60009B3")]
		[Address(RVA = "0xD23EF0", Offset = "0xD224F0", VA = "0x180D23EF0")]
		set
		{
		}
	}

	[Token(Token = "0x1700023F")]
	public CameraOverrideOption requiresColorOption
	{
		[Token(Token = "0x60009B4")]
		[Address(RVA = "0x585030", Offset = "0x583630", VA = "0x180585030")]
		get
		{
			return default(CameraOverrideOption);
		}
		[Token(Token = "0x60009B5")]
		[Address(RVA = "0x585090", Offset = "0x583690", VA = "0x180585090")]
		set
		{
		}
	}

	[Token(Token = "0x17000240")]
	public CameraRenderType renderType
	{
		[Token(Token = "0x60009B6")]
		[Address(RVA = "0xB3E080", Offset = "0xB3C680", VA = "0x180B3E080")]
		get
		{
			return default(CameraRenderType);
		}
		[Token(Token = "0x60009B7")]
		[Address(RVA = "0xB3E0E0", Offset = "0xB3C6E0", VA = "0x180B3E0E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000241")]
	public List<Camera> cameraStack
	{
		[Token(Token = "0x60009B8")]
		[Address(RVA = "0x2CA3C60", Offset = "0x2CA2260", VA = "0x182CA3C60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000242")]
	public bool clearDepth
	{
		[Token(Token = "0x60009BA")]
		[Address(RVA = "0x2CA3E70", Offset = "0x2CA2470", VA = "0x182CA3E70")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000243")]
	public bool requiresDepthTexture
	{
		[Token(Token = "0x60009BB")]
		[Address(RVA = "0x2CA3FB0", Offset = "0x2CA25B0", VA = "0x182CA3FB0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60009BC")]
		[Address(RVA = "0x2CA43D0", Offset = "0x2CA29D0", VA = "0x182CA43D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000244")]
	public bool requiresColorTexture
	{
		[Token(Token = "0x60009BD")]
		[Address(RVA = "0x2CA3F40", Offset = "0x2CA2540", VA = "0x182CA3F40")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60009BE")]
		[Address(RVA = "0x2CA43B0", Offset = "0x2CA29B0", VA = "0x182CA43B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000245")]
	public ScriptableRenderer scriptableRenderer
	{
		[Token(Token = "0x60009BF")]
		[Address(RVA = "0x2CA4090", Offset = "0x2CA2690", VA = "0x182CA4090")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000246")]
	public LayerMask volumeLayerMask
	{
		[Token(Token = "0x60009C1")]
		[Address(RVA = "0x19CF1C0", Offset = "0x19CD7C0", VA = "0x1819CF1C0")]
		get
		{
			return default(LayerMask);
		}
		[Token(Token = "0x60009C2")]
		[Address(RVA = "0x1CFE070", Offset = "0x1CFC670", VA = "0x181CFE070")]
		set
		{
		}
	}

	[Token(Token = "0x17000247")]
	public Transform volumeTrigger
	{
		[Token(Token = "0x60009C3")]
		[Address(RVA = "0x5853C0", Offset = "0x5839C0", VA = "0x1805853C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60009C4")]
		[Address(RVA = "0xE8F700", Offset = "0xE8DD00", VA = "0x180E8F700")]
		set
		{
		}
	}

	[Token(Token = "0x17000248")]
	internal VolumeFrameworkUpdateMode volumeFrameworkUpdateMode
	{
		[Token(Token = "0x60009C5")]
		[Address(RVA = "0xB3DFC0", Offset = "0xB3C5C0", VA = "0x180B3DFC0")]
		get
		{
			return default(VolumeFrameworkUpdateMode);
		}
		[Token(Token = "0x60009C6")]
		[Address(RVA = "0xB3E0D0", Offset = "0xB3C6D0", VA = "0x180B3E0D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000249")]
	public bool requiresVolumeFrameworkUpdate
	{
		[Token(Token = "0x60009C7")]
		[Address(RVA = "0x2CA4020", Offset = "0x2CA2620", VA = "0x182CA4020")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700024A")]
	public VolumeStack volumeStack
	{
		[Token(Token = "0x60009C8")]
		[Address(RVA = "0xC8FF80", Offset = "0xC8E580", VA = "0x180C8FF80")]
		get
		{
			return null;
		}
		[Token(Token = "0x60009C9")]
		[Address(RVA = "0x2CA4430", Offset = "0x2CA2A30", VA = "0x182CA4430")]
		set
		{
		}
	}

	[Token(Token = "0x1700024B")]
	public bool renderPostProcessing
	{
		[Token(Token = "0x60009CB")]
		[Address(RVA = "0x1CFDD60", Offset = "0x1CFC360", VA = "0x181CFDD60")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60009CC")]
		[Address(RVA = "0x1CFDDC0", Offset = "0x1CFC3C0", VA = "0x181CFDDC0")]
		set
		{
		}
	}

	[Token(Token = "0x1700024C")]
	public AntialiasingMode antialiasing
	{
		[Token(Token = "0x60009CD")]
		[Address(RVA = "0x58A540", Offset = "0x588B40", VA = "0x18058A540")]
		get
		{
			return default(AntialiasingMode);
		}
		[Token(Token = "0x60009CE")]
		[Address(RVA = "0x58A8D0", Offset = "0x588ED0", VA = "0x18058A8D0")]
		set
		{
		}
	}

	[Token(Token = "0x1700024D")]
	public AntialiasingQuality antialiasingQuality
	{
		[Token(Token = "0x60009CF")]
		[Address(RVA = "0xB57820", Offset = "0xB55E20", VA = "0x180B57820")]
		get
		{
			return default(AntialiasingQuality);
		}
		[Token(Token = "0x60009D0")]
		[Address(RVA = "0x1CFDDB0", Offset = "0x1CFC3B0", VA = "0x181CFDDB0")]
		set
		{
		}
	}

	[Token(Token = "0x1700024E")]
	public unsafe ref TemporalAA.Settings taaSettings
	{
		[Token(Token = "0x60009D1")]
		[Address(RVA = "0xDFFF20", Offset = "0xDFE520", VA = "0x180DFFF20")]
		get
		{
			return ref *(TemporalAA.Settings*)null;
		}
	}

	[Token(Token = "0x1700024F")]
	public ICameraHistoryReadAccess history
	{
		[Token(Token = "0x60009D2")]
		[Address(RVA = "0x58A580", Offset = "0x588B80", VA = "0x18058A580")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000250")]
	internal UniversalCameraHistory historyManager
	{
		[Token(Token = "0x60009D3")]
		[Address(RVA = "0x58A580", Offset = "0x588B80", VA = "0x18058A580")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000251")]
	internal MotionVectorsPersistentData motionVectorsPersistentData
	{
		[Token(Token = "0x60009D4")]
		[Address(RVA = "0xA4D3D0", Offset = "0xA4B9D0", VA = "0x180A4D3D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000252")]
	public bool resetHistory
	{
		[Token(Token = "0x60009D5")]
		[Address(RVA = "0x27CB170", Offset = "0x27C9770", VA = "0x1827CB170")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60009D6")]
		[Address(RVA = "0x2CA43F0", Offset = "0x2CA29F0", VA = "0x182CA43F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000253")]
	public bool stopNaN
	{
		[Token(Token = "0x60009D7")]
		[Address(RVA = "0x1937790", Offset = "0x1935D90", VA = "0x181937790")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60009D8")]
		[Address(RVA = "0x19377D0", Offset = "0x1935DD0", VA = "0x1819377D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000254")]
	public bool dithering
	{
		[Token(Token = "0x60009D9")]
		[Address(RVA = "0x1A21E30", Offset = "0x1A20430", VA = "0x181A21E30")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60009DA")]
		[Address(RVA = "0x1C5E470", Offset = "0x1C5CA70", VA = "0x181C5E470")]
		set
		{
		}
	}

	[Token(Token = "0x17000255")]
	public bool allowXRRendering
	{
		[Token(Token = "0x60009DB")]
		[Address(RVA = "0x2CA3C50", Offset = "0x2CA2250", VA = "0x182CA3C50")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60009DC")]
		[Address(RVA = "0x2CA43A0", Offset = "0x2CA29A0", VA = "0x182CA43A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000256")]
	public bool useScreenCoordOverride
	{
		[Token(Token = "0x60009DD")]
		[Address(RVA = "0x2C120B0", Offset = "0x2C106B0", VA = "0x182C120B0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60009DE")]
		[Address(RVA = "0x2C12970", Offset = "0x2C10F70", VA = "0x182C12970")]
		set
		{
		}
	}

	[Token(Token = "0x17000257")]
	public Vector4 screenSizeOverride
	{
		[Token(Token = "0x60009DF")]
		[Address(RVA = "0x1BD8500", Offset = "0x1BD6B00", VA = "0x181BD8500")]
		get
		{
			return default(Vector4);
		}
		[Token(Token = "0x60009E0")]
		[Address(RVA = "0x1C613E0", Offset = "0x1C5F9E0", VA = "0x181C613E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000258")]
	public Vector4 screenCoordScaleBias
	{
		[Token(Token = "0x60009E1")]
		[Address(RVA = "0x1C612E0", Offset = "0x1C5F8E0", VA = "0x181C612E0")]
		get
		{
			return default(Vector4);
		}
		[Token(Token = "0x60009E2")]
		[Address(RVA = "0x1C613C0", Offset = "0x1C5F9C0", VA = "0x181C613C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000259")]
	public bool allowHDROutput
	{
		[Token(Token = "0x60009E3")]
		[Address(RVA = "0x1B020E0", Offset = "0x1B006E0", VA = "0x181B020E0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60009E4")]
		[Address(RVA = "0x2B9B700", Offset = "0x2B99D00", VA = "0x182B9B700")]
		set
		{
		}
	}

	[Token(Token = "0x1700025A")]
	[Obsolete("This field has been deprecated. #from(6000.2)")]
	public float version
	{
		[Token(Token = "0x60009EB")]
		[Address(RVA = "0x2CA4390", Offset = "0x2CA2990", VA = "0x182CA4390")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x60009AF")]
	[Address(RVA = "0x2CA3640", Offset = "0x2CA1C40", VA = "0x182CA3640")]
	private void Start()
	{
	}

	[Token(Token = "0x60009B9")]
	[Address(RVA = "0x2CA36F0", Offset = "0x2CA1CF0", VA = "0x182CA36F0")]
	internal void UpdateCameraStack()
	{
	}

	[Token(Token = "0x60009C0")]
	[Address(RVA = "0x1A40490", Offset = "0x1A3EA90", VA = "0x181A40490")]
	public void SetRenderer(int index)
	{
	}

	[Token(Token = "0x60009CA")]
	[Address(RVA = "0x2CA2E10", Offset = "0x2CA1410", VA = "0x182CA2E10")]
	internal void GetOrCreateVolumeStack()
	{
	}

	[Token(Token = "0x60009E5")]
	[Address(RVA = "0x2CA35B0", Offset = "0x2CA1BB0", VA = "0x182CA35B0")]
	public void OnValidate()
	{
	}

	[Token(Token = "0x60009E6")]
	[Address(RVA = "0x2CA3470", Offset = "0x2CA1A70", VA = "0x182CA3470")]
	public void OnDrawGizmos()
	{
	}

	[Token(Token = "0x60009E7")]
	[Address(RVA = "0x2CA3250", Offset = "0x2CA1850", VA = "0x182CA3250")]
	public void OnDestroy()
	{
	}

	[Token(Token = "0x60009E8")]
	[Address(RVA = "0x2CA30F0", Offset = "0x2CA16F0", VA = "0x182CA30F0")]
	private ScriptableRenderer GetRawRenderer()
	{
		return null;
	}

	[Token(Token = "0x60009E9")]
	[Address(RVA = "0x2CA36D0", Offset = "0x2CA1CD0", VA = "0x182CA36D0", Slot = "4")]
	private void UnityEngine_002EISerializationCallbackReceiver_002EOnBeforeSerialize()
	{
	}

	[Token(Token = "0x60009EA")]
	[Address(RVA = "0x2CA3680", Offset = "0x2CA1C80", VA = "0x182CA3680", Slot = "5")]
	private void UnityEngine_002EISerializationCallbackReceiver_002EOnAfterDeserialize()
	{
	}

	[Token(Token = "0x60009EC")]
	[Address(RVA = "0x2CA39D0", Offset = "0x2CA1FD0", VA = "0x182CA39D0")]
	public UniversalAdditionalCameraData()
	{
	}
}
