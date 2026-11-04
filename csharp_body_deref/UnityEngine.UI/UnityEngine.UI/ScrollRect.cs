// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UI.ScrollRect
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.EventSystems;
using UnityEngine.Events;

namespace UnityEngine.UI;

[Token(Token = "0x200005E")]
[AddComponentMenu("UI (Canvas)/Scroll Rect", 37)]
[SelectionBase]
[ExecuteAlways]
[DisallowMultipleComponent]
[RequireComponent(typeof(RectTransform))]
[UnityEngine.UGUIHelpURL("ScrollRect")]
public class ScrollRect : UIBehaviour, IInitializePotentialDragHandler, IEventSystemHandler, IBeginDragHandler, IEndDragHandler, IDragHandler, IScrollHandler, ICanvasElement, ILayoutElement, ILayoutGroup, ILayoutController
{
	[Token(Token = "0x200005F")]
	public enum MovementType
	{
		[Token(Token = "0x40001E5")]
		Unrestricted,
		[Token(Token = "0x40001E6")]
		Elastic,
		[Token(Token = "0x40001E7")]
		Clamped
	}

	[Token(Token = "0x2000060")]
	public enum ScrollbarVisibility
	{
		[Token(Token = "0x40001E9")]
		Permanent,
		[Token(Token = "0x40001EA")]
		AutoHide,
		[Token(Token = "0x40001EB")]
		AutoHideAndExpandViewport
	}

	[Serializable]
	[Token(Token = "0x2000061")]
	public class ScrollRectEvent : UnityEvent<Vector2>
	{
		[Token(Token = "0x60003F6")]
		[Address(RVA = "0x32DEA10", Offset = "0x32DD010", VA = "0x1832DEA10")]
		public ScrollRectEvent()
		{
		}
	}

	[Token(Token = "0x40001BF")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	private RectTransform m_Content;

	[Token(Token = "0x40001C0")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	private bool m_Horizontal;

	[Token(Token = "0x40001C1")]
	[FieldOffset(Offset = "0x29")]
	[SerializeField]
	private bool m_Vertical;

	[Token(Token = "0x40001C2")]
	[FieldOffset(Offset = "0x2C")]
	[SerializeField]
	private MovementType m_MovementType;

	[Token(Token = "0x40001C3")]
	[FieldOffset(Offset = "0x30")]
	[SerializeField]
	private float m_Elasticity;

	[Token(Token = "0x40001C4")]
	[FieldOffset(Offset = "0x34")]
	[SerializeField]
	private bool m_Inertia;

	[Token(Token = "0x40001C5")]
	[FieldOffset(Offset = "0x38")]
	[SerializeField]
	private float m_DecelerationRate;

	[Token(Token = "0x40001C6")]
	[FieldOffset(Offset = "0x3C")]
	[SerializeField]
	private float m_ScrollSensitivity;

	[Token(Token = "0x40001C7")]
	[FieldOffset(Offset = "0x40")]
	[SerializeField]
	private RectTransform m_Viewport;

	[Token(Token = "0x40001C8")]
	[FieldOffset(Offset = "0x48")]
	[SerializeField]
	private Scrollbar m_HorizontalScrollbar;

	[Token(Token = "0x40001C9")]
	[FieldOffset(Offset = "0x50")]
	[SerializeField]
	private Scrollbar m_VerticalScrollbar;

	[Token(Token = "0x40001CA")]
	[FieldOffset(Offset = "0x58")]
	[SerializeField]
	private ScrollbarVisibility m_HorizontalScrollbarVisibility;

	[Token(Token = "0x40001CB")]
	[FieldOffset(Offset = "0x5C")]
	[SerializeField]
	private ScrollbarVisibility m_VerticalScrollbarVisibility;

	[Token(Token = "0x40001CC")]
	[FieldOffset(Offset = "0x60")]
	[SerializeField]
	private float m_HorizontalScrollbarSpacing;

	[Token(Token = "0x40001CD")]
	[FieldOffset(Offset = "0x64")]
	[SerializeField]
	private float m_VerticalScrollbarSpacing;

	[Token(Token = "0x40001CE")]
	[FieldOffset(Offset = "0x68")]
	[SerializeField]
	private ScrollRectEvent m_OnValueChanged;

	[Token(Token = "0x40001CF")]
	[FieldOffset(Offset = "0x70")]
	private Vector2 m_PointerStartLocalCursor;

	[Token(Token = "0x40001D0")]
	[FieldOffset(Offset = "0x78")]
	protected Vector2 m_ContentStartPosition;

	[Token(Token = "0x40001D1")]
	[FieldOffset(Offset = "0x80")]
	private RectTransform m_ViewRect;

	[Token(Token = "0x40001D2")]
	[FieldOffset(Offset = "0x88")]
	protected Bounds m_ContentBounds;

	[Token(Token = "0x40001D3")]
	[FieldOffset(Offset = "0xA0")]
	private Bounds m_ViewBounds;

	[Token(Token = "0x40001D4")]
	[FieldOffset(Offset = "0xB8")]
	private Vector2 m_Velocity;

	[Token(Token = "0x40001D5")]
	[FieldOffset(Offset = "0xC0")]
	private bool m_Dragging;

	[Token(Token = "0x40001D6")]
	[FieldOffset(Offset = "0xC1")]
	private bool m_Scrolling;

	[Token(Token = "0x40001D7")]
	[FieldOffset(Offset = "0xC4")]
	private Vector2 m_PrevPosition;

	[Token(Token = "0x40001D8")]
	[FieldOffset(Offset = "0xCC")]
	private Bounds m_PrevContentBounds;

	[Token(Token = "0x40001D9")]
	[FieldOffset(Offset = "0xE4")]
	private Bounds m_PrevViewBounds;

	[NonSerialized]
	[Token(Token = "0x40001DA")]
	[FieldOffset(Offset = "0xFC")]
	private bool m_HasRebuiltLayout;

	[Token(Token = "0x40001DB")]
	[FieldOffset(Offset = "0xFD")]
	private bool m_HSliderExpand;

	[Token(Token = "0x40001DC")]
	[FieldOffset(Offset = "0xFE")]
	private bool m_VSliderExpand;

	[Token(Token = "0x40001DD")]
	[FieldOffset(Offset = "0x100")]
	private float m_HSliderHeight;

	[Token(Token = "0x40001DE")]
	[FieldOffset(Offset = "0x104")]
	private float m_VSliderWidth;

	[NonSerialized]
	[Token(Token = "0x40001DF")]
	[FieldOffset(Offset = "0x108")]
	private RectTransform m_Rect;

	[Token(Token = "0x40001E0")]
	[FieldOffset(Offset = "0x110")]
	private RectTransform m_HorizontalScrollbarRect;

	[Token(Token = "0x40001E1")]
	[FieldOffset(Offset = "0x118")]
	private RectTransform m_VerticalScrollbarRect;

	[Token(Token = "0x40001E2")]
	[FieldOffset(Offset = "0x120")]
	private DrivenRectTransformTracker m_Tracker;

	[Token(Token = "0x40001E3")]
	[FieldOffset(Offset = "0x128")]
	private readonly Vector3[] m_Corners;

	[Token(Token = "0x170000ED")]
	public RectTransform content
	{
		[Token(Token = "0x600039B")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600039C")]
		[Address(RVA = "0xACE2F0", Offset = "0xACC8F0", VA = "0x180ACE2F0")]
		set
		{
		}
	}

	[Token(Token = "0x170000EE")]
	public bool horizontal
	{
		[Token(Token = "0x600039D")]
		[Address(RVA = "0xF1D480", Offset = "0xF1BA80", VA = "0x180F1D480")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600039E")]
		[Address(RVA = "0xF1D940", Offset = "0xF1BF40", VA = "0x180F1D940")]
		set
		{
		}
	}

	[Token(Token = "0x170000EF")]
	public bool vertical
	{
		[Token(Token = "0x600039F")]
		[Address(RVA = "0x1573470", Offset = "0x1571A70", VA = "0x181573470")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60003A0")]
		[Address(RVA = "0x15736C0", Offset = "0x1571CC0", VA = "0x1815736C0")]
		set
		{
		}
	}

	[Token(Token = "0x170000F0")]
	public MovementType movementType
	{
		[Token(Token = "0x60003A1")]
		[Address(RVA = "0xB3E080", Offset = "0xB3C680", VA = "0x180B3E080")]
		get
		{
			return default(MovementType);
		}
		[Token(Token = "0x60003A2")]
		[Address(RVA = "0xB3E0E0", Offset = "0xB3C6E0", VA = "0x180B3E0E0")]
		set
		{
		}
	}

	[Token(Token = "0x170000F1")]
	public float elasticity
	{
		[Token(Token = "0x60003A3")]
		[Address(RVA = "0x584C90", Offset = "0x583290", VA = "0x180584C90")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60003A4")]
		[Address(RVA = "0x584CB0", Offset = "0x5832B0", VA = "0x180584CB0")]
		set
		{
		}
	}

	[Token(Token = "0x170000F2")]
	public bool inertia
	{
		[Token(Token = "0x60003A5")]
		[Address(RVA = "0xAB9F70", Offset = "0xAB8570", VA = "0x180AB9F70")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60003A6")]
		[Address(RVA = "0xAB9F80", Offset = "0xAB8580", VA = "0x180AB9F80")]
		set
		{
		}
	}

	[Token(Token = "0x170000F3")]
	public float decelerationRate
	{
		[Token(Token = "0x60003A7")]
		[Address(RVA = "0x585020", Offset = "0x583620", VA = "0x180585020")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60003A8")]
		[Address(RVA = "0x1ED2F30", Offset = "0x1ED1530", VA = "0x181ED2F30")]
		set
		{
		}
	}

	[Token(Token = "0x170000F4")]
	public float scrollSensitivity
	{
		[Token(Token = "0x60003A9")]
		[Address(RVA = "0x1ED2DD0", Offset = "0x1ED13D0", VA = "0x181ED2DD0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60003AA")]
		[Address(RVA = "0x1ED2F20", Offset = "0x1ED1520", VA = "0x181ED2F20")]
		set
		{
		}
	}

	[Token(Token = "0x170000F5")]
	public RectTransform viewport
	{
		[Token(Token = "0x60003AB")]
		[Address(RVA = "0x5853C0", Offset = "0x5839C0", VA = "0x1805853C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60003AC")]
		[Address(RVA = "0x32E35C0", Offset = "0x32E1BC0", VA = "0x1832E35C0")]
		set
		{
		}
	}

	[Token(Token = "0x170000F6")]
	public Scrollbar horizontalScrollbar
	{
		[Token(Token = "0x60003AD")]
		[Address(RVA = "0xC7FB50", Offset = "0xC7E150", VA = "0x180C7FB50")]
		get
		{
			return null;
		}
		[Token(Token = "0x60003AE")]
		[Address(RVA = "0x32E3200", Offset = "0x32E1800", VA = "0x1832E3200")]
		set
		{
		}
	}

	[Token(Token = "0x170000F7")]
	public Scrollbar verticalScrollbar
	{
		[Token(Token = "0x60003AF")]
		[Address(RVA = "0x5853D0", Offset = "0x5839D0", VA = "0x1805853D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60003B0")]
		[Address(RVA = "0x32E3430", Offset = "0x32E1A30", VA = "0x1832E3430")]
		set
		{
		}
	}

	[Token(Token = "0x170000F8")]
	public ScrollbarVisibility horizontalScrollbarVisibility
	{
		[Token(Token = "0x60003B1")]
		[Address(RVA = "0x1BD3CB0", Offset = "0x1BD22B0", VA = "0x181BD3CB0")]
		get
		{
			return default(ScrollbarVisibility);
		}
		[Token(Token = "0x60003B2")]
		[Address(RVA = "0x32E31F0", Offset = "0x32E17F0", VA = "0x1832E31F0")]
		set
		{
		}
	}

	[Token(Token = "0x170000F9")]
	public ScrollbarVisibility verticalScrollbarVisibility
	{
		[Token(Token = "0x60003B3")]
		[Address(RVA = "0x1A4F710", Offset = "0x1A4DD10", VA = "0x181A4F710")]
		get
		{
			return default(ScrollbarVisibility);
		}
		[Token(Token = "0x60003B4")]
		[Address(RVA = "0x32E3420", Offset = "0x32E1A20", VA = "0x1832E3420")]
		set
		{
		}
	}

	[Token(Token = "0x170000FA")]
	public float horizontalScrollbarSpacing
	{
		[Token(Token = "0x60003B5")]
		[Address(RVA = "0x58A700", Offset = "0x588D00", VA = "0x18058A700")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60003B6")]
		[Address(RVA = "0x32E31E0", Offset = "0x32E17E0", VA = "0x1832E31E0")]
		set
		{
		}
	}

	[Token(Token = "0x170000FB")]
	public float verticalScrollbarSpacing
	{
		[Token(Token = "0x60003B7")]
		[Address(RVA = "0xCDE8A0", Offset = "0xCDCEA0", VA = "0x180CDE8A0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60003B8")]
		[Address(RVA = "0x32E3410", Offset = "0x32E1A10", VA = "0x1832E3410")]
		set
		{
		}
	}

	[Token(Token = "0x170000FC")]
	public ScrollRectEvent onValueChanged
	{
		[Token(Token = "0x60003B9")]
		[Address(RVA = "0x58A6F0", Offset = "0x588CF0", VA = "0x18058A6F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60003BA")]
		[Address(RVA = "0xB48790", Offset = "0xB46D90", VA = "0x180B48790")]
		set
		{
		}
	}

	[Token(Token = "0x170000FD")]
	protected RectTransform viewRect
	{
		[Token(Token = "0x60003BB")]
		[Address(RVA = "0x32E3090", Offset = "0x32E1690", VA = "0x1832E3090")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000FE")]
	public Vector2 velocity
	{
		[Token(Token = "0x60003BC")]
		[Address(RVA = "0x32E2F20", Offset = "0x32E1520", VA = "0x1832E2F20")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x60003BD")]
		[Address(RVA = "0x32E33E0", Offset = "0x32E19E0", VA = "0x1832E33E0")]
		set
		{
		}
	}

	[Token(Token = "0x170000FF")]
	private RectTransform rectTransform
	{
		[Token(Token = "0x60003BE")]
		[Address(RVA = "0x32E2E00", Offset = "0x32E1400", VA = "0x1832E2E00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000100")]
	public Vector2 normalizedPosition
	{
		[Token(Token = "0x60003D2")]
		[Address(RVA = "0x32E2DC0", Offset = "0x32E13C0", VA = "0x1832E2DC0")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x60003D3")]
		[Address(RVA = "0x32E3390", Offset = "0x32E1990", VA = "0x1832E3390")]
		set
		{
		}
	}

	[Token(Token = "0x17000101")]
	public float horizontalNormalizedPosition
	{
		[Token(Token = "0x60003D4")]
		[Address(RVA = "0x32E2C70", Offset = "0x32E1270", VA = "0x1832E2C70")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60003D5")]
		[Address(RVA = "0x32E31C0", Offset = "0x32E17C0", VA = "0x1832E31C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000102")]
	public float verticalNormalizedPosition
	{
		[Token(Token = "0x60003D6")]
		[Address(RVA = "0x32E2F40", Offset = "0x32E1540", VA = "0x1832E2F40")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60003D7")]
		[Address(RVA = "0x32E33F0", Offset = "0x32E19F0", VA = "0x1832E33F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000103")]
	private bool hScrollingNeeded
	{
		[Token(Token = "0x60003DD")]
		[Address(RVA = "0x32E2BF0", Offset = "0x32E11F0", VA = "0x1832E2BF0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000104")]
	private bool vScrollingNeeded
	{
		[Token(Token = "0x60003DE")]
		[Address(RVA = "0x32E2EA0", Offset = "0x32E14A0", VA = "0x1832E2EA0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000105")]
	public virtual float minWidth
	{
		[Token(Token = "0x60003E1")]
		[Address(RVA = "0x2D07540", Offset = "0x2D05B40", VA = "0x182D07540", Slot = "52")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000106")]
	public virtual float preferredWidth
	{
		[Token(Token = "0x60003E2")]
		[Address(RVA = "0x2D07540", Offset = "0x2D05B40", VA = "0x182D07540", Slot = "53")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000107")]
	public virtual float flexibleWidth
	{
		[Token(Token = "0x60003E3")]
		[Address(RVA = "0x2D07540", Offset = "0x2D05B40", VA = "0x182D07540", Slot = "54")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000108")]
	public virtual float minHeight
	{
		[Token(Token = "0x60003E4")]
		[Address(RVA = "0x2D07540", Offset = "0x2D05B40", VA = "0x182D07540", Slot = "55")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000109")]
	public virtual float preferredHeight
	{
		[Token(Token = "0x60003E5")]
		[Address(RVA = "0x2D07540", Offset = "0x2D05B40", VA = "0x182D07540", Slot = "56")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700010A")]
	public virtual float flexibleHeight
	{
		[Token(Token = "0x60003E6")]
		[Address(RVA = "0x2D07540", Offset = "0x2D05B40", VA = "0x182D07540", Slot = "57")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700010B")]
	public virtual int layoutPriority
	{
		[Token(Token = "0x60003E7")]
		[Address(RVA = "0x1A5F1E0", Offset = "0x1A5D7E0", VA = "0x181A5F1E0", Slot = "58")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60003BF")]
	[Address(RVA = "0x32E2A50", Offset = "0x32E1050", VA = "0x1832E2A50")]
	protected ScrollRect()
	{
	}

	[Token(Token = "0x60003C0")]
	[Address(RVA = "0x32E06F0", Offset = "0x32DECF0", VA = "0x1832E06F0", Slot = "38")]
	public virtual void Rebuild(CanvasUpdate executing)
	{
	}

	[Token(Token = "0x60003C1")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "39")]
	public virtual void LayoutComplete()
	{
	}

	[Token(Token = "0x60003C2")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "40")]
	public virtual void GraphicUpdateComplete()
	{
	}

	[Token(Token = "0x60003C3")]
	[Address(RVA = "0x32E1E90", Offset = "0x32E0490", VA = "0x1832E1E90")]
	private void UpdateCachedData()
	{
	}

	[Token(Token = "0x60003C4")]
	[Address(RVA = "0x32E0290", Offset = "0x32DE890", VA = "0x1832E0290", Slot = "5")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x60003C5")]
	[Address(RVA = "0x32DFDA0", Offset = "0x32DE3A0", VA = "0x1832DFDA0", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x60003C6")]
	[Address(RVA = "0x32DF1C0", Offset = "0x32DD7C0", VA = "0x1832DF1C0", Slot = "9")]
	public override bool IsActive()
	{
		return default(bool);
	}

	[Token(Token = "0x60003C7")]
	[Address(RVA = "0x32DEC70", Offset = "0x32DD270", VA = "0x1832DEC70")]
	private void EnsureLayoutHasRebuilt()
	{
	}

	[Token(Token = "0x60003C8")]
	[Address(RVA = "0x32E1850", Offset = "0x32DFE50", VA = "0x1832E1850", Slot = "41")]
	public virtual void StopMovement()
	{
	}

	[Token(Token = "0x60003C9")]
	[Address(RVA = "0x32E04F0", Offset = "0x32DEAF0", VA = "0x1832E04F0", Slot = "42")]
	public virtual void OnScroll(PointerEventData data)
	{
	}

	[Token(Token = "0x60003CA")]
	[Address(RVA = "0x32E0470", Offset = "0x32DEA70", VA = "0x1832E0470", Slot = "43")]
	public virtual void OnInitializePotentialDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60003CB")]
	[Address(RVA = "0x32DFC40", Offset = "0x32DE240", VA = "0x1832DFC40", Slot = "44")]
	public virtual void OnBeginDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60003CC")]
	[Address(RVA = "0x32E0440", Offset = "0x32DEA40", VA = "0x1832E0440", Slot = "45")]
	public virtual void OnEndDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60003CD")]
	[Address(RVA = "0x32DFFE0", Offset = "0x32DE5E0", VA = "0x1832DFFE0", Slot = "46")]
	public virtual void OnDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60003CE")]
	[Address(RVA = "0x32E07D0", Offset = "0x32DEDD0", VA = "0x1832E07D0", Slot = "47")]
	protected virtual void SetContentAnchoredPosition(Vector2 position)
	{
	}

	[Token(Token = "0x60003CF")]
	[Address(RVA = "0x32DF230", Offset = "0x32DD830", VA = "0x1832DF230", Slot = "48")]
	protected virtual void LateUpdate()
	{
	}

	[Token(Token = "0x60003D0")]
	[Address(RVA = "0x32E2360", Offset = "0x32E0960", VA = "0x1832E2360")]
	protected void UpdatePrevData()
	{
	}

	[Token(Token = "0x60003D1")]
	[Address(RVA = "0x32E2860", Offset = "0x32E0E60", VA = "0x1832E2860")]
	private void UpdateScrollbars(Vector2 offset)
	{
	}

	[Token(Token = "0x60003D8")]
	[Address(RVA = "0x32E0A30", Offset = "0x32DF030", VA = "0x1832E0A30")]
	private void SetHorizontalNormalizedPosition(float value)
	{
	}

	[Token(Token = "0x60003D9")]
	[Address(RVA = "0x32E1800", Offset = "0x32DFE00", VA = "0x1832E1800")]
	private void SetVerticalNormalizedPosition(float value)
	{
	}

	[Token(Token = "0x60003DA")]
	[Address(RVA = "0x32E1300", Offset = "0x32DF900", VA = "0x1832E1300", Slot = "49")]
	protected virtual void SetNormalizedPosition(float value, int axis)
	{
	}

	[Token(Token = "0x60003DB")]
	[Address(RVA = "0x32E0770", Offset = "0x32DED70", VA = "0x1832E0770")]
	private static float RubberDelta(float overStretching, float viewSize)
	{
		return default(float);
	}

	[Token(Token = "0x60003DC")]
	[Address(RVA = "0x32E04E0", Offset = "0x32DEAE0", VA = "0x1832E04E0", Slot = "10")]
	protected override void OnRectTransformDimensionsChange()
	{
	}

	[Token(Token = "0x60003DF")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "50")]
	public virtual void CalculateLayoutInputHorizontal()
	{
	}

	[Token(Token = "0x60003E0")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "51")]
	public virtual void CalculateLayoutInputVertical()
	{
	}

	[Token(Token = "0x60003E8")]
	[Address(RVA = "0x32E0A80", Offset = "0x32DF080", VA = "0x1832E0A80", Slot = "59")]
	public virtual void SetLayoutHorizontal()
	{
	}

	[Token(Token = "0x60003E9")]
	[Address(RVA = "0x32E11B0", Offset = "0x32DF7B0", VA = "0x1832E11B0", Slot = "60")]
	public virtual void SetLayoutVertical()
	{
	}

	[Token(Token = "0x60003EA")]
	[Address(RVA = "0x32E2800", Offset = "0x32E0E00", VA = "0x1832E2800")]
	private void UpdateScrollbarVisibility()
	{
	}

	[Token(Token = "0x60003EB")]
	[Address(RVA = "0x32E2280", Offset = "0x32E0880", VA = "0x1832E2280")]
	private static void UpdateOneScrollbarVisibility(bool xScrollingNeeded, bool xAxisEnabled, ScrollbarVisibility scrollbarVisibility, Scrollbar scrollbar)
	{
	}

	[Token(Token = "0x60003EC")]
	[Address(RVA = "0x32E2470", Offset = "0x32E0A70", VA = "0x1832E2470")]
	private void UpdateScrollbarLayout()
	{
	}

	[Token(Token = "0x60003ED")]
	[Address(RVA = "0x32E18B0", Offset = "0x32DFEB0", VA = "0x1832E18B0")]
	protected void UpdateBounds()
	{
	}

	[Token(Token = "0x60003EE")]
	[Address(RVA = "0x32DEA50", Offset = "0x32DD050", VA = "0x1832DEA50")]
	internal static void AdjustBounds(ref Bounds viewBounds, ref Vector2 contentPivot, ref Vector3 contentSize, ref Vector3 contentPos)
	{
	}

	[Token(Token = "0x60003EF")]
	[Address(RVA = "0x32DECD0", Offset = "0x32DD2D0", VA = "0x1832DECD0")]
	private Bounds GetBounds()
	{
		return default(Bounds);
	}

	[Token(Token = "0x60003F0")]
	[Address(RVA = "0x32DEF20", Offset = "0x32DD520", VA = "0x1832DEF20")]
	internal static Bounds InternalGetBounds(Vector3[] corners, ref Matrix4x4 viewWorldToLocalMatrix)
	{
		return default(Bounds);
	}

	[Token(Token = "0x60003F1")]
	[Address(RVA = "0x32DEAE0", Offset = "0x32DD0E0", VA = "0x1832DEAE0")]
	private Vector2 CalculateOffset(Vector2 delta)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60003F2")]
	[Address(RVA = "0x32DEDF0", Offset = "0x32DD3F0", VA = "0x1832DEDF0")]
	internal static Vector2 InternalCalculateOffset(ref Bounds viewBounds, ref Bounds contentBounds, bool horizontal, bool vertical, MovementType movementType, ref Vector2 delta)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60003F3")]
	[Address(RVA = "0x32E09B0", Offset = "0x32DEFB0", VA = "0x1832E09B0")]
	protected void SetDirty()
	{
	}

	[Token(Token = "0x60003F4")]
	[Address(RVA = "0x32E08F0", Offset = "0x32DEEF0", VA = "0x1832E08F0")]
	protected void SetDirtyCaching()
	{
	}

	[Token(Token = "0x60003F5")]
	[Address(RVA = "0x2D057F0", Offset = "0x2D03DF0", VA = "0x182D057F0", Slot = "23")]
	private Transform UnityEngine_002EUI_002EICanvasElement_002Eget_transform()
	{
		return null;
	}
}
