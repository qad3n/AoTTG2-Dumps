// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.TextContainer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;

namespace TMPro;

[Token(Token = "0x20000B4")]
[RequireComponent(typeof(RectTransform))]
public class TextContainer : UIBehaviour
{
	[Token(Token = "0x4000635")]
	[FieldOffset(Offset = "0x20")]
	private bool m_hasChanged;

	[Token(Token = "0x4000636")]
	[FieldOffset(Offset = "0x24")]
	[SerializeField]
	private Vector2 m_pivot;

	[Token(Token = "0x4000637")]
	[FieldOffset(Offset = "0x2C")]
	[SerializeField]
	private TextContainerAnchors m_anchorPosition;

	[Token(Token = "0x4000638")]
	[FieldOffset(Offset = "0x30")]
	[SerializeField]
	private Rect m_rect;

	[Token(Token = "0x4000639")]
	[FieldOffset(Offset = "0x40")]
	private bool m_isDefaultWidth;

	[Token(Token = "0x400063A")]
	[FieldOffset(Offset = "0x41")]
	private bool m_isDefaultHeight;

	[Token(Token = "0x400063B")]
	[FieldOffset(Offset = "0x42")]
	private bool m_isAutoFitting;

	[Token(Token = "0x400063C")]
	[FieldOffset(Offset = "0x48")]
	private Vector3[] m_corners;

	[Token(Token = "0x400063D")]
	[FieldOffset(Offset = "0x50")]
	private Vector3[] m_worldCorners;

	[Token(Token = "0x400063E")]
	[FieldOffset(Offset = "0x58")]
	[SerializeField]
	private Vector4 m_margins;

	[Token(Token = "0x400063F")]
	[FieldOffset(Offset = "0x68")]
	private RectTransform m_rectTransform;

	[Token(Token = "0x4000640")]
	[FieldOffset(Offset = "0x0")]
	private static Vector2 k_defaultSize;

	[Token(Token = "0x4000641")]
	[FieldOffset(Offset = "0x70")]
	private TextMeshPro m_textMeshPro;

	[Token(Token = "0x1700018A")]
	public bool hasChanged
	{
		[Token(Token = "0x6000660")]
		[Address(RVA = "0xF40050", Offset = "0xF3E650", VA = "0x180F40050")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000661")]
		[Address(RVA = "0x138BAA0", Offset = "0x138A0A0", VA = "0x18138BAA0")]
		set
		{
		}
	}

	[Token(Token = "0x1700018B")]
	public Vector2 pivot
	{
		[Token(Token = "0x6000662")]
		[Address(RVA = "0x2D6B170", Offset = "0x2D69770", VA = "0x182D6B170")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000663")]
		[Address(RVA = "0x2D6B580", Offset = "0x2D69B80", VA = "0x182D6B580")]
		set
		{
		}
	}

	[Token(Token = "0x1700018C")]
	public TextContainerAnchors anchorPosition
	{
		[Token(Token = "0x6000664")]
		[Address(RVA = "0xB3E080", Offset = "0xB3C680", VA = "0x180B3E080")]
		get
		{
			return default(TextContainerAnchors);
		}
		[Token(Token = "0x6000665")]
		[Address(RVA = "0x2D6B360", Offset = "0x2D69960", VA = "0x182D6B360")]
		set
		{
		}
	}

	[Token(Token = "0x1700018D")]
	public Rect rect
	{
		[Token(Token = "0x6000666")]
		[Address(RVA = "0x1D94540", Offset = "0x1D92B40", VA = "0x181D94540")]
		get
		{
			return default(Rect);
		}
		[Token(Token = "0x6000667")]
		[Address(RVA = "0x2D6B610", Offset = "0x2D69C10", VA = "0x182D6B610")]
		set
		{
		}
	}

	[Token(Token = "0x1700018E")]
	public Vector2 size
	{
		[Token(Token = "0x6000668")]
		[Address(RVA = "0x2D6B220", Offset = "0x2D69820", VA = "0x182D6B220")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000669")]
		[Address(RVA = "0x2D6B700", Offset = "0x2D69D00", VA = "0x182D6B700")]
		set
		{
		}
	}

	[Token(Token = "0x1700018F")]
	public float width
	{
		[Token(Token = "0x600066A")]
		[Address(RVA = "0x2D6B310", Offset = "0x2D69910", VA = "0x182D6B310")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600066B")]
		[Address(RVA = "0x2D6B7B0", Offset = "0x2D69DB0", VA = "0x182D6B7B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000190")]
	public float height
	{
		[Token(Token = "0x600066C")]
		[Address(RVA = "0x2D6B120", Offset = "0x2D69720", VA = "0x182D6B120")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600066D")]
		[Address(RVA = "0x2D6B490", Offset = "0x2D69A90", VA = "0x182D6B490")]
		set
		{
		}
	}

	[Token(Token = "0x17000191")]
	public bool isDefaultWidth
	{
		[Token(Token = "0x600066E")]
		[Address(RVA = "0xA374E0", Offset = "0xA35AE0", VA = "0x180A374E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000192")]
	public bool isDefaultHeight
	{
		[Token(Token = "0x600066F")]
		[Address(RVA = "0x1AD8270", Offset = "0x1AD6870", VA = "0x181AD8270")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000193")]
	public bool isAutoFitting
	{
		[Token(Token = "0x6000670")]
		[Address(RVA = "0x1D26370", Offset = "0x1D24970", VA = "0x181D26370")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000671")]
		[Address(RVA = "0x1D26390", Offset = "0x1D24990", VA = "0x181D26390")]
		set
		{
		}
	}

	[Token(Token = "0x17000194")]
	public Vector3[] corners
	{
		[Token(Token = "0x6000672")]
		[Address(RVA = "0xC7FB50", Offset = "0xC7E150", VA = "0x180C7FB50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000195")]
	public Vector3[] worldCorners
	{
		[Token(Token = "0x6000673")]
		[Address(RVA = "0x5853D0", Offset = "0x5839D0", VA = "0x1805853D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000196")]
	public Vector4 margins
	{
		[Token(Token = "0x6000674")]
		[Address(RVA = "0x18FEB30", Offset = "0x18FD130", VA = "0x1818FEB30")]
		get
		{
			return default(Vector4);
		}
		[Token(Token = "0x6000675")]
		[Address(RVA = "0x2D6B510", Offset = "0x2D69B10", VA = "0x182D6B510")]
		set
		{
		}
	}

	[Token(Token = "0x17000197")]
	public RectTransform rectTransform
	{
		[Token(Token = "0x6000676")]
		[Address(RVA = "0x2D6B190", Offset = "0x2D69790", VA = "0x182D6B190")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000198")]
	public TextMeshPro textMeshPro
	{
		[Token(Token = "0x6000677")]
		[Address(RVA = "0x2D6B280", Offset = "0x2D69880", VA = "0x182D6B280")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000678")]
	[Address(RVA = "0x2D6A550", Offset = "0x2D68B50", VA = "0x182D6A550", Slot = "4")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x6000679")]
	[Address(RVA = "0x2D6AB20", Offset = "0x2D69120", VA = "0x182D6AB20", Slot = "5")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x600067A")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x600067B")]
	[Address(RVA = "0x2D6A960", Offset = "0x2D68F60", VA = "0x182D6A960")]
	private void OnContainerChanged()
	{
	}

	[Token(Token = "0x600067C")]
	[Address(RVA = "0x2D6AB30", Offset = "0x2D69130", VA = "0x182D6AB30", Slot = "10")]
	protected override void OnRectTransformDimensionsChange()
	{
	}

	[Token(Token = "0x600067D")]
	[Address(RVA = "0x2D6AE20", Offset = "0x2D69420", VA = "0x182D6AE20")]
	private void SetRect(Vector2 size)
	{
	}

	[Token(Token = "0x600067E")]
	[Address(RVA = "0x2D6AEA0", Offset = "0x2D694A0", VA = "0x182D6AEA0")]
	private void UpdateCorners()
	{
	}

	[Token(Token = "0x600067F")]
	[Address(RVA = "0x2D6A810", Offset = "0x2D68E10", VA = "0x182D6A810")]
	private Vector2 GetPivot(TextContainerAnchors anchor)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000680")]
	[Address(RVA = "0x2D6A600", Offset = "0x2D68C00", VA = "0x182D6A600")]
	private TextContainerAnchors GetAnchorPosition(Vector2 pivot)
	{
		return default(TextContainerAnchors);
	}

	[Token(Token = "0x6000681")]
	[Address(RVA = "0x2D6B0A0", Offset = "0x2D696A0", VA = "0x182D6B0A0")]
	public TextContainer()
	{
	}
}
