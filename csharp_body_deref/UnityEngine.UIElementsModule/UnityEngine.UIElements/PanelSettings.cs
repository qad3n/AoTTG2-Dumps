using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x200020D")]
public class PanelSettings : ScriptableObject
{
	[Token(Token = "0x200020E")]
	private class RuntimePanelAccess
	{
		[Token(Token = "0x4000769")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private readonly PanelSettings m_Settings;

		[Token(Token = "0x400076A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private BaseRuntimePanel m_RuntimePanel;

		[Token(Token = "0x1700028B")]
		internal bool isInitialized
		{
			[Token(Token = "0x6000D8E")]
			[Address(RVA = "0x4D1B630", Offset = "0x4D1B630", VA = "0x4D1B630")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x1700028C")]
		internal BaseRuntimePanel panel
		{
			[Token(Token = "0x6000D8F")]
			[Address(RVA = "0x4D1AE80", Offset = "0x4D1AE80", VA = "0x4D1AE80")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000D8D")]
		[Address(RVA = "0x4D1B180", Offset = "0x4D1B180", VA = "0x4D1B180")]
		internal RuntimePanelAccess(PanelSettings settings)
		{
		}

		[Token(Token = "0x6000D90")]
		[Address(RVA = "0x4D1B510", Offset = "0x4D1B510", VA = "0x4D1B510")]
		internal void DisposePanel()
		{
		}

		[Token(Token = "0x6000D91")]
		[Address(RVA = "0x4D1AB30", Offset = "0x4D1AB30", VA = "0x4D1AB30")]
		internal void SetTargetTexture()
		{
		}

		[Token(Token = "0x6000D92")]
		[Address(RVA = "0x4D1AD30", Offset = "0x4D1AD30", VA = "0x4D1AD30")]
		internal void SetSortingPriority()
		{
		}

		[Token(Token = "0x6000D93")]
		[Address(RVA = "0x4D1ADA0", Offset = "0x4D1ADA0", VA = "0x4D1ADA0")]
		internal void SetTargetDisplay()
		{
		}

		[Token(Token = "0x6000D94")]
		[Address(RVA = "0x4D1CDE0", Offset = "0x4D1CDE0", VA = "0x4D1CDE0")]
		private BaseRuntimePanel CreateRelatedRuntimePanel()
		{
			return null;
		}

		[Token(Token = "0x6000D95")]
		[Address(RVA = "0x4D1CFC0", Offset = "0x4D1CFC0", VA = "0x4D1CFC0")]
		private void DisposeRelatedPanel()
		{
		}

		[Token(Token = "0x6000D96")]
		[Address(RVA = "0x4D1CD80", Offset = "0x4D1CD80", VA = "0x4D1CD80")]
		internal void MarkPotentiallyEmpty()
		{
		}
	}

	[Token(Token = "0x4000749")]
	private const int k_DefaultSortingOrder = 0;

	[Token(Token = "0x400074A")]
	private const float k_DefaultScaleValue = 1f;

	[Token(Token = "0x400074B")]
	internal const string k_DefaultStyleSheetPath = "Packages/com.unity.ui/PackageResources/StyleSheets/Generated/Default.tss.asset";

	[Token(Token = "0x400074C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	[SerializeField]
	private ThemeStyleSheet themeUss;

	[Token(Token = "0x400074D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	[SerializeField]
	private RenderTexture m_TargetTexture;

	[Token(Token = "0x400074E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	[SerializeField]
	private PanelScaleMode m_ScaleMode;

	[Token(Token = "0x400074F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2C")]
	[SerializeField]
	private float m_ReferenceSpritePixelsPerUnit;

	[Token(Token = "0x4000750")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	[SerializeField]
	private float m_Scale;

	[Token(Token = "0x4000751")]
	private const float DefaultDpi = 96f;

	[Token(Token = "0x4000752")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x34")]
	[SerializeField]
	private float m_ReferenceDpi;

	[Token(Token = "0x4000753")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	[SerializeField]
	private float m_FallbackDpi;

	[Token(Token = "0x4000754")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x3C")]
	[SerializeField]
	private Vector2Int m_ReferenceResolution;

	[Token(Token = "0x4000755")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x44")]
	[SerializeField]
	private PanelScreenMatchMode m_ScreenMatchMode;

	[Token(Token = "0x4000756")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	[SerializeField]
	[Range(0f, 1f)]
	private float m_Match;

	[Token(Token = "0x4000757")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4C")]
	[SerializeField]
	private float m_SortingOrder;

	[Token(Token = "0x4000758")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	[SerializeField]
	private int m_TargetDisplay;

	[Token(Token = "0x4000759")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x54")]
	[SerializeField]
	private bool m_ClearDepthStencil;

	[Token(Token = "0x400075A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x55")]
	[SerializeField]
	private bool m_ClearColor;

	[Token(Token = "0x400075B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	[SerializeField]
	private Color m_ColorClearValue;

	[Token(Token = "0x400075C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	[SerializeField]
	private uint m_VertexBudget;

	[Token(Token = "0x400075D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private RuntimePanelAccess m_PanelAccess;

	[Token(Token = "0x400075E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	internal UIDocumentList m_AttachedUIDocumentsList;

	[Token(Token = "0x400075F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	[SerializeField]
	[HideInInspector]
	private DynamicAtlasSettings m_DynamicAtlasSettings;

	[Token(Token = "0x4000760")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	[HideInInspector]
	[SerializeField]
	private Shader m_AtlasBlitShader;

	[Token(Token = "0x4000761")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	[SerializeField]
	[HideInInspector]
	private Shader m_RuntimeShader;

	[Token(Token = "0x4000762")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	[HideInInspector]
	[SerializeField]
	private Shader m_RuntimeWorldShader;

	[Token(Token = "0x4000763")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	[SerializeField]
	public PanelTextSettings textSettings;

	[Token(Token = "0x4000764")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private Rect m_TargetRect;

	[Token(Token = "0x4000765")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private float m_ResolvedScale;

	[Token(Token = "0x4000766")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private StyleSheet m_OldThemeUss;

	[Token(Token = "0x4000768")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private Func<Vector2, Vector2> m_AssignedScreenToPanel;

	[Token(Token = "0x17000276")]
	public ThemeStyleSheet themeStyleSheet
	{
		[Token(Token = "0x6000D57")]
		[Address(RVA = "0x4D1A920", Offset = "0x4D1A920", VA = "0x4D1A920")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000D58")]
		[Address(RVA = "0x4D1A930", Offset = "0x4D1A930", VA = "0x4D1A930")]
		set
		{
		}
	}

	[Token(Token = "0x17000277")]
	public RenderTexture targetTexture
	{
		[Token(Token = "0x6000D59")]
		[Address(RVA = "0x4D1AAD0", Offset = "0x4D1AAD0", VA = "0x4D1AAD0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000D5A")]
		[Address(RVA = "0x4D1AAE0", Offset = "0x4D1AAE0", VA = "0x4D1AAE0")]
		set
		{
		}
	}

	[Token(Token = "0x17000278")]
	public PanelScaleMode scaleMode
	{
		[Token(Token = "0x6000D5B")]
		[Address(RVA = "0x4D1AB70", Offset = "0x4D1AB70", VA = "0x4D1AB70")]
		get
		{
			return default(PanelScaleMode);
		}
		[Token(Token = "0x6000D5C")]
		[Address(RVA = "0x4D1AB80", Offset = "0x4D1AB80", VA = "0x4D1AB80")]
		set
		{
		}
	}

	[Token(Token = "0x17000279")]
	public float referenceSpritePixelsPerUnit
	{
		[Token(Token = "0x6000D5D")]
		[Address(RVA = "0x4D1AB90", Offset = "0x4D1AB90", VA = "0x4D1AB90")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000D5E")]
		[Address(RVA = "0x4D1ABA0", Offset = "0x4D1ABA0", VA = "0x4D1ABA0")]
		set
		{
		}
	}

	[Token(Token = "0x1700027A")]
	public float scale
	{
		[Token(Token = "0x6000D5F")]
		[Address(RVA = "0x4D1ABB0", Offset = "0x4D1ABB0", VA = "0x4D1ABB0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000D60")]
		[Address(RVA = "0x4D1ABC0", Offset = "0x4D1ABC0", VA = "0x4D1ABC0")]
		set
		{
		}
	}

	[Token(Token = "0x1700027B")]
	public float referenceDpi
	{
		[Token(Token = "0x6000D61")]
		[Address(RVA = "0x4D1ABD0", Offset = "0x4D1ABD0", VA = "0x4D1ABD0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000D62")]
		[Address(RVA = "0x4D1ABE0", Offset = "0x4D1ABE0", VA = "0x4D1ABE0")]
		set
		{
		}
	}

	[Token(Token = "0x1700027C")]
	public float fallbackDpi
	{
		[Token(Token = "0x6000D63")]
		[Address(RVA = "0x4D1AC10", Offset = "0x4D1AC10", VA = "0x4D1AC10")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000D64")]
		[Address(RVA = "0x4D1AC20", Offset = "0x4D1AC20", VA = "0x4D1AC20")]
		set
		{
		}
	}

	[Token(Token = "0x1700027D")]
	public Vector2Int referenceResolution
	{
		[Token(Token = "0x6000D65")]
		[Address(RVA = "0x4D1AC50", Offset = "0x4D1AC50", VA = "0x4D1AC50")]
		get
		{
			return default(Vector2Int);
		}
		[Token(Token = "0x6000D66")]
		[Address(RVA = "0x4D1AC60", Offset = "0x4D1AC60", VA = "0x4D1AC60")]
		set
		{
		}
	}

	[Token(Token = "0x1700027E")]
	public PanelScreenMatchMode screenMatchMode
	{
		[Token(Token = "0x6000D67")]
		[Address(RVA = "0x4D1AC70", Offset = "0x4D1AC70", VA = "0x4D1AC70")]
		get
		{
			return default(PanelScreenMatchMode);
		}
		[Token(Token = "0x6000D68")]
		[Address(RVA = "0x4D1AC80", Offset = "0x4D1AC80", VA = "0x4D1AC80")]
		set
		{
		}
	}

	[Token(Token = "0x1700027F")]
	public float match
	{
		[Token(Token = "0x6000D69")]
		[Address(RVA = "0x4D1AC90", Offset = "0x4D1AC90", VA = "0x4D1AC90")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000D6A")]
		[Address(RVA = "0x4D1ACA0", Offset = "0x4D1ACA0", VA = "0x4D1ACA0")]
		set
		{
		}
	}

	[Token(Token = "0x17000280")]
	public float sortingOrder
	{
		[Token(Token = "0x6000D6B")]
		[Address(RVA = "0x4D1ACB0", Offset = "0x4D1ACB0", VA = "0x4D1ACB0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000D6C")]
		[Address(RVA = "0x4D1ACC0", Offset = "0x4D1ACC0", VA = "0x4D1ACC0")]
		set
		{
		}
	}

	[Token(Token = "0x17000281")]
	public int targetDisplay
	{
		[Token(Token = "0x6000D6E")]
		[Address(RVA = "0x4D1AD60", Offset = "0x4D1AD60", VA = "0x4D1AD60")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000D6F")]
		[Address(RVA = "0x4D1AD70", Offset = "0x4D1AD70", VA = "0x4D1AD70")]
		set
		{
		}
	}

	[Token(Token = "0x17000282")]
	public bool clearDepthStencil
	{
		[Token(Token = "0x6000D70")]
		[Address(RVA = "0x4D1ADD0", Offset = "0x4D1ADD0", VA = "0x4D1ADD0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000D71")]
		[Address(RVA = "0x4D1ADE0", Offset = "0x4D1ADE0", VA = "0x4D1ADE0")]
		set
		{
		}
	}

	[Token(Token = "0x17000283")]
	public float depthClearValue
	{
		[Token(Token = "0x6000D72")]
		[Address(RVA = "0x4D1ADF0", Offset = "0x4D1ADF0", VA = "0x4D1ADF0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000284")]
	public bool clearColor
	{
		[Token(Token = "0x6000D73")]
		[Address(RVA = "0x4D1AE00", Offset = "0x4D1AE00", VA = "0x4D1AE00")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000D74")]
		[Address(RVA = "0x4D1AE10", Offset = "0x4D1AE10", VA = "0x4D1AE10")]
		set
		{
		}
	}

	[Token(Token = "0x17000285")]
	public Color colorClearValue
	{
		[Token(Token = "0x6000D75")]
		[Address(RVA = "0x4D1AE20", Offset = "0x4D1AE20", VA = "0x4D1AE20")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x6000D76")]
		[Address(RVA = "0x4D1AE30", Offset = "0x4D1AE30", VA = "0x4D1AE30")]
		set
		{
		}
	}

	[Token(Token = "0x17000286")]
	public uint vertexBudget
	{
		[Token(Token = "0x6000D77")]
		[Address(RVA = "0x4D1AE40", Offset = "0x4D1AE40", VA = "0x4D1AE40")]
		get
		{
			return default(uint);
		}
		[Token(Token = "0x6000D78")]
		[Address(RVA = "0x4D1AE50", Offset = "0x4D1AE50", VA = "0x4D1AE50")]
		set
		{
		}
	}

	[Token(Token = "0x17000287")]
	internal BaseRuntimePanel panel
	{
		[Token(Token = "0x6000D79")]
		[Address(RVA = "0x4D1AE60", Offset = "0x4D1AE60", VA = "0x4D1AE60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000288")]
	internal VisualElement visualTree
	{
		[Token(Token = "0x6000D7A")]
		[Address(RVA = "0x4D1AFF0", Offset = "0x4D1AFF0", VA = "0x4D1AFF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000289")]
	public DynamicAtlasSettings dynamicAtlasSettings
	{
		[Token(Token = "0x6000D7B")]
		[Address(RVA = "0x4D1B020", Offset = "0x4D1B020", VA = "0x4D1B020")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000D7C")]
		[Address(RVA = "0x4D1B030", Offset = "0x4D1B030", VA = "0x4D1B030")]
		set
		{
		}
	}

	[Token(Token = "0x1700028A")]
	private float ScreenDPI
	{
		[Token(Token = "0x6000D82")]
		[Address(RVA = "0x4D1B610", Offset = "0x4D1B610", VA = "0x4D1B610")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000D83")]
		[Address(RVA = "0x4D1B620", Offset = "0x4D1B620", VA = "0x4D1B620")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000D6D")]
	[Address(RVA = "0x4D1AD00", Offset = "0x4D1AD00", VA = "0x4D1AD00")]
	internal void ApplySortingOrder()
	{
	}

	[Token(Token = "0x6000D7D")]
	[Address(RVA = "0x4D1B040", Offset = "0x4D1B040", VA = "0x4D1B040")]
	private PanelSettings()
	{
	}

	[Token(Token = "0x6000D7E")]
	[Address(RVA = "0x4D1B1B0", Offset = "0x4D1B1B0", VA = "0x4D1B1B0")]
	private void Reset()
	{
	}

	[Token(Token = "0x6000D7F")]
	[Address(RVA = "0x4D1B1C0", Offset = "0x4D1B1C0", VA = "0x4D1B1C0")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x6000D80")]
	[Address(RVA = "0x4D1B490", Offset = "0x4D1B490", VA = "0x4D1B490")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x6000D81")]
	[Address(RVA = "0x4D1B590", Offset = "0x4D1B590", VA = "0x4D1B590")]
	internal void DisposePanel()
	{
	}

	[Token(Token = "0x6000D84")]
	[Address(RVA = "0x4D1B2A0", Offset = "0x4D1B2A0", VA = "0x4D1B2A0")]
	internal void UpdateScreenDPI()
	{
	}

	[Token(Token = "0x6000D85")]
	[Address(RVA = "0x4D1A950", Offset = "0x4D1A950", VA = "0x4D1A950")]
	private void ApplyThemeStyleSheet([Optional] VisualElement root)
	{
	}

	[Token(Token = "0x6000D86")]
	[Address(RVA = "0x4D1B2C0", Offset = "0x4D1B2C0", VA = "0x4D1B2C0")]
	private void InitializeShaders()
	{
	}

	[Token(Token = "0x6000D87")]
	[Address(RVA = "0x4D1B640", Offset = "0x4D1B640", VA = "0x4D1B640")]
	internal void ApplyPanelSettings()
	{
	}

	[Token(Token = "0x6000D88")]
	[Address(RVA = "0x4D1C3E0", Offset = "0x4D1C3E0", VA = "0x4D1C3E0")]
	public void SetScreenToPanelSpaceFunction(Func<Vector2, Vector2> screentoPanelSpaceFunction)
	{
	}

	[Token(Token = "0x6000D89")]
	[Address(RVA = "0x4D1C0B0", Offset = "0x4D1C0B0", VA = "0x4D1C0B0")]
	internal float ResolveScale(Rect targetRect, float screenDpi)
	{
		return default(float);
	}

	[Token(Token = "0x6000D8A")]
	[Address(RVA = "0x4D1BFD0", Offset = "0x4D1BFD0", VA = "0x4D1BFD0")]
	internal Rect GetDisplayRect()
	{
		return default(Rect);
	}

	[Token(Token = "0x6000D8B")]
	[Address(RVA = "0x4D1C690", Offset = "0x4D1C690", VA = "0x4D1C690")]
	internal void AttachAndInsertUIDocumentToVisualTree(UIDocument uiDocument)
	{
	}

	[Token(Token = "0x6000D8C")]
	[Address(RVA = "0x4D1CC80", Offset = "0x4D1CC80", VA = "0x4D1CC80")]
	internal void DetachUIDocument(UIDocument uiDocument)
	{
	}
}
