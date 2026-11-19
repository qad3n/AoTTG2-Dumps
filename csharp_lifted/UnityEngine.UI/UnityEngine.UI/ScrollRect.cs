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
		[Address(RVA = "0x6CEBC10", Offset = "0x6CEAC10", VA = "0x6CEBC10")]
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
		[Address(RVA = "0x6CEB1E0", Offset = "0x6CEA1E0", VA = "0x6CEB1E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600039C")]
		[Address(RVA = "0x6CEB1F0", Offset = "0x6CEA1F0", VA = "0x6CEB1F0")]
		set
		{
		}
	}

	[Token(Token = "0x170000EE")]
	public bool horizontal
	{
		[Token(Token = "0x600039D")]
		[Address(RVA = "0x6CEB200", Offset = "0x6CEA200", VA = "0x6CEB200")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600039E")]
		[Address(RVA = "0x6CEB210", Offset = "0x6CEA210", VA = "0x6CEB210")]
		set
		{
		}
	}

	[Token(Token = "0x170000EF")]
	public bool vertical
	{
		[Token(Token = "0x600039F")]
		[Address(RVA = "0x6CEB220", Offset = "0x6CEA220", VA = "0x6CEB220")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60003A0")]
		[Address(RVA = "0x6CEB230", Offset = "0x6CEA230", VA = "0x6CEB230")]
		set
		{
		}
	}

	[Token(Token = "0x170000F0")]
	public MovementType movementType
	{
		[Token(Token = "0x60003A1")]
		[Address(RVA = "0x6CEB240", Offset = "0x6CEA240", VA = "0x6CEB240")]
		get
		{
			return default(MovementType);
		}
		[Token(Token = "0x60003A2")]
		[Address(RVA = "0x6CEB250", Offset = "0x6CEA250", VA = "0x6CEB250")]
		set
		{
		}
	}

	[Token(Token = "0x170000F1")]
	public float elasticity
	{
		[Token(Token = "0x60003A3")]
		[Address(RVA = "0x6CEB260", Offset = "0x6CEA260", VA = "0x6CEB260")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60003A4")]
		[Address(RVA = "0x6CEB270", Offset = "0x6CEA270", VA = "0x6CEB270")]
		set
		{
		}
	}

	[Token(Token = "0x170000F2")]
	public bool inertia
	{
		[Token(Token = "0x60003A5")]
		[Address(RVA = "0x6CEB280", Offset = "0x6CEA280", VA = "0x6CEB280")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60003A6")]
		[Address(RVA = "0x6CEB290", Offset = "0x6CEA290", VA = "0x6CEB290")]
		set
		{
		}
	}

	[Token(Token = "0x170000F3")]
	public float decelerationRate
	{
		[Token(Token = "0x60003A7")]
		[Address(RVA = "0x6CEB2A0", Offset = "0x6CEA2A0", VA = "0x6CEB2A0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60003A8")]
		[Address(RVA = "0x6CEB2B0", Offset = "0x6CEA2B0", VA = "0x6CEB2B0")]
		set
		{
		}
	}

	[Token(Token = "0x170000F4")]
	public float scrollSensitivity
	{
		[Token(Token = "0x60003A9")]
		[Address(RVA = "0x6CEB2C0", Offset = "0x6CEA2C0", VA = "0x6CEB2C0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60003AA")]
		[Address(RVA = "0x6CEB2D0", Offset = "0x6CEA2D0", VA = "0x6CEB2D0")]
		set
		{
		}
	}

	[Token(Token = "0x170000F5")]
	public RectTransform viewport
	{
		[Token(Token = "0x60003AB")]
		[Address(RVA = "0x6CEB2E0", Offset = "0x6CEA2E0", VA = "0x6CEB2E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60003AC")]
		[Address(RVA = "0x6CEB2F0", Offset = "0x6CEA2F0", VA = "0x6CEB2F0")]
		set
		{
		}
	}

	[Token(Token = "0x170000F6")]
	public Scrollbar horizontalScrollbar
	{
		[Token(Token = "0x60003AD")]
		[Address(RVA = "0x6CEB3D0", Offset = "0x6CEA3D0", VA = "0x6CEB3D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60003AE")]
		[Address(RVA = "0x6CEB3E0", Offset = "0x6CEA3E0", VA = "0x6CEB3E0")]
		set
		{
		}
	}

	[Token(Token = "0x170000F7")]
	public Scrollbar verticalScrollbar
	{
		[Token(Token = "0x60003AF")]
		[Address(RVA = "0x6CEB570", Offset = "0x6CEA570", VA = "0x6CEB570")]
		get
		{
			return null;
		}
		[Token(Token = "0x60003B0")]
		[Address(RVA = "0x6CEB580", Offset = "0x6CEA580", VA = "0x6CEB580")]
		set
		{
		}
	}

	[Token(Token = "0x170000F8")]
	public ScrollbarVisibility horizontalScrollbarVisibility
	{
		[Token(Token = "0x60003B1")]
		[Address(RVA = "0x6CEB710", Offset = "0x6CEA710", VA = "0x6CEB710")]
		get
		{
			return default(ScrollbarVisibility);
		}
		[Token(Token = "0x60003B2")]
		[Address(RVA = "0x6CEB720", Offset = "0x6CEA720", VA = "0x6CEB720")]
		set
		{
		}
	}

	[Token(Token = "0x170000F9")]
	public ScrollbarVisibility verticalScrollbarVisibility
	{
		[Token(Token = "0x60003B3")]
		[Address(RVA = "0x6CEB730", Offset = "0x6CEA730", VA = "0x6CEB730")]
		get
		{
			return default(ScrollbarVisibility);
		}
		[Token(Token = "0x60003B4")]
		[Address(RVA = "0x6CEB740", Offset = "0x6CEA740", VA = "0x6CEB740")]
		set
		{
		}
	}

	[Token(Token = "0x170000FA")]
	public float horizontalScrollbarSpacing
	{
		[Token(Token = "0x60003B5")]
		[Address(RVA = "0x6CEB750", Offset = "0x6CEA750", VA = "0x6CEB750")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60003B6")]
		[Address(RVA = "0x6CEB760", Offset = "0x6CEA760", VA = "0x6CEB760")]
		set
		{
		}
	}

	[Token(Token = "0x170000FB")]
	public float verticalScrollbarSpacing
	{
		[Token(Token = "0x60003B7")]
		[Address(RVA = "0x6CEB860", Offset = "0x6CEA860", VA = "0x6CEB860")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60003B8")]
		[Address(RVA = "0x6CEB870", Offset = "0x6CEA870", VA = "0x6CEB870")]
		set
		{
		}
	}

	[Token(Token = "0x170000FC")]
	public ScrollRectEvent onValueChanged
	{
		[Token(Token = "0x60003B9")]
		[Address(RVA = "0x6CEB8F0", Offset = "0x6CEA8F0", VA = "0x6CEB8F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60003BA")]
		[Address(RVA = "0x6CEB900", Offset = "0x6CEA900", VA = "0x6CEB900")]
		set
		{
		}
	}

	[Token(Token = "0x170000FD")]
	protected RectTransform viewRect
	{
		[Token(Token = "0x60003BB")]
		[Address(RVA = "0x6CEB910", Offset = "0x6CEA910", VA = "0x6CEB910")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000FE")]
	public Vector2 velocity
	{
		[Token(Token = "0x60003BC")]
		[Address(RVA = "0x6CEBA10", Offset = "0x6CEAA10", VA = "0x6CEBA10")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x60003BD")]
		[Address(RVA = "0x6CEBA20", Offset = "0x6CEAA20", VA = "0x6CEBA20")]
		set
		{
		}
	}

	[Token(Token = "0x170000FF")]
	private RectTransform rectTransform
	{
		[Token(Token = "0x60003BE")]
		[Address(RVA = "0x6CEBA30", Offset = "0x6CEAA30", VA = "0x6CEBA30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000100")]
	public Vector2 normalizedPosition
	{
		[Token(Token = "0x60003D2")]
		[Address(RVA = "0x6CEE310", Offset = "0x6CED310", VA = "0x6CEE310")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x60003D3")]
		[Address(RVA = "0x6CEE730", Offset = "0x6CED730", VA = "0x6CEE730")]
		set
		{
		}
	}

	[Token(Token = "0x17000101")]
	public float horizontalNormalizedPosition
	{
		[Token(Token = "0x60003D4")]
		[Address(RVA = "0x6CEE4C0", Offset = "0x6CED4C0", VA = "0x6CEE4C0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60003D5")]
		[Address(RVA = "0x6CEE780", Offset = "0x6CED780", VA = "0x6CEE780")]
		set
		{
		}
	}

	[Token(Token = "0x17000102")]
	public float verticalNormalizedPosition
	{
		[Token(Token = "0x60003D6")]
		[Address(RVA = "0x6CEE600", Offset = "0x6CED600", VA = "0x6CEE600")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60003D7")]
		[Address(RVA = "0x6CEE7A0", Offset = "0x6CED7A0", VA = "0x6CEE7A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000103")]
	private bool hScrollingNeeded
	{
		[Token(Token = "0x60003DD")]
		[Address(RVA = "0x6CEEC60", Offset = "0x6CEDC60", VA = "0x6CEEC60")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000104")]
	private bool vScrollingNeeded
	{
		[Token(Token = "0x60003DE")]
		[Address(RVA = "0x6CEECD0", Offset = "0x6CEDCD0", VA = "0x6CEECD0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000105")]
	public virtual float minWidth
	{
		[Token(Token = "0x60003E1")]
		[Address(RVA = "0x6CEED60", Offset = "0x6CEDD60", VA = "0x6CEED60", Slot = "52")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000106")]
	public virtual float preferredWidth
	{
		[Token(Token = "0x60003E2")]
		[Address(RVA = "0x6CEED70", Offset = "0x6CEDD70", VA = "0x6CEED70", Slot = "53")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000107")]
	public virtual float flexibleWidth
	{
		[Token(Token = "0x60003E3")]
		[Address(RVA = "0x6CEED80", Offset = "0x6CEDD80", VA = "0x6CEED80", Slot = "54")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000108")]
	public virtual float minHeight
	{
		[Token(Token = "0x60003E4")]
		[Address(RVA = "0x6CEED90", Offset = "0x6CEDD90", VA = "0x6CEED90", Slot = "55")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000109")]
	public virtual float preferredHeight
	{
		[Token(Token = "0x60003E5")]
		[Address(RVA = "0x6CEEDA0", Offset = "0x6CEDDA0", VA = "0x6CEEDA0", Slot = "56")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700010A")]
	public virtual float flexibleHeight
	{
		[Token(Token = "0x60003E6")]
		[Address(RVA = "0x6CEEDB0", Offset = "0x6CEDDB0", VA = "0x6CEEDB0", Slot = "57")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700010B")]
	public virtual int layoutPriority
	{
		[Token(Token = "0x60003E7")]
		[Address(RVA = "0x6CEEDC0", Offset = "0x6CEDDC0", VA = "0x6CEEDC0", Slot = "58")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60003BF")]
	[Address(RVA = "0x6CEBAD0", Offset = "0x6CEAAD0", VA = "0x6CEBAD0")]
	protected ScrollRect()
	{
	}

	[Token(Token = "0x60003C0")]
	[Address(RVA = "0x6CEBC50", Offset = "0x6CEAC50", VA = "0x6CEBC50", Slot = "38")]
	public virtual void Rebuild(CanvasUpdate executing)
	{
	}

	[Token(Token = "0x60003C1")]
	[Address(RVA = "0x6CEC960", Offset = "0x6CEB960", VA = "0x6CEC960", Slot = "39")]
	public virtual void LayoutComplete()
	{
	}

	[Token(Token = "0x60003C2")]
	[Address(RVA = "0x6CEC970", Offset = "0x6CEB970", VA = "0x6CEC970", Slot = "40")]
	public virtual void GraphicUpdateComplete()
	{
	}

	[Token(Token = "0x60003C3")]
	[Address(RVA = "0x6CEBCC0", Offset = "0x6CEACC0", VA = "0x6CEBCC0")]
	private void UpdateCachedData()
	{
	}

	[Token(Token = "0x60003C4")]
	[Address(RVA = "0x6CEC980", Offset = "0x6CEB980", VA = "0x6CEC980", Slot = "5")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x60003C5")]
	[Address(RVA = "0x6CECBA0", Offset = "0x6CEBBA0", VA = "0x6CECBA0", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x60003C6")]
	[Address(RVA = "0x6CECDE0", Offset = "0x6CEBDE0", VA = "0x6CECDE0", Slot = "9")]
	public override bool IsActive()
	{
		return default(bool);
	}

	[Token(Token = "0x60003C7")]
	[Address(RVA = "0x6CECE40", Offset = "0x6CEBE40", VA = "0x6CECE40")]
	private void EnsureLayoutHasRebuilt()
	{
	}

	[Token(Token = "0x60003C8")]
	[Address(RVA = "0x6CECEB0", Offset = "0x6CEBEB0", VA = "0x6CECEB0", Slot = "41")]
	public virtual void StopMovement()
	{
	}

	[Token(Token = "0x60003C9")]
	[Address(RVA = "0x6CECEF0", Offset = "0x6CEBEF0", VA = "0x6CECEF0", Slot = "42")]
	public virtual void OnScroll(PointerEventData data)
	{
	}

	[Token(Token = "0x60003CA")]
	[Address(RVA = "0x6CED340", Offset = "0x6CEC340", VA = "0x6CED340", Slot = "43")]
	public virtual void OnInitializePotentialDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60003CB")]
	[Address(RVA = "0x6CED3A0", Offset = "0x6CEC3A0", VA = "0x6CED3A0", Slot = "44")]
	public virtual void OnBeginDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60003CC")]
	[Address(RVA = "0x6CED4C0", Offset = "0x6CEC4C0", VA = "0x6CED4C0", Slot = "45")]
	public virtual void OnEndDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60003CD")]
	[Address(RVA = "0x6CED4E0", Offset = "0x6CEC4E0", VA = "0x6CED4E0", Slot = "46")]
	public virtual void OnDrag(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60003CE")]
	[Address(RVA = "0x6CED8B0", Offset = "0x6CEC8B0", VA = "0x6CED8B0", Slot = "47")]
	protected virtual void SetContentAnchoredPosition(Vector2 position)
	{
	}

	[Token(Token = "0x60003CF")]
	[Address(RVA = "0x6CED990", Offset = "0x6CEC990", VA = "0x6CED990", Slot = "48")]
	protected virtual void LateUpdate()
	{
	}

	[Token(Token = "0x60003D0")]
	[Address(RVA = "0x6CEC880", Offset = "0x6CEB880", VA = "0x6CEC880")]
	protected void UpdatePrevData()
	{
	}

	[Token(Token = "0x60003D1")]
	[Address(RVA = "0x6CEC5B0", Offset = "0x6CEB5B0", VA = "0x6CEC5B0")]
	private void UpdateScrollbars(Vector2 offset)
	{
	}

	[Token(Token = "0x60003D8")]
	[Address(RVA = "0x6CEE7C0", Offset = "0x6CED7C0", VA = "0x6CEE7C0")]
	private void SetHorizontalNormalizedPosition(float value)
	{
	}

	[Token(Token = "0x60003D9")]
	[Address(RVA = "0x6CEE810", Offset = "0x6CED810", VA = "0x6CEE810")]
	private void SetVerticalNormalizedPosition(float value)
	{
	}

	[Token(Token = "0x60003DA")]
	[Address(RVA = "0x6CEE860", Offset = "0x6CED860", VA = "0x6CEE860", Slot = "49")]
	protected virtual void SetNormalizedPosition(float value, int axis)
	{
	}

	[Token(Token = "0x60003DB")]
	[Address(RVA = "0x6CED860", Offset = "0x6CEC860", VA = "0x6CED860")]
	private static float RubberDelta(float overStretching, float viewSize)
	{
		return default(float);
	}

	[Token(Token = "0x60003DC")]
	[Address(RVA = "0x6CEEBE0", Offset = "0x6CEDBE0", VA = "0x6CEEBE0", Slot = "10")]
	protected override void OnRectTransformDimensionsChange()
	{
	}

	[Token(Token = "0x60003DF")]
	[Address(RVA = "0x6CEED40", Offset = "0x6CEDD40", VA = "0x6CEED40", Slot = "50")]
	public virtual void CalculateLayoutInputHorizontal()
	{
	}

	[Token(Token = "0x60003E0")]
	[Address(RVA = "0x6CEED50", Offset = "0x6CEDD50", VA = "0x6CEED50", Slot = "51")]
	public virtual void CalculateLayoutInputVertical()
	{
	}

	[Token(Token = "0x60003E8")]
	[Address(RVA = "0x6CEEDD0", Offset = "0x6CEDDD0", VA = "0x6CEEDD0", Slot = "59")]
	public virtual void SetLayoutHorizontal()
	{
	}

	[Token(Token = "0x60003E9")]
	[Address(RVA = "0x6CEF660", Offset = "0x6CEE660", VA = "0x6CEF660", Slot = "60")]
	public virtual void SetLayoutVertical()
	{
	}

	[Token(Token = "0x60003EA")]
	[Address(RVA = "0x6CEE340", Offset = "0x6CED340", VA = "0x6CEE340")]
	private void UpdateScrollbarVisibility()
	{
	}

	[Token(Token = "0x60003EB")]
	[Address(RVA = "0x6CEFB40", Offset = "0x6CEEB40", VA = "0x6CEFB40")]
	private static void UpdateOneScrollbarVisibility(bool xScrollingNeeded, bool xAxisEnabled, ScrollbarVisibility scrollbarVisibility, Scrollbar scrollbar)
	{
	}

	[Token(Token = "0x60003EC")]
	[Address(RVA = "0x6CEF750", Offset = "0x6CEE750", VA = "0x6CEF750")]
	private void UpdateScrollbarLayout()
	{
	}

	[Token(Token = "0x60003ED")]
	[Address(RVA = "0x6CEC0A0", Offset = "0x6CEB0A0", VA = "0x6CEC0A0")]
	protected void UpdateBounds()
	{
	}

	[Token(Token = "0x60003EE")]
	[Address(RVA = "0x6CEFC40", Offset = "0x6CEEC40", VA = "0x6CEFC40")]
	internal static void AdjustBounds(ref Bounds viewBounds, ref Vector2 contentPivot, ref Vector3 contentSize, ref Vector3 contentPos)
	{
	}

	[Token(Token = "0x60003EF")]
	[Address(RVA = "0x6CEF550", Offset = "0x6CEE550", VA = "0x6CEF550")]
	private Bounds GetBounds()
	{
		return default(Bounds);
	}

	[Token(Token = "0x60003F0")]
	[Address(RVA = "0x6CEFCD0", Offset = "0x6CEECD0", VA = "0x6CEFCD0")]
	internal static Bounds InternalGetBounds(Vector3[] corners, ref Matrix4x4 viewWorldToLocalMatrix)
	{
		return default(Bounds);
	}

	[Token(Token = "0x60003F1")]
	[Address(RVA = "0x6CED1F0", Offset = "0x6CEC1F0", VA = "0x6CED1F0")]
	private Vector2 CalculateOffset(Vector2 delta)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60003F2")]
	[Address(RVA = "0x6CF0090", Offset = "0x6CEF090", VA = "0x6CF0090")]
	internal static Vector2 InternalCalculateOffset(ref Bounds viewBounds, ref Bounds contentBounds, bool horizontal, bool vertical, MovementType movementType, ref Vector2 delta)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60003F3")]
	[Address(RVA = "0x6CEB7E0", Offset = "0x6CEA7E0", VA = "0x6CEB7E0")]
	protected void SetDirty()
	{
	}

	[Token(Token = "0x60003F4")]
	[Address(RVA = "0x6CEB310", Offset = "0x6CEA310", VA = "0x6CEB310")]
	protected void SetDirtyCaching()
	{
	}

	[Token(Token = "0x60003F5")]
	[Address(RVA = "0x6CF01E0", Offset = "0x6CEF1E0", VA = "0x6CF01E0", Slot = "23")]
	private Transform UnityEngine_002EUI_002EICanvasElement_002Eget_transform()
	{
		return null;
	}
}
