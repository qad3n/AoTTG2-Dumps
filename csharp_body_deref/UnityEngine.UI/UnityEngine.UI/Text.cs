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
		[Address(RVA = "0x50E8D30", Offset = "0x50E8D30", VA = "0x50E8D30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000137")]
	public TextGenerator cachedTextGeneratorForLayout
	{
		[Token(Token = "0x60004A4")]
		[Address(RVA = "0x50E8DC0", Offset = "0x50E8DC0", VA = "0x50E8DC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000138")]
	public override Texture mainTexture
	{
		[Token(Token = "0x60004A5")]
		[Address(RVA = "0x50E8E30", Offset = "0x50E8E30", VA = "0x50E8E30", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000139")]
	public Font font
	{
		[Token(Token = "0x60004A7")]
		[Address(RVA = "0x50E9010", Offset = "0x50E9010", VA = "0x50E9010")]
		get
		{
			return null;
		}
		[Token(Token = "0x60004A8")]
		[Address(RVA = "0x50E9150", Offset = "0x50E9150", VA = "0x50E9150")]
		set
		{
		}
	}

	[Token(Token = "0x1700013A")]
	public virtual string text
	{
		[Token(Token = "0x60004A9")]
		[Address(RVA = "0x50E9270", Offset = "0x50E9270", VA = "0x50E9270", Slot = "74")]
		get
		{
			return null;
		}
		[Token(Token = "0x60004AA")]
		[Address(RVA = "0x50E9280", Offset = "0x50E9280", VA = "0x50E9280", Slot = "75")]
		set
		{
		}
	}

	[Token(Token = "0x1700013B")]
	public bool supportRichText
	{
		[Token(Token = "0x60004AB")]
		[Address(RVA = "0x50E9350", Offset = "0x50E9350", VA = "0x50E9350")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60004AC")]
		[Address(RVA = "0x50E9370", Offset = "0x50E9370", VA = "0x50E9370")]
		set
		{
		}
	}

	[Token(Token = "0x1700013C")]
	public bool resizeTextForBestFit
	{
		[Token(Token = "0x60004AD")]
		[Address(RVA = "0x50E93C0", Offset = "0x50E93C0", VA = "0x50E93C0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60004AE")]
		[Address(RVA = "0x50E93E0", Offset = "0x50E93E0", VA = "0x50E93E0")]
		set
		{
		}
	}

	[Token(Token = "0x1700013D")]
	public int resizeTextMinSize
	{
		[Token(Token = "0x60004AF")]
		[Address(RVA = "0x50E9430", Offset = "0x50E9430", VA = "0x50E9430")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60004B0")]
		[Address(RVA = "0x50E9450", Offset = "0x50E9450", VA = "0x50E9450")]
		set
		{
		}
	}

	[Token(Token = "0x1700013E")]
	public int resizeTextMaxSize
	{
		[Token(Token = "0x60004B1")]
		[Address(RVA = "0x50E94A0", Offset = "0x50E94A0", VA = "0x50E94A0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60004B2")]
		[Address(RVA = "0x50E94C0", Offset = "0x50E94C0", VA = "0x50E94C0")]
		set
		{
		}
	}

	[Token(Token = "0x1700013F")]
	public TextAnchor alignment
	{
		[Token(Token = "0x60004B3")]
		[Address(RVA = "0x50E9510", Offset = "0x50E9510", VA = "0x50E9510")]
		get
		{
			return default(TextAnchor);
		}
		[Token(Token = "0x60004B4")]
		[Address(RVA = "0x50E9530", Offset = "0x50E9530", VA = "0x50E9530")]
		set
		{
		}
	}

	[Token(Token = "0x17000140")]
	public bool alignByGeometry
	{
		[Token(Token = "0x60004B5")]
		[Address(RVA = "0x50E9580", Offset = "0x50E9580", VA = "0x50E9580")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60004B6")]
		[Address(RVA = "0x50E95A0", Offset = "0x50E95A0", VA = "0x50E95A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000141")]
	public int fontSize
	{
		[Token(Token = "0x60004B7")]
		[Address(RVA = "0x50E95E0", Offset = "0x50E95E0", VA = "0x50E95E0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60004B8")]
		[Address(RVA = "0x50E9600", Offset = "0x50E9600", VA = "0x50E9600")]
		set
		{
		}
	}

	[Token(Token = "0x17000142")]
	public HorizontalWrapMode horizontalOverflow
	{
		[Token(Token = "0x60004B9")]
		[Address(RVA = "0x50E9650", Offset = "0x50E9650", VA = "0x50E9650")]
		get
		{
			return default(HorizontalWrapMode);
		}
		[Token(Token = "0x60004BA")]
		[Address(RVA = "0x50E9670", Offset = "0x50E9670", VA = "0x50E9670")]
		set
		{
		}
	}

	[Token(Token = "0x17000143")]
	public VerticalWrapMode verticalOverflow
	{
		[Token(Token = "0x60004BB")]
		[Address(RVA = "0x50E96C0", Offset = "0x50E96C0", VA = "0x50E96C0")]
		get
		{
			return default(VerticalWrapMode);
		}
		[Token(Token = "0x60004BC")]
		[Address(RVA = "0x50E96E0", Offset = "0x50E96E0", VA = "0x50E96E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000144")]
	public float lineSpacing
	{
		[Token(Token = "0x60004BD")]
		[Address(RVA = "0x50E9730", Offset = "0x50E9730", VA = "0x50E9730")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60004BE")]
		[Address(RVA = "0x50E9750", Offset = "0x50E9750", VA = "0x50E9750")]
		set
		{
		}
	}

	[Token(Token = "0x17000145")]
	public FontStyle fontStyle
	{
		[Token(Token = "0x60004BF")]
		[Address(RVA = "0x50E97A0", Offset = "0x50E97A0", VA = "0x50E97A0")]
		get
		{
			return default(FontStyle);
		}
		[Token(Token = "0x60004C0")]
		[Address(RVA = "0x50E97C0", Offset = "0x50E97C0", VA = "0x50E97C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000146")]
	public float pixelsPerUnit
	{
		[Token(Token = "0x60004C1")]
		[Address(RVA = "0x50E9810", Offset = "0x50E9810", VA = "0x50E9810")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000147")]
	public virtual float minWidth
	{
		[Token(Token = "0x60004CC")]
		[Address(RVA = "0x50EAD70", Offset = "0x50EAD70", VA = "0x50EAD70", Slot = "78")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000148")]
	public virtual float preferredWidth
	{
		[Token(Token = "0x60004CD")]
		[Address(RVA = "0x50EAD80", Offset = "0x50EAD80", VA = "0x50EAD80", Slot = "79")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000149")]
	public virtual float flexibleWidth
	{
		[Token(Token = "0x60004CE")]
		[Address(RVA = "0x50EAF50", Offset = "0x50EAF50", VA = "0x50EAF50", Slot = "80")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700014A")]
	public virtual float minHeight
	{
		[Token(Token = "0x60004CF")]
		[Address(RVA = "0x50EAF60", Offset = "0x50EAF60", VA = "0x50EAF60", Slot = "81")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700014B")]
	public virtual float preferredHeight
	{
		[Token(Token = "0x60004D0")]
		[Address(RVA = "0x50EAF70", Offset = "0x50EAF70", VA = "0x50EAF70", Slot = "82")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700014C")]
	public virtual float flexibleHeight
	{
		[Token(Token = "0x60004D1")]
		[Address(RVA = "0x50EB120", Offset = "0x50EB120", VA = "0x50EB120", Slot = "83")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700014D")]
	public virtual int layoutPriority
	{
		[Token(Token = "0x60004D2")]
		[Address(RVA = "0x50EB130", Offset = "0x50EB130", VA = "0x50EB130", Slot = "84")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60004A2")]
	[Address(RVA = "0x50E8C80", Offset = "0x50E8C80", VA = "0x50E8C80")]
	protected Text()
	{
	}

	[Token(Token = "0x60004A6")]
	[Address(RVA = "0x50E9030", Offset = "0x50E9030", VA = "0x50E9030")]
	public void FontTextureChanged()
	{
	}

	[Token(Token = "0x60004C2")]
	[Address(RVA = "0x50E9970", Offset = "0x50E9970", VA = "0x50E9970", Slot = "5")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x60004C3")]
	[Address(RVA = "0x50E99F0", Offset = "0x50E99F0", VA = "0x50E99F0", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x60004C4")]
	[Address(RVA = "0x50E9A40", Offset = "0x50E9A40", VA = "0x50E9A40", Slot = "41")]
	protected override void UpdateGeometry()
	{
	}

	[Token(Token = "0x60004C5")]
	[Address(RVA = "0x50E9AC0", Offset = "0x50E9AC0", VA = "0x50E9AC0")]
	internal void AssignDefaultFont()
	{
	}

	[Token(Token = "0x60004C6")]
	[Address(RVA = "0x50E9B20", Offset = "0x50E9B20", VA = "0x50E9B20")]
	internal void AssignDefaultFontIfNecessary()
	{
	}

	[Token(Token = "0x60004C7")]
	[Address(RVA = "0x50E9BD0", Offset = "0x50E9BD0", VA = "0x50E9BD0")]
	public TextGenerationSettings GetGenerationSettings(Vector2 extents)
	{
		return default(TextGenerationSettings);
	}

	[Token(Token = "0x60004C8")]
	[Address(RVA = "0x50E9DF0", Offset = "0x50E9DF0", VA = "0x50E9DF0")]
	public static Vector2 GetTextAnchorPivot(TextAnchor anchor)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60004C9")]
	[Address(RVA = "0x50E9E90", Offset = "0x50E9E90", VA = "0x50E9E90", Slot = "44")]
	protected override void OnPopulateMesh(VertexHelper toFill)
	{
	}

	[Token(Token = "0x60004CA")]
	[Address(RVA = "0x50EAD50", Offset = "0x50EAD50", VA = "0x50EAD50", Slot = "76")]
	public virtual void CalculateLayoutInputHorizontal()
	{
	}

	[Token(Token = "0x60004CB")]
	[Address(RVA = "0x50EAD60", Offset = "0x50EAD60", VA = "0x50EAD60", Slot = "77")]
	public virtual void CalculateLayoutInputVertical()
	{
	}
}
