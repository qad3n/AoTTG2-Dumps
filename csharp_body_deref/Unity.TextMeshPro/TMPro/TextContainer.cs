using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;

namespace TMPro;

[Token(Token = "0x20000A6")]
[RequireComponent(typeof(RectTransform))]
public class TextContainer : UIBehaviour
{
	[Token(Token = "0x4000600")]
	[FieldOffset(Offset = "0x20")]
	private bool m_hasChanged;

	[Token(Token = "0x4000601")]
	[FieldOffset(Offset = "0x24")]
	[SerializeField]
	private Vector2 m_pivot;

	[Token(Token = "0x4000602")]
	[FieldOffset(Offset = "0x2C")]
	[SerializeField]
	private TextContainerAnchors m_anchorPosition;

	[Token(Token = "0x4000603")]
	[FieldOffset(Offset = "0x30")]
	[SerializeField]
	private Rect m_rect;

	[Token(Token = "0x4000604")]
	[FieldOffset(Offset = "0x40")]
	private bool m_isDefaultWidth;

	[Token(Token = "0x4000605")]
	[FieldOffset(Offset = "0x41")]
	private bool m_isDefaultHeight;

	[Token(Token = "0x4000606")]
	[FieldOffset(Offset = "0x42")]
	private bool m_isAutoFitting;

	[Token(Token = "0x4000607")]
	[FieldOffset(Offset = "0x48")]
	private Vector3[] m_corners;

	[Token(Token = "0x4000608")]
	[FieldOffset(Offset = "0x50")]
	private Vector3[] m_worldCorners;

	[Token(Token = "0x4000609")]
	[FieldOffset(Offset = "0x58")]
	[SerializeField]
	private Vector4 m_margins;

	[Token(Token = "0x400060A")]
	[FieldOffset(Offset = "0x68")]
	private RectTransform m_rectTransform;

	[Token(Token = "0x400060B")]
	[FieldOffset(Offset = "0x0")]
	private static Vector2 k_defaultSize;

	[Token(Token = "0x400060C")]
	[FieldOffset(Offset = "0x70")]
	private TextMeshPro m_textMeshPro;

	[Token(Token = "0x17000164")]
	public bool hasChanged
	{
		[Token(Token = "0x600062E")]
		[Address(RVA = "0x4978930", Offset = "0x4978930", VA = "0x4978930")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600062F")]
		[Address(RVA = "0x4978940", Offset = "0x4978940", VA = "0x4978940")]
		set
		{
		}
	}

	[Token(Token = "0x17000165")]
	public Vector2 pivot
	{
		[Token(Token = "0x6000630")]
		[Address(RVA = "0x4978950", Offset = "0x4978950", VA = "0x4978950")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000631")]
		[Address(RVA = "0x4978960", Offset = "0x4978960", VA = "0x4978960")]
		set
		{
		}
	}

	[Token(Token = "0x17000166")]
	public TextContainerAnchors anchorPosition
	{
		[Token(Token = "0x6000632")]
		[Address(RVA = "0x4978C80", Offset = "0x4978C80", VA = "0x4978C80")]
		get
		{
			return default(TextContainerAnchors);
		}
		[Token(Token = "0x6000633")]
		[Address(RVA = "0x4978C90", Offset = "0x4978C90", VA = "0x4978C90")]
		set
		{
		}
	}

	[Token(Token = "0x17000167")]
	public Rect rect
	{
		[Token(Token = "0x6000634")]
		[Address(RVA = "0x4978E00", Offset = "0x4978E00", VA = "0x4978E00")]
		get
		{
			return default(Rect);
		}
		[Token(Token = "0x6000635")]
		[Address(RVA = "0x4978E10", Offset = "0x4978E10", VA = "0x4978E10")]
		set
		{
		}
	}

	[Token(Token = "0x17000168")]
	public Vector2 size
	{
		[Token(Token = "0x6000636")]
		[Address(RVA = "0x4978E60", Offset = "0x4978E60", VA = "0x4978E60")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000637")]
		[Address(RVA = "0x4978E70", Offset = "0x4978E70", VA = "0x4978E70")]
		set
		{
		}
	}

	[Token(Token = "0x17000169")]
	public float width
	{
		[Token(Token = "0x6000638")]
		[Address(RVA = "0x4978ED0", Offset = "0x4978ED0", VA = "0x4978ED0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000639")]
		[Address(RVA = "0x4978EE0", Offset = "0x4978EE0", VA = "0x4978EE0")]
		set
		{
		}
	}

	[Token(Token = "0x1700016A")]
	public float height
	{
		[Token(Token = "0x600063A")]
		[Address(RVA = "0x4978F00", Offset = "0x4978F00", VA = "0x4978F00")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600063B")]
		[Address(RVA = "0x4978F10", Offset = "0x4978F10", VA = "0x4978F10")]
		set
		{
		}
	}

	[Token(Token = "0x1700016B")]
	public bool isDefaultWidth
	{
		[Token(Token = "0x600063C")]
		[Address(RVA = "0x4978F30", Offset = "0x4978F30", VA = "0x4978F30")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700016C")]
	public bool isDefaultHeight
	{
		[Token(Token = "0x600063D")]
		[Address(RVA = "0x4978F40", Offset = "0x4978F40", VA = "0x4978F40")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700016D")]
	public bool isAutoFitting
	{
		[Token(Token = "0x600063E")]
		[Address(RVA = "0x4978F50", Offset = "0x4978F50", VA = "0x4978F50")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600063F")]
		[Address(RVA = "0x4978F60", Offset = "0x4978F60", VA = "0x4978F60")]
		set
		{
		}
	}

	[Token(Token = "0x1700016E")]
	public Vector3[] corners
	{
		[Token(Token = "0x6000640")]
		[Address(RVA = "0x4978F70", Offset = "0x4978F70", VA = "0x4978F70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700016F")]
	public Vector3[] worldCorners
	{
		[Token(Token = "0x6000641")]
		[Address(RVA = "0x4978F80", Offset = "0x4978F80", VA = "0x4978F80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000170")]
	public Vector4 margins
	{
		[Token(Token = "0x6000642")]
		[Address(RVA = "0x4978F90", Offset = "0x4978F90", VA = "0x4978F90")]
		get
		{
			return default(Vector4);
		}
		[Token(Token = "0x6000643")]
		[Address(RVA = "0x4978FA0", Offset = "0x4978FA0", VA = "0x4978FA0")]
		set
		{
		}
	}

	[Token(Token = "0x17000171")]
	public RectTransform rectTransform
	{
		[Token(Token = "0x6000644")]
		[Address(RVA = "0x4978FF0", Offset = "0x4978FF0", VA = "0x4978FF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000172")]
	public TextMeshPro textMeshPro
	{
		[Token(Token = "0x6000645")]
		[Address(RVA = "0x4979080", Offset = "0x4979080", VA = "0x4979080")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000646")]
	[Address(RVA = "0x4979110", Offset = "0x4979110", VA = "0x4979110", Slot = "4")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x6000647")]
	[Address(RVA = "0x49791C0", Offset = "0x49791C0", VA = "0x49791C0", Slot = "5")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x6000648")]
	[Address(RVA = "0x49791D0", Offset = "0x49791D0", VA = "0x49791D0", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x6000649")]
	[Address(RVA = "0x4978B70", Offset = "0x4978B70", VA = "0x4978B70")]
	private void OnContainerChanged()
	{
	}

	[Token(Token = "0x600064A")]
	[Address(RVA = "0x4979350", Offset = "0x4979350", VA = "0x4979350", Slot = "10")]
	protected override void OnRectTransformDimensionsChange()
	{
	}

	[Token(Token = "0x600064B")]
	[Address(RVA = "0x4978EC0", Offset = "0x4978EC0", VA = "0x4978EC0")]
	private void SetRect(Vector2 size)
	{
	}

	[Token(Token = "0x600064C")]
	[Address(RVA = "0x49791E0", Offset = "0x49791E0", VA = "0x49791E0")]
	private void UpdateCorners()
	{
	}

	[Token(Token = "0x600064D")]
	[Address(RVA = "0x4978D60", Offset = "0x4978D60", VA = "0x4978D60")]
	private Vector2 GetPivot(TextContainerAnchors anchor)
	{
		return default(Vector2);
	}

	[Token(Token = "0x600064E")]
	[Address(RVA = "0x4978A80", Offset = "0x4978A80", VA = "0x4978A80")]
	private TextContainerAnchors GetAnchorPosition(Vector2 pivot)
	{
		return default(TextContainerAnchors);
	}

	[Token(Token = "0x600064F")]
	[Address(RVA = "0x49794E0", Offset = "0x49794E0", VA = "0x49794E0")]
	public TextContainer()
	{
	}
}
