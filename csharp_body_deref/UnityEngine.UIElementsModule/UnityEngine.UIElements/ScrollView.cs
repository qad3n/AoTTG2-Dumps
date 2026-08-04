// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.ScrollView
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4FFCB20", Offset = "0x4FFCB20", VA = "0x4FFCB20")]
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
		[Address(RVA = "0x4FFCB60", Offset = "0x4FFCB60", VA = "0x4FFCB60", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x600071E")]
		[Address(RVA = "0x4FFD100", Offset = "0x4FFD100", VA = "0x4FFD100")]
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
		[Address(RVA = "0x4FF4E80", Offset = "0x4FF4E80", VA = "0x4FF4E80")]
		get
		{
			return default(ScrollerVisibility);
		}
		[Token(Token = "0x60006CD")]
		[Address(RVA = "0x4FF4E90", Offset = "0x4FF4E90", VA = "0x4FF4E90")]
		set
		{
		}
	}

	[Token(Token = "0x1700012D")]
	[CreateProperty]
	public ScrollerVisibility verticalScrollerVisibility
	{
		[Token(Token = "0x60006CE")]
		[Address(RVA = "0x4FF56D0", Offset = "0x4FF56D0", VA = "0x4FF56D0")]
		get
		{
			return default(ScrollerVisibility);
		}
		[Token(Token = "0x60006CF")]
		[Address(RVA = "0x4FF56E0", Offset = "0x4FF56E0", VA = "0x4FF56E0")]
		set
		{
		}
	}

	[Token(Token = "0x1700012E")]
	[Obsolete("showHorizontal is obsolete. Use horizontalScrollerVisibility instead")]
	public bool showHorizontal
	{
		[Token(Token = "0x60006D0")]
		[Address(RVA = "0x4FF58A0", Offset = "0x4FF58A0", VA = "0x4FF58A0")]
		set
		{
		}
	}

	[Token(Token = "0x1700012F")]
	[Obsolete("showVertical is obsolete. Use verticalScrollerVisibility instead")]
	public bool showVertical
	{
		[Token(Token = "0x60006D1")]
		[Address(RVA = "0x4FF58C0", Offset = "0x4FF58C0", VA = "0x4FF58C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000130")]
	internal bool needsHorizontal
	{
		[Token(Token = "0x60006D2")]
		[Address(RVA = "0x4FF5070", Offset = "0x4FF5070", VA = "0x4FF5070")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000131")]
	internal bool needsVertical
	{
		[Token(Token = "0x60006D3")]
		[Address(RVA = "0x4FF5100", Offset = "0x4FF5100", VA = "0x4FF5100")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000132")]
	internal bool isVerticalScrollDisplayed
	{
		[Token(Token = "0x60006D4")]
		[Address(RVA = "0x4FF59A0", Offset = "0x4FF59A0", VA = "0x4FF59A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000133")]
	internal bool isHorizontalScrollDisplayed
	{
		[Token(Token = "0x60006D5")]
		[Address(RVA = "0x4FF5A60", Offset = "0x4FF5A60", VA = "0x4FF5A60")]
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
		[Address(RVA = "0x4FF5B20", Offset = "0x4FF5B20", VA = "0x4FF5B20")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x60006D7")]
		[Address(RVA = "0x4FF5B70", Offset = "0x4FF5B70", VA = "0x4FF5B70")]
		set
		{
		}
	}

	[Token(Token = "0x17000135")]
	[CreateProperty]
	public float horizontalPageSize
	{
		[Token(Token = "0x60006D8")]
		[Address(RVA = "0x4FF6160", Offset = "0x4FF6160", VA = "0x4FF6160")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60006D9")]
		[Address(RVA = "0x4FF6170", Offset = "0x4FF6170", VA = "0x4FF6170")]
		set
		{
		}
	}

	[Token(Token = "0x17000136")]
	[CreateProperty]
	public float verticalPageSize
	{
		[Token(Token = "0x60006DA")]
		[Address(RVA = "0x4FF64F0", Offset = "0x4FF64F0", VA = "0x4FF64F0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60006DB")]
		[Address(RVA = "0x4FF6500", Offset = "0x4FF6500", VA = "0x4FF6500")]
		set
		{
		}
	}

	[Token(Token = "0x17000137")]
	[CreateProperty]
	public float mouseWheelScrollSize
	{
		[Token(Token = "0x60006DC")]
		[Address(RVA = "0x4FF6880", Offset = "0x4FF6880", VA = "0x4FF6880")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60006DD")]
		[Address(RVA = "0x4FF6890", Offset = "0x4FF6890", VA = "0x4FF6890")]
		set
		{
		}
	}

	[Token(Token = "0x17000138")]
	internal float scrollableWidth
	{
		[Token(Token = "0x60006DE")]
		[Address(RVA = "0x4FF58E0", Offset = "0x4FF58E0", VA = "0x4FF58E0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000139")]
	internal float scrollableHeight
	{
		[Token(Token = "0x60006DF")]
		[Address(RVA = "0x4FF5940", Offset = "0x4FF5940", VA = "0x4FF5940")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700013A")]
	private bool hasInertia
	{
		[Token(Token = "0x60006E0")]
		[Address(RVA = "0x4FF69B0", Offset = "0x4FF69B0", VA = "0x4FF69B0")]
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
		[Address(RVA = "0x4FF69D0", Offset = "0x4FF69D0", VA = "0x4FF69D0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60006E2")]
		[Address(RVA = "0x4FF69E0", Offset = "0x4FF69E0", VA = "0x4FF69E0")]
		set
		{
		}
	}

	[Token(Token = "0x1700013C")]
	[CreateProperty]
	public float elasticity
	{
		[Token(Token = "0x60006E3")]
		[Address(RVA = "0x4FF6B00", Offset = "0x4FF6B00", VA = "0x4FF6B00")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60006E4")]
		[Address(RVA = "0x4FF6B10", Offset = "0x4FF6B10", VA = "0x4FF6B10")]
		set
		{
		}
	}

	[Token(Token = "0x1700013D")]
	[CreateProperty]
	public TouchScrollBehavior touchScrollBehavior
	{
		[Token(Token = "0x60006E5")]
		[Address(RVA = "0x4FF6C30", Offset = "0x4FF6C30", VA = "0x4FF6C30")]
		get
		{
			return default(TouchScrollBehavior);
		}
		[Token(Token = "0x60006E6")]
		[Address(RVA = "0x4FF6C40", Offset = "0x4FF6C40", VA = "0x4FF6C40")]
		set
		{
		}
	}

	[Token(Token = "0x1700013E")]
	[CreateProperty]
	public NestedInteractionKind nestedInteractionKind
	{
		[Token(Token = "0x60006E7")]
		[Address(RVA = "0x4FF6D60", Offset = "0x4FF6D60", VA = "0x4FF6D60")]
		get
		{
			return default(NestedInteractionKind);
		}
		[Token(Token = "0x60006E8")]
		[Address(RVA = "0x4FF6D70", Offset = "0x4FF6D70", VA = "0x4FF6D70")]
		set
		{
		}
	}

	[Token(Token = "0x1700013F")]
	[CreateProperty]
	public long elasticAnimationIntervalMs
	{
		[Token(Token = "0x60006E9")]
		[Address(RVA = "0x4FF6E10", Offset = "0x4FF6E10", VA = "0x4FF6E10")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x60006EA")]
		[Address(RVA = "0x4FF6E20", Offset = "0x4FF6E20", VA = "0x4FF6E20")]
		set
		{
		}
	}

	[Token(Token = "0x17000140")]
	public VisualElement contentViewport
	{
		[Token(Token = "0x60006F4")]
		[Address(RVA = "0x4FF7870", Offset = "0x4FF7870", VA = "0x4FF7870")]
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
		[Address(RVA = "0x4FF7880", Offset = "0x4FF7880", VA = "0x4FF7880")]
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
		[Address(RVA = "0x4FF7890", Offset = "0x4FF7890", VA = "0x4FF7890")]
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
		[Address(RVA = "0x4FF78A0", Offset = "0x4FF78A0", VA = "0x4FF78A0", Slot = "97")]
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
		[Address(RVA = "0x4FF8820", Offset = "0x4FF8820", VA = "0x4FF8820")]
		get
		{
			return default(ScrollViewMode);
		}
		[Token(Token = "0x60006FB")]
		[Address(RVA = "0x4FF8830", Offset = "0x4FF8830", VA = "0x4FF8830")]
		set
		{
		}
	}

	[Token(Token = "0x60006EB")]
	[Address(RVA = "0x4FF7050", Offset = "0x4FF7050", VA = "0x4FF7050")]
	private void OnHorizontalScrollDragElementChanged(GeometryChangedEvent evt)
	{
	}

	[Token(Token = "0x60006EC")]
	[Address(RVA = "0x4FF7090", Offset = "0x4FF7090", VA = "0x4FF7090")]
	private void OnVerticalScrollDragElementChanged(GeometryChangedEvent evt)
	{
	}

	[Token(Token = "0x60006ED")]
	[Address(RVA = "0x4FF62A0", Offset = "0x4FF62A0", VA = "0x4FF62A0")]
	private void UpdateHorizontalSliderPageSize()
	{
	}

	[Token(Token = "0x60006EE")]
	[Address(RVA = "0x4FF6630", Offset = "0x4FF6630", VA = "0x4FF6630")]
	private void UpdateVerticalSliderPageSize()
	{
	}

	[Token(Token = "0x60006EF")]
	[Address(RVA = "0x4FF5DF0", Offset = "0x4FF5DF0", VA = "0x4FF5DF0")]
	internal void UpdateContentViewTransform()
	{
	}

	[Token(Token = "0x60006F0")]
	[Address(RVA = "0x4FF70D0", Offset = "0x4FF70D0", VA = "0x4FF70D0")]
	public void ScrollTo(VisualElement child)
	{
	}

	[Token(Token = "0x60006F1")]
	[Address(RVA = "0x4FF75E0", Offset = "0x4FF75E0", VA = "0x4FF75E0")]
	private float GetXDeltaOffset(VisualElement child)
	{
		return default(float);
	}

	[Token(Token = "0x60006F2")]
	[Address(RVA = "0x4FF7380", Offset = "0x4FF7380", VA = "0x4FF7380")]
	private float GetYDeltaOffset(VisualElement child)
	{
		return default(float);
	}

	[Token(Token = "0x60006F3")]
	[Address(RVA = "0x4FF7820", Offset = "0x4FF7820", VA = "0x4FF7820")]
	private float GetDeltaDistance(float viewMin, float viewMax, float childBoundaryMin, float childBoundaryMax)
	{
		return default(float);
	}

	[Token(Token = "0x60006F8")]
	[Address(RVA = "0x4FF78B0", Offset = "0x4FF78B0", VA = "0x4FF78B0")]
	public ScrollView()
	{
	}

	[Token(Token = "0x60006F9")]
	[Address(RVA = "0x4FF78C0", Offset = "0x4FF78C0", VA = "0x4FF78C0")]
	public ScrollView(ScrollViewMode scrollViewMode)
	{
	}

	[Token(Token = "0x60006FC")]
	[Address(RVA = "0x4FF8460", Offset = "0x4FF8460", VA = "0x4FF8460")]
	private void SetScrollViewMode(ScrollViewMode mode)
	{
	}

	[Token(Token = "0x60006FD")]
	[Address(RVA = "0x4FF88D0", Offset = "0x4FF88D0", VA = "0x4FF88D0")]
	private void OnAttachToPanel(AttachToPanelEvent evt)
	{
	}

	[Token(Token = "0x60006FE")]
	[Address(RVA = "0x4FF8E70", Offset = "0x4FF8E70", VA = "0x4FF8E70")]
	private void OnDetachFromPanel(DetachFromPanelEvent evt)
	{
	}

	[Token(Token = "0x60006FF")]
	[Address(RVA = "0x4FF9360", Offset = "0x4FF9360", VA = "0x4FF9360")]
	private void OnPointerCapture(PointerCaptureEvent evt)
	{
	}

	[Token(Token = "0x6000700")]
	[Address(RVA = "0x4FF9420", Offset = "0x4FF9420", VA = "0x4FF9420")]
	private void OnPointerCaptureOut(PointerCaptureOutEvent evt)
	{
	}

	[Token(Token = "0x6000701")]
	[Address(RVA = "0x4FF95F0", Offset = "0x4FF95F0", VA = "0x4FF95F0")]
	private void OnGeometryChanged(GeometryChangedEvent evt)
	{
	}

	[Token(Token = "0x6000702")]
	[Address(RVA = "0x4FF9800", Offset = "0x4FF9800", VA = "0x4FF9800")]
	private void ScheduleResetLayoutPass()
	{
	}

	[Token(Token = "0x6000703")]
	[Address(RVA = "0x4FF9350", Offset = "0x4FF9350", VA = "0x4FF9350")]
	private void ResetLayoutPass()
	{
	}

	[Token(Token = "0x6000704")]
	[Address(RVA = "0x4FF9A30", Offset = "0x4FF9A30", VA = "0x4FF9A30")]
	private static float ComputeElasticOffset(float deltaPointer, float initialScrollOffset, float lowLimit, float hardLowLimit, float highLimit, float hardHighLimit)
	{
		return default(float);
	}

	[Token(Token = "0x6000705")]
	[Address(RVA = "0x4FF9B40", Offset = "0x4FF9B40", VA = "0x4FF9B40")]
	private void ComputeInitialSpringBackVelocity()
	{
	}

	[Token(Token = "0x6000706")]
	[Address(RVA = "0x4FF9D60", Offset = "0x4FF9D60", VA = "0x4FF9D60")]
	private void SpringBack()
	{
	}

	[Token(Token = "0x6000707")]
	[Address(RVA = "0x4FF9F80", Offset = "0x4FF9F80", VA = "0x4FF9F80")]
	internal void ApplyScrollInertia()
	{
	}

	[Token(Token = "0x6000708")]
	[Address(RVA = "0x4FFA280", Offset = "0x4FFA280", VA = "0x4FFA280")]
	private void PostPointerUpAnimation()
	{
	}

	[Token(Token = "0x6000709")]
	[Address(RVA = "0x4FFA3D0", Offset = "0x4FFA3D0", VA = "0x4FFA3D0")]
	private void OnPointerDown(PointerDownEvent evt)
	{
	}

	[Token(Token = "0x600070A")]
	[Address(RVA = "0x4FFA840", Offset = "0x4FFA840", VA = "0x4FFA840")]
	private void OnPointerMove(PointerMoveEvent evt)
	{
	}

	[Token(Token = "0x600070B")]
	[Address(RVA = "0x4FFB1C0", Offset = "0x4FFB1C0", VA = "0x4FFB1C0")]
	private void OnPointerCancel(PointerCancelEvent evt)
	{
	}

	[Token(Token = "0x600070C")]
	[Address(RVA = "0x4FFB220", Offset = "0x4FFB220", VA = "0x4FFB220")]
	private void OnPointerUp(PointerUpEvent evt)
	{
	}

	[Token(Token = "0x600070D")]
	[Address(RVA = "0x4FFA660", Offset = "0x4FFA660", VA = "0x4FFA660")]
	internal void InitTouchScrolling(Vector2 position)
	{
	}

	[Token(Token = "0x600070E")]
	[Address(RVA = "0x4FFAAA0", Offset = "0x4FFAAA0", VA = "0x4FFAAA0")]
	internal TouchScrollingResult ComputeTouchScrolling(Vector2 position)
	{
		return default(TouchScrollingResult);
	}

	[Token(Token = "0x600070F")]
	[Address(RVA = "0x4FFB2C0", Offset = "0x4FFB2C0", VA = "0x4FFB2C0")]
	private bool ApplyTouchScrolling(Vector2 newScrollOffset)
	{
		return default(bool);
	}

	[Token(Token = "0x6000710")]
	[Address(RVA = "0x4FF94F0", Offset = "0x4FF94F0", VA = "0x4FF94F0")]
	private bool ReleaseScrolling(int pointerId, IEventHandler target)
	{
		return default(bool);
	}

	[Token(Token = "0x6000711")]
	[Address(RVA = "0x4FFB540", Offset = "0x4FFB540", VA = "0x4FFB540")]
	private void ExecuteElasticSpringAnimation()
	{
	}

	[Token(Token = "0x6000712")]
	[Address(RVA = "0x4FFB780", Offset = "0x4FFB780", VA = "0x4FFB780")]
	private void AdjustScrollers()
	{
	}

	[Token(Token = "0x6000713")]
	[Address(RVA = "0x4FF5190", Offset = "0x4FF5190", VA = "0x4FF5190")]
	internal void UpdateScrollers(bool displayHorizontal, bool displayVertical)
	{
	}

	[Token(Token = "0x6000714")]
	[Address(RVA = "0x4FFB900", Offset = "0x4FFB900", VA = "0x4FFB900")]
	private void OnScrollersGeometryChanged(GeometryChangedEvent evt)
	{
	}

	[Token(Token = "0x6000715")]
	[Address(RVA = "0x4FFBAC0", Offset = "0x4FFBAC0", VA = "0x4FFBAC0")]
	private void OnScrollWheel(WheelEvent evt)
	{
	}

	[Token(Token = "0x6000716")]
	[Address(RVA = "0x4FFC050", Offset = "0x4FFC050", VA = "0x4FFC050")]
	private void OnRootCustomStyleResolved(CustomStyleResolvedEvent evt)
	{
	}

	[Token(Token = "0x6000717")]
	[Address(RVA = "0x4FF8D60", Offset = "0x4FF8D60", VA = "0x4FF8D60")]
	private void ReadSingleLineHeight()
	{
	}

	[Token(Token = "0x6000718")]
	[Address(RVA = "0x4FFBEE0", Offset = "0x4FFBEE0", VA = "0x4FFBEE0")]
	private void UpdateElasticBehaviour()
	{
	}
}
