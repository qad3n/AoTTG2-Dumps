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

[Token(Token = "0x2000065")]
[AddComponentMenu("UI/Scroll Rect", 37)]
[SelectionBase]
[ExecuteAlways]
[DisallowMultipleComponent]
[RequireComponent(typeof(RectTransform))]
public class ScrollRect : UIBehaviour, IInitializePotentialDragHandler, IEventSystemHandler, IBeginDragHandler, IEndDragHandler, IDragHandler, IScrollHandler, ICanvasElement, ILayoutElement, ILayoutGroup, ILayoutController
{
	[Token(Token = "0x2000066")]
	public enum MovementType
	{
		[Token(Token = "0x40001FE")]
		Unrestricted,
		[Token(Token = "0x40001FF")]
		Elastic,
		[Token(Token = "0x4000200")]
		Clamped
	}

	[Token(Token = "0x2000067")]
	public enum ScrollbarVisibility
	{
		[Token(Token = "0x4000202")]
		Permanent,
		[Token(Token = "0x4000203")]
		AutoHide,
		[Token(Token = "0x4000204")]
		AutoHideAndExpandViewport
	}

	[Serializable]
	[Token(Token = "0x2000068")]
	public class ScrollRectEvent : UnityEvent<Vector2>
	{
		[Token(Token = "0x600041E")]
		[Address(RVA = "0x50DE740", Offset = "0x50DE740", VA = "0x50DE740")]
		public ScrollRectEvent()
		{
		}
	}

	[Token(Token = "0x40001D8")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	private RectTransform m_Content;

	[Token(Token = "0x40001D9")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	private bool m_Horizontal;

	[Token(Token = "0x40001DA")]
	[FieldOffset(Offset = "0x29")]
	[SerializeField]
	private bool m_Vertical;

	[Token(Token = "0x40001DB")]
	[FieldOffset(Offset = "0x2C")]
	[SerializeField]
	private MovementType m_MovementType;

	[Token(Token = "0x40001DC")]
	[FieldOffset(Offset = "0x30")]
	[SerializeField]
	private float m_Elasticity;

	[Token(Token = "0x40001DD")]
	[FieldOffset(Offset = "0x34")]
	[SerializeField]
	private bool m_Inertia;

	[Token(Token = "0x40001DE")]
	[FieldOffset(Offset = "0x38")]
	[SerializeField]
	private float m_DecelerationRate;

	[Token(Token = "0x40001DF")]
	[FieldOffset(Offset = "0x3C")]
	[SerializeField]
	private float m_ScrollSensitivity;

	[Token(Token = "0x40001E0")]
	[FieldOffset(Offset = "0x40")]
	[SerializeField]
	private RectTransform m_Viewport;

	[Token(Token = "0x40001E1")]
	[FieldOffset(Offset = "0x48")]
	[SerializeField]
	private Scrollbar m_HorizontalScrollbar;

	[Token(Token = "0x40001E2")]
	[FieldOffset(Offset = "0x50")]
	[SerializeField]
	private Scrollbar m_VerticalScrollbar;

	[Token(Token = "0x40001E3")]
	[FieldOffset(Offset = "0x58")]
	[SerializeField]
	private ScrollbarVisibility m_HorizontalScrollbarVisibility;

	[Token(Token = "0x40001E4")]
	[FieldOffset(Offset = "0x5C")]
	[SerializeField]
	private ScrollbarVisibility m_VerticalScrollbarVisibility;

	[Token(Token = "0x40001E5")]
	[FieldOffset(Offset = "0x60")]
	[SerializeField]
	private float m_HorizontalScrollbarSpacing;

	[Token(Token = "0x40001E6")]
	[FieldOffset(Offset = "0x64")]
	[SerializeField]
	private float m_VerticalScrollbarSpacing;

	[Token(Token = "0x40001E7")]
	[FieldOffset(Offset = "0x68")]
	[SerializeField]
	private ScrollRectEvent m_OnValueChanged;

	[Token(Token = "0x40001E8")]
	[FieldOffset(Offset = "0x70")]
	private Vector2 m_PointerStartLocalCursor;

	[Token(Token = "0x40001E9")]
	[FieldOffset(Offset = "0x78")]
	protected Vector2 m_ContentStartPosition;

	[Token(Token = "0x40001EA")]
	[FieldOffset(Offset = "0x80")]
	private RectTransform m_ViewRect;

	[Token(Token = "0x40001EB")]
	[FieldOffset(Offset = "0x88")]
	protected Bounds m_ContentBounds;

	[Token(Token = "0x40001EC")]
	[FieldOffset(Offset = "0xA0")]
	private Bounds m_ViewBounds;

	[Token(Token = "0x40001ED")]
	[FieldOffset(Offset = "0xB8")]
	private Vector2 m_Velocity;

	[Token(Token = "0x40001EE")]
	[FieldOffset(Offset = "0xC0")]
	private bool m_Dragging;

	[Token(Token = "0x40001EF")]
	[FieldOffset(Offset = "0xC1")]
	private bool m_Scrolling;

	[Token(Token = "0x40001F0")]
	[FieldOffset(Offset = "0xC4")]
	private Vector2 m_PrevPosition;

	[Token(Token = "0x40001F1")]
	[FieldOffset(Offset = "0xCC")]
	private Bounds m_PrevContentBounds;

	[Token(Token = "0x40001F2")]
	[FieldOffset(Offset = "0xE4")]
	private Bounds m_PrevViewBounds;

	[NonSerialized]
	[Token(Token = "0x40001F3")]
	[FieldOffset(Offset = "0xFC")]
	private bool m_HasRebuiltLayout;

	[Token(Token = "0x40001F4")]
	[FieldOffset(Offset = "0xFD")]
	private bool m_HSliderExpand;

	[Token(Token = "0x40001F5")]
	[FieldOffset(Offset = "0xFE")]
	private bool m_VSliderExpand;

	[Token(Token = "0x40001F6")]
	[FieldOffset(Offset = "0x100")]
	private float m_HSliderHeight;

	[Token(Token = "0x40001F7")]
	[FieldOffset(Offset = "0x104")]
	private float m_VSliderWidth;

	[NonSerialized]
	[Token(Token = "0x40001F8")]
	[FieldOffset(Offset = "0x108")]
	private RectTransform m_Rect;

	[Token(Token = "0x40001F9")]
	[FieldOffset(Offset = "0x110")]
	private RectTransform m_HorizontalScrollbarRect;

	[Token(Token = "0x40001FA")]
	[FieldOffset(Offset = "0x118")]
	private RectTransform m_VerticalScrollbarRect;

	[Token(Token = "0x40001FB")]
	[FieldOffset(Offset = "0x120")]
	private DrivenRectTransformTracker m_Tracker;

	[Token(Token = "0x40001FC")]
	[FieldOffset(Offset = "0x128")]
	private readonly Vector3[] m_Corners;

	[Token(Token = "0x170000F7")]
	public RectTransform content
	{
		[Token(Token = "0x60003C3")]
		[Address(RVA = "0x50DDD20", Offset = "0x50DDD20", VA = "0x50DDD20")]
		get
		{
			return null;
		}
		[Token(Token = "0x60003C4")]
		[Address(RVA = "0x50DDD30", Offset = "0x50DDD30", VA = "0x50DDD30")]
		set
		{
		}
	}

	[Token(Token = "0x170000F8")]
	public bool horizontal
	{
		[Token(Token = "0x60003C5")]
		[Address(RVA = "0x50DDD40", Offset = "0x50DDD40", VA = "0x50DDD40")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60003C6")]
		[Address(RVA = "0x50DDD50", Offset = "0x50DDD50", VA = "0x50DDD50")]
		set
		{
		}
	}

	[Token(Token = "0x170000F9")]
	public bool vertical
	{
		[Token(Token = "0x60003C7")]
		[Address(RVA = "0x50DDD60", Offset = "0x50DDD60", VA = "0x50DDD60")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60003C8")]
		[Address(RVA = "0x50DDD70", Offset = "0x50DDD70", VA = "0x50DDD70")]
		set
		{
		}
	}

	[Token(Token = "0x170000FA")]
	public MovementType movementType
	{
		[Token(Token = "0x60003C9")]
		[Address(RVA = "0x50DDD80", Offset = "0x50DDD80", VA = "0x50DDD80")]
		get
		{
			return default(MovementType);
		}
		[Token(Token = "0x60003CA")]
		[Address(RVA = "0x50DDD90", Offset = "0x50DDD90", VA = "0x50DDD90")]
		set
		{
		}
	}

	[Token(Token = "0x170000FB")]
	public float elasticity
	{
		[Token(Token = "0x60003CB")]
		[Address(RVA = "0x50DDDA0", Offset = "0x50DDDA0", VA = "0x50DDDA0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60003CC")]
		[Address(RVA = "0x50DDDB0", Offset = "0x50DDDB0", VA = "0x50DDDB0")]
		set
		{
		}
	}

	[Token(Token = "0x170000FC")]
	public bool inertia
	{
		[Token(Token = "0x60003CD")]
		[Address(RVA = "0x50DDDC0", Offset = "0x50DDDC0", VA = "0x50DDDC0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60003CE")]
		[Address(RVA = "0x50DDDD0", Offset = "0x50DDDD0", VA = "0x50DDDD0")]
		set
		{
		}
	}

	[Token(Token = "0x170000FD")]
	public float decelerationRate
	{
		[Token(Token = "0x60003CF")]
		[Address(RVA = "0x50DDDE0", Offset = "0x50DDDE0", VA = "0x50DDDE0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60003D0")]
		[Address(RVA = "0x50DDDF0", Offset = "0x50DDDF0", VA = "0x50DDDF0")]
		set
		{
		}
	}

	[Token(Token = "0x170000FE")]
	public float scrollSensitivity
	{
		[Token(Token = "0x60003D1")]
		[Address(RVA = "0x50DDE00", Offset = "0x50DDE00", VA = "0x50DDE00")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60003D2")]
		[Address(RVA = "0x50DDE10", Offset = "0x50DDE10", VA = "0x50DDE10")]
		set
		{
		}
	}

	[Token(Token = "0x170000FF")]
	public RectTransform viewport
	{
		[Token(Token = "0x60003D3")]
		[Address(RVA = "0x50DDE20", Offset = "0x50DDE20", VA = "0x50DDE20")]
		get
		{
			return null;
		}
		[Token(Token = "0x60003D4")]
		[Address(RVA = "0x50DDE30", Offset = "0x50DDE30", VA = "0x50DDE30")]
		set
		{
		}
	}

	[Token(Token = "0x17000100")]
	public Scrollbar horizontalScrollbar
	{
		[Token(Token = "0x60003D5")]
		[Address(RVA = "0x50DDF10", Offset = "0x50DDF10", VA = "0x50DDF10")]
		get
		{
			return null;
		}
		[Token(Token = "0x60003D6")]
		[Address(RVA = "0x50DDF20", Offset = "0x50DDF20", VA = "0x50DDF20")]
		set
		{
		}
	}

	[Token(Token = "0x17000101")]
	public Scrollbar verticalScrollbar
	{
		[Token(Token = "0x60003D7")]
		[Address(RVA = "0x50DE0B0", Offset = "0x50DE0B0", VA = "0x50DE0B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60003D8")]
		[Address(RVA = "0x50DE0C0", Offset = "0x50DE0C0", VA = "0x50DE0C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000102")]
	public ScrollbarVisibility horizontalScrollbarVisibility
	{
		[Token(Token = "0x60003D9")]
		[Address(RVA = "0x50DE250", Offset = "0x50DE250", VA = "0x50DE250")]
		get
		{
			return default(ScrollbarVisibility);
		}
		[Token(Token = "0x60003DA")]
		[Address(RVA = "0x50DE260", Offset = "0x50DE260", VA = "0x50DE260")]
		set
		{
		}
	}

	[Token(Token = "0x17000103")]
	public ScrollbarVisibility verticalScrollbarVisibility
	{
		[Token(Token = "0x60003DB")]
		[Address(RVA = "0x50DE270", Offset = "0x50DE270", VA = "0x50DE270")]
		get
		{
			return default(ScrollbarVisibility);
		}
		[Token(Token = "0x60003DC")]
		[Address(RVA = "0x50DE280", Offset = "0x50DE280", VA = "0x50DE280")]
		set
		{
		}
	}

	[Token(Token = "0x17000104")]
	public float horizontalScrollbarSpacing
	{
		[Token(Token = "0x60003DD")]
		[Address(RVA = "0x50DE290", Offset = "0x50DE290", VA = "0x50DE290")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60003DE")]
		[Address(RVA = "0x50DE2A0", Offset = "0x50DE2A0", VA = "0x50DE2A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000105")]
	public float verticalScrollbarSpacing
	{
		[Token(Token = "0x60003DF")]
		[Address(RVA = "0x50DE3A0", Offset = "0x50DE3A0", VA = "0x50DE3A0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60003E0")]
		[Address(RVA = "0x50DE3B0", Offset = "0x50DE3B0", VA = "0x50DE3B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000106")]
	public ScrollRectEvent onValueChanged
	{
		[Token(Token = "0x60003E1")]
		[Address(RVA = "0x50DE430", Offset = "0x50DE430", VA = "0x50DE430")]
		get
		{
			return null;
		}
		[Token(Token = "0x60003E2")]
		[Address(RVA = "0x50DE440", Offset = "0x50DE440", VA = "0x50DE440")]
		set
		{
		}
	}

	[Token(Token = "0x17000107")]
	protected RectTransform viewRect
	{
		[Token(Token = "0x60003E3")]
		[Address(RVA = "0x50DE450", Offset = "0x50DE450", VA = "0x50DE450")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000108")]
	public Vector2 velocity
	{
		[Token(Token = "0x60003E4")]
		[Address(RVA = "0x50DE540", Offset = "0x50DE540", VA = "0x50DE540")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x60003E5")]
		[Address(RVA = "0x50DE550", Offset = "0x50DE550", VA = "0x50DE550")]
		set
		{
		}
	}

	[Token(Token = "0x17000109")]
	private RectTransform rectTransform
	{
		[Token(Token = "0x60003E6")]
		[Address(RVA = "0x50DE560", Offset = "0x50DE560", VA = "0x50DE560")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700010A")]
	public Vector2 normalizedPosition
	{
		[Token(Token = "0x60003FA")]
		[Address(RVA = "0x50E1290", Offset = "0x50E1290", VA = "0x50E1290")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x60003FB")]
		[Address(RVA = "0x50E18B0", Offset = "0x50E18B0", VA = "0x50E18B0")]
		set
		{
		}
	}

	[Token(Token = "0x1700010B")]
	public float horizontalNormalizedPosition
	{
		[Token(Token = "0x60003FC")]
		[Address(RVA = "0x50E1620", Offset = "0x50E1620", VA = "0x50E1620")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60003FD")]
		[Address(RVA = "0x50E1900", Offset = "0x50E1900", VA = "0x50E1900")]
		set
		{
		}
	}

	[Token(Token = "0x1700010C")]
	public float verticalNormalizedPosition
	{
		[Token(Token = "0x60003FE")]
		[Address(RVA = "0x50E1750", Offset = "0x50E1750", VA = "0x50E1750")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60003FF")]
		[Address(RVA = "0x50E1920", Offset = "0x50E1920", VA = "0x50E1920")]
		set
		{
		}
	}

	[Token(Token = "0x1700010D")]
	private bool hScrollingNeeded
	{
		[Token(Token = "0x6000405")]
		[Address(RVA = "0x50E1D60", Offset = "0x50E1D60", VA = "0x50E1D60")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700010E")]
	private bool vScrollingNeeded
	{
		[Token(Token = "0x6000406")]
		[Address(RVA = "0x50E1DD0", Offset = "0x50E1DD0", VA = "0x50E1DD0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700010F")]
	public virtual float minWidth
	{
		[Token(Token = "0x6000409")]
		[Address(RVA = "0x50E1E70", Offset = "0x50E1E70", VA = "0x50E1E70", Slot = "52")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000110")]
	public virtual float preferredWidth
	{
		[Token(Token = "0x600040A")]
		[Address(RVA = "0x50E1E80", Offset = "0x50E1E80", VA = "0x50E1E80", Slot = "53")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000111")]
	public virtual float flexibleWidth
	{
		[Token(Token = "0x600040B")]
		[Address(RVA = "0x50E1E90", Offset = "0x50E1E90", VA = "0x50E1E90", Slot = "54")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000112")]
	public virtual float minHeight
	{
		[Token(Token = "0x600040C")]
		[Address(RVA = "0x50E1EA0", Offset = "0x50E1EA0", VA = "0x50E1EA0", Slot = "55")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000113")]
	public virtual float preferredHeight
	{
		[Token(Token = "0x600040D")]
		[Address(RVA = "0x50E1EB0", Offset = "0x50E1EB0", VA = "0x50E1EB0", Slot = "56")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000114")]
	public virtual float flexibleHeight
	{
		[Token(Token = "0x600040E")]
		[Address(RVA = "0x50E1EC0", Offset = "0x50E1EC0", VA = "0x50E1EC0", Slot = "57")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000115")]
	public virtual int layoutPriority
	{
		[Token(Token = "0x600040F")]
		[Address(RVA = "0x50E1ED0", Offset = "0x50E1ED0", VA = "0x50E1ED0", Slot = "58")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60003E7")]
	[Address(RVA = "0x50DE600", Offset = "0x50DE600", VA = "0x50DE600")]
	protected ScrollRect()
	{
	}

	[Token(Token = "0x60003E8")]
	[Address(RVA = "0x50DE780", Offset = "0x50DE780", VA = "0x50DE780", Slot = "38")]
	public virtual void Rebuild(CanvasUpdate executing)
	{
	}

	[Token(Token = "0x60003E9")]
	[Address(RVA = "0x50DF680", Offset = "0x50DF680", VA = "0x50DF680", Slot = "39")]
	public virtual void LayoutComplete()
	{
	}

	[Token(Token = "0x60003EA")]
	[Address(RVA = "0x50DF690", Offset = "0x50DF690", VA = "0x50DF690", Slot = "40")]
	public virtual void GraphicUpdateComplete()
	{
	}

	[Token(Token = "0x60003EB")]
	[Address(RVA = "0x50DE7F0", Offset = "0x50DE7F0", VA = "0x50DE7F0")]
	private void UpdateCachedData()
	{
	}

	[Token(Token = "0x60003EC")]
	[Address(RVA = "0x50DF6A0", Offset = "0x50DF6A0", VA = "0x50DF6A0", Slot = "5")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x60003ED")]
	[Address(RVA = "0x50DF8C0", Offset = "0x50DF8C0", VA = "0x50DF8C0", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x60003EE")]
	[Address(RVA = "0x50DFB00", Offset = "0x50DFB00", VA = "0x50DFB00", Slot = "9")]
	public override bool IsActive()
	{
		return default(bool);
	}

	[Token(Token = "0x60003EF")]
	[Address(RVA = "0x50DFB60", Offset = "0x50DFB60", VA = "0x50DFB60")]
	private void EnsureLayoutHasRebuilt()
	{
	}

	[Token(Token = "0x60003F0")]
	[Address(RVA = "0x50DFBD0", Offset = "0x50DFBD0", VA = "0x50DFBD0", Slot = "41")]
	public virtual void StopMovement()
	{
	}

	[Token(Token = "0x60003F1")]
	[Address(RVA = "0x50DFC10", Offset = "0x50DFC10", VA = "0x50DFC10", Slot = "42")]
	public virtual void OnScroll(PointerEventData data)
	{
	}

	[Token(Token = "0x60003F2")]
	[Address(RVA = "0x50E0100", Offset = "0x50E0100", VA = "0x50E0100", Slot = "43")]
	public virtual void OnInitializePotentialDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60003F3")]
	[Address(RVA = "0x50E0160", Offset = "0x50E0160", VA = "0x50E0160", Slot = "44")]
	public virtual void OnBeginDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60003F4")]
	[Address(RVA = "0x50E0280", Offset = "0x50E0280", VA = "0x50E0280", Slot = "45")]
	public virtual void OnEndDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60003F5")]
	[Address(RVA = "0x50E02A0", Offset = "0x50E02A0", VA = "0x50E02A0", Slot = "46")]
	public virtual void OnDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60003F6")]
	[Address(RVA = "0x50E06E0", Offset = "0x50E06E0", VA = "0x50E06E0", Slot = "47")]
	protected virtual void SetContentAnchoredPosition(Vector2 position)
	{
	}

	[Token(Token = "0x60003F7")]
	[Address(RVA = "0x50E07C0", Offset = "0x50E07C0", VA = "0x50E07C0", Slot = "48")]
	protected virtual void LateUpdate()
	{
	}

	[Token(Token = "0x60003F8")]
	[Address(RVA = "0x50DF590", Offset = "0x50DF590", VA = "0x50DF590")]
	protected void UpdatePrevData()
	{
	}

	[Token(Token = "0x60003F9")]
	[Address(RVA = "0x50DF050", Offset = "0x50DF050", VA = "0x50DF050")]
	private void UpdateScrollbars(Vector2 offset)
	{
	}

	[Token(Token = "0x6000400")]
	[Address(RVA = "0x50E1940", Offset = "0x50E1940", VA = "0x50E1940")]
	private void SetHorizontalNormalizedPosition(float value)
	{
	}

	[Token(Token = "0x6000401")]
	[Address(RVA = "0x50E1960", Offset = "0x50E1960", VA = "0x50E1960")]
	private void SetVerticalNormalizedPosition(float value)
	{
	}

	[Token(Token = "0x6000402")]
	[Address(RVA = "0x50E1980", Offset = "0x50E1980", VA = "0x50E1980", Slot = "49")]
	protected virtual void SetNormalizedPosition(float value, int axis)
	{
	}

	[Token(Token = "0x6000403")]
	[Address(RVA = "0x50E0690", Offset = "0x50E0690", VA = "0x50E0690")]
	private static float RubberDelta(float overStretching, float viewSize)
	{
		return default(float);
	}

	[Token(Token = "0x6000404")]
	[Address(RVA = "0x50E1CE0", Offset = "0x50E1CE0", VA = "0x50E1CE0", Slot = "10")]
	protected override void OnRectTransformDimensionsChange()
	{
	}

	[Token(Token = "0x6000407")]
	[Address(RVA = "0x50E1E50", Offset = "0x50E1E50", VA = "0x50E1E50", Slot = "50")]
	public virtual void CalculateLayoutInputHorizontal()
	{
	}

	[Token(Token = "0x6000408")]
	[Address(RVA = "0x50E1E60", Offset = "0x50E1E60", VA = "0x50E1E60", Slot = "51")]
	public virtual void CalculateLayoutInputVertical()
	{
	}

	[Token(Token = "0x6000410")]
	[Address(RVA = "0x50E1EE0", Offset = "0x50E1EE0", VA = "0x50E1EE0", Slot = "59")]
	public virtual void SetLayoutHorizontal()
	{
	}

	[Token(Token = "0x6000411")]
	[Address(RVA = "0x50E2790", Offset = "0x50E2790", VA = "0x50E2790", Slot = "60")]
	public virtual void SetLayoutVertical()
	{
	}

	[Token(Token = "0x6000412")]
	[Address(RVA = "0x50E1510", Offset = "0x50E1510", VA = "0x50E1510")]
	private void UpdateScrollbarVisibility()
	{
	}

	[Token(Token = "0x6000413")]
	[Address(RVA = "0x50E2C50", Offset = "0x50E2C50", VA = "0x50E2C50")]
	private static void UpdateOneScrollbarVisibility(bool xScrollingNeeded, bool xAxisEnabled, ScrollbarVisibility scrollbarVisibility, Scrollbar scrollbar)
	{
	}

	[Token(Token = "0x6000414")]
	[Address(RVA = "0x50E2850", Offset = "0x50E2850", VA = "0x50E2850")]
	private void UpdateScrollbarLayout()
	{
	}

	[Token(Token = "0x6000415")]
	[Address(RVA = "0x50DEB50", Offset = "0x50DEB50", VA = "0x50DEB50")]
	protected void UpdateBounds()
	{
	}

	[Token(Token = "0x6000416")]
	[Address(RVA = "0x50E2D20", Offset = "0x50E2D20", VA = "0x50E2D20")]
	internal static void AdjustBounds(ref Bounds viewBounds, ref Vector2 contentPivot, ref Vector3 contentSize, ref Vector3 contentPos)
	{
	}

	[Token(Token = "0x6000417")]
	[Address(RVA = "0x50E2670", Offset = "0x50E2670", VA = "0x50E2670")]
	private Bounds GetBounds()
	{
		return default(Bounds);
	}

	[Token(Token = "0x6000418")]
	[Address(RVA = "0x50E2DC0", Offset = "0x50E2DC0", VA = "0x50E2DC0")]
	internal static Bounds InternalGetBounds(Vector3[] corners, ref Matrix4x4 viewWorldToLocalMatrix)
	{
		return default(Bounds);
	}

	[Token(Token = "0x6000419")]
	[Address(RVA = "0x50DFF70", Offset = "0x50DFF70", VA = "0x50DFF70")]
	private Vector2 CalculateOffset(Vector2 delta)
	{
		return default(Vector2);
	}

	[Token(Token = "0x600041A")]
	[Address(RVA = "0x50E2FF0", Offset = "0x50E2FF0", VA = "0x50E2FF0")]
	internal static Vector2 InternalCalculateOffset(ref Bounds viewBounds, ref Bounds contentBounds, bool horizontal, bool vertical, MovementType movementType, ref Vector2 delta)
	{
		return default(Vector2);
	}

	[Token(Token = "0x600041B")]
	[Address(RVA = "0x50DE320", Offset = "0x50DE320", VA = "0x50DE320")]
	protected void SetDirty()
	{
	}

	[Token(Token = "0x600041C")]
	[Address(RVA = "0x50DDE50", Offset = "0x50DDE50", VA = "0x50DDE50")]
	protected void SetDirtyCaching()
	{
	}

	[Token(Token = "0x600041D")]
	[Address(RVA = "0x50E3170", Offset = "0x50E3170", VA = "0x50E3170", Slot = "23")]
	private Transform UnityEngine_002EUI_002EICanvasElement_002Eget_transform()
	{
		return null;
	}
}
