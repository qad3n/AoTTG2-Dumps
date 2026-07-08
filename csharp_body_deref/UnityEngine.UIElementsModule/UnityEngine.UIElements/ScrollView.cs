using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Properties;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000103")]
public class ScrollView : VisualElement
{
	[Token(Token = "0x2000104")]
	public new class UxmlFactory : UxmlFactory<ScrollView, UxmlTraits>
	{
		[Token(Token = "0x600071C")]
		[Address(RVA = "0x4CD51F0", Offset = "0x4CD51F0", VA = "0x4CD51F0")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x2000105")]
	public new class UxmlTraits : VisualElement.UxmlTraits
	{
		[Token(Token = "0x400045A")]
		[FieldOffset(Offset = "0x70")]
		private UxmlEnumAttributeDescription<ScrollViewMode> m_ScrollViewMode;

		[Token(Token = "0x400045B")]
		[FieldOffset(Offset = "0x78")]
		private UxmlEnumAttributeDescription<NestedInteractionKind> m_NestedInteractionKind;

		[Token(Token = "0x400045C")]
		[FieldOffset(Offset = "0x80")]
		private UxmlBoolAttributeDescription m_ShowHorizontal;

		[Token(Token = "0x400045D")]
		[FieldOffset(Offset = "0x88")]
		private UxmlBoolAttributeDescription m_ShowVertical;

		[Token(Token = "0x400045E")]
		[FieldOffset(Offset = "0x90")]
		private UxmlEnumAttributeDescription<ScrollerVisibility> m_HorizontalScrollerVisibility;

		[Token(Token = "0x400045F")]
		[FieldOffset(Offset = "0x98")]
		private UxmlEnumAttributeDescription<ScrollerVisibility> m_VerticalScrollerVisibility;

		[Token(Token = "0x4000460")]
		[FieldOffset(Offset = "0xA0")]
		private UxmlFloatAttributeDescription m_HorizontalPageSize;

		[Token(Token = "0x4000461")]
		[FieldOffset(Offset = "0xA8")]
		private UxmlFloatAttributeDescription m_VerticalPageSize;

		[Token(Token = "0x4000462")]
		[FieldOffset(Offset = "0xB0")]
		private UxmlFloatAttributeDescription m_MouseWheelScrollSize;

		[Token(Token = "0x4000463")]
		[FieldOffset(Offset = "0xB8")]
		private UxmlEnumAttributeDescription<TouchScrollBehavior> m_TouchScrollBehavior;

		[Token(Token = "0x4000464")]
		[FieldOffset(Offset = "0xC0")]
		private UxmlFloatAttributeDescription m_ScrollDecelerationRate;

		[Token(Token = "0x4000465")]
		[FieldOffset(Offset = "0xC8")]
		private UxmlFloatAttributeDescription m_Elasticity;

		[Token(Token = "0x4000466")]
		[FieldOffset(Offset = "0xD0")]
		private UxmlLongAttributeDescription m_ElasticAnimationIntervalMs;

		[Token(Token = "0x600071D")]
		[Address(RVA = "0x4CD5230", Offset = "0x4CD5230", VA = "0x4CD5230", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x600071E")]
		[Address(RVA = "0x4CD57D0", Offset = "0x4CD57D0", VA = "0x4CD57D0")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x2000106")]
	public enum TouchScrollBehavior
	{
		[Token(Token = "0x4000468")]
		Unrestricted,
		[Token(Token = "0x4000469")]
		Elastic,
		[Token(Token = "0x400046A")]
		Clamped
	}

	[Token(Token = "0x2000107")]
	public enum NestedInteractionKind
	{
		[Token(Token = "0x400046C")]
		Default,
		[Token(Token = "0x400046D")]
		StopScrolling,
		[Token(Token = "0x400046E")]
		ForwardScrolling
	}

	[Token(Token = "0x2000108")]
	internal enum TouchScrollingResult
	{
		[Token(Token = "0x4000470")]
		Apply,
		[Token(Token = "0x4000471")]
		Forward,
		[Token(Token = "0x4000472")]
		Block
	}

	[Token(Token = "0x4000418")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly DataBindingProperty horizontalScrollerVisibilityProperty;

	[Token(Token = "0x4000419")]
	[FieldOffset(Offset = "0xA0")]
	internal static readonly DataBindingProperty verticalScrollerVisibilityProperty;

	[Token(Token = "0x400041A")]
	[FieldOffset(Offset = "0x140")]
	internal static readonly DataBindingProperty scrollOffsetProperty;

	[Token(Token = "0x400041B")]
	[FieldOffset(Offset = "0x1E0")]
	internal static readonly DataBindingProperty horizontalPageSizeProperty;

	[Token(Token = "0x400041C")]
	[FieldOffset(Offset = "0x280")]
	internal static readonly DataBindingProperty verticalPageSizeProperty;

	[Token(Token = "0x400041D")]
	[FieldOffset(Offset = "0x320")]
	internal static readonly DataBindingProperty mouseWheelScrollSizeProperty;

	[Token(Token = "0x400041E")]
	[FieldOffset(Offset = "0x3C0")]
	internal static readonly DataBindingProperty scrollDecelerationRateProperty;

	[Token(Token = "0x400041F")]
	[FieldOffset(Offset = "0x460")]
	internal static readonly DataBindingProperty elasticityProperty;

	[Token(Token = "0x4000420")]
	[FieldOffset(Offset = "0x500")]
	internal static readonly DataBindingProperty touchScrollBehaviorProperty;

	[Token(Token = "0x4000421")]
	[FieldOffset(Offset = "0x5A0")]
	internal static readonly DataBindingProperty nestedInteractionKindProperty;

	[Token(Token = "0x4000422")]
	[FieldOffset(Offset = "0x640")]
	internal static readonly DataBindingProperty modeProperty;

	[Token(Token = "0x4000423")]
	[FieldOffset(Offset = "0x6E0")]
	internal static readonly DataBindingProperty elasticAnimationIntervalMsProperty;

	[Token(Token = "0x4000424")]
	[FieldOffset(Offset = "0x3D8")]
	private int m_FirstLayoutPass;

	[Token(Token = "0x4000425")]
	[FieldOffset(Offset = "0x3DC")]
	private ScrollerVisibility m_HorizontalScrollerVisibility;

	[Token(Token = "0x4000426")]
	[FieldOffset(Offset = "0x3E0")]
	private ScrollerVisibility m_VerticalScrollerVisibility;

	[Token(Token = "0x4000427")]
	[FieldOffset(Offset = "0x3E8")]
	private VisualElement m_AttachedRootVisualContainer;

	[Token(Token = "0x4000428")]
	[FieldOffset(Offset = "0x3F0")]
	private float m_SingleLineHeight;

	[Token(Token = "0x4000429")]
	[FieldOffset(Offset = "0x3F4")]
	internal bool m_MouseWheelScrollSizeIsInline;

	[Token(Token = "0x400042A")]
	[FieldOffset(Offset = "0x3F8")]
	private float m_HorizontalPageSize;

	[Token(Token = "0x400042B")]
	[FieldOffset(Offset = "0x3FC")]
	private float m_VerticalPageSize;

	[Token(Token = "0x400042C")]
	[FieldOffset(Offset = "0x400")]
	private float m_MouseWheelScrollSize;

	[Token(Token = "0x400042D")]
	[FieldOffset(Offset = "0x780")]
	private static readonly float k_DefaultScrollDecelerationRate;

	[Token(Token = "0x400042E")]
	[FieldOffset(Offset = "0x404")]
	private float m_ScrollDecelerationRate;

	[Token(Token = "0x400042F")]
	[FieldOffset(Offset = "0x784")]
	private static readonly float k_DefaultElasticity;

	[Token(Token = "0x4000430")]
	[FieldOffset(Offset = "0x408")]
	private float m_Elasticity;

	[Token(Token = "0x4000431")]
	[FieldOffset(Offset = "0x40C")]
	private TouchScrollBehavior m_TouchScrollBehavior;

	[Token(Token = "0x4000432")]
	[FieldOffset(Offset = "0x410")]
	private NestedInteractionKind m_NestedInteractionKind;

	[Token(Token = "0x4000433")]
	[FieldOffset(Offset = "0x788")]
	private static readonly long k_DefaultElasticAnimationInterval;

	[Token(Token = "0x4000434")]
	[FieldOffset(Offset = "0x418")]
	private long m_ElasticAnimationIntervalMs;

	[Token(Token = "0x4000438")]
	[FieldOffset(Offset = "0x438")]
	private VisualElement m_ContentContainer;

	[Token(Token = "0x4000439")]
	[FieldOffset(Offset = "0x440")]
	private VisualElement m_ContentAndVerticalScrollContainer;

	[Token(Token = "0x400043A")]
	[FieldOffset(Offset = "0x790")]
	public static readonly string ussClassName;

	[Token(Token = "0x400043B")]
	[FieldOffset(Offset = "0x798")]
	public static readonly string viewportUssClassName;

	[Token(Token = "0x400043C")]
	[FieldOffset(Offset = "0x7A0")]
	public static readonly string horizontalVariantViewportUssClassName;

	[Token(Token = "0x400043D")]
	[FieldOffset(Offset = "0x7A8")]
	public static readonly string verticalVariantViewportUssClassName;

	[Token(Token = "0x400043E")]
	[FieldOffset(Offset = "0x7B0")]
	public static readonly string verticalHorizontalVariantViewportUssClassName;

	[Token(Token = "0x400043F")]
	[FieldOffset(Offset = "0x7B8")]
	public static readonly string contentAndVerticalScrollUssClassName;

	[Token(Token = "0x4000440")]
	[FieldOffset(Offset = "0x7C0")]
	public static readonly string contentUssClassName;

	[Token(Token = "0x4000441")]
	[FieldOffset(Offset = "0x7C8")]
	public static readonly string horizontalVariantContentUssClassName;

	[Token(Token = "0x4000442")]
	[FieldOffset(Offset = "0x7D0")]
	public static readonly string verticalVariantContentUssClassName;

	[Token(Token = "0x4000443")]
	[FieldOffset(Offset = "0x7D8")]
	public static readonly string verticalHorizontalVariantContentUssClassName;

	[Token(Token = "0x4000444")]
	[FieldOffset(Offset = "0x7E0")]
	public static readonly string hScrollerUssClassName;

	[Token(Token = "0x4000445")]
	[FieldOffset(Offset = "0x7E8")]
	public static readonly string vScrollerUssClassName;

	[Token(Token = "0x4000446")]
	[FieldOffset(Offset = "0x7F0")]
	public static readonly string horizontalVariantUssClassName;

	[Token(Token = "0x4000447")]
	[FieldOffset(Offset = "0x7F8")]
	public static readonly string verticalVariantUssClassName;

	[Token(Token = "0x4000448")]
	[FieldOffset(Offset = "0x800")]
	public static readonly string verticalHorizontalVariantUssClassName;

	[Token(Token = "0x4000449")]
	[FieldOffset(Offset = "0x808")]
	public static readonly string scrollVariantUssClassName;

	[Token(Token = "0x400044A")]
	[FieldOffset(Offset = "0x448")]
	private ScrollViewMode m_Mode;

	[Token(Token = "0x400044B")]
	[FieldOffset(Offset = "0x450")]
	private IVisualElementScheduledItem m_ScheduledLayoutPassResetItem;

	[Token(Token = "0x400044C")]
	[FieldOffset(Offset = "0x458")]
	private int m_ScrollingPointerId;

	[Token(Token = "0x400044D")]
	[FieldOffset(Offset = "0x45C")]
	private Vector2 m_StartPosition;

	[Token(Token = "0x400044E")]
	[FieldOffset(Offset = "0x464")]
	private Vector2 m_PointerStartPosition;

	[Token(Token = "0x400044F")]
	[FieldOffset(Offset = "0x46C")]
	private Vector2 m_Velocity;

	[Token(Token = "0x4000450")]
	[FieldOffset(Offset = "0x474")]
	private Vector2 m_SpringBackVelocity;

	[Token(Token = "0x4000451")]
	[FieldOffset(Offset = "0x47C")]
	private Vector2 m_LowBounds;

	[Token(Token = "0x4000452")]
	[FieldOffset(Offset = "0x484")]
	private Vector2 m_HighBounds;

	[Token(Token = "0x4000453")]
	[FieldOffset(Offset = "0x48C")]
	private float m_LastVelocityLerpTime;

	[Token(Token = "0x4000454")]
	[FieldOffset(Offset = "0x490")]
	private bool m_StartedMoving;

	[Token(Token = "0x4000455")]
	[FieldOffset(Offset = "0x491")]
	private bool m_TouchStoppedVelocity;

	[Token(Token = "0x4000456")]
	[FieldOffset(Offset = "0x498")]
	private VisualElement m_CapturedTarget;

	[Token(Token = "0x4000457")]
	[FieldOffset(Offset = "0x4A0")]
	private EventCallback<PointerMoveEvent> m_CapturedTargetPointerMoveCallback;

	[Token(Token = "0x4000458")]
	[FieldOffset(Offset = "0x4A8")]
	private EventCallback<PointerUpEvent> m_CapturedTargetPointerUpCallback;

	[Token(Token = "0x4000459")]
	[FieldOffset(Offset = "0x4B0")]
	internal IVisualElementScheduledItem m_PostPointerUpAnimation;

	[Token(Token = "0x1700012C")]
	[CreateProperty]
	public ScrollerVisibility horizontalScrollerVisibility
	{
		[Token(Token = "0x60006CC")]
		[Address(RVA = "0x4CCD550", Offset = "0x4CCD550", VA = "0x4CCD550")]
		get
		{
			return default(ScrollerVisibility);
		}
		[Token(Token = "0x60006CD")]
		[Address(RVA = "0x4CCD560", Offset = "0x4CCD560", VA = "0x4CCD560")]
		set
		{
		}
	}

	[Token(Token = "0x1700012D")]
	[CreateProperty]
	public ScrollerVisibility verticalScrollerVisibility
	{
		[Token(Token = "0x60006CE")]
		[Address(RVA = "0x4CCDDA0", Offset = "0x4CCDDA0", VA = "0x4CCDDA0")]
		get
		{
			return default(ScrollerVisibility);
		}
		[Token(Token = "0x60006CF")]
		[Address(RVA = "0x4CCDDB0", Offset = "0x4CCDDB0", VA = "0x4CCDDB0")]
		set
		{
		}
	}

	[Token(Token = "0x1700012E")]
	[Obsolete("showHorizontal is obsolete. Use horizontalScrollerVisibility instead")]
	public bool showHorizontal
	{
		[Token(Token = "0x60006D0")]
		[Address(RVA = "0x4CCDF70", Offset = "0x4CCDF70", VA = "0x4CCDF70")]
		set
		{
		}
	}

	[Token(Token = "0x1700012F")]
	[Obsolete("showVertical is obsolete. Use verticalScrollerVisibility instead")]
	public bool showVertical
	{
		[Token(Token = "0x60006D1")]
		[Address(RVA = "0x4CCDF90", Offset = "0x4CCDF90", VA = "0x4CCDF90")]
		set
		{
		}
	}

	[Token(Token = "0x17000130")]
	internal bool needsHorizontal
	{
		[Token(Token = "0x60006D2")]
		[Address(RVA = "0x4CCD740", Offset = "0x4CCD740", VA = "0x4CCD740")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000131")]
	internal bool needsVertical
	{
		[Token(Token = "0x60006D3")]
		[Address(RVA = "0x4CCD7D0", Offset = "0x4CCD7D0", VA = "0x4CCD7D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000132")]
	internal bool isVerticalScrollDisplayed
	{
		[Token(Token = "0x60006D4")]
		[Address(RVA = "0x4CCE070", Offset = "0x4CCE070", VA = "0x4CCE070")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000133")]
	internal bool isHorizontalScrollDisplayed
	{
		[Token(Token = "0x60006D5")]
		[Address(RVA = "0x4CCE130", Offset = "0x4CCE130", VA = "0x4CCE130")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000134")]
	[CreateProperty]
	public Vector2 scrollOffset
	{
		[Token(Token = "0x60006D6")]
		[Address(RVA = "0x4CCE1F0", Offset = "0x4CCE1F0", VA = "0x4CCE1F0")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x60006D7")]
		[Address(RVA = "0x4CCE240", Offset = "0x4CCE240", VA = "0x4CCE240")]
		set
		{
		}
	}

	[Token(Token = "0x17000135")]
	[CreateProperty]
	public float horizontalPageSize
	{
		[Token(Token = "0x60006D8")]
		[Address(RVA = "0x4CCE830", Offset = "0x4CCE830", VA = "0x4CCE830")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60006D9")]
		[Address(RVA = "0x4CCE840", Offset = "0x4CCE840", VA = "0x4CCE840")]
		set
		{
		}
	}

	[Token(Token = "0x17000136")]
	[CreateProperty]
	public float verticalPageSize
	{
		[Token(Token = "0x60006DA")]
		[Address(RVA = "0x4CCEBC0", Offset = "0x4CCEBC0", VA = "0x4CCEBC0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60006DB")]
		[Address(RVA = "0x4CCEBD0", Offset = "0x4CCEBD0", VA = "0x4CCEBD0")]
		set
		{
		}
	}

	[Token(Token = "0x17000137")]
	[CreateProperty]
	public float mouseWheelScrollSize
	{
		[Token(Token = "0x60006DC")]
		[Address(RVA = "0x4CCEF50", Offset = "0x4CCEF50", VA = "0x4CCEF50")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60006DD")]
		[Address(RVA = "0x4CCEF60", Offset = "0x4CCEF60", VA = "0x4CCEF60")]
		set
		{
		}
	}

	[Token(Token = "0x17000138")]
	internal float scrollableWidth
	{
		[Token(Token = "0x60006DE")]
		[Address(RVA = "0x4CCDFB0", Offset = "0x4CCDFB0", VA = "0x4CCDFB0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000139")]
	internal float scrollableHeight
	{
		[Token(Token = "0x60006DF")]
		[Address(RVA = "0x4CCE010", Offset = "0x4CCE010", VA = "0x4CCE010")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700013A")]
	private bool hasInertia
	{
		[Token(Token = "0x60006E0")]
		[Address(RVA = "0x4CCF080", Offset = "0x4CCF080", VA = "0x4CCF080")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700013B")]
	[CreateProperty]
	public float scrollDecelerationRate
	{
		[Token(Token = "0x60006E1")]
		[Address(RVA = "0x4CCF0A0", Offset = "0x4CCF0A0", VA = "0x4CCF0A0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60006E2")]
		[Address(RVA = "0x4CCF0B0", Offset = "0x4CCF0B0", VA = "0x4CCF0B0")]
		set
		{
		}
	}

	[Token(Token = "0x1700013C")]
	[CreateProperty]
	public float elasticity
	{
		[Token(Token = "0x60006E3")]
		[Address(RVA = "0x4CCF1D0", Offset = "0x4CCF1D0", VA = "0x4CCF1D0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60006E4")]
		[Address(RVA = "0x4CCF1E0", Offset = "0x4CCF1E0", VA = "0x4CCF1E0")]
		set
		{
		}
	}

	[Token(Token = "0x1700013D")]
	[CreateProperty]
	public TouchScrollBehavior touchScrollBehavior
	{
		[Token(Token = "0x60006E5")]
		[Address(RVA = "0x4CCF300", Offset = "0x4CCF300", VA = "0x4CCF300")]
		get
		{
			return default(TouchScrollBehavior);
		}
		[Token(Token = "0x60006E6")]
		[Address(RVA = "0x4CCF310", Offset = "0x4CCF310", VA = "0x4CCF310")]
		set
		{
		}
	}

	[Token(Token = "0x1700013E")]
	[CreateProperty]
	public NestedInteractionKind nestedInteractionKind
	{
		[Token(Token = "0x60006E7")]
		[Address(RVA = "0x4CCF430", Offset = "0x4CCF430", VA = "0x4CCF430")]
		get
		{
			return default(NestedInteractionKind);
		}
		[Token(Token = "0x60006E8")]
		[Address(RVA = "0x4CCF440", Offset = "0x4CCF440", VA = "0x4CCF440")]
		set
		{
		}
	}

	[Token(Token = "0x1700013F")]
	[CreateProperty]
	public long elasticAnimationIntervalMs
	{
		[Token(Token = "0x60006E9")]
		[Address(RVA = "0x4CCF4E0", Offset = "0x4CCF4E0", VA = "0x4CCF4E0")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x60006EA")]
		[Address(RVA = "0x4CCF4F0", Offset = "0x4CCF4F0", VA = "0x4CCF4F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000140")]
	public VisualElement contentViewport
	{
		[Token(Token = "0x60006F4")]
		[Address(RVA = "0x4CCFF40", Offset = "0x4CCFF40", VA = "0x4CCFF40")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000141")]
	public Scroller horizontalScroller
	{
		[Token(Token = "0x60006F5")]
		[Address(RVA = "0x4CCFF50", Offset = "0x4CCFF50", VA = "0x4CCFF50")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000142")]
	public Scroller verticalScroller
	{
		[Token(Token = "0x60006F6")]
		[Address(RVA = "0x4CCFF60", Offset = "0x4CCFF60", VA = "0x4CCFF60")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000143")]
	public override VisualElement contentContainer
	{
		[Token(Token = "0x60006F7")]
		[Address(RVA = "0x4CCFF70", Offset = "0x4CCFF70", VA = "0x4CCFF70", Slot = "97")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000144")]
	[CreateProperty]
	public ScrollViewMode mode
	{
		[Token(Token = "0x60006FA")]
		[Address(RVA = "0x4CD0EF0", Offset = "0x4CD0EF0", VA = "0x4CD0EF0")]
		get
		{
			return default(ScrollViewMode);
		}
		[Token(Token = "0x60006FB")]
		[Address(RVA = "0x4CD0F00", Offset = "0x4CD0F00", VA = "0x4CD0F00")]
		set
		{
		}
	}

	[Token(Token = "0x60006EB")]
	[Address(RVA = "0x4CCF720", Offset = "0x4CCF720", VA = "0x4CCF720")]
	private void OnHorizontalScrollDragElementChanged(GeometryChangedEvent evt)
	{
	}

	[Token(Token = "0x60006EC")]
	[Address(RVA = "0x4CCF760", Offset = "0x4CCF760", VA = "0x4CCF760")]
	private void OnVerticalScrollDragElementChanged(GeometryChangedEvent evt)
	{
	}

	[Token(Token = "0x60006ED")]
	[Address(RVA = "0x4CCE970", Offset = "0x4CCE970", VA = "0x4CCE970")]
	private void UpdateHorizontalSliderPageSize()
	{
	}

	[Token(Token = "0x60006EE")]
	[Address(RVA = "0x4CCED00", Offset = "0x4CCED00", VA = "0x4CCED00")]
	private void UpdateVerticalSliderPageSize()
	{
	}

	[Token(Token = "0x60006EF")]
	[Address(RVA = "0x4CCE4C0", Offset = "0x4CCE4C0", VA = "0x4CCE4C0")]
	internal void UpdateContentViewTransform()
	{
	}

	[Token(Token = "0x60006F0")]
	[Address(RVA = "0x4CCF7A0", Offset = "0x4CCF7A0", VA = "0x4CCF7A0")]
	public void ScrollTo(VisualElement child)
	{
	}

	[Token(Token = "0x60006F1")]
	[Address(RVA = "0x4CCFCB0", Offset = "0x4CCFCB0", VA = "0x4CCFCB0")]
	private float GetXDeltaOffset(VisualElement child)
	{
		return default(float);
	}

	[Token(Token = "0x60006F2")]
	[Address(RVA = "0x4CCFA50", Offset = "0x4CCFA50", VA = "0x4CCFA50")]
	private float GetYDeltaOffset(VisualElement child)
	{
		return default(float);
	}

	[Token(Token = "0x60006F3")]
	[Address(RVA = "0x4CCFEF0", Offset = "0x4CCFEF0", VA = "0x4CCFEF0")]
	private float GetDeltaDistance(float viewMin, float viewMax, float childBoundaryMin, float childBoundaryMax)
	{
		return default(float);
	}

	[Token(Token = "0x60006F8")]
	[Address(RVA = "0x4CCFF80", Offset = "0x4CCFF80", VA = "0x4CCFF80")]
	public ScrollView()
	{
	}

	[Token(Token = "0x60006F9")]
	[Address(RVA = "0x4CCFF90", Offset = "0x4CCFF90", VA = "0x4CCFF90")]
	public ScrollView(ScrollViewMode scrollViewMode)
	{
	}

	[Token(Token = "0x60006FC")]
	[Address(RVA = "0x4CD0B30", Offset = "0x4CD0B30", VA = "0x4CD0B30")]
	private void SetScrollViewMode(ScrollViewMode mode)
	{
	}

	[Token(Token = "0x60006FD")]
	[Address(RVA = "0x4CD0FA0", Offset = "0x4CD0FA0", VA = "0x4CD0FA0")]
	private void OnAttachToPanel(AttachToPanelEvent evt)
	{
	}

	[Token(Token = "0x60006FE")]
	[Address(RVA = "0x4CD1540", Offset = "0x4CD1540", VA = "0x4CD1540")]
	private void OnDetachFromPanel(DetachFromPanelEvent evt)
	{
	}

	[Token(Token = "0x60006FF")]
	[Address(RVA = "0x4CD1A30", Offset = "0x4CD1A30", VA = "0x4CD1A30")]
	private void OnPointerCapture(PointerCaptureEvent evt)
	{
	}

	[Token(Token = "0x6000700")]
	[Address(RVA = "0x4CD1AF0", Offset = "0x4CD1AF0", VA = "0x4CD1AF0")]
	private void OnPointerCaptureOut(PointerCaptureOutEvent evt)
	{
	}

	[Token(Token = "0x6000701")]
	[Address(RVA = "0x4CD1CC0", Offset = "0x4CD1CC0", VA = "0x4CD1CC0")]
	private void OnGeometryChanged(GeometryChangedEvent evt)
	{
	}

	[Token(Token = "0x6000702")]
	[Address(RVA = "0x4CD1ED0", Offset = "0x4CD1ED0", VA = "0x4CD1ED0")]
	private void ScheduleResetLayoutPass()
	{
	}

	[Token(Token = "0x6000703")]
	[Address(RVA = "0x4CD1A20", Offset = "0x4CD1A20", VA = "0x4CD1A20")]
	private void ResetLayoutPass()
	{
	}

	[Token(Token = "0x6000704")]
	[Address(RVA = "0x4CD2100", Offset = "0x4CD2100", VA = "0x4CD2100")]
	private static float ComputeElasticOffset(float deltaPointer, float initialScrollOffset, float lowLimit, float hardLowLimit, float highLimit, float hardHighLimit)
	{
		return default(float);
	}

	[Token(Token = "0x6000705")]
	[Address(RVA = "0x4CD2210", Offset = "0x4CD2210", VA = "0x4CD2210")]
	private void ComputeInitialSpringBackVelocity()
	{
	}

	[Token(Token = "0x6000706")]
	[Address(RVA = "0x4CD2430", Offset = "0x4CD2430", VA = "0x4CD2430")]
	private void SpringBack()
	{
	}

	[Token(Token = "0x6000707")]
	[Address(RVA = "0x4CD2650", Offset = "0x4CD2650", VA = "0x4CD2650")]
	internal void ApplyScrollInertia()
	{
	}

	[Token(Token = "0x6000708")]
	[Address(RVA = "0x4CD2950", Offset = "0x4CD2950", VA = "0x4CD2950")]
	private void PostPointerUpAnimation()
	{
	}

	[Token(Token = "0x6000709")]
	[Address(RVA = "0x4CD2AA0", Offset = "0x4CD2AA0", VA = "0x4CD2AA0")]
	private void OnPointerDown(PointerDownEvent evt)
	{
	}

	[Token(Token = "0x600070A")]
	[Address(RVA = "0x4CD2F10", Offset = "0x4CD2F10", VA = "0x4CD2F10")]
	private void OnPointerMove(PointerMoveEvent evt)
	{
	}

	[Token(Token = "0x600070B")]
	[Address(RVA = "0x4CD3890", Offset = "0x4CD3890", VA = "0x4CD3890")]
	private void OnPointerCancel(PointerCancelEvent evt)
	{
	}

	[Token(Token = "0x600070C")]
	[Address(RVA = "0x4CD38F0", Offset = "0x4CD38F0", VA = "0x4CD38F0")]
	private void OnPointerUp(PointerUpEvent evt)
	{
	}

	[Token(Token = "0x600070D")]
	[Address(RVA = "0x4CD2D30", Offset = "0x4CD2D30", VA = "0x4CD2D30")]
	internal void InitTouchScrolling(Vector2 position)
	{
	}

	[Token(Token = "0x600070E")]
	[Address(RVA = "0x4CD3170", Offset = "0x4CD3170", VA = "0x4CD3170")]
	internal TouchScrollingResult ComputeTouchScrolling(Vector2 position)
	{
		return default(TouchScrollingResult);
	}

	[Token(Token = "0x600070F")]
	[Address(RVA = "0x4CD3990", Offset = "0x4CD3990", VA = "0x4CD3990")]
	private bool ApplyTouchScrolling(Vector2 newScrollOffset)
	{
		return default(bool);
	}

	[Token(Token = "0x6000710")]
	[Address(RVA = "0x4CD1BC0", Offset = "0x4CD1BC0", VA = "0x4CD1BC0")]
	private bool ReleaseScrolling(int pointerId, IEventHandler target)
	{
		return default(bool);
	}

	[Token(Token = "0x6000711")]
	[Address(RVA = "0x4CD3C10", Offset = "0x4CD3C10", VA = "0x4CD3C10")]
	private void ExecuteElasticSpringAnimation()
	{
	}

	[Token(Token = "0x6000712")]
	[Address(RVA = "0x4CD3E50", Offset = "0x4CD3E50", VA = "0x4CD3E50")]
	private void AdjustScrollers()
	{
	}

	[Token(Token = "0x6000713")]
	[Address(RVA = "0x4CCD860", Offset = "0x4CCD860", VA = "0x4CCD860")]
	internal void UpdateScrollers(bool displayHorizontal, bool displayVertical)
	{
	}

	[Token(Token = "0x6000714")]
	[Address(RVA = "0x4CD3FD0", Offset = "0x4CD3FD0", VA = "0x4CD3FD0")]
	private void OnScrollersGeometryChanged(GeometryChangedEvent evt)
	{
	}

	[Token(Token = "0x6000715")]
	[Address(RVA = "0x4CD4190", Offset = "0x4CD4190", VA = "0x4CD4190")]
	private void OnScrollWheel(WheelEvent evt)
	{
	}

	[Token(Token = "0x6000716")]
	[Address(RVA = "0x4CD4720", Offset = "0x4CD4720", VA = "0x4CD4720")]
	private void OnRootCustomStyleResolved(CustomStyleResolvedEvent evt)
	{
	}

	[Token(Token = "0x6000717")]
	[Address(RVA = "0x4CD1430", Offset = "0x4CD1430", VA = "0x4CD1430")]
	private void ReadSingleLineHeight()
	{
	}

	[Token(Token = "0x6000718")]
	[Address(RVA = "0x4CD45B0", Offset = "0x4CD45B0", VA = "0x4CD45B0")]
	private void UpdateElasticBehaviour()
	{
	}
}
