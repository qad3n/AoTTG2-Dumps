// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.UniversalAdditionalCameraData
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x669DD50", Offset = "0x669CD50", VA = "0x669DD50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700023C")]
	internal Camera camera
	{
		[Token(Token = "0x60009AE")]
		[Address(RVA = "0x669DF70", Offset = "0x669CF70", VA = "0x669DF70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700023D")]
	public bool renderShadows
	{
		[Token(Token = "0x60009B0")]
		[Address(RVA = "0x669E040", Offset = "0x669D040", VA = "0x669E040")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60009B1")]
		[Address(RVA = "0x669E050", Offset = "0x669D050", VA = "0x669E050")]
		set
		{
		}
	}

	[Token(Token = "0x1700023E")]
	public CameraOverrideOption requiresDepthOption
	{
		[Token(Token = "0x60009B2")]
		[Address(RVA = "0x669E060", Offset = "0x669D060", VA = "0x669E060")]
		get
		{
			return default(CameraOverrideOption);
		}
		[Token(Token = "0x60009B3")]
		[Address(RVA = "0x669E070", Offset = "0x669D070", VA = "0x669E070")]
		set
		{
		}
	}

	[Token(Token = "0x1700023F")]
	public CameraOverrideOption requiresColorOption
	{
		[Token(Token = "0x60009B4")]
		[Address(RVA = "0x669E080", Offset = "0x669D080", VA = "0x669E080")]
		get
		{
			return default(CameraOverrideOption);
		}
		[Token(Token = "0x60009B5")]
		[Address(RVA = "0x669E090", Offset = "0x669D090", VA = "0x669E090")]
		set
		{
		}
	}

	[Token(Token = "0x17000240")]
	public CameraRenderType renderType
	{
		[Token(Token = "0x60009B6")]
		[Address(RVA = "0x669E0A0", Offset = "0x669D0A0", VA = "0x669E0A0")]
		get
		{
			return default(CameraRenderType);
		}
		[Token(Token = "0x60009B7")]
		[Address(RVA = "0x669E0B0", Offset = "0x669D0B0", VA = "0x669E0B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000241")]
	public List<Camera> cameraStack
	{
		[Token(Token = "0x60009B8")]
		[Address(RVA = "0x6690AF0", Offset = "0x668FAF0", VA = "0x6690AF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000242")]
	public bool clearDepth
	{
		[Token(Token = "0x60009BA")]
		[Address(RVA = "0x669EAD0", Offset = "0x669DAD0", VA = "0x669EAD0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000243")]
	public bool requiresDepthTexture
	{
		[Token(Token = "0x60009BB")]
		[Address(RVA = "0x669EAE0", Offset = "0x669DAE0", VA = "0x669EAE0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60009BC")]
		[Address(RVA = "0x669EBE0", Offset = "0x669DBE0", VA = "0x669EBE0")]
		set
		{
		}
	}

	[Token(Token = "0x17000244")]
	public bool requiresColorTexture
	{
		[Token(Token = "0x60009BD")]
		[Address(RVA = "0x669EC00", Offset = "0x669DC00", VA = "0x669EC00")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60009BE")]
		[Address(RVA = "0x669ED00", Offset = "0x669DD00", VA = "0x669ED00")]
		set
		{
		}
	}

	[Token(Token = "0x17000245")]
	public ScriptableRenderer scriptableRenderer
	{
		[Token(Token = "0x60009BF")]
		[Address(RVA = "0x669E0C0", Offset = "0x669D0C0", VA = "0x669E0C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000246")]
	public LayerMask volumeLayerMask
	{
		[Token(Token = "0x60009C1")]
		[Address(RVA = "0x669ED30", Offset = "0x669DD30", VA = "0x669ED30")]
		get
		{
			return default(LayerMask);
		}
		[Token(Token = "0x60009C2")]
		[Address(RVA = "0x669ED40", Offset = "0x669DD40", VA = "0x669ED40")]
		set
		{
		}
	}

	[Token(Token = "0x17000247")]
	public Transform volumeTrigger
	{
		[Token(Token = "0x60009C3")]
		[Address(RVA = "0x669ED50", Offset = "0x669DD50", VA = "0x669ED50")]
		get
		{
			return null;
		}
		[Token(Token = "0x60009C4")]
		[Address(RVA = "0x669ED60", Offset = "0x669DD60", VA = "0x669ED60")]
		set
		{
		}
	}

	[Token(Token = "0x17000248")]
	internal VolumeFrameworkUpdateMode volumeFrameworkUpdateMode
	{
		[Token(Token = "0x60009C5")]
		[Address(RVA = "0x669ED70", Offset = "0x669DD70", VA = "0x669ED70")]
		get
		{
			return default(VolumeFrameworkUpdateMode);
		}
		[Token(Token = "0x60009C6")]
		[Address(RVA = "0x669ED80", Offset = "0x669DD80", VA = "0x669ED80")]
		set
		{
		}
	}

	[Token(Token = "0x17000249")]
	public bool requiresVolumeFrameworkUpdate
	{
		[Token(Token = "0x60009C7")]
		[Address(RVA = "0x669D400", Offset = "0x669C400", VA = "0x669D400")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700024A")]
	public VolumeStack volumeStack
	{
		[Token(Token = "0x60009C8")]
		[Address(RVA = "0x669ED90", Offset = "0x669DD90", VA = "0x669ED90")]
		get
		{
			return null;
		}
		[Token(Token = "0x60009C9")]
		[Address(RVA = "0x669DA70", Offset = "0x669CA70", VA = "0x669DA70")]
		set
		{
		}
	}

	[Token(Token = "0x1700024B")]
	public bool renderPostProcessing
	{
		[Token(Token = "0x60009CB")]
		[Address(RVA = "0x669EDA0", Offset = "0x669DDA0", VA = "0x669EDA0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60009CC")]
		[Address(RVA = "0x669EDB0", Offset = "0x669DDB0", VA = "0x669EDB0")]
		set
		{
		}
	}

	[Token(Token = "0x1700024C")]
	public AntialiasingMode antialiasing
	{
		[Token(Token = "0x60009CD")]
		[Address(RVA = "0x669EDC0", Offset = "0x669DDC0", VA = "0x669EDC0")]
		get
		{
			return default(AntialiasingMode);
		}
		[Token(Token = "0x60009CE")]
		[Address(RVA = "0x669EDD0", Offset = "0x669DDD0", VA = "0x669EDD0")]
		set
		{
		}
	}

	[Token(Token = "0x1700024D")]
	public AntialiasingQuality antialiasingQuality
	{
		[Token(Token = "0x60009CF")]
		[Address(RVA = "0x669EDE0", Offset = "0x669DDE0", VA = "0x669EDE0")]
		get
		{
			return default(AntialiasingQuality);
		}
		[Token(Token = "0x60009D0")]
		[Address(RVA = "0x669EDF0", Offset = "0x669DDF0", VA = "0x669EDF0")]
		set
		{
		}
	}

	[Token(Token = "0x1700024E")]
	public unsafe ref TemporalAA.Settings taaSettings
	{
		[Token(Token = "0x60009D1")]
		[Address(RVA = "0x669EE00", Offset = "0x669DE00", VA = "0x669EE00")]
		get
		{
			return ref *(TemporalAA.Settings*)null;
		}
	}

	[Token(Token = "0x1700024F")]
	public ICameraHistoryReadAccess history
	{
		[Token(Token = "0x60009D2")]
		[Address(RVA = "0x669EE10", Offset = "0x669DE10", VA = "0x669EE10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000250")]
	internal UniversalCameraHistory historyManager
	{
		[Token(Token = "0x60009D3")]
		[Address(RVA = "0x669EE20", Offset = "0x669DE20", VA = "0x669EE20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000251")]
	internal MotionVectorsPersistentData motionVectorsPersistentData
	{
		[Token(Token = "0x60009D4")]
		[Address(RVA = "0x669EE30", Offset = "0x669DE30", VA = "0x669EE30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000252")]
	public bool resetHistory
	{
		[Token(Token = "0x60009D5")]
		[Address(RVA = "0x669EE40", Offset = "0x669DE40", VA = "0x669EE40")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60009D6")]
		[Address(RVA = "0x669EE50", Offset = "0x669DE50", VA = "0x669EE50")]
		set
		{
		}
	}

	[Token(Token = "0x17000253")]
	public bool stopNaN
	{
		[Token(Token = "0x60009D7")]
		[Address(RVA = "0x669EE90", Offset = "0x669DE90", VA = "0x669EE90")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60009D8")]
		[Address(RVA = "0x669EEA0", Offset = "0x669DEA0", VA = "0x669EEA0")]
		set
		{
		}
	}

	[Token(Token = "0x17000254")]
	public bool dithering
	{
		[Token(Token = "0x60009D9")]
		[Address(RVA = "0x669EEB0", Offset = "0x669DEB0", VA = "0x669EEB0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60009DA")]
		[Address(RVA = "0x669EEC0", Offset = "0x669DEC0", VA = "0x669EEC0")]
		set
		{
		}
	}

	[Token(Token = "0x17000255")]
	public bool allowXRRendering
	{
		[Token(Token = "0x60009DB")]
		[Address(RVA = "0x669EED0", Offset = "0x669DED0", VA = "0x669EED0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60009DC")]
		[Address(RVA = "0x669EEE0", Offset = "0x669DEE0", VA = "0x669EEE0")]
		set
		{
		}
	}

	[Token(Token = "0x17000256")]
	public bool useScreenCoordOverride
	{
		[Token(Token = "0x60009DD")]
		[Address(RVA = "0x669EEF0", Offset = "0x669DEF0", VA = "0x669EEF0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60009DE")]
		[Address(RVA = "0x669EF00", Offset = "0x669DF00", VA = "0x669EF00")]
		set
		{
		}
	}

	[Token(Token = "0x17000257")]
	public Vector4 screenSizeOverride
	{
		[Token(Token = "0x60009DF")]
		[Address(RVA = "0x669EF10", Offset = "0x669DF10", VA = "0x669EF10")]
		get
		{
			return default(Vector4);
		}
		[Token(Token = "0x60009E0")]
		[Address(RVA = "0x669EF20", Offset = "0x669DF20", VA = "0x669EF20")]
		set
		{
		}
	}

	[Token(Token = "0x17000258")]
	public Vector4 screenCoordScaleBias
	{
		[Token(Token = "0x60009E1")]
		[Address(RVA = "0x669EF30", Offset = "0x669DF30", VA = "0x669EF30")]
		get
		{
			return default(Vector4);
		}
		[Token(Token = "0x60009E2")]
		[Address(RVA = "0x669EF40", Offset = "0x669DF40", VA = "0x669EF40")]
		set
		{
		}
	}

	[Token(Token = "0x17000259")]
	public bool allowHDROutput
	{
		[Token(Token = "0x60009E3")]
		[Address(RVA = "0x669EF50", Offset = "0x669DF50", VA = "0x669EF50")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60009E4")]
		[Address(RVA = "0x669EF60", Offset = "0x669DF60", VA = "0x669EF60")]
		set
		{
		}
	}

	[Token(Token = "0x1700025A")]
	[Obsolete("This field has been deprecated. #from(6000.2)")]
	public float version
	{
		[Token(Token = "0x60009EB")]
		[Address(RVA = "0x669F530", Offset = "0x669E530", VA = "0x669F530")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x60009AF")]
	[Address(RVA = "0x669E010", Offset = "0x669D010", VA = "0x669E010")]
	private void Start()
	{
	}

	[Token(Token = "0x60009B9")]
	[Address(RVA = "0x669E7F0", Offset = "0x669D7F0", VA = "0x669E7F0")]
	internal void UpdateCameraStack()
	{
	}

	[Token(Token = "0x60009C0")]
	[Address(RVA = "0x669ED20", Offset = "0x669DD20", VA = "0x669ED20")]
	public void SetRenderer(int index)
	{
	}

	[Token(Token = "0x60009CA")]
	[Address(RVA = "0x669D660", Offset = "0x669C660", VA = "0x669D660")]
	internal void GetOrCreateVolumeStack()
	{
	}

	[Token(Token = "0x60009E5")]
	[Address(RVA = "0x669EF70", Offset = "0x669DF70", VA = "0x669EF70")]
	public void OnValidate()
	{
	}

	[Token(Token = "0x60009E6")]
	[Address(RVA = "0x669F000", Offset = "0x669E000", VA = "0x669F000")]
	public void OnDrawGizmos()
	{
	}

	[Token(Token = "0x60009E7")]
	[Address(RVA = "0x669F0F0", Offset = "0x669E0F0", VA = "0x669F0F0")]
	public void OnDestroy()
	{
	}

	[Token(Token = "0x60009E8")]
	[Address(RVA = "0x669F1C0", Offset = "0x669E1C0", VA = "0x669F1C0")]
	private ScriptableRenderer GetRawRenderer()
	{
		return null;
	}

	[Token(Token = "0x60009E9")]
	[Address(RVA = "0x669F4E0", Offset = "0x669E4E0", VA = "0x669F4E0", Slot = "4")]
	private void UnityEngine_002EISerializationCallbackReceiver_002EOnBeforeSerialize()
	{
	}

	[Token(Token = "0x60009EA")]
	[Address(RVA = "0x669F500", Offset = "0x669E500", VA = "0x669F500", Slot = "5")]
	private void UnityEngine_002EISerializationCallbackReceiver_002EOnAfterDeserialize()
	{
	}

	[Token(Token = "0x60009EC")]
	[Address(RVA = "0x669DE00", Offset = "0x669CE00", VA = "0x669DE00")]
	public UniversalAdditionalCameraData()
	{
	}
}
