using System;
using Il2CppDummyDll;

namespace UnityEngine.UI;

[Token(Token = "0x2000074")]
[RequireComponent(typeof(CanvasRenderer))]
[AddComponentMenu("UI/Legacy/Text", 100)]
public class Text : MaskableGraphic, ILayoutElement
{
	[Token(Token = "0x4000247")]
	[FieldOffset(Offset = "0xD8")]
	[SerializeField]
	private FontData m_FontData;

	[Token(Token = "0x4000248")]
	[FieldOffset(Offset = "0xE0")]
	[TextArea(3, 10)]
	[SerializeField]
	protected string m_Text;

	[Token(Token = "0x4000249")]
	[FieldOffset(Offset = "0xE8")]
	private TextGenerator m_TextCache;

	[Token(Token = "0x400024A")]
	[FieldOffset(Offset = "0xF0")]
	private TextGenerator m_TextCacheForLayout;

	[Token(Token = "0x400024B")]
	[FieldOffset(Offset = "0x0")]
	protected static Material s_DefaultText;

	[NonSerialized]
	[Token(Token = "0x400024C")]
	[FieldOffset(Offset = "0xF8")]
	protected bool m_DisableFontTextureRebuiltCallback;

	[Token(Token = "0x400024D")]
	[FieldOffset(Offset = "0x100")]
	private readonly UIVertex[] m_TempVerts;

	[Token(Token = "0x17000136")]
	public TextGenerator cachedTextGenerator
	{
		[Token(Token = "0x60004A3")]
		[Address(RVA = "0x4DC13E0", Offset = "0x4DC13E0", VA = "0x4DC13E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000137")]
	public TextGenerator cachedTextGeneratorForLayout
	{
		[Token(Token = "0x60004A4")]
		[Address(RVA = "0x4DC1470", Offset = "0x4DC1470", VA = "0x4DC1470")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000138")]
	public override Texture mainTexture
	{
		[Token(Token = "0x60004A5")]
		[Address(RVA = "0x4DC14E0", Offset = "0x4DC14E0", VA = "0x4DC14E0", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000139")]
	public Font font
	{
		[Token(Token = "0x60004A7")]
		[Address(RVA = "0x4DC16C0", Offset = "0x4DC16C0", VA = "0x4DC16C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60004A8")]
		[Address(RVA = "0x4DC1800", Offset = "0x4DC1800", VA = "0x4DC1800")]
		set
		{
		}
	}

	[Token(Token = "0x1700013A")]
	public virtual string text
	{
		[Token(Token = "0x60004A9")]
		[Address(RVA = "0x4DC1920", Offset = "0x4DC1920", VA = "0x4DC1920", Slot = "74")]
		get
		{
			return null;
		}
		[Token(Token = "0x60004AA")]
		[Address(RVA = "0x4DC1930", Offset = "0x4DC1930", VA = "0x4DC1930", Slot = "75")]
		set
		{
		}
	}

	[Token(Token = "0x1700013B")]
	public bool supportRichText
	{
		[Token(Token = "0x60004AB")]
		[Address(RVA = "0x4DC1A00", Offset = "0x4DC1A00", VA = "0x4DC1A00")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60004AC")]
		[Address(RVA = "0x4DC1A20", Offset = "0x4DC1A20", VA = "0x4DC1A20")]
		set
		{
		}
	}

	[Token(Token = "0x1700013C")]
	public bool resizeTextForBestFit
	{
		[Token(Token = "0x60004AD")]
		[Address(RVA = "0x4DC1A70", Offset = "0x4DC1A70", VA = "0x4DC1A70")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60004AE")]
		[Address(RVA = "0x4DC1A90", Offset = "0x4DC1A90", VA = "0x4DC1A90")]
		set
		{
		}
	}

	[Token(Token = "0x1700013D")]
	public int resizeTextMinSize
	{
		[Token(Token = "0x60004AF")]
		[Address(RVA = "0x4DC1AE0", Offset = "0x4DC1AE0", VA = "0x4DC1AE0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60004B0")]
		[Address(RVA = "0x4DC1B00", Offset = "0x4DC1B00", VA = "0x4DC1B00")]
		set
		{
		}
	}

	[Token(Token = "0x1700013E")]
	public int resizeTextMaxSize
	{
		[Token(Token = "0x60004B1")]
		[Address(RVA = "0x4DC1B50", Offset = "0x4DC1B50", VA = "0x4DC1B50")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60004B2")]
		[Address(RVA = "0x4DC1B70", Offset = "0x4DC1B70", VA = "0x4DC1B70")]
		set
		{
		}
	}

	[Token(Token = "0x1700013F")]
	public TextAnchor alignment
	{
		[Token(Token = "0x60004B3")]
		[Address(RVA = "0x4DC1BC0", Offset = "0x4DC1BC0", VA = "0x4DC1BC0")]
		get
		{
			return default(TextAnchor);
		}
		[Token(Token = "0x60004B4")]
		[Address(RVA = "0x4DC1BE0", Offset = "0x4DC1BE0", VA = "0x4DC1BE0")]
		set
		{
		}
	}

	[Token(Token = "0x17000140")]
	public bool alignByGeometry
	{
		[Token(Token = "0x60004B5")]
		[Address(RVA = "0x4DC1C30", Offset = "0x4DC1C30", VA = "0x4DC1C30")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60004B6")]
		[Address(RVA = "0x4DC1C50", Offset = "0x4DC1C50", VA = "0x4DC1C50")]
		set
		{
		}
	}

	[Token(Token = "0x17000141")]
	public int fontSize
	{
		[Token(Token = "0x60004B7")]
		[Address(RVA = "0x4DC1C90", Offset = "0x4DC1C90", VA = "0x4DC1C90")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60004B8")]
		[Address(RVA = "0x4DC1CB0", Offset = "0x4DC1CB0", VA = "0x4DC1CB0")]
		set
		{
		}
	}

	[Token(Token = "0x17000142")]
	public HorizontalWrapMode horizontalOverflow
	{
		[Token(Token = "0x60004B9")]
		[Address(RVA = "0x4DC1D00", Offset = "0x4DC1D00", VA = "0x4DC1D00")]
		get
		{
			return default(HorizontalWrapMode);
		}
		[Token(Token = "0x60004BA")]
		[Address(RVA = "0x4DC1D20", Offset = "0x4DC1D20", VA = "0x4DC1D20")]
		set
		{
		}
	}

	[Token(Token = "0x17000143")]
	public VerticalWrapMode verticalOverflow
	{
		[Token(Token = "0x60004BB")]
		[Address(RVA = "0x4DC1D70", Offset = "0x4DC1D70", VA = "0x4DC1D70")]
		get
		{
			return default(VerticalWrapMode);
		}
		[Token(Token = "0x60004BC")]
		[Address(RVA = "0x4DC1D90", Offset = "0x4DC1D90", VA = "0x4DC1D90")]
		set
		{
		}
	}

	[Token(Token = "0x17000144")]
	public float lineSpacing
	{
		[Token(Token = "0x60004BD")]
		[Address(RVA = "0x4DC1DE0", Offset = "0x4DC1DE0", VA = "0x4DC1DE0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60004BE")]
		[Address(RVA = "0x4DC1E00", Offset = "0x4DC1E00", VA = "0x4DC1E00")]
		set
		{
		}
	}

	[Token(Token = "0x17000145")]
	public FontStyle fontStyle
	{
		[Token(Token = "0x60004BF")]
		[Address(RVA = "0x4DC1E50", Offset = "0x4DC1E50", VA = "0x4DC1E50")]
		get
		{
			return default(FontStyle);
		}
		[Token(Token = "0x60004C0")]
		[Address(RVA = "0x4DC1E70", Offset = "0x4DC1E70", VA = "0x4DC1E70")]
		set
		{
		}
	}

	[Token(Token = "0x17000146")]
	public float pixelsPerUnit
	{
		[Token(Token = "0x60004C1")]
		[Address(RVA = "0x4DC1EC0", Offset = "0x4DC1EC0", VA = "0x4DC1EC0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000147")]
	public virtual float minWidth
	{
		[Token(Token = "0x60004CC")]
		[Address(RVA = "0x4DC3420", Offset = "0x4DC3420", VA = "0x4DC3420", Slot = "78")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000148")]
	public virtual float preferredWidth
	{
		[Token(Token = "0x60004CD")]
		[Address(RVA = "0x4DC3430", Offset = "0x4DC3430", VA = "0x4DC3430", Slot = "79")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000149")]
	public virtual float flexibleWidth
	{
		[Token(Token = "0x60004CE")]
		[Address(RVA = "0x4DC3600", Offset = "0x4DC3600", VA = "0x4DC3600", Slot = "80")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700014A")]
	public virtual float minHeight
	{
		[Token(Token = "0x60004CF")]
		[Address(RVA = "0x4DC3610", Offset = "0x4DC3610", VA = "0x4DC3610", Slot = "81")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700014B")]
	public virtual float preferredHeight
	{
		[Token(Token = "0x60004D0")]
		[Address(RVA = "0x4DC3620", Offset = "0x4DC3620", VA = "0x4DC3620", Slot = "82")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700014C")]
	public virtual float flexibleHeight
	{
		[Token(Token = "0x60004D1")]
		[Address(RVA = "0x4DC37D0", Offset = "0x4DC37D0", VA = "0x4DC37D0", Slot = "83")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700014D")]
	public virtual int layoutPriority
	{
		[Token(Token = "0x60004D2")]
		[Address(RVA = "0x4DC37E0", Offset = "0x4DC37E0", VA = "0x4DC37E0", Slot = "84")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60004A2")]
	[Address(RVA = "0x4DC1330", Offset = "0x4DC1330", VA = "0x4DC1330")]
	protected Text()
	{
	}

	[Token(Token = "0x60004A6")]
	[Address(RVA = "0x4DC16E0", Offset = "0x4DC16E0", VA = "0x4DC16E0")]
	public void FontTextureChanged()
	{
	}

	[Token(Token = "0x60004C2")]
	[Address(RVA = "0x4DC2020", Offset = "0x4DC2020", VA = "0x4DC2020", Slot = "5")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x60004C3")]
	[Address(RVA = "0x4DC20A0", Offset = "0x4DC20A0", VA = "0x4DC20A0", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x60004C4")]
	[Address(RVA = "0x4DC20F0", Offset = "0x4DC20F0", VA = "0x4DC20F0", Slot = "41")]
	protected override void UpdateGeometry()
	{
	}

	[Token(Token = "0x60004C5")]
	[Address(RVA = "0x4DC2170", Offset = "0x4DC2170", VA = "0x4DC2170")]
	internal void AssignDefaultFont()
	{
	}

	[Token(Token = "0x60004C6")]
	[Address(RVA = "0x4DC21D0", Offset = "0x4DC21D0", VA = "0x4DC21D0")]
	internal void AssignDefaultFontIfNecessary()
	{
	}

	[Token(Token = "0x60004C7")]
	[Address(RVA = "0x4DC2280", Offset = "0x4DC2280", VA = "0x4DC2280")]
	public TextGenerationSettings GetGenerationSettings(Vector2 extents)
	{
		return default(TextGenerationSettings);
	}

	[Token(Token = "0x60004C8")]
	[Address(RVA = "0x4DC24A0", Offset = "0x4DC24A0", VA = "0x4DC24A0")]
	public static Vector2 GetTextAnchorPivot(TextAnchor anchor)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60004C9")]
	[Address(RVA = "0x4DC2540", Offset = "0x4DC2540", VA = "0x4DC2540", Slot = "44")]
	protected override void OnPopulateMesh(VertexHelper toFill)
	{
	}

	[Token(Token = "0x60004CA")]
	[Address(RVA = "0x4DC3400", Offset = "0x4DC3400", VA = "0x4DC3400", Slot = "76")]
	public virtual void CalculateLayoutInputHorizontal()
	{
	}

	[Token(Token = "0x60004CB")]
	[Address(RVA = "0x4DC3410", Offset = "0x4DC3410", VA = "0x4DC3410", Slot = "77")]
	public virtual void CalculateLayoutInputVertical()
	{
	}
}
