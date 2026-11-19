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
		[Address(RVA = "0x6761170", Offset = "0x6760170", VA = "0x6761170")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000661")]
		[Address(RVA = "0x6761180", Offset = "0x6760180", VA = "0x6761180")]
		set
		{
		}
	}

	[Token(Token = "0x1700018B")]
	public Vector2 pivot
	{
		[Token(Token = "0x6000662")]
		[Address(RVA = "0x6761190", Offset = "0x6760190", VA = "0x6761190")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000663")]
		[Address(RVA = "0x67611A0", Offset = "0x67601A0", VA = "0x67611A0")]
		set
		{
		}
	}

	[Token(Token = "0x1700018C")]
	public TextContainerAnchors anchorPosition
	{
		[Token(Token = "0x6000664")]
		[Address(RVA = "0x6761530", Offset = "0x6760530", VA = "0x6761530")]
		get
		{
			return default(TextContainerAnchors);
		}
		[Token(Token = "0x6000665")]
		[Address(RVA = "0x6761540", Offset = "0x6760540", VA = "0x6761540")]
		set
		{
		}
	}

	[Token(Token = "0x1700018D")]
	public Rect rect
	{
		[Token(Token = "0x6000666")]
		[Address(RVA = "0x67616B0", Offset = "0x67606B0", VA = "0x67616B0")]
		get
		{
			return default(Rect);
		}
		[Token(Token = "0x6000667")]
		[Address(RVA = "0x67616C0", Offset = "0x67606C0", VA = "0x67616C0")]
		set
		{
		}
	}

	[Token(Token = "0x1700018E")]
	public Vector2 size
	{
		[Token(Token = "0x6000668")]
		[Address(RVA = "0x67617F0", Offset = "0x67607F0", VA = "0x67617F0")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000669")]
		[Address(RVA = "0x6761850", Offset = "0x6760850", VA = "0x6761850")]
		set
		{
		}
	}

	[Token(Token = "0x1700018F")]
	public float width
	{
		[Token(Token = "0x600066A")]
		[Address(RVA = "0x6761990", Offset = "0x6760990", VA = "0x6761990")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600066B")]
		[Address(RVA = "0x67619F0", Offset = "0x67609F0", VA = "0x67619F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000190")]
	public float height
	{
		[Token(Token = "0x600066C")]
		[Address(RVA = "0x6761AE0", Offset = "0x6760AE0", VA = "0x6761AE0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600066D")]
		[Address(RVA = "0x6761B40", Offset = "0x6760B40", VA = "0x6761B40")]
		set
		{
		}
	}

	[Token(Token = "0x17000191")]
	public bool isDefaultWidth
	{
		[Token(Token = "0x600066E")]
		[Address(RVA = "0x6761C30", Offset = "0x6760C30", VA = "0x6761C30")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000192")]
	public bool isDefaultHeight
	{
		[Token(Token = "0x600066F")]
		[Address(RVA = "0x6761C40", Offset = "0x6760C40", VA = "0x6761C40")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000193")]
	public bool isAutoFitting
	{
		[Token(Token = "0x6000670")]
		[Address(RVA = "0x6761C50", Offset = "0x6760C50", VA = "0x6761C50")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000671")]
		[Address(RVA = "0x6761C60", Offset = "0x6760C60", VA = "0x6761C60")]
		set
		{
		}
	}

	[Token(Token = "0x17000194")]
	public Vector3[] corners
	{
		[Token(Token = "0x6000672")]
		[Address(RVA = "0x6761C70", Offset = "0x6760C70", VA = "0x6761C70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000195")]
	public Vector3[] worldCorners
	{
		[Token(Token = "0x6000673")]
		[Address(RVA = "0x6761C80", Offset = "0x6760C80", VA = "0x6761C80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000196")]
	public Vector4 margins
	{
		[Token(Token = "0x6000674")]
		[Address(RVA = "0x6761C90", Offset = "0x6760C90", VA = "0x6761C90")]
		get
		{
			return default(Vector4);
		}
		[Token(Token = "0x6000675")]
		[Address(RVA = "0x6761CA0", Offset = "0x6760CA0", VA = "0x6761CA0")]
		set
		{
		}
	}

	[Token(Token = "0x17000197")]
	public RectTransform rectTransform
	{
		[Token(Token = "0x6000676")]
		[Address(RVA = "0x6761CF0", Offset = "0x6760CF0", VA = "0x6761CF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000198")]
	public TextMeshPro textMeshPro
	{
		[Token(Token = "0x6000677")]
		[Address(RVA = "0x6761D80", Offset = "0x6760D80", VA = "0x6761D80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000678")]
	[Address(RVA = "0x6761E10", Offset = "0x6760E10", VA = "0x6761E10", Slot = "4")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x6000679")]
	[Address(RVA = "0x6761EC0", Offset = "0x6760EC0", VA = "0x6761EC0", Slot = "5")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x600067A")]
	[Address(RVA = "0x6761ED0", Offset = "0x6760ED0", VA = "0x6761ED0", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x600067B")]
	[Address(RVA = "0x67613B0", Offset = "0x67603B0", VA = "0x67613B0")]
	private void OnContainerChanged()
	{
	}

	[Token(Token = "0x600067C")]
	[Address(RVA = "0x6762090", Offset = "0x6761090", VA = "0x6762090", Slot = "10")]
	protected override void OnRectTransformDimensionsChange()
	{
	}

	[Token(Token = "0x600067D")]
	[Address(RVA = "0x6761910", Offset = "0x6760910", VA = "0x6761910")]
	private void SetRect(Vector2 size)
	{
	}

	[Token(Token = "0x600067E")]
	[Address(RVA = "0x6761EE0", Offset = "0x6760EE0", VA = "0x6761EE0")]
	private void UpdateCorners()
	{
	}

	[Token(Token = "0x600067F")]
	[Address(RVA = "0x6761610", Offset = "0x6760610", VA = "0x6761610")]
	private Vector2 GetPivot(TextContainerAnchors anchor)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000680")]
	[Address(RVA = "0x67612C0", Offset = "0x67602C0", VA = "0x67612C0")]
	private TextContainerAnchors GetAnchorPosition(Vector2 pivot)
	{
		return default(TextContainerAnchors);
	}

	[Token(Token = "0x6000681")]
	[Address(RVA = "0x6762300", Offset = "0x6761300", VA = "0x6762300")]
	public TextContainer()
	{
	}
}
