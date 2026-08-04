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

[Token(Token = "0x200000D")]
[RequireComponent(typeof(RectTransform))]
public class TextContainer : UIBehaviour
{
	[Token(Token = "0x4000029")]
	[FieldOffset(Offset = "0x20")]
	private bool m_hasChanged;

	[Token(Token = "0x400002A")]
	[FieldOffset(Offset = "0x24")]
	[SerializeField]
	private Vector2 m_pivot;

	[Token(Token = "0x400002B")]
	[FieldOffset(Offset = "0x2C")]
	[SerializeField]
	private TextContainerAnchors m_anchorPosition;

	[Token(Token = "0x400002C")]
	[FieldOffset(Offset = "0x30")]
	[SerializeField]
	private Rect m_rect;

	[Token(Token = "0x400002D")]
	[FieldOffset(Offset = "0x40")]
	private bool m_isDefaultWidth;

	[Token(Token = "0x400002E")]
	[FieldOffset(Offset = "0x41")]
	private bool m_isDefaultHeight;

	[Token(Token = "0x400002F")]
	[FieldOffset(Offset = "0x42")]
	private bool m_isAutoFitting;

	[Token(Token = "0x4000030")]
	[FieldOffset(Offset = "0x48")]
	private Vector3[] m_corners;

	[Token(Token = "0x4000031")]
	[FieldOffset(Offset = "0x50")]
	private Vector3[] m_worldCorners;

	[Token(Token = "0x4000032")]
	[FieldOffset(Offset = "0x58")]
	[SerializeField]
	private Vector4 m_margins;

	[Token(Token = "0x4000033")]
	[FieldOffset(Offset = "0x68")]
	private RectTransform m_rectTransform;

	[Token(Token = "0x4000034")]
	[FieldOffset(Offset = "0x0")]
	private static Vector2 k_defaultSize;

	[Token(Token = "0x4000035")]
	[FieldOffset(Offset = "0x70")]
	private TextMeshPro m_textMeshPro;

	[Token(Token = "0x17000002")]
	public bool hasChanged
	{
		[Token(Token = "0x600002E")]
		[Address(RVA = "0x4C317E0", Offset = "0x4C317E0", VA = "0x4C317E0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600002F")]
		[Address(RVA = "0x4C317F0", Offset = "0x4C317F0", VA = "0x4C317F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000003")]
	public Vector2 pivot
	{
		[Token(Token = "0x6000030")]
		[Address(RVA = "0x4C31800", Offset = "0x4C31800", VA = "0x4C31800")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000031")]
		[Address(RVA = "0x4C31810", Offset = "0x4C31810", VA = "0x4C31810")]
		set
		{
		}
	}

	[Token(Token = "0x17000004")]
	public TextContainerAnchors anchorPosition
	{
		[Token(Token = "0x6000032")]
		[Address(RVA = "0x4C31B30", Offset = "0x4C31B30", VA = "0x4C31B30")]
		get
		{
			return default(TextContainerAnchors);
		}
		[Token(Token = "0x6000033")]
		[Address(RVA = "0x4C31B40", Offset = "0x4C31B40", VA = "0x4C31B40")]
		set
		{
		}
	}

	[Token(Token = "0x17000005")]
	public Rect rect
	{
		[Token(Token = "0x6000034")]
		[Address(RVA = "0x4C31CB0", Offset = "0x4C31CB0", VA = "0x4C31CB0")]
		get
		{
			return default(Rect);
		}
		[Token(Token = "0x6000035")]
		[Address(RVA = "0x4C31CC0", Offset = "0x4C31CC0", VA = "0x4C31CC0")]
		set
		{
		}
	}

	[Token(Token = "0x17000006")]
	public Vector2 size
	{
		[Token(Token = "0x6000036")]
		[Address(RVA = "0x4C31D10", Offset = "0x4C31D10", VA = "0x4C31D10")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000037")]
		[Address(RVA = "0x4C31D20", Offset = "0x4C31D20", VA = "0x4C31D20")]
		set
		{
		}
	}

	[Token(Token = "0x17000007")]
	public float width
	{
		[Token(Token = "0x6000038")]
		[Address(RVA = "0x4C31D80", Offset = "0x4C31D80", VA = "0x4C31D80")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000039")]
		[Address(RVA = "0x4C31D90", Offset = "0x4C31D90", VA = "0x4C31D90")]
		set
		{
		}
	}

	[Token(Token = "0x17000008")]
	public float height
	{
		[Token(Token = "0x600003A")]
		[Address(RVA = "0x4C31DB0", Offset = "0x4C31DB0", VA = "0x4C31DB0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600003B")]
		[Address(RVA = "0x4C31DC0", Offset = "0x4C31DC0", VA = "0x4C31DC0")]
		set
		{
		}
	}

	[Token(Token = "0x17000009")]
	public bool isDefaultWidth
	{
		[Token(Token = "0x600003C")]
		[Address(RVA = "0x4C31DE0", Offset = "0x4C31DE0", VA = "0x4C31DE0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700000A")]
	public bool isDefaultHeight
	{
		[Token(Token = "0x600003D")]
		[Address(RVA = "0x4C31DF0", Offset = "0x4C31DF0", VA = "0x4C31DF0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700000B")]
	public bool isAutoFitting
	{
		[Token(Token = "0x600003E")]
		[Address(RVA = "0x4C31E00", Offset = "0x4C31E00", VA = "0x4C31E00")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600003F")]
		[Address(RVA = "0x4C31E10", Offset = "0x4C31E10", VA = "0x4C31E10")]
		set
		{
		}
	}

	[Token(Token = "0x1700000C")]
	public Vector3[] corners
	{
		[Token(Token = "0x6000040")]
		[Address(RVA = "0x4C31E20", Offset = "0x4C31E20", VA = "0x4C31E20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700000D")]
	public Vector3[] worldCorners
	{
		[Token(Token = "0x6000041")]
		[Address(RVA = "0x4C31E30", Offset = "0x4C31E30", VA = "0x4C31E30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700000E")]
	public Vector4 margins
	{
		[Token(Token = "0x6000042")]
		[Address(RVA = "0x4C31E40", Offset = "0x4C31E40", VA = "0x4C31E40")]
		get
		{
			return default(Vector4);
		}
		[Token(Token = "0x6000043")]
		[Address(RVA = "0x4C31E50", Offset = "0x4C31E50", VA = "0x4C31E50")]
		set
		{
		}
	}

	[Token(Token = "0x1700000F")]
	public RectTransform rectTransform
	{
		[Token(Token = "0x6000044")]
		[Address(RVA = "0x4C31EA0", Offset = "0x4C31EA0", VA = "0x4C31EA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000010")]
	public TextMeshPro textMeshPro
	{
		[Token(Token = "0x6000045")]
		[Address(RVA = "0x4C31F30", Offset = "0x4C31F30", VA = "0x4C31F30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000046")]
	[Address(RVA = "0x4C31FC0", Offset = "0x4C31FC0", VA = "0x4C31FC0", Slot = "4")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x6000047")]
	[Address(RVA = "0x4C32070", Offset = "0x4C32070", VA = "0x4C32070", Slot = "5")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x6000048")]
	[Address(RVA = "0x4C32080", Offset = "0x4C32080", VA = "0x4C32080", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x6000049")]
	[Address(RVA = "0x4C31A20", Offset = "0x4C31A20", VA = "0x4C31A20")]
	private void OnContainerChanged()
	{
	}

	[Token(Token = "0x600004A")]
	[Address(RVA = "0x4C32200", Offset = "0x4C32200", VA = "0x4C32200", Slot = "10")]
	protected override void OnRectTransformDimensionsChange()
	{
	}

	[Token(Token = "0x600004B")]
	[Address(RVA = "0x4C31D70", Offset = "0x4C31D70", VA = "0x4C31D70")]
	private void SetRect(Vector2 size)
	{
	}

	[Token(Token = "0x600004C")]
	[Address(RVA = "0x4C32090", Offset = "0x4C32090", VA = "0x4C32090")]
	private void UpdateCorners()
	{
	}

	[Token(Token = "0x600004D")]
	[Address(RVA = "0x4C31C10", Offset = "0x4C31C10", VA = "0x4C31C10")]
	private Vector2 GetPivot(TextContainerAnchors anchor)
	{
		return default(Vector2);
	}

	[Token(Token = "0x600004E")]
	[Address(RVA = "0x4C31930", Offset = "0x4C31930", VA = "0x4C31930")]
	private TextContainerAnchors GetAnchorPosition(Vector2 pivot)
	{
		return default(TextContainerAnchors);
	}

	[Token(Token = "0x600004F")]
	[Address(RVA = "0x4C32390", Offset = "0x4C32390", VA = "0x4C32390")]
	public TextContainer()
	{
	}
}
