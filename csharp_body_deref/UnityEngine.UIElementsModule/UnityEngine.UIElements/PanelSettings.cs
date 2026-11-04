// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.PanelSettings
// Update status: CHANGED in this game update
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
			[Address(RVA = "0x1979E60", Offset = "0x1978460", VA = "0x181979E60")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000368")]
		internal bool isTransient
		{
			[Token(Token = "0x60010D4")]
			[Address(RVA = "0xF40050", Offset = "0xF3E650", VA = "0x180F40050")]
			[CompilerGenerated]
			get
			{
				return default(bool);
			}
			[Token(Token = "0x60010D5")]
			[Address(RVA = "0x138BAA0", Offset = "0x138A0A0", VA = "0x18138BAA0")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x17000369")]
		internal BaseRuntimePanel panel
		{
			[Token(Token = "0x60010D6")]
			[Address(RVA = "0x3284480", Offset = "0x3282A80", VA = "0x183284480")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60010D2")]
		[Address(RVA = "0x577FB0", Offset = "0x5765B0", VA = "0x180577FB0")]
		internal RuntimePanelAccess(PanelSettings settings)
		{
		}

		[Token(Token = "0x60010D7")]
		[Address(RVA = "0x3284270", Offset = "0x3282870", VA = "0x183284270")]
		internal void DisposePanel()
		{
		}

		[Token(Token = "0x60010D8")]
		[Address(RVA = "0x3284440", Offset = "0x3282A40", VA = "0x183284440")]
		internal void SetTargetTexture()
		{
		}

		[Token(Token = "0x60010D9")]
		[Address(RVA = "0x32843D0", Offset = "0x32829D0", VA = "0x1832843D0")]
		internal void SetSortingPriority()
		{
		}

		[Token(Token = "0x60010DA")]
		[Address(RVA = "0x3284410", Offset = "0x3282A10", VA = "0x183284410")]
		internal void SetTargetDisplay()
		{
		}

		[Token(Token = "0x60010DB")]
		[Address(RVA = "0x3284390", Offset = "0x3282990", VA = "0x183284390")]
		internal void SetPanelChangeReceiver()
		{
		}

		[Token(Token = "0x60010DC")]
		[Address(RVA = "0x3284190", Offset = "0x3282790", VA = "0x183284190")]
		private BaseRuntimePanel CreateRelatedRuntimePanel()
		{
			return null;
		}

		[Token(Token = "0x60010DD")]
		[Address(RVA = "0x32842F0", Offset = "0x32828F0", VA = "0x1832842F0")]
		private void DisposeRelatedPanel()
		{
		}

		[Token(Token = "0x60010DE")]
		[Address(RVA = "0x3284340", Offset = "0x3282940", VA = "0x183284340")]
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
	[Range(0f, 1f)]
	[SerializeField]
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
	[SerializeField]
	[HideInInspector]
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
	[HideInInspector]
	[SerializeField]
	private Shader m_RuntimeColorEffectShader;

	[Token(Token = "0x400093F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	[SerializeField]
	[HideInInspector]
	private Shader m_SDFShader;

	[Token(Token = "0x4000940")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	[HideInInspector]
	[SerializeField]
	private Shader m_BitmapShader;

	[Token(Token = "0x4000941")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	[HideInInspector]
	[SerializeField]
	private Shader m_SpriteShader;

	[Token(Token = "0x4000942")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	[HideInInspector]
	[SerializeField]
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
		[Address(RVA = "0x1536BF0", Offset = "0x15351F0", VA = "0x181536BF0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001088")]
		[Address(RVA = "0x3283640", Offset = "0x3281C40", VA = "0x183283640")]
		set
		{
		}
	}

	[Token(Token = "0x1700034A")]
	internal bool disableNoThemeWarning
	{
		[Token(Token = "0x6001089")]
		[Address(RVA = "0xF40050", Offset = "0xF3E650", VA = "0x180F40050")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600108A")]
		[Address(RVA = "0x138BAA0", Offset = "0x138A0A0", VA = "0x18138BAA0")]
		set
		{
		}
	}

	[Token(Token = "0x1700034B")]
	public RenderTexture targetTexture
	{
		[Token(Token = "0x600108B")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
		get
		{
			return null;
		}
		[Token(Token = "0x600108C")]
		[Address(RVA = "0x32835E0", Offset = "0x3281BE0", VA = "0x1832835E0")]
		set
		{
		}
	}

	[Token(Token = "0x1700034C")]
	public PanelRenderMode renderMode
	{
		[Token(Token = "0x600108D")]
		[Address(RVA = "0xAB9F60", Offset = "0xAB8560", VA = "0x180AB9F60")]
		get
		{
			return default(PanelRenderMode);
		}
		[Token(Token = "0x600108E")]
		[Address(RVA = "0x1826560", Offset = "0x1824B60", VA = "0x181826560")]
		set
		{
		}
	}

	[Token(Token = "0x1700034D")]
	internal ColliderUpdateMode colliderUpdateMode
	{
		[Token(Token = "0x600108F")]
		[Address(RVA = "0x16EF8A0", Offset = "0x16EDEA0", VA = "0x1816EF8A0")]
		get
		{
			return default(ColliderUpdateMode);
		}
		[Token(Token = "0x6001090")]
		[Address(RVA = "0x16EFA10", Offset = "0x16EE010", VA = "0x1816EFA10")]
		set
		{
		}
	}

	[Token(Token = "0x1700034E")]
	internal bool colliderIsTrigger
	{
		[Token(Token = "0x6001091")]
		[Address(RVA = "0xF1D190", Offset = "0xF1B790", VA = "0x180F1D190")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001092")]
		[Address(RVA = "0xF1D640", Offset = "0xF1BC40", VA = "0x180F1D640")]
		set
		{
		}
	}

	[Token(Token = "0x1700034F")]
	public PanelScaleMode scaleMode
	{
		[Token(Token = "0x6001093")]
		[Address(RVA = "0x19CF1C0", Offset = "0x19CD7C0", VA = "0x1819CF1C0")]
		get
		{
			return default(PanelScaleMode);
		}
		[Token(Token = "0x6001094")]
		[Address(RVA = "0x1CFE070", Offset = "0x1CFC670", VA = "0x181CFE070")]
		set
		{
		}
	}

	[Token(Token = "0x17000350")]
	public float referenceSpritePixelsPerUnit
	{
		[Token(Token = "0x6001095")]
		[Address(RVA = "0x2FC65A0", Offset = "0x2FC4BA0", VA = "0x182FC65A0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6001096")]
		[Address(RVA = "0xE8F730", Offset = "0xE8DD30", VA = "0x180E8F730")]
		set
		{
		}
	}

	[Token(Token = "0x17000351")]
	internal float pixelsPerUnit
	{
		[Token(Token = "0x6001097")]
		[Address(RVA = "0x2FFD2C0", Offset = "0x2FFB8C0", VA = "0x182FFD2C0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6001098")]
		[Address(RVA = "0x3283500", Offset = "0x3281B00", VA = "0x183283500")]
		set
		{
		}
	}

	[Token(Token = "0x17000352")]
	public float scale
	{
		[Token(Token = "0x6001099")]
		[Address(RVA = "0x5853E0", Offset = "0x5839E0", VA = "0x1805853E0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600109A")]
		[Address(RVA = "0x2E847A0", Offset = "0x2E82DA0", VA = "0x182E847A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000353")]
	public float referenceDpi
	{
		[Token(Token = "0x600109B")]
		[Address(RVA = "0x2E90970", Offset = "0x2E8EF70", VA = "0x182E90970")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600109C")]
		[Address(RVA = "0x3283510", Offset = "0x3281B10", VA = "0x183283510")]
		set
		{
		}
	}

	[Token(Token = "0x17000354")]
	public float fallbackDpi
	{
		[Token(Token = "0x600109D")]
		[Address(RVA = "0xDA5AC0", Offset = "0xDA40C0", VA = "0x180DA5AC0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600109E")]
		[Address(RVA = "0x32834B0", Offset = "0x3281AB0", VA = "0x1832834B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000355")]
	public Vector2Int referenceResolution
	{
		[Token(Token = "0x600109F")]
		[Address(RVA = "0x3212730", Offset = "0x3210D30", VA = "0x183212730")]
		get
		{
			return default(Vector2Int);
		}
		[Token(Token = "0x60010A0")]
		[Address(RVA = "0x3283540", Offset = "0x3281B40", VA = "0x183283540")]
		set
		{
		}
	}

	[Token(Token = "0x17000356")]
	public PanelScreenMatchMode screenMatchMode
	{
		[Token(Token = "0x60010A1")]
		[Address(RVA = "0x1A4F710", Offset = "0x1A4DD10", VA = "0x181A4F710")]
		get
		{
			return default(PanelScreenMatchMode);
		}
		[Token(Token = "0x60010A2")]
		[Address(RVA = "0x1CFDDD0", Offset = "0x1CFC3D0", VA = "0x181CFDDD0")]
		set
		{
		}
	}

	[Token(Token = "0x17000357")]
	public float match
	{
		[Token(Token = "0x60010A3")]
		[Address(RVA = "0x58A700", Offset = "0x588D00", VA = "0x18058A700")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60010A4")]
		[Address(RVA = "0x58A9F0", Offset = "0x588FF0", VA = "0x18058A9F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000358")]
	public float sortingOrder
	{
		[Token(Token = "0x60010A5")]
		[Address(RVA = "0xCDE8A0", Offset = "0xCDCEA0", VA = "0x180CDE8A0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60010A6")]
		[Address(RVA = "0x3283550", Offset = "0x3281B50", VA = "0x183283550")]
		set
		{
		}
	}

	[Token(Token = "0x17000359")]
	public int targetDisplay
	{
		[Token(Token = "0x60010A8")]
		[Address(RVA = "0xA4D530", Offset = "0xA4BB30", VA = "0x180A4D530")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60010A9")]
		[Address(RVA = "0x32835A0", Offset = "0x3281BA0", VA = "0x1832835A0")]
		set
		{
		}
	}

	[Token(Token = "0x1700035A")]
	public BindingLogLevel bindingLogLevel
	{
		[Token(Token = "0x60010AA")]
		[Address(RVA = "0xACB500", Offset = "0xAC9B00", VA = "0x180ACB500")]
		get
		{
			return default(BindingLogLevel);
		}
		[Token(Token = "0x60010AB")]
		[Address(RVA = "0x3283450", Offset = "0x3281A50", VA = "0x183283450")]
		set
		{
		}
	}

	[Token(Token = "0x1700035B")]
	public bool clearDepthStencil
	{
		[Token(Token = "0x60010AC")]
		[Address(RVA = "0xABD390", Offset = "0xABB990", VA = "0x180ABD390")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60010AD")]
		[Address(RVA = "0xABD3A0", Offset = "0xABB9A0", VA = "0x180ABD3A0")]
		set
		{
		}
	}

	[Token(Token = "0x1700035C")]
	public float depthClearValue
	{
		[Token(Token = "0x60010AE")]
		[Address(RVA = "0x3283380", Offset = "0x3281980", VA = "0x183283380")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700035D")]
	public bool clearColor
	{
		[Token(Token = "0x60010AF")]
		[Address(RVA = "0x1BD3E60", Offset = "0x1BD2460", VA = "0x181BD3E60")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60010B0")]
		[Address(RVA = "0x1BD40B0", Offset = "0x1BD26B0", VA = "0x181BD40B0")]
		set
		{
		}
	}

	[Token(Token = "0x1700035E")]
	public Color colorClearValue
	{
		[Token(Token = "0x60010B1")]
		[Address(RVA = "0x3283370", Offset = "0x3281970", VA = "0x183283370")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x60010B2")]
		[Address(RVA = "0x32834A0", Offset = "0x3281AA0", VA = "0x1832834A0")]
		set
		{
		}
	}

	[Token(Token = "0x1700035F")]
	public uint vertexBudget
	{
		[Token(Token = "0x60010B3")]
		[Address(RVA = "0xA4D4C0", Offset = "0xA4BAC0", VA = "0x180A4D4C0")]
		get
		{
			return default(uint);
		}
		[Token(Token = "0x60010B4")]
		[Address(RVA = "0xA4D5B0", Offset = "0xA4BBB0", VA = "0x180A4D5B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000360")]
	public TextureSlotCount textureSlotCount
	{
		[Token(Token = "0x60010B5")]
		[Address(RVA = "0xA4D4B0", Offset = "0xA4BAB0", VA = "0x180A4D4B0")]
		get
		{
			return default(TextureSlotCount);
		}
		[Token(Token = "0x60010B6")]
		[Address(RVA = "0xA4D5A0", Offset = "0xA4BBA0", VA = "0x180A4D5A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000361")]
	internal BaseRuntimePanel panel
	{
		[Token(Token = "0x60010B7")]
		[Address(RVA = "0x32833D0", Offset = "0x32819D0", VA = "0x1832833D0")]
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
		[Address(RVA = "0x3283390", Offset = "0x3281990", VA = "0x183283390")]
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
		[Address(RVA = "0x32833B0", Offset = "0x32819B0", VA = "0x1832833B0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60010BA")]
		[Address(RVA = "0x32834E0", Offset = "0x3281AE0", VA = "0x1832834E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000364")]
	internal VisualElement visualTree
	{
		[Token(Token = "0x60010BB")]
		[Address(RVA = "0x3283400", Offset = "0x3281A00", VA = "0x183283400")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000365")]
	public DynamicAtlasSettings dynamicAtlasSettings
	{
		[Token(Token = "0x60010BC")]
		[Address(RVA = "0x187BC20", Offset = "0x187A220", VA = "0x18187BC20")]
		get
		{
			return null;
		}
		[Token(Token = "0x60010BD")]
		[Address(RVA = "0x189BA60", Offset = "0x189A060", VA = "0x18189BA60")]
		set
		{
		}
	}

	[Token(Token = "0x17000366")]
	private float ScreenDPI
	{
		[Token(Token = "0x60010C3")]
		[Address(RVA = "0x3283360", Offset = "0x3281960", VA = "0x183283360")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60010C4")]
		[Address(RVA = "0x3283440", Offset = "0x3281A40", VA = "0x183283440")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x60010A7")]
	[Address(RVA = "0x3282470", Offset = "0x3280A70", VA = "0x183282470")]
	internal void ApplySortingOrder()
	{
	}

	[Token(Token = "0x60010BE")]
	[Address(RVA = "0x32831C0", Offset = "0x32817C0", VA = "0x1832831C0")]
	private PanelSettings()
	{
	}

	[Token(Token = "0x60010BF")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	private void Reset()
	{
	}

	[Token(Token = "0x60010C0")]
	[Address(RVA = "0x3282E20", Offset = "0x3281420", VA = "0x183282E20")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x60010C1")]
	[Address(RVA = "0x3282920", Offset = "0x3280F20", VA = "0x183282920")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x60010C2")]
	[Address(RVA = "0x3282920", Offset = "0x3280F20", VA = "0x183282920")]
	internal void DisposePanel()
	{
	}

	[Token(Token = "0x60010C5")]
	[Address(RVA = "0x3282FE0", Offset = "0x32815E0", VA = "0x183282FE0")]
	[Conditional("ENABLE_PROFILER")]
	public void SetPanelChangeReceiver(IDebugPanelChangeReceiver value)
	{
	}

	[Token(Token = "0x60010C6")]
	[Address(RVA = "0x3282A60", Offset = "0x3281060", VA = "0x183282A60")]
	internal IDebugPanelChangeReceiver GetPanelChangeReceiver()
	{
		return null;
	}

	[Token(Token = "0x60010C7")]
	[Address(RVA = "0x32831A0", Offset = "0x32817A0", VA = "0x1832831A0")]
	internal void UpdateScreenDPI()
	{
	}

	[Token(Token = "0x60010C8")]
	[Address(RVA = "0x32824B0", Offset = "0x3280AB0", VA = "0x1832824B0")]
	private void ApplyThemeStyleSheet([Optional] VisualElement root)
	{
	}

	[Token(Token = "0x60010C9")]
	[Address(RVA = "0x795DE0", Offset = "0x7943E0", VA = "0x180795DE0")]
	internal bool AssignICUData()
	{
		return default(bool);
	}

	[Token(Token = "0x60010CA")]
	[Address(RVA = "0x3282A70", Offset = "0x3281070", VA = "0x183282A70")]
	private void InitializeShaders()
	{
	}

	[Token(Token = "0x60010CB")]
	[Address(RVA = "0x3281930", Offset = "0x327FF30", VA = "0x183281930")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.VectorGraphicsModule" })]
	internal void ApplyPanelSettings()
	{
	}

	[Token(Token = "0x60010CC")]
	[Address(RVA = "0x3283040", Offset = "0x3281640", VA = "0x183283040")]
	public void SetScreenToPanelSpaceFunction3D(Func<Vector2, Vector3> screenToPanelSpaceFunction)
	{
	}

	[Token(Token = "0x60010CD")]
	[Address(RVA = "0x32830A0", Offset = "0x32816A0", VA = "0x1832830A0")]
	public void SetScreenToPanelSpaceFunction(Func<Vector2, Vector2> screenToPanelSpaceFunction)
	{
	}

	[Token(Token = "0x60010CE")]
	[Address(RVA = "0x3282E50", Offset = "0x3281450", VA = "0x183282E50")]
	internal float ResolveScale(Rect targetRect, float screenDpi)
	{
		return default(float);
	}

	[Token(Token = "0x60010CF")]
	[Address(RVA = "0x3282950", Offset = "0x3280F50", VA = "0x183282950")]
	internal Rect GetDisplayRect()
	{
		return default(Rect);
	}

	[Token(Token = "0x60010D0")]
	[Address(RVA = "0x32826D0", Offset = "0x3280CD0", VA = "0x1832826D0")]
	internal void AttachAndInsertUIDocumentToVisualTree(UIDocument uiDocument)
	{
	}

	[Token(Token = "0x60010D1")]
	[Address(RVA = "0x3282800", Offset = "0x3280E00", VA = "0x183282800")]
	internal void DetachUIDocument(UIDocument uiDocument)
	{
	}
}
