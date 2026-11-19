// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.PanelSettings
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Serialization;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000275")]
[HelpURL("UIE-Runtime-Panel-Settings")]
public class PanelSettings : ScriptableObject
{
	[Token(Token = "0x2000276")]
	private class RuntimePanelAccess
	{
		[Token(Token = "0x400094B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private readonly PanelSettings m_Settings;

		[Token(Token = "0x400094C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private BaseRuntimePanel m_RuntimePanel;

		[Token(Token = "0x17000367")]
		internal bool isInitialized
		{
			[Token(Token = "0x60010D3")]
			[Address(RVA = "0x6C87670", Offset = "0x6C86670", VA = "0x6C87670")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000368")]
		internal bool isTransient
		{
			[Token(Token = "0x60010D4")]
			[Address(RVA = "0x6C89420", Offset = "0x6C88420", VA = "0x6C89420")]
			[CompilerGenerated]
			get
			{
				return default(bool);
			}
			[Token(Token = "0x60010D5")]
			[Address(RVA = "0x6C89430", Offset = "0x6C88430", VA = "0x6C89430")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x17000369")]
		internal BaseRuntimePanel panel
		{
			[Token(Token = "0x60010D6")]
			[Address(RVA = "0x6C87400", Offset = "0x6C86400", VA = "0x6C87400")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60010D2")]
		[Address(RVA = "0x6C878C0", Offset = "0x6C868C0", VA = "0x6C878C0")]
		internal RuntimePanelAccess(PanelSettings settings)
		{
		}

		[Token(Token = "0x60010D7")]
		[Address(RVA = "0x6C87D80", Offset = "0x6C86D80", VA = "0x6C87D80")]
		internal void DisposePanel()
		{
		}

		[Token(Token = "0x60010D8")]
		[Address(RVA = "0x6C86FB0", Offset = "0x6C85FB0", VA = "0x6C86FB0")]
		internal void SetTargetTexture()
		{
		}

		[Token(Token = "0x60010D9")]
		[Address(RVA = "0x6C87240", Offset = "0x6C86240", VA = "0x6C87240")]
		internal void SetSortingPriority()
		{
		}

		[Token(Token = "0x60010DA")]
		[Address(RVA = "0x6C872C0", Offset = "0x6C862C0", VA = "0x6C872C0")]
		internal void SetTargetDisplay()
		{
		}

		[Token(Token = "0x60010DB")]
		[Address(RVA = "0x6C87F00", Offset = "0x6C86F00", VA = "0x6C87F00")]
		internal void SetPanelChangeReceiver()
		{
		}

		[Token(Token = "0x60010DC")]
		[Address(RVA = "0x6C89440", Offset = "0x6C88440", VA = "0x6C89440")]
		private BaseRuntimePanel CreateRelatedRuntimePanel()
		{
			return null;
		}

		[Token(Token = "0x60010DD")]
		[Address(RVA = "0x6C89570", Offset = "0x6C88570", VA = "0x6C89570")]
		private void DisposeRelatedPanel()
		{
		}

		[Token(Token = "0x60010DE")]
		[Address(RVA = "0x6C893C0", Offset = "0x6C883C0", VA = "0x6C893C0")]
		internal void MarkPotentiallyEmpty()
		{
		}
	}

	[Token(Token = "0x400091D")]
	private const int k_DefaultSortingOrder = 0;

	[Token(Token = "0x400091E")]
	private const float k_DefaultScaleValue = 1f;

	[Token(Token = "0x400091F")]
	internal const string k_DefaultStyleSheetPath = "Packages/com.unity.ui/PackageResources/StyleSheets/Generated/Default.tss.asset";

	[Token(Token = "0x4000920")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	[SerializeField]
	private ThemeStyleSheet themeUss;

	[Token(Token = "0x4000921")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	[SerializeField]
	private bool m_DisableNoThemeWarning;

	[Token(Token = "0x4000922")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	[SerializeField]
	private RenderTexture m_TargetTexture;

	[Token(Token = "0x4000923")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	[SerializeField]
	private PanelRenderMode m_RenderMode;

	[Token(Token = "0x4000924")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x34")]
	[SerializeField]
	[FormerlySerializedAs("m_WorldInputMode")]
	private ColliderUpdateMode m_ColliderUpdateMode;

	[Token(Token = "0x4000925")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	[SerializeField]
	private bool m_ColliderIsTrigger;

	[Token(Token = "0x4000926")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x3C")]
	[SerializeField]
	private PanelScaleMode m_ScaleMode;

	[Token(Token = "0x4000927")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	[SerializeField]
	private float m_ReferenceSpritePixelsPerUnit;

	[Token(Token = "0x4000928")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x44")]
	[SerializeField]
	private float m_PixelsPerUnit;

	[Token(Token = "0x4000929")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	[SerializeField]
	private float m_Scale;

	[Token(Token = "0x400092A")]
	private const float DefaultDpi = 96f;

	[Token(Token = "0x400092B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4C")]
	[SerializeField]
	private float m_ReferenceDpi;

	[Token(Token = "0x400092C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	[SerializeField]
	private float m_FallbackDpi;

	[Token(Token = "0x400092D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x54")]
	[SerializeField]
	private Vector2Int m_ReferenceResolution;

	[Token(Token = "0x400092E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x5C")]
	[SerializeField]
	private PanelScreenMatchMode m_ScreenMatchMode;

	[Token(Token = "0x400092F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	[SerializeField]
	[Range(0f, 1f)]
	private float m_Match;

	[Token(Token = "0x4000930")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x64")]
	[SerializeField]
	private float m_SortingOrder;

	[Token(Token = "0x4000931")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	[SerializeField]
	private int m_TargetDisplay;

	[Token(Token = "0x4000932")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x6C")]
	[SerializeField]
	private BindingLogLevel m_BindingLogLevel;

	[Token(Token = "0x4000933")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	[SerializeField]
	private bool m_ClearDepthStencil;

	[Token(Token = "0x4000934")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x71")]
	[SerializeField]
	private bool m_ClearColor;

	[Token(Token = "0x4000935")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x74")]
	[SerializeField]
	private Color m_ColorClearValue;

	[Token(Token = "0x4000936")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x84")]
	[SerializeField]
	private uint m_VertexBudget;

	[Token(Token = "0x4000937")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	[SerializeField]
	private TextureSlotCount m_TextureSlotCount;

	[Token(Token = "0x4000938")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private RuntimePanelAccess m_PanelAccess;

	[Token(Token = "0x4000939")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	internal UIDocumentList m_AttachedUIDocumentsList;

	[Token(Token = "0x400093A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	[HideInInspector]
	[SerializeField]
	private DynamicAtlasSettings m_DynamicAtlasSettings;

	[Token(Token = "0x400093B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	[SerializeField]
	[HideInInspector]
	private Shader m_AtlasBlitShader;

	[Token(Token = "0x400093C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	[SerializeField]
	[HideInInspector]
	private Shader m_DefaultShader;

	[Token(Token = "0x400093D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	[SerializeField]
	[HideInInspector]
	private Shader m_RuntimeGaussianBlurShader;

	[Token(Token = "0x400093E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	[SerializeField]
	[HideInInspector]
	private Shader m_RuntimeColorEffectShader;

	[Token(Token = "0x400093F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	[HideInInspector]
	[SerializeField]
	private Shader m_SDFShader;

	[Token(Token = "0x4000940")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	[HideInInspector]
	[SerializeField]
	private Shader m_BitmapShader;

	[Token(Token = "0x4000941")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	[SerializeField]
	[HideInInspector]
	private Shader m_SpriteShader;

	[Token(Token = "0x4000942")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	[SerializeField]
	[HideInInspector]
	internal TextAsset m_ICUDataAsset;

	[Token(Token = "0x4000943")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	[SerializeField]
	public bool forceGammaRendering;

	[Token(Token = "0x4000944")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
	[SerializeField]
	public PanelTextSettings textSettings;

	[Token(Token = "0x4000945")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF8")]
	private Rect m_TargetRect;

	[Token(Token = "0x4000946")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x108")]
	private float m_ResolvedScale;

	[Token(Token = "0x4000947")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x110")]
	private StyleSheet m_OldThemeUss;

	[Token(Token = "0x4000949")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x120")]
	private IDebugPanelChangeReceiver m_PanelChangeReceiver;

	[Token(Token = "0x400094A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x128")]
	private Func<Vector2, Vector3> m_AssignedScreenToPanel;

	[Token(Token = "0x17000349")]
	public ThemeStyleSheet themeStyleSheet
	{
		[Token(Token = "0x6001087")]
		[Address(RVA = "0x6C86CF0", Offset = "0x6C85CF0", VA = "0x6C86CF0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001088")]
		[Address(RVA = "0x6C86D00", Offset = "0x6C85D00", VA = "0x6C86D00")]
		set
		{
		}
	}

	[Token(Token = "0x1700034A")]
	internal bool disableNoThemeWarning
	{
		[Token(Token = "0x6001089")]
		[Address(RVA = "0x6C86F30", Offset = "0x6C85F30", VA = "0x6C86F30")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600108A")]
		[Address(RVA = "0x6C86F40", Offset = "0x6C85F40", VA = "0x6C86F40")]
		set
		{
		}
	}

	[Token(Token = "0x1700034B")]
	public RenderTexture targetTexture
	{
		[Token(Token = "0x600108B")]
		[Address(RVA = "0x6C86F50", Offset = "0x6C85F50", VA = "0x6C86F50")]
		get
		{
			return null;
		}
		[Token(Token = "0x600108C")]
		[Address(RVA = "0x6C86F60", Offset = "0x6C85F60", VA = "0x6C86F60")]
		set
		{
		}
	}

	[Token(Token = "0x1700034C")]
	public PanelRenderMode renderMode
	{
		[Token(Token = "0x600108D")]
		[Address(RVA = "0x6C86FF0", Offset = "0x6C85FF0", VA = "0x6C86FF0")]
		get
		{
			return default(PanelRenderMode);
		}
		[Token(Token = "0x600108E")]
		[Address(RVA = "0x6C87000", Offset = "0x6C86000", VA = "0x6C87000")]
		set
		{
		}
	}

	[Token(Token = "0x1700034D")]
	internal ColliderUpdateMode colliderUpdateMode
	{
		[Token(Token = "0x600108F")]
		[Address(RVA = "0x6C87010", Offset = "0x6C86010", VA = "0x6C87010")]
		get
		{
			return default(ColliderUpdateMode);
		}
		[Token(Token = "0x6001090")]
		[Address(RVA = "0x6C87020", Offset = "0x6C86020", VA = "0x6C87020")]
		set
		{
		}
	}

	[Token(Token = "0x1700034E")]
	internal bool colliderIsTrigger
	{
		[Token(Token = "0x6001091")]
		[Address(RVA = "0x6C87030", Offset = "0x6C86030", VA = "0x6C87030")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001092")]
		[Address(RVA = "0x6C87040", Offset = "0x6C86040", VA = "0x6C87040")]
		set
		{
		}
	}

	[Token(Token = "0x1700034F")]
	public PanelScaleMode scaleMode
	{
		[Token(Token = "0x6001093")]
		[Address(RVA = "0x6C87050", Offset = "0x6C86050", VA = "0x6C87050")]
		get
		{
			return default(PanelScaleMode);
		}
		[Token(Token = "0x6001094")]
		[Address(RVA = "0x6C87060", Offset = "0x6C86060", VA = "0x6C87060")]
		set
		{
		}
	}

	[Token(Token = "0x17000350")]
	public float referenceSpritePixelsPerUnit
	{
		[Token(Token = "0x6001095")]
		[Address(RVA = "0x6C87070", Offset = "0x6C86070", VA = "0x6C87070")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6001096")]
		[Address(RVA = "0x6C87080", Offset = "0x6C86080", VA = "0x6C87080")]
		set
		{
		}
	}

	[Token(Token = "0x17000351")]
	internal float pixelsPerUnit
	{
		[Token(Token = "0x6001097")]
		[Address(RVA = "0x6C87090", Offset = "0x6C86090", VA = "0x6C87090")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6001098")]
		[Address(RVA = "0x6C870A0", Offset = "0x6C860A0", VA = "0x6C870A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000352")]
	public float scale
	{
		[Token(Token = "0x6001099")]
		[Address(RVA = "0x6C870B0", Offset = "0x6C860B0", VA = "0x6C870B0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600109A")]
		[Address(RVA = "0x6C870C0", Offset = "0x6C860C0", VA = "0x6C870C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000353")]
	public float referenceDpi
	{
		[Token(Token = "0x600109B")]
		[Address(RVA = "0x6C870D0", Offset = "0x6C860D0", VA = "0x6C870D0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600109C")]
		[Address(RVA = "0x6C870E0", Offset = "0x6C860E0", VA = "0x6C870E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000354")]
	public float fallbackDpi
	{
		[Token(Token = "0x600109D")]
		[Address(RVA = "0x6C87110", Offset = "0x6C86110", VA = "0x6C87110")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600109E")]
		[Address(RVA = "0x6C87120", Offset = "0x6C86120", VA = "0x6C87120")]
		set
		{
		}
	}

	[Token(Token = "0x17000355")]
	public Vector2Int referenceResolution
	{
		[Token(Token = "0x600109F")]
		[Address(RVA = "0x6C87150", Offset = "0x6C86150", VA = "0x6C87150")]
		get
		{
			return default(Vector2Int);
		}
		[Token(Token = "0x60010A0")]
		[Address(RVA = "0x6C87160", Offset = "0x6C86160", VA = "0x6C87160")]
		set
		{
		}
	}

	[Token(Token = "0x17000356")]
	public PanelScreenMatchMode screenMatchMode
	{
		[Token(Token = "0x60010A1")]
		[Address(RVA = "0x6C87170", Offset = "0x6C86170", VA = "0x6C87170")]
		get
		{
			return default(PanelScreenMatchMode);
		}
		[Token(Token = "0x60010A2")]
		[Address(RVA = "0x6C87180", Offset = "0x6C86180", VA = "0x6C87180")]
		set
		{
		}
	}

	[Token(Token = "0x17000357")]
	public float match
	{
		[Token(Token = "0x60010A3")]
		[Address(RVA = "0x6C87190", Offset = "0x6C86190", VA = "0x6C87190")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60010A4")]
		[Address(RVA = "0x6C871A0", Offset = "0x6C861A0", VA = "0x6C871A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000358")]
	public float sortingOrder
	{
		[Token(Token = "0x60010A5")]
		[Address(RVA = "0x6C871B0", Offset = "0x6C861B0", VA = "0x6C871B0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60010A6")]
		[Address(RVA = "0x6C871C0", Offset = "0x6C861C0", VA = "0x6C871C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000359")]
	public int targetDisplay
	{
		[Token(Token = "0x60010A8")]
		[Address(RVA = "0x6C87270", Offset = "0x6C86270", VA = "0x6C87270")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60010A9")]
		[Address(RVA = "0x6C87280", Offset = "0x6C86280", VA = "0x6C87280")]
		set
		{
		}
	}

	[Token(Token = "0x1700035A")]
	public BindingLogLevel bindingLogLevel
	{
		[Token(Token = "0x60010AA")]
		[Address(RVA = "0x6C872F0", Offset = "0x6C862F0", VA = "0x6C872F0")]
		get
		{
			return default(BindingLogLevel);
		}
		[Token(Token = "0x60010AB")]
		[Address(RVA = "0x6C87300", Offset = "0x6C86300", VA = "0x6C87300")]
		set
		{
		}
	}

	[Token(Token = "0x1700035B")]
	public bool clearDepthStencil
	{
		[Token(Token = "0x60010AC")]
		[Address(RVA = "0x6C87350", Offset = "0x6C86350", VA = "0x6C87350")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60010AD")]
		[Address(RVA = "0x6C87360", Offset = "0x6C86360", VA = "0x6C87360")]
		set
		{
		}
	}

	[Token(Token = "0x1700035C")]
	public float depthClearValue
	{
		[Token(Token = "0x60010AE")]
		[Address(RVA = "0x6C87370", Offset = "0x6C86370", VA = "0x6C87370")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700035D")]
	public bool clearColor
	{
		[Token(Token = "0x60010AF")]
		[Address(RVA = "0x6C87380", Offset = "0x6C86380", VA = "0x6C87380")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60010B0")]
		[Address(RVA = "0x6C87390", Offset = "0x6C86390", VA = "0x6C87390")]
		set
		{
		}
	}

	[Token(Token = "0x1700035E")]
	public Color colorClearValue
	{
		[Token(Token = "0x60010B1")]
		[Address(RVA = "0x6C873A0", Offset = "0x6C863A0", VA = "0x6C873A0")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x60010B2")]
		[Address(RVA = "0x6C873B0", Offset = "0x6C863B0", VA = "0x6C873B0")]
		set
		{
		}
	}

	[Token(Token = "0x1700035F")]
	public uint vertexBudget
	{
		[Token(Token = "0x60010B3")]
		[Address(RVA = "0x6C873C0", Offset = "0x6C863C0", VA = "0x6C873C0")]
		get
		{
			return default(uint);
		}
		[Token(Token = "0x60010B4")]
		[Address(RVA = "0x6C873D0", Offset = "0x6C863D0", VA = "0x6C873D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000360")]
	public TextureSlotCount textureSlotCount
	{
		[Token(Token = "0x60010B5")]
		[Address(RVA = "0x6C873E0", Offset = "0x6C863E0", VA = "0x6C873E0")]
		get
		{
			return default(TextureSlotCount);
		}
		[Token(Token = "0x60010B6")]
		[Address(RVA = "0x6C873F0", Offset = "0x6C863F0", VA = "0x6C873F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000361")]
	internal BaseRuntimePanel panel
	{
		[Token(Token = "0x60010B7")]
		[Address(RVA = "0x6C87330", Offset = "0x6C86330", VA = "0x6C87330")]
		[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.VectorGraphicsModule" })]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000362")]
	internal bool isInitialized
	{
		[Token(Token = "0x60010B8")]
		[Address(RVA = "0x6C87650", Offset = "0x6C86650", VA = "0x6C87650")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000363")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.VectorGraphicsModule" })]
	internal bool isTransient
	{
		[Token(Token = "0x60010B9")]
		[Address(RVA = "0x6C87680", Offset = "0x6C86680", VA = "0x6C87680")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60010BA")]
		[Address(RVA = "0x6C876A0", Offset = "0x6C866A0", VA = "0x6C876A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000364")]
	internal VisualElement visualTree
	{
		[Token(Token = "0x60010BB")]
		[Address(RVA = "0x6C876C0", Offset = "0x6C866C0", VA = "0x6C876C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000365")]
	public DynamicAtlasSettings dynamicAtlasSettings
	{
		[Token(Token = "0x60010BC")]
		[Address(RVA = "0x6C87700", Offset = "0x6C86700", VA = "0x6C87700")]
		get
		{
			return null;
		}
		[Token(Token = "0x60010BD")]
		[Address(RVA = "0x6C87710", Offset = "0x6C86710", VA = "0x6C87710")]
		set
		{
		}
	}

	[Token(Token = "0x17000366")]
	private float ScreenDPI
	{
		[Token(Token = "0x60010C3")]
		[Address(RVA = "0x6C87E90", Offset = "0x6C86E90", VA = "0x6C87E90")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60010C4")]
		[Address(RVA = "0x6C87EA0", Offset = "0x6C86EA0", VA = "0x6C87EA0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x60010A7")]
	[Address(RVA = "0x6C87200", Offset = "0x6C86200", VA = "0x6C87200")]
	internal void ApplySortingOrder()
	{
	}

	[Token(Token = "0x60010BE")]
	[Address(RVA = "0x6C87730", Offset = "0x6C86730", VA = "0x6C87730")]
	private PanelSettings()
	{
	}

	[Token(Token = "0x60010BF")]
	[Address(RVA = "0x6C878F0", Offset = "0x6C868F0", VA = "0x6C878F0")]
	private void Reset()
	{
	}

	[Token(Token = "0x60010C0")]
	[Address(RVA = "0x6C87900", Offset = "0x6C86900", VA = "0x6C87900")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x60010C1")]
	[Address(RVA = "0x6C87CF0", Offset = "0x6C86CF0", VA = "0x6C87CF0")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x60010C2")]
	[Address(RVA = "0x6C87E00", Offset = "0x6C86E00", VA = "0x6C87E00")]
	internal void DisposePanel()
	{
	}

	[Token(Token = "0x60010C5")]
	[Address(RVA = "0x6C87EB0", Offset = "0x6C86EB0", VA = "0x6C87EB0")]
	[Conditional("ENABLE_PROFILER")]
	public void SetPanelChangeReceiver(IDebugPanelChangeReceiver value)
	{
	}

	[Token(Token = "0x60010C6")]
	[Address(RVA = "0x6C87F30", Offset = "0x6C86F30", VA = "0x6C87F30")]
	internal IDebugPanelChangeReceiver GetPanelChangeReceiver()
	{
		return null;
	}

	[Token(Token = "0x60010C7")]
	[Address(RVA = "0x6C87920", Offset = "0x6C86920", VA = "0x6C87920")]
	internal void UpdateScreenDPI()
	{
	}

	[Token(Token = "0x60010C8")]
	[Address(RVA = "0x6C86D20", Offset = "0x6C85D20", VA = "0x6C86D20")]
	private void ApplyThemeStyleSheet([Optional] VisualElement root)
	{
	}

	[Token(Token = "0x60010C9")]
	[Address(RVA = "0x6C87CE0", Offset = "0x6C86CE0", VA = "0x6C87CE0")]
	internal bool AssignICUData()
	{
		return default(bool);
	}

	[Token(Token = "0x60010CA")]
	[Address(RVA = "0x6C87940", Offset = "0x6C86940", VA = "0x6C87940")]
	private void InitializeShaders()
	{
	}

	[Token(Token = "0x60010CB")]
	[Address(RVA = "0x6C87F40", Offset = "0x6C86F40", VA = "0x6C87F40")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.VectorGraphicsModule" })]
	internal void ApplyPanelSettings()
	{
	}

	[Token(Token = "0x60010CC")]
	[Address(RVA = "0x6C88B70", Offset = "0x6C87B70", VA = "0x6C88B70")]
	public void SetScreenToPanelSpaceFunction3D(Func<Vector2, Vector3> screenToPanelSpaceFunction)
	{
	}

	[Token(Token = "0x60010CD")]
	[Address(RVA = "0x6C88BC0", Offset = "0x6C87BC0", VA = "0x6C88BC0")]
	public void SetScreenToPanelSpaceFunction(Func<Vector2, Vector2> screenToPanelSpaceFunction)
	{
	}

	[Token(Token = "0x60010CE")]
	[Address(RVA = "0x6C889F0", Offset = "0x6C879F0", VA = "0x6C889F0")]
	internal float ResolveScale(Rect targetRect, float screenDpi)
	{
		return default(float);
	}

	[Token(Token = "0x60010CF")]
	[Address(RVA = "0x6C88910", Offset = "0x6C87910", VA = "0x6C88910")]
	internal Rect GetDisplayRect()
	{
		return default(Rect);
	}

	[Token(Token = "0x60010D0")]
	[Address(RVA = "0x6C88CC0", Offset = "0x6C87CC0", VA = "0x6C88CC0")]
	internal void AttachAndInsertUIDocumentToVisualTree(UIDocument uiDocument)
	{
	}

	[Token(Token = "0x60010D1")]
	[Address(RVA = "0x6C892C0", Offset = "0x6C882C0", VA = "0x6C892C0")]
	internal void DetachUIDocument(UIDocument uiDocument)
	{
	}
}
