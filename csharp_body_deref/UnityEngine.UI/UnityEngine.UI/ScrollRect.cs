using System;
using Il2CppDummyDll;
using UnityEngine.EventSystems;
using UnityEngine.Events;

namespace UnityEngine.UI;

[Token(Token = "0x2000060")]
[AddComponentMenu("UI/Scroll Rect", 37)]
[SelectionBase]
[ExecuteAlways]
[DisallowMultipleComponent]
[RequireComponent(typeof(RectTransform))]
public class ScrollRect : UIBehaviour, IInitializePotentialDragHandler, IEventSystemHandler, IBeginDragHandler, IEndDragHandler, IDragHandler, IScrollHandler, ICanvasElement, ILayoutElement, ILayoutGroup, ILayoutController
{
	[Token(Token = "0x2000061")]
	public enum MovementType
	{
		[Token(Token = "0x40001E5")]
		Unrestricted,
		[Token(Token = "0x40001E6")]
		Elastic,
		[Token(Token = "0x40001E7")]
		Clamped
	}

	[Token(Token = "0x2000062")]
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
	[Token(Token = "0x2000063")]
	public class ScrollRectEvent : UnityEvent<Vector2>
	{
		[Token(Token = "0x60003EA")]
		[Address(RVA = "0x4DB41B0", Offset = "0x4DB41B0", VA = "0x4DB41B0")]
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

	[Token(Token = "0x170000EC")]
	public RectTransform content
	{
		[Token(Token = "0x600038F")]
		[Address(RVA = "0x4DB3790", Offset = "0x4DB3790", VA = "0x4DB3790")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000390")]
		[Address(RVA = "0x4DB37A0", Offset = "0x4DB37A0", VA = "0x4DB37A0")]
		set
		{
		}
	}

	[Token(Token = "0x170000ED")]
	public bool horizontal
	{
		[Token(Token = "0x6000391")]
		[Address(RVA = "0x4DB37B0", Offset = "0x4DB37B0", VA = "0x4DB37B0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000392")]
		[Address(RVA = "0x4DB37C0", Offset = "0x4DB37C0", VA = "0x4DB37C0")]
		set
		{
		}
	}

	[Token(Token = "0x170000EE")]
	public bool vertical
	{
		[Token(Token = "0x6000393")]
		[Address(RVA = "0x4DB37D0", Offset = "0x4DB37D0", VA = "0x4DB37D0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000394")]
		[Address(RVA = "0x4DB37E0", Offset = "0x4DB37E0", VA = "0x4DB37E0")]
		set
		{
		}
	}

	[Token(Token = "0x170000EF")]
	public MovementType movementType
	{
		[Token(Token = "0x6000395")]
		[Address(RVA = "0x4DB37F0", Offset = "0x4DB37F0", VA = "0x4DB37F0")]
		get
		{
			return default(MovementType);
		}
		[Token(Token = "0x6000396")]
		[Address(RVA = "0x4DB3800", Offset = "0x4DB3800", VA = "0x4DB3800")]
		set
		{
		}
	}

	[Token(Token = "0x170000F0")]
	public float elasticity
	{
		[Token(Token = "0x6000397")]
		[Address(RVA = "0x4DB3810", Offset = "0x4DB3810", VA = "0x4DB3810")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000398")]
		[Address(RVA = "0x4DB3820", Offset = "0x4DB3820", VA = "0x4DB3820")]
		set
		{
		}
	}

	[Token(Token = "0x170000F1")]
	public bool inertia
	{
		[Token(Token = "0x6000399")]
		[Address(RVA = "0x4DB3830", Offset = "0x4DB3830", VA = "0x4DB3830")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600039A")]
		[Address(RVA = "0x4DB3840", Offset = "0x4DB3840", VA = "0x4DB3840")]
		set
		{
		}
	}

	[Token(Token = "0x170000F2")]
	public float decelerationRate
	{
		[Token(Token = "0x600039B")]
		[Address(RVA = "0x4DB3850", Offset = "0x4DB3850", VA = "0x4DB3850")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600039C")]
		[Address(RVA = "0x4DB3860", Offset = "0x4DB3860", VA = "0x4DB3860")]
		set
		{
		}
	}

	[Token(Token = "0x170000F3")]
	public float scrollSensitivity
	{
		[Token(Token = "0x600039D")]
		[Address(RVA = "0x4DB3870", Offset = "0x4DB3870", VA = "0x4DB3870")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600039E")]
		[Address(RVA = "0x4DB3880", Offset = "0x4DB3880", VA = "0x4DB3880")]
		set
		{
		}
	}

	[Token(Token = "0x170000F4")]
	public RectTransform viewport
	{
		[Token(Token = "0x600039F")]
		[Address(RVA = "0x4DB3890", Offset = "0x4DB3890", VA = "0x4DB3890")]
		get
		{
			return null;
		}
		[Token(Token = "0x60003A0")]
		[Address(RVA = "0x4DB38A0", Offset = "0x4DB38A0", VA = "0x4DB38A0")]
		set
		{
		}
	}

	[Token(Token = "0x170000F5")]
	public Scrollbar horizontalScrollbar
	{
		[Token(Token = "0x60003A1")]
		[Address(RVA = "0x4DB3980", Offset = "0x4DB3980", VA = "0x4DB3980")]
		get
		{
			return null;
		}
		[Token(Token = "0x60003A2")]
		[Address(RVA = "0x4DB3990", Offset = "0x4DB3990", VA = "0x4DB3990")]
		set
		{
		}
	}

	[Token(Token = "0x170000F6")]
	public Scrollbar verticalScrollbar
	{
		[Token(Token = "0x60003A3")]
		[Address(RVA = "0x4DB3B20", Offset = "0x4DB3B20", VA = "0x4DB3B20")]
		get
		{
			return null;
		}
		[Token(Token = "0x60003A4")]
		[Address(RVA = "0x4DB3B30", Offset = "0x4DB3B30", VA = "0x4DB3B30")]
		set
		{
		}
	}

	[Token(Token = "0x170000F7")]
	public ScrollbarVisibility horizontalScrollbarVisibility
	{
		[Token(Token = "0x60003A5")]
		[Address(RVA = "0x4DB3CC0", Offset = "0x4DB3CC0", VA = "0x4DB3CC0")]
		get
		{
			return default(ScrollbarVisibility);
		}
		[Token(Token = "0x60003A6")]
		[Address(RVA = "0x4DB3CD0", Offset = "0x4DB3CD0", VA = "0x4DB3CD0")]
		set
		{
		}
	}

	[Token(Token = "0x170000F8")]
	public ScrollbarVisibility verticalScrollbarVisibility
	{
		[Token(Token = "0x60003A7")]
		[Address(RVA = "0x4DB3CE0", Offset = "0x4DB3CE0", VA = "0x4DB3CE0")]
		get
		{
			return default(ScrollbarVisibility);
		}
		[Token(Token = "0x60003A8")]
		[Address(RVA = "0x4DB3CF0", Offset = "0x4DB3CF0", VA = "0x4DB3CF0")]
		set
		{
		}
	}

	[Token(Token = "0x170000F9")]
	public float horizontalScrollbarSpacing
	{
		[Token(Token = "0x60003A9")]
		[Address(RVA = "0x4DB3D00", Offset = "0x4DB3D00", VA = "0x4DB3D00")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60003AA")]
		[Address(RVA = "0x4DB3D10", Offset = "0x4DB3D10", VA = "0x4DB3D10")]
		set
		{
		}
	}

	[Token(Token = "0x170000FA")]
	public float verticalScrollbarSpacing
	{
		[Token(Token = "0x60003AB")]
		[Address(RVA = "0x4DB3E10", Offset = "0x4DB3E10", VA = "0x4DB3E10")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60003AC")]
		[Address(RVA = "0x4DB3E20", Offset = "0x4DB3E20", VA = "0x4DB3E20")]
		set
		{
		}
	}

	[Token(Token = "0x170000FB")]
	public ScrollRectEvent onValueChanged
	{
		[Token(Token = "0x60003AD")]
		[Address(RVA = "0x4DB3EA0", Offset = "0x4DB3EA0", VA = "0x4DB3EA0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60003AE")]
		[Address(RVA = "0x4DB3EB0", Offset = "0x4DB3EB0", VA = "0x4DB3EB0")]
		set
		{
		}
	}

	[Token(Token = "0x170000FC")]
	protected RectTransform viewRect
	{
		[Token(Token = "0x60003AF")]
		[Address(RVA = "0x4DB3EC0", Offset = "0x4DB3EC0", VA = "0x4DB3EC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000FD")]
	public Vector2 velocity
	{
		[Token(Token = "0x60003B0")]
		[Address(RVA = "0x4DB3FB0", Offset = "0x4DB3FB0", VA = "0x4DB3FB0")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x60003B1")]
		[Address(RVA = "0x4DB3FC0", Offset = "0x4DB3FC0", VA = "0x4DB3FC0")]
		set
		{
		}
	}

	[Token(Token = "0x170000FE")]
	private RectTransform rectTransform
	{
		[Token(Token = "0x60003B2")]
		[Address(RVA = "0x4DB3FD0", Offset = "0x4DB3FD0", VA = "0x4DB3FD0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000FF")]
	public Vector2 normalizedPosition
	{
		[Token(Token = "0x60003C6")]
		[Address(RVA = "0x4DB6D00", Offset = "0x4DB6D00", VA = "0x4DB6D00")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x60003C7")]
		[Address(RVA = "0x4DB73A0", Offset = "0x4DB73A0", VA = "0x4DB73A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000100")]
	public float horizontalNormalizedPosition
	{
		[Token(Token = "0x60003C8")]
		[Address(RVA = "0x4DB7100", Offset = "0x4DB7100", VA = "0x4DB7100")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60003C9")]
		[Address(RVA = "0x4DB73F0", Offset = "0x4DB73F0", VA = "0x4DB73F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000101")]
	public float verticalNormalizedPosition
	{
		[Token(Token = "0x60003CA")]
		[Address(RVA = "0x4DB7240", Offset = "0x4DB7240", VA = "0x4DB7240")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60003CB")]
		[Address(RVA = "0x4DB7410", Offset = "0x4DB7410", VA = "0x4DB7410")]
		set
		{
		}
	}

	[Token(Token = "0x17000102")]
	private bool hScrollingNeeded
	{
		[Token(Token = "0x60003D1")]
		[Address(RVA = "0x4DB7850", Offset = "0x4DB7850", VA = "0x4DB7850")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000103")]
	private bool vScrollingNeeded
	{
		[Token(Token = "0x60003D2")]
		[Address(RVA = "0x4DB78C0", Offset = "0x4DB78C0", VA = "0x4DB78C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000104")]
	public virtual float minWidth
	{
		[Token(Token = "0x60003D5")]
		[Address(RVA = "0x4DB7960", Offset = "0x4DB7960", VA = "0x4DB7960", Slot = "52")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000105")]
	public virtual float preferredWidth
	{
		[Token(Token = "0x60003D6")]
		[Address(RVA = "0x4DB7970", Offset = "0x4DB7970", VA = "0x4DB7970", Slot = "53")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000106")]
	public virtual float flexibleWidth
	{
		[Token(Token = "0x60003D7")]
		[Address(RVA = "0x4DB7980", Offset = "0x4DB7980", VA = "0x4DB7980", Slot = "54")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000107")]
	public virtual float minHeight
	{
		[Token(Token = "0x60003D8")]
		[Address(RVA = "0x4DB7990", Offset = "0x4DB7990", VA = "0x4DB7990", Slot = "55")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000108")]
	public virtual float preferredHeight
	{
		[Token(Token = "0x60003D9")]
		[Address(RVA = "0x4DB79A0", Offset = "0x4DB79A0", VA = "0x4DB79A0", Slot = "56")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000109")]
	public virtual float flexibleHeight
	{
		[Token(Token = "0x60003DA")]
		[Address(RVA = "0x4DB79B0", Offset = "0x4DB79B0", VA = "0x4DB79B0", Slot = "57")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700010A")]
	public virtual int layoutPriority
	{
		[Token(Token = "0x60003DB")]
		[Address(RVA = "0x4DB79C0", Offset = "0x4DB79C0", VA = "0x4DB79C0", Slot = "58")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60003B3")]
	[Address(RVA = "0x4DB4070", Offset = "0x4DB4070", VA = "0x4DB4070")]
	protected ScrollRect()
	{
	}

	[Token(Token = "0x60003B4")]
	[Address(RVA = "0x4DB41F0", Offset = "0x4DB41F0", VA = "0x4DB41F0", Slot = "38")]
	public virtual void Rebuild(CanvasUpdate executing)
	{
	}

	[Token(Token = "0x60003B5")]
	[Address(RVA = "0x4DB50F0", Offset = "0x4DB50F0", VA = "0x4DB50F0", Slot = "39")]
	public virtual void LayoutComplete()
	{
	}

	[Token(Token = "0x60003B6")]
	[Address(RVA = "0x4DB5100", Offset = "0x4DB5100", VA = "0x4DB5100", Slot = "40")]
	public virtual void GraphicUpdateComplete()
	{
	}

	[Token(Token = "0x60003B7")]
	[Address(RVA = "0x4DB4260", Offset = "0x4DB4260", VA = "0x4DB4260")]
	private void UpdateCachedData()
	{
	}

	[Token(Token = "0x60003B8")]
	[Address(RVA = "0x4DB5110", Offset = "0x4DB5110", VA = "0x4DB5110", Slot = "5")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x60003B9")]
	[Address(RVA = "0x4DB5330", Offset = "0x4DB5330", VA = "0x4DB5330", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x60003BA")]
	[Address(RVA = "0x4DB5570", Offset = "0x4DB5570", VA = "0x4DB5570", Slot = "9")]
	public override bool IsActive()
	{
		return default(bool);
	}

	[Token(Token = "0x60003BB")]
	[Address(RVA = "0x4DB55D0", Offset = "0x4DB55D0", VA = "0x4DB55D0")]
	private void EnsureLayoutHasRebuilt()
	{
	}

	[Token(Token = "0x60003BC")]
	[Address(RVA = "0x4DB5640", Offset = "0x4DB5640", VA = "0x4DB5640", Slot = "41")]
	public virtual void StopMovement()
	{
	}

	[Token(Token = "0x60003BD")]
	[Address(RVA = "0x4DB5680", Offset = "0x4DB5680", VA = "0x4DB5680", Slot = "42")]
	public virtual void OnScroll(PointerEventData data)
	{
	}

	[Token(Token = "0x60003BE")]
	[Address(RVA = "0x4DB5B70", Offset = "0x4DB5B70", VA = "0x4DB5B70", Slot = "43")]
	public virtual void OnInitializePotentialDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60003BF")]
	[Address(RVA = "0x4DB5BD0", Offset = "0x4DB5BD0", VA = "0x4DB5BD0", Slot = "44")]
	public virtual void OnBeginDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60003C0")]
	[Address(RVA = "0x4DB5CF0", Offset = "0x4DB5CF0", VA = "0x4DB5CF0", Slot = "45")]
	public virtual void OnEndDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60003C1")]
	[Address(RVA = "0x4DB5D10", Offset = "0x4DB5D10", VA = "0x4DB5D10", Slot = "46")]
	public virtual void OnDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60003C2")]
	[Address(RVA = "0x4DB6150", Offset = "0x4DB6150", VA = "0x4DB6150", Slot = "47")]
	protected virtual void SetContentAnchoredPosition(Vector2 position)
	{
	}

	[Token(Token = "0x60003C3")]
	[Address(RVA = "0x4DB6230", Offset = "0x4DB6230", VA = "0x4DB6230", Slot = "48")]
	protected virtual void LateUpdate()
	{
	}

	[Token(Token = "0x60003C4")]
	[Address(RVA = "0x4DB5000", Offset = "0x4DB5000", VA = "0x4DB5000")]
	protected void UpdatePrevData()
	{
	}

	[Token(Token = "0x60003C5")]
	[Address(RVA = "0x4DB4AC0", Offset = "0x4DB4AC0", VA = "0x4DB4AC0")]
	private void UpdateScrollbars(Vector2 offset)
	{
	}

	[Token(Token = "0x60003CC")]
	[Address(RVA = "0x4DB7430", Offset = "0x4DB7430", VA = "0x4DB7430")]
	private void SetHorizontalNormalizedPosition(float value)
	{
	}

	[Token(Token = "0x60003CD")]
	[Address(RVA = "0x4DB7450", Offset = "0x4DB7450", VA = "0x4DB7450")]
	private void SetVerticalNormalizedPosition(float value)
	{
	}

	[Token(Token = "0x60003CE")]
	[Address(RVA = "0x4DB7470", Offset = "0x4DB7470", VA = "0x4DB7470", Slot = "49")]
	protected virtual void SetNormalizedPosition(float value, int axis)
	{
	}

	[Token(Token = "0x60003CF")]
	[Address(RVA = "0x4DB6100", Offset = "0x4DB6100", VA = "0x4DB6100")]
	private static float RubberDelta(float overStretching, float viewSize)
	{
		return default(float);
	}

	[Token(Token = "0x60003D0")]
	[Address(RVA = "0x4DB77D0", Offset = "0x4DB77D0", VA = "0x4DB77D0", Slot = "10")]
	protected override void OnRectTransformDimensionsChange()
	{
	}

	[Token(Token = "0x60003D3")]
	[Address(RVA = "0x4DB7940", Offset = "0x4DB7940", VA = "0x4DB7940", Slot = "50")]
	public virtual void CalculateLayoutInputHorizontal()
	{
	}

	[Token(Token = "0x60003D4")]
	[Address(RVA = "0x4DB7950", Offset = "0x4DB7950", VA = "0x4DB7950", Slot = "51")]
	public virtual void CalculateLayoutInputVertical()
	{
	}

	[Token(Token = "0x60003DC")]
	[Address(RVA = "0x4DB79D0", Offset = "0x4DB79D0", VA = "0x4DB79D0", Slot = "59")]
	public virtual void SetLayoutHorizontal()
	{
	}

	[Token(Token = "0x60003DD")]
	[Address(RVA = "0x4DB8280", Offset = "0x4DB8280", VA = "0x4DB8280", Slot = "60")]
	public virtual void SetLayoutVertical()
	{
	}

	[Token(Token = "0x60003DE")]
	[Address(RVA = "0x4DB6F80", Offset = "0x4DB6F80", VA = "0x4DB6F80")]
	private void UpdateScrollbarVisibility()
	{
	}

	[Token(Token = "0x60003DF")]
	[Address(RVA = "0x4DB8740", Offset = "0x4DB8740", VA = "0x4DB8740")]
	private static void UpdateOneScrollbarVisibility(bool xScrollingNeeded, bool xAxisEnabled, ScrollbarVisibility scrollbarVisibility, Scrollbar scrollbar)
	{
	}

	[Token(Token = "0x60003E0")]
	[Address(RVA = "0x4DB8340", Offset = "0x4DB8340", VA = "0x4DB8340")]
	private void UpdateScrollbarLayout()
	{
	}

	[Token(Token = "0x60003E1")]
	[Address(RVA = "0x4DB45C0", Offset = "0x4DB45C0", VA = "0x4DB45C0")]
	protected void UpdateBounds()
	{
	}

	[Token(Token = "0x60003E2")]
	[Address(RVA = "0x4DB8810", Offset = "0x4DB8810", VA = "0x4DB8810")]
	internal static void AdjustBounds(ref Bounds viewBounds, ref Vector2 contentPivot, ref Vector3 contentSize, ref Vector3 contentPos)
	{
	}

	[Token(Token = "0x60003E3")]
	[Address(RVA = "0x4DB8160", Offset = "0x4DB8160", VA = "0x4DB8160")]
	private Bounds GetBounds()
	{
		return default(Bounds);
	}

	[Token(Token = "0x60003E4")]
	[Address(RVA = "0x4DB88B0", Offset = "0x4DB88B0", VA = "0x4DB88B0")]
	internal static Bounds InternalGetBounds(Vector3[] corners, ref Matrix4x4 viewWorldToLocalMatrix)
	{
		return default(Bounds);
	}

	[Token(Token = "0x60003E5")]
	[Address(RVA = "0x4DB59E0", Offset = "0x4DB59E0", VA = "0x4DB59E0")]
	private Vector2 CalculateOffset(Vector2 delta)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60003E6")]
	[Address(RVA = "0x4DB8AE0", Offset = "0x4DB8AE0", VA = "0x4DB8AE0")]
	internal static Vector2 InternalCalculateOffset(ref Bounds viewBounds, ref Bounds contentBounds, bool horizontal, bool vertical, MovementType movementType, ref Vector2 delta)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60003E7")]
	[Address(RVA = "0x4DB3D90", Offset = "0x4DB3D90", VA = "0x4DB3D90")]
	protected void SetDirty()
	{
	}

	[Token(Token = "0x60003E8")]
	[Address(RVA = "0x4DB38C0", Offset = "0x4DB38C0", VA = "0x4DB38C0")]
	protected void SetDirtyCaching()
	{
	}

	[Token(Token = "0x60003E9")]
	[Address(RVA = "0x4DB8C60", Offset = "0x4DB8C60", VA = "0x4DB8C60", Slot = "23")]
	private Transform UnityEngine_002EUI_002EICanvasElement_002Eget_transform()
	{
		return null;
	}
}
