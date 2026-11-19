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

	[Token(Token = "0x17000137")]
	public TextGenerator cachedTextGenerator
	{
		[Token(Token = "0x60004AF")]
		[Address(RVA = "0x6CF8D30", Offset = "0x6CF7D30", VA = "0x6CF8D30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000138")]
	public TextGenerator cachedTextGeneratorForLayout
	{
		[Token(Token = "0x60004B0")]
		[Address(RVA = "0x6CF8DC0", Offset = "0x6CF7DC0", VA = "0x6CF8DC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000139")]
	public override Texture mainTexture
	{
		[Token(Token = "0x60004B1")]
		[Address(RVA = "0x6CF8E30", Offset = "0x6CF7E30", VA = "0x6CF8E30", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700013A")]
	public Font font
	{
		[Token(Token = "0x60004B3")]
		[Address(RVA = "0x6CF9010", Offset = "0x6CF8010", VA = "0x6CF9010")]
		get
		{
			return null;
		}
		[Token(Token = "0x60004B4")]
		[Address(RVA = "0x6CF9150", Offset = "0x6CF8150", VA = "0x6CF9150")]
		set
		{
		}
	}

	[Token(Token = "0x1700013B")]
	public virtual string text
	{
		[Token(Token = "0x60004B5")]
		[Address(RVA = "0x6CF9270", Offset = "0x6CF8270", VA = "0x6CF9270", Slot = "74")]
		get
		{
			return null;
		}
		[Token(Token = "0x60004B6")]
		[Address(RVA = "0x6CF9280", Offset = "0x6CF8280", VA = "0x6CF9280", Slot = "75")]
		set
		{
		}
	}

	[Token(Token = "0x1700013C")]
	public bool supportRichText
	{
		[Token(Token = "0x60004B7")]
		[Address(RVA = "0x6CF9360", Offset = "0x6CF8360", VA = "0x6CF9360")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60004B8")]
		[Address(RVA = "0x6CF9380", Offset = "0x6CF8380", VA = "0x6CF9380")]
		set
		{
		}
	}

	[Token(Token = "0x1700013D")]
	public bool resizeTextForBestFit
	{
		[Token(Token = "0x60004B9")]
		[Address(RVA = "0x6CF93D0", Offset = "0x6CF83D0", VA = "0x6CF93D0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60004BA")]
		[Address(RVA = "0x6CF93F0", Offset = "0x6CF83F0", VA = "0x6CF93F0")]
		set
		{
		}
	}

	[Token(Token = "0x1700013E")]
	public int resizeTextMinSize
	{
		[Token(Token = "0x60004BB")]
		[Address(RVA = "0x6CF9440", Offset = "0x6CF8440", VA = "0x6CF9440")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60004BC")]
		[Address(RVA = "0x6CF9460", Offset = "0x6CF8460", VA = "0x6CF9460")]
		set
		{
		}
	}

	[Token(Token = "0x1700013F")]
	public int resizeTextMaxSize
	{
		[Token(Token = "0x60004BD")]
		[Address(RVA = "0x6CF94B0", Offset = "0x6CF84B0", VA = "0x6CF94B0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60004BE")]
		[Address(RVA = "0x6CF94D0", Offset = "0x6CF84D0", VA = "0x6CF94D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000140")]
	public TextAnchor alignment
	{
		[Token(Token = "0x60004BF")]
		[Address(RVA = "0x6CF9520", Offset = "0x6CF8520", VA = "0x6CF9520")]
		get
		{
			return default(TextAnchor);
		}
		[Token(Token = "0x60004C0")]
		[Address(RVA = "0x6CF9540", Offset = "0x6CF8540", VA = "0x6CF9540")]
		set
		{
		}
	}

	[Token(Token = "0x17000141")]
	public bool alignByGeometry
	{
		[Token(Token = "0x60004C1")]
		[Address(RVA = "0x6CF9590", Offset = "0x6CF8590", VA = "0x6CF9590")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60004C2")]
		[Address(RVA = "0x6CF95B0", Offset = "0x6CF85B0", VA = "0x6CF95B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000142")]
	public int fontSize
	{
		[Token(Token = "0x60004C3")]
		[Address(RVA = "0x6CF95F0", Offset = "0x6CF85F0", VA = "0x6CF95F0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60004C4")]
		[Address(RVA = "0x6CF9610", Offset = "0x6CF8610", VA = "0x6CF9610")]
		set
		{
		}
	}

	[Token(Token = "0x17000143")]
	public HorizontalWrapMode horizontalOverflow
	{
		[Token(Token = "0x60004C5")]
		[Address(RVA = "0x6CF9660", Offset = "0x6CF8660", VA = "0x6CF9660")]
		get
		{
			return default(HorizontalWrapMode);
		}
		[Token(Token = "0x60004C6")]
		[Address(RVA = "0x6CF9680", Offset = "0x6CF8680", VA = "0x6CF9680")]
		set
		{
		}
	}

	[Token(Token = "0x17000144")]
	public VerticalWrapMode verticalOverflow
	{
		[Token(Token = "0x60004C7")]
		[Address(RVA = "0x6CF96D0", Offset = "0x6CF86D0", VA = "0x6CF96D0")]
		get
		{
			return default(VerticalWrapMode);
		}
		[Token(Token = "0x60004C8")]
		[Address(RVA = "0x6CF96F0", Offset = "0x6CF86F0", VA = "0x6CF96F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000145")]
	public float lineSpacing
	{
		[Token(Token = "0x60004C9")]
		[Address(RVA = "0x6CF9740", Offset = "0x6CF8740", VA = "0x6CF9740")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60004CA")]
		[Address(RVA = "0x6CF9760", Offset = "0x6CF8760", VA = "0x6CF9760")]
		set
		{
		}
	}

	[Token(Token = "0x17000146")]
	public FontStyle fontStyle
	{
		[Token(Token = "0x60004CB")]
		[Address(RVA = "0x6CF97B0", Offset = "0x6CF87B0", VA = "0x6CF97B0")]
		get
		{
			return default(FontStyle);
		}
		[Token(Token = "0x60004CC")]
		[Address(RVA = "0x6CF97D0", Offset = "0x6CF87D0", VA = "0x6CF97D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000147")]
	public float pixelsPerUnit
	{
		[Token(Token = "0x60004CD")]
		[Address(RVA = "0x6CF9820", Offset = "0x6CF8820", VA = "0x6CF9820")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000148")]
	public virtual float minWidth
	{
		[Token(Token = "0x60004D8")]
		[Address(RVA = "0x6CFAC20", Offset = "0x6CF9C20", VA = "0x6CFAC20", Slot = "78")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000149")]
	public virtual float preferredWidth
	{
		[Token(Token = "0x60004D9")]
		[Address(RVA = "0x6CFAC30", Offset = "0x6CF9C30", VA = "0x6CFAC30", Slot = "79")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700014A")]
	public virtual float flexibleWidth
	{
		[Token(Token = "0x60004DA")]
		[Address(RVA = "0x6CFAE60", Offset = "0x6CF9E60", VA = "0x6CFAE60", Slot = "80")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700014B")]
	public virtual float minHeight
	{
		[Token(Token = "0x60004DB")]
		[Address(RVA = "0x6CFAE70", Offset = "0x6CF9E70", VA = "0x6CFAE70", Slot = "81")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700014C")]
	public virtual float preferredHeight
	{
		[Token(Token = "0x60004DC")]
		[Address(RVA = "0x6CFAE80", Offset = "0x6CF9E80", VA = "0x6CFAE80", Slot = "82")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700014D")]
	public virtual float flexibleHeight
	{
		[Token(Token = "0x60004DD")]
		[Address(RVA = "0x6CFB0E0", Offset = "0x6CFA0E0", VA = "0x6CFB0E0", Slot = "83")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700014E")]
	public virtual int layoutPriority
	{
		[Token(Token = "0x60004DE")]
		[Address(RVA = "0x6CFB0F0", Offset = "0x6CFA0F0", VA = "0x6CFB0F0", Slot = "84")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60004AE")]
	[Address(RVA = "0x6CF8C80", Offset = "0x6CF7C80", VA = "0x6CF8C80")]
	protected Text()
	{
	}

	[Token(Token = "0x60004B2")]
	[Address(RVA = "0x6CF9030", Offset = "0x6CF8030", VA = "0x6CF9030")]
	public void FontTextureChanged()
	{
	}

	[Token(Token = "0x60004CE")]
	[Address(RVA = "0x6CF9980", Offset = "0x6CF8980", VA = "0x6CF9980", Slot = "5")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x60004CF")]
	[Address(RVA = "0x6CF9A00", Offset = "0x6CF8A00", VA = "0x6CF9A00", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x60004D0")]
	[Address(RVA = "0x6CF9A50", Offset = "0x6CF8A50", VA = "0x6CF9A50", Slot = "41")]
	protected override void UpdateGeometry()
	{
	}

	[Token(Token = "0x60004D1")]
	[Address(RVA = "0x6CF9AD0", Offset = "0x6CF8AD0", VA = "0x6CF9AD0")]
	internal void AssignDefaultFont()
	{
	}

	[Token(Token = "0x60004D2")]
	[Address(RVA = "0x6CF9B30", Offset = "0x6CF8B30", VA = "0x6CF9B30")]
	internal void AssignDefaultFontIfNecessary()
	{
	}

	[Token(Token = "0x60004D3")]
	[Address(RVA = "0x6CF9BE0", Offset = "0x6CF8BE0", VA = "0x6CF9BE0")]
	public TextGenerationSettings GetGenerationSettings(Vector2 extents)
	{
		return default(TextGenerationSettings);
	}

	[Token(Token = "0x60004D4")]
	[Address(RVA = "0x6CF9E10", Offset = "0x6CF8E10", VA = "0x6CF9E10")]
	public static Vector2 GetTextAnchorPivot(TextAnchor anchor)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60004D5")]
	[Address(RVA = "0x6CF9EB0", Offset = "0x6CF8EB0", VA = "0x6CF9EB0", Slot = "44")]
	protected override void OnPopulateMesh(VertexHelper toFill)
	{
	}

	[Token(Token = "0x60004D6")]
	[Address(RVA = "0x6CFAC00", Offset = "0x6CF9C00", VA = "0x6CFAC00", Slot = "76")]
	public virtual void CalculateLayoutInputHorizontal()
	{
	}

	[Token(Token = "0x60004D7")]
	[Address(RVA = "0x6CFAC10", Offset = "0x6CF9C10", VA = "0x6CFAC10", Slot = "77")]
	public virtual void CalculateLayoutInputVertical()
	{
	}
}
