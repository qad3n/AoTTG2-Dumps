// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UI.Text
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.UI;

[Token(Token = "0x2000072")]
[RequireComponent(typeof(CanvasRenderer))]
[AddComponentMenu("UI (Canvas)/Legacy/Text", 100)]
[UnityEngine.UGUIHelpURL("Text")]
public class Text : MaskableGraphic, ILayoutElement
{
	[Token(Token = "0x4000247")]
	[FieldOffset(Offset = "0xE0")]
	[SerializeField]
	private FontData m_FontData;

	[Token(Token = "0x4000248")]
	[FieldOffset(Offset = "0xE8")]
	[TextArea(3, 10)]
	[SerializeField]
	protected string m_Text;

	[Token(Token = "0x4000249")]
	[FieldOffset(Offset = "0xF0")]
	private TextGenerator m_TextCache;

	[Token(Token = "0x400024A")]
	[FieldOffset(Offset = "0xF8")]
	private TextGenerator m_TextCacheForLayout;

	[Token(Token = "0x400024B")]
	[FieldOffset(Offset = "0x0")]
	protected static Material s_DefaultText;

	[NonSerialized]
	[Token(Token = "0x400024C")]
	[FieldOffset(Offset = "0x100")]
	protected bool m_DisableFontTextureRebuiltCallback;

	[Token(Token = "0x400024D")]
	[FieldOffset(Offset = "0x108")]
	private readonly UIVertex[] m_TempVerts;

	[Token(Token = "0x17000137")]
	public TextGenerator cachedTextGenerator
	{
		[Token(Token = "0x60004AF")]
		[Address(RVA = "0x32EC2E0", Offset = "0x32EA8E0", VA = "0x1832EC2E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000138")]
	public TextGenerator cachedTextGeneratorForLayout
	{
		[Token(Token = "0x60004B0")]
		[Address(RVA = "0x32EC260", Offset = "0x32EA860", VA = "0x1832EC260")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000139")]
	public override Texture mainTexture
	{
		[Token(Token = "0x60004B1")]
		[Address(RVA = "0x32EC430", Offset = "0x32EAA30", VA = "0x1832EC430", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700013A")]
	public Font font
	{
		[Token(Token = "0x60004B3")]
		[Address(RVA = "0x32EC3D0", Offset = "0x32EA9D0", VA = "0x1832EC3D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60004B4")]
		[Address(RVA = "0x32ECBF0", Offset = "0x32EB1F0", VA = "0x1832ECBF0")]
		set
		{
		}
	}

	[Token(Token = "0x1700013B")]
	public virtual string text
	{
		[Token(Token = "0x60004B5")]
		[Address(RVA = "0x187BC30", Offset = "0x187A230", VA = "0x18187BC30", Slot = "74")]
		get
		{
			return null;
		}
		[Token(Token = "0x60004B6")]
		[Address(RVA = "0x32ECF50", Offset = "0x32EB550", VA = "0x1832ECF50", Slot = "75")]
		set
		{
		}
	}

	[Token(Token = "0x1700013C")]
	public bool supportRichText
	{
		[Token(Token = "0x60004B7")]
		[Address(RVA = "0x32ECA50", Offset = "0x32EB050", VA = "0x1832ECA50")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60004B8")]
		[Address(RVA = "0x32ECEF0", Offset = "0x32EB4F0", VA = "0x1832ECEF0")]
		set
		{
		}
	}

	[Token(Token = "0x1700013D")]
	public bool resizeTextForBestFit
	{
		[Token(Token = "0x60004B9")]
		[Address(RVA = "0x32EC9F0", Offset = "0x32EAFF0", VA = "0x1832EC9F0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60004BA")]
		[Address(RVA = "0x32ECDD0", Offset = "0x32EB3D0", VA = "0x1832ECDD0")]
		set
		{
		}
	}

	[Token(Token = "0x1700013E")]
	public int resizeTextMinSize
	{
		[Token(Token = "0x60004BB")]
		[Address(RVA = "0x32ECA30", Offset = "0x32EB030", VA = "0x1832ECA30")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60004BC")]
		[Address(RVA = "0x32ECE90", Offset = "0x32EB490", VA = "0x1832ECE90")]
		set
		{
		}
	}

	[Token(Token = "0x1700013F")]
	public int resizeTextMaxSize
	{
		[Token(Token = "0x60004BD")]
		[Address(RVA = "0x32ECA10", Offset = "0x32EB010", VA = "0x1832ECA10")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60004BE")]
		[Address(RVA = "0x32ECE30", Offset = "0x32EB430", VA = "0x1832ECE30")]
		set
		{
		}
	}

	[Token(Token = "0x17000140")]
	public TextAnchor alignment
	{
		[Token(Token = "0x60004BF")]
		[Address(RVA = "0x32EC240", Offset = "0x32EA840", VA = "0x1832EC240")]
		get
		{
			return default(TextAnchor);
		}
		[Token(Token = "0x60004C0")]
		[Address(RVA = "0x32ECAD0", Offset = "0x32EB0D0", VA = "0x1832ECAD0")]
		set
		{
		}
	}

	[Token(Token = "0x17000141")]
	public bool alignByGeometry
	{
		[Token(Token = "0x60004C1")]
		[Address(RVA = "0x32EC220", Offset = "0x32EA820", VA = "0x1832EC220")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60004C2")]
		[Address(RVA = "0x32ECA90", Offset = "0x32EB090", VA = "0x1832ECA90")]
		set
		{
		}
	}

	[Token(Token = "0x17000142")]
	public int fontSize
	{
		[Token(Token = "0x60004C3")]
		[Address(RVA = "0x32EC390", Offset = "0x32EA990", VA = "0x1832EC390")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60004C4")]
		[Address(RVA = "0x32ECB30", Offset = "0x32EB130", VA = "0x1832ECB30")]
		set
		{
		}
	}

	[Token(Token = "0x17000143")]
	public HorizontalWrapMode horizontalOverflow
	{
		[Token(Token = "0x60004C5")]
		[Address(RVA = "0x32EC3F0", Offset = "0x32EA9F0", VA = "0x1832EC3F0")]
		get
		{
			return default(HorizontalWrapMode);
		}
		[Token(Token = "0x60004C6")]
		[Address(RVA = "0x32ECD10", Offset = "0x32EB310", VA = "0x1832ECD10")]
		set
		{
		}
	}

	[Token(Token = "0x17000144")]
	public VerticalWrapMode verticalOverflow
	{
		[Token(Token = "0x60004C7")]
		[Address(RVA = "0x32ECA70", Offset = "0x32EB070", VA = "0x1832ECA70")]
		get
		{
			return default(VerticalWrapMode);
		}
		[Token(Token = "0x60004C8")]
		[Address(RVA = "0x32ED040", Offset = "0x32EB640", VA = "0x1832ED040")]
		set
		{
		}
	}

	[Token(Token = "0x17000145")]
	public float lineSpacing
	{
		[Token(Token = "0x60004C9")]
		[Address(RVA = "0x32EC410", Offset = "0x32EAA10", VA = "0x1832EC410")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60004CA")]
		[Address(RVA = "0x32ECD70", Offset = "0x32EB370", VA = "0x1832ECD70")]
		set
		{
		}
	}

	[Token(Token = "0x17000146")]
	public FontStyle fontStyle
	{
		[Token(Token = "0x60004CB")]
		[Address(RVA = "0x32EC3B0", Offset = "0x32EA9B0", VA = "0x1832EC3B0")]
		get
		{
			return default(FontStyle);
		}
		[Token(Token = "0x60004CC")]
		[Address(RVA = "0x32ECB90", Offset = "0x32EB190", VA = "0x1832ECB90")]
		set
		{
		}
	}

	[Token(Token = "0x17000147")]
	public float pixelsPerUnit
	{
		[Token(Token = "0x60004CD")]
		[Address(RVA = "0x32EC630", Offset = "0x32EAC30", VA = "0x1832EC630")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000148")]
	public virtual float minWidth
	{
		[Token(Token = "0x60004D8")]
		[Address(RVA = "0x560480", Offset = "0x55EA80", VA = "0x180560480", Slot = "78")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000149")]
	public virtual float preferredWidth
	{
		[Token(Token = "0x60004D9")]
		[Address(RVA = "0x32EC8E0", Offset = "0x32EAEE0", VA = "0x1832EC8E0", Slot = "79")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700014A")]
	public virtual float flexibleWidth
	{
		[Token(Token = "0x60004DA")]
		[Address(RVA = "0x2D07540", Offset = "0x2D05B40", VA = "0x182D07540", Slot = "80")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700014B")]
	public virtual float minHeight
	{
		[Token(Token = "0x60004DB")]
		[Address(RVA = "0x560480", Offset = "0x55EA80", VA = "0x180560480", Slot = "81")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700014C")]
	public virtual float preferredHeight
	{
		[Token(Token = "0x60004DC")]
		[Address(RVA = "0x32EC7A0", Offset = "0x32EADA0", VA = "0x1832EC7A0", Slot = "82")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700014D")]
	public virtual float flexibleHeight
	{
		[Token(Token = "0x60004DD")]
		[Address(RVA = "0x2D07540", Offset = "0x2D05B40", VA = "0x182D07540", Slot = "83")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700014E")]
	public virtual int layoutPriority
	{
		[Token(Token = "0x60004DE")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "84")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60004AE")]
	[Address(RVA = "0x32EC170", Offset = "0x32EA770", VA = "0x1832EC170")]
	protected Text()
	{
	}

	[Token(Token = "0x60004B2")]
	[Address(RVA = "0x32EB410", Offset = "0x32E9A10", VA = "0x1832EB410")]
	public void FontTextureChanged()
	{
	}

	[Token(Token = "0x60004CE")]
	[Address(RVA = "0x32EB910", Offset = "0x32E9F10", VA = "0x1832EB910", Slot = "5")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x60004CF")]
	[Address(RVA = "0x32EB8B0", Offset = "0x32E9EB0", VA = "0x1832EB8B0", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x60004D0")]
	[Address(RVA = "0x32EC0F0", Offset = "0x32EA6F0", VA = "0x1832EC0F0", Slot = "41")]
	protected override void UpdateGeometry()
	{
	}

	[Token(Token = "0x60004D1")]
	[Address(RVA = "0x32EB3B0", Offset = "0x32E99B0", VA = "0x1832EB3B0")]
	internal void AssignDefaultFont()
	{
	}

	[Token(Token = "0x60004D2")]
	[Address(RVA = "0x32EB300", Offset = "0x32E9900", VA = "0x1832EB300")]
	internal void AssignDefaultFontIfNecessary()
	{
	}

	[Token(Token = "0x60004D3")]
	[Address(RVA = "0x32EB530", Offset = "0x32E9B30", VA = "0x1832EB530")]
	public TextGenerationSettings GetGenerationSettings(Vector2 extents)
	{
		return default(TextGenerationSettings);
	}

	[Token(Token = "0x60004D4")]
	[Address(RVA = "0x32EB770", Offset = "0x32E9D70", VA = "0x1832EB770")]
	public static Vector2 GetTextAnchorPivot(TextAnchor anchor)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60004D5")]
	[Address(RVA = "0x32EB990", Offset = "0x32E9F90", VA = "0x1832EB990", Slot = "44")]
	protected override void OnPopulateMesh(VertexHelper toFill)
	{
	}

	[Token(Token = "0x60004D6")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "76")]
	public virtual void CalculateLayoutInputHorizontal()
	{
	}

	[Token(Token = "0x60004D7")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "77")]
	public virtual void CalculateLayoutInputVertical()
	{
	}
}
