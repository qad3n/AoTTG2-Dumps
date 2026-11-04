// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.ScrollView
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Properties;
using UnityEngine.Bindings;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000142")]
public class ScrollView : VisualElement
{
	[Token(Token = "0x2000143")]
	[Obsolete("UxmlFactory is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlFactory : UxmlFactory<ScrollView, UxmlTraits>
	{
		[Token(Token = "0x600097D")]
		[Address(RVA = "0x323AE80", Offset = "0x3239480", VA = "0x18323AE80")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x2000144")]
	[Obsolete("UxmlTraits is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlTraits : VisualElement.UxmlTraits
	{
		[Token(Token = "0x40005E1")]
		[FieldOffset(Offset = "0x88")]
		private UxmlEnumAttributeDescription<ScrollViewMode> m_ScrollViewMode;

		[Token(Token = "0x40005E2")]
		[FieldOffset(Offset = "0x90")]
		private UxmlEnumAttributeDescription<NestedInteractionKind> m_NestedInteractionKind;

		[Token(Token = "0x40005E3")]
		[FieldOffset(Offset = "0x98")]
		private UxmlBoolAttributeDescription m_ShowHorizontal;

		[Token(Token = "0x40005E4")]
		[FieldOffset(Offset = "0xA0")]
		private UxmlBoolAttributeDescription m_ShowVertical;

		[Token(Token = "0x40005E5")]
		[FieldOffset(Offset = "0xA8")]
		private UxmlEnumAttributeDescription<ScrollerVisibility> m_HorizontalScrollerVisibility;

		[Token(Token = "0x40005E6")]
		[FieldOffset(Offset = "0xB0")]
		private UxmlEnumAttributeDescription<ScrollerVisibility> m_VerticalScrollerVisibility;

		[Token(Token = "0x40005E7")]
		[FieldOffset(Offset = "0xB8")]
		private UxmlFloatAttributeDescription m_HorizontalPageSize;

		[Token(Token = "0x40005E8")]
		[FieldOffset(Offset = "0xC0")]
		private UxmlFloatAttributeDescription m_VerticalPageSize;

		[Token(Token = "0x40005E9")]
		[FieldOffset(Offset = "0xC8")]
		private UxmlFloatAttributeDescription m_MouseWheelScrollSize;

		[Token(Token = "0x40005EA")]
		[FieldOffset(Offset = "0xD0")]
		private UxmlEnumAttributeDescription<TouchScrollBehavior> m_TouchScrollBehavior;

		[Token(Token = "0x40005EB")]
		[FieldOffset(Offset = "0xD8")]
		private UxmlFloatAttributeDescription m_ScrollDecelerationRate;

		[Token(Token = "0x40005EC")]
		[FieldOffset(Offset = "0xE0")]
		private UxmlFloatAttributeDescription m_Elasticity;

		[Token(Token = "0x600097E")]
		[Address(RVA = "0x323BF10", Offset = "0x323A510", VA = "0x18323BF10", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x600097F")]
		[Address(RVA = "0x323CA60", Offset = "0x323B060", VA = "0x18323CA60")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x2000145")]
	public enum TouchScrollBehavior
	{
		[Token(Token = "0x40005EE")]
		Unrestricted,
		[Token(Token = "0x40005EF")]
		Elastic,
		[Token(Token = "0x40005F0")]
		Clamped
	}

	[Token(Token = "0x2000146")]
	public enum NestedInteractionKind
	{
		[Token(Token = "0x40005F2")]
		Default,
		[Token(Token = "0x40005F3")]
		StopScrolling,
		[Token(Token = "0x40005F4")]
		ForwardScrolling
	}

	[Token(Token = "0x2000147")]
	internal enum TouchScrollingResult
	{
		[Token(Token = "0x40005F6")]
		Apply,
		[Token(Token = "0x40005F7")]
		Forward,
		[Token(Token = "0x40005F8")]
		Block
	}

	[Token(Token = "0x4000593")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly BindingId horizontalScrollerVisibilityProperty;

	[Token(Token = "0x4000594")]
	[FieldOffset(Offset = "0x98")]
	internal static readonly BindingId verticalScrollerVisibilityProperty;

	[Token(Token = "0x4000595")]
	[FieldOffset(Offset = "0x130")]
	internal static readonly BindingId scrollOffsetProperty;

	[Token(Token = "0x4000596")]
	[FieldOffset(Offset = "0x1C8")]
	internal static readonly BindingId horizontalPageSizeProperty;

	[Token(Token = "0x4000597")]
	[FieldOffset(Offset = "0x260")]
	internal static readonly BindingId verticalPageSizeProperty;

	[Token(Token = "0x4000598")]
	[FieldOffset(Offset = "0x2F8")]
	internal static readonly BindingId mouseWheelScrollSizeProperty;

	[Token(Token = "0x4000599")]
	[FieldOffset(Offset = "0x390")]
	internal static readonly BindingId scrollDecelerationRateProperty;

	[Token(Token = "0x400059A")]
	[FieldOffset(Offset = "0x428")]
	internal static readonly BindingId elasticityProperty;

	[Token(Token = "0x400059B")]
	[FieldOffset(Offset = "0x4C0")]
	internal static readonly BindingId touchScrollBehaviorProperty;

	[Token(Token = "0x400059C")]
	[FieldOffset(Offset = "0x558")]
	internal static readonly BindingId nestedInteractionKindProperty;

	[Token(Token = "0x400059D")]
	[FieldOffset(Offset = "0x5F0")]
	internal static readonly BindingId modeProperty;

	[Token(Token = "0x400059E")]
	[FieldOffset(Offset = "0x688")]
	internal static readonly BindingId elasticAnimationIntervalMsProperty;

	[Token(Token = "0x400059F")]
	[FieldOffset(Offset = "0x2C8")]
	private VisualElement m_DeferredScrollToElement;

	[Token(Token = "0x40005A0")]
	[FieldOffset(Offset = "0x2D0")]
	private IVisualElementScheduledItem m_DeferredScrollTo;

	[Token(Token = "0x40005A1")]
	[FieldOffset(Offset = "0x2D8")]
	private Vector2 m_LastDeferredScrollOffset;

	[Token(Token = "0x40005A2")]
	[FieldOffset(Offset = "0x2E0")]
	private int m_DeferredScrollToAttempts;

	[Token(Token = "0x40005A3")]
	[FieldOffset(Offset = "0x2E4")]
	private int m_FirstLayoutPass;

	[Token(Token = "0x40005A4")]
	[FieldOffset(Offset = "0x2E8")]
	private ScrollerVisibility m_HorizontalScrollerVisibility;

	[Token(Token = "0x40005A5")]
	[FieldOffset(Offset = "0x2EC")]
	private ScrollerVisibility m_VerticalScrollerVisibility;

	[Token(Token = "0x40005A6")]
	[FieldOffset(Offset = "0x2F0")]
	private long m_ElasticAnimationIntervalMs;

	[Token(Token = "0x40005A7")]
	[FieldOffset(Offset = "0x2F8")]
	private VisualElement m_AttachedRootVisualContainer;

	[Token(Token = "0x40005A8")]
	[FieldOffset(Offset = "0x300")]
	private float m_SingleLineHeight;

	[Token(Token = "0x40005A9")]
	[FieldOffset(Offset = "0x304")]
	private bool m_SingleLineHeightDirtyFlag;

	[Token(Token = "0x40005AA")]
	[FieldOffset(Offset = "0x305")]
	internal bool m_MouseWheelScrollSizeIsInline;

	[Token(Token = "0x40005AB")]
	[FieldOffset(Offset = "0x308")]
	[SerializeField]
	[DontCreateProperty]
	private Vector2 m_ScrollOffset;

	[Token(Token = "0x40005AC")]
	[FieldOffset(Offset = "0x310")]
	private float m_HorizontalPageSize;

	[Token(Token = "0x40005AD")]
	[FieldOffset(Offset = "0x314")]
	private float m_VerticalPageSize;

	[Token(Token = "0x40005AE")]
	[FieldOffset(Offset = "0x318")]
	private float m_MouseWheelScrollSize;

	[Token(Token = "0x40005AF")]
	[FieldOffset(Offset = "0x720")]
	private static readonly float k_DefaultScrollDecelerationRate;

	[Token(Token = "0x40005B0")]
	[FieldOffset(Offset = "0x31C")]
	private float m_ScrollDecelerationRate;

	[Token(Token = "0x40005B1")]
	[FieldOffset(Offset = "0x320")]
	private float k_ScaledPixelsPerPointMultiplier;

	[Token(Token = "0x40005B2")]
	[FieldOffset(Offset = "0x324")]
	private float k_TouchScrollInertiaBaseTimeInterval;

	[Token(Token = "0x40005B3")]
	[FieldOffset(Offset = "0x724")]
	private static readonly float k_DefaultElasticity;

	[Token(Token = "0x40005B4")]
	[FieldOffset(Offset = "0x328")]
	private float m_Elasticity;

	[Token(Token = "0x40005B5")]
	[FieldOffset(Offset = "0x32C")]
	private TouchScrollBehavior m_TouchScrollBehavior;

	[Token(Token = "0x40005B6")]
	[FieldOffset(Offset = "0x330")]
	private NestedInteractionKind m_NestedInteractionKind;

	[Token(Token = "0x40005BA")]
	[FieldOffset(Offset = "0x350")]
	private VisualElement m_ContentContainer;

	[Token(Token = "0x40005BB")]
	[FieldOffset(Offset = "0x358")]
	private VisualElement m_ContentAndVerticalScrollContainer;

	[Token(Token = "0x40005BC")]
	[FieldOffset(Offset = "0x360")]
	private float previousVerticalTouchScrollTimeStamp;

	[Token(Token = "0x40005BD")]
	[FieldOffset(Offset = "0x364")]
	private float previousHorizontalTouchScrollTimeStamp;

	[Token(Token = "0x40005BE")]
	[FieldOffset(Offset = "0x368")]
	private float elapsedTimeSinceLastVerticalTouchScroll;

	[Token(Token = "0x40005BF")]
	[FieldOffset(Offset = "0x36C")]
	private float elapsedTimeSinceLastHorizontalTouchScroll;

	[Token(Token = "0x40005C0")]
	[FieldOffset(Offset = "0x728")]
	public static readonly string ussClassName;

	[Token(Token = "0x40005C1")]
	[FieldOffset(Offset = "0x730")]
	public static readonly string viewportUssClassName;

	[Token(Token = "0x40005C2")]
	[FieldOffset(Offset = "0x738")]
	public static readonly string horizontalVariantViewportUssClassName;

	[Token(Token = "0x40005C3")]
	[FieldOffset(Offset = "0x740")]
	public static readonly string verticalVariantViewportUssClassName;

	[Token(Token = "0x40005C4")]
	[FieldOffset(Offset = "0x748")]
	public static readonly string verticalHorizontalVariantViewportUssClassName;

	[Token(Token = "0x40005C5")]
	[FieldOffset(Offset = "0x750")]
	public static readonly string contentAndVerticalScrollUssClassName;

	[Token(Token = "0x40005C6")]
	[FieldOffset(Offset = "0x758")]
	public static readonly string contentUssClassName;

	[Token(Token = "0x40005C7")]
	[FieldOffset(Offset = "0x760")]
	public static readonly string horizontalVariantContentUssClassName;

	[Token(Token = "0x40005C8")]
	[FieldOffset(Offset = "0x768")]
	public static readonly string verticalVariantContentUssClassName;

	[Token(Token = "0x40005C9")]
	[FieldOffset(Offset = "0x770")]
	public static readonly string verticalHorizontalVariantContentUssClassName;

	[Token(Token = "0x40005CA")]
	[FieldOffset(Offset = "0x778")]
	public static readonly string hScrollerUssClassName;

	[Token(Token = "0x40005CB")]
	[FieldOffset(Offset = "0x780")]
	public static readonly string vScrollerUssClassName;

	[Token(Token = "0x40005CC")]
	[FieldOffset(Offset = "0x788")]
	public static readonly string horizontalVariantUssClassName;

	[Token(Token = "0x40005CD")]
	[FieldOffset(Offset = "0x790")]
	public static readonly string verticalVariantUssClassName;

	[Token(Token = "0x40005CE")]
	[FieldOffset(Offset = "0x798")]
	public static readonly string verticalHorizontalVariantUssClassName;

	[Token(Token = "0x40005CF")]
	[FieldOffset(Offset = "0x7A0")]
	public static readonly string scrollVariantUssClassName;

	[Token(Token = "0x40005D0")]
	[FieldOffset(Offset = "0x370")]
	private ScrollViewMode m_Mode;

	[Token(Token = "0x40005D1")]
	[FieldOffset(Offset = "0x378")]
	private IVisualElementScheduledItem m_ScheduledLayoutPassResetItem;

	[Token(Token = "0x40005D2")]
	[FieldOffset(Offset = "0x380")]
	private Vector2 m_StartPosition;

	[Token(Token = "0x40005D3")]
	[FieldOffset(Offset = "0x388")]
	private Vector2 m_PointerStartPosition;

	[Token(Token = "0x40005D4")]
	[FieldOffset(Offset = "0x390")]
	private Vector2 m_Velocity;

	[Token(Token = "0x40005D5")]
	[FieldOffset(Offset = "0x398")]
	private Vector2 m_SpringBackVelocity;

	[Token(Token = "0x40005D6")]
	[FieldOffset(Offset = "0x3A0")]
	private Vector2 m_LowBounds;

	[Token(Token = "0x40005D7")]
	[FieldOffset(Offset = "0x3A8")]
	private Vector2 m_HighBounds;

	[Token(Token = "0x40005D8")]
	[FieldOffset(Offset = "0x3B0")]
	private float m_LastVelocityLerpTime;

	[Token(Token = "0x40005D9")]
	[FieldOffset(Offset = "0x3B4")]
	private int m_TouchDraggingPointerId;

	[Token(Token = "0x40005DA")]
	[FieldOffset(Offset = "0x3B8")]
	private bool m_StartedMoving;

	[Token(Token = "0x40005DB")]
	[FieldOffset(Offset = "0x3B9")]
	private bool m_TouchPointerMoveAllowed;

	[Token(Token = "0x40005DC")]
	[FieldOffset(Offset = "0x3BA")]
	private bool m_TouchStoppedVelocity;

	[Token(Token = "0x40005DD")]
	[FieldOffset(Offset = "0x3C0")]
	private VisualElement m_CapturedTarget;

	[Token(Token = "0x40005DE")]
	[FieldOffset(Offset = "0x3C8")]
	private EventCallback<PointerMoveEvent> m_CapturedTargetPointerMoveCallback;

	[Token(Token = "0x40005DF")]
	[FieldOffset(Offset = "0x3D0")]
	private EventCallback<PointerUpEvent> m_CapturedTargetPointerUpCallback;

	[Token(Token = "0x40005E0")]
	[FieldOffset(Offset = "0x3D8")]
	internal IVisualElementScheduledItem m_PostPointerUpAnimation;

	[Token(Token = "0x170001AE")]
	[CreateProperty]
	public ScrollerVisibility horizontalScrollerVisibility
	{
		[Token(Token = "0x600091F")]
		[Address(RVA = "0x322EA00", Offset = "0x322D000", VA = "0x18322EA00")]
		get
		{
			return default(ScrollerVisibility);
		}
		[Token(Token = "0x6000920")]
		[Address(RVA = "0x322F050", Offset = "0x322D650", VA = "0x18322F050")]
		set
		{
		}
	}

	[Token(Token = "0x170001AF")]
	[CreateProperty]
	public ScrollerVisibility verticalScrollerVisibility
	{
		[Token(Token = "0x6000921")]
		[Address(RVA = "0x322ED30", Offset = "0x322D330", VA = "0x18322ED30")]
		get
		{
			return default(ScrollerVisibility);
		}
		[Token(Token = "0x6000922")]
		[Address(RVA = "0x322F940", Offset = "0x322DF40", VA = "0x18322F940")]
		set
		{
		}
	}

	[Token(Token = "0x170001B0")]
	[CreateProperty]
	public long elasticAnimationIntervalMs
	{
		[Token(Token = "0x6000923")]
		[Address(RVA = "0x322E9B0", Offset = "0x322CFB0", VA = "0x18322E9B0")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x6000924")]
		[Address(RVA = "0x322ED40", Offset = "0x322D340", VA = "0x18322ED40")]
		set
		{
		}
	}

	[Token(Token = "0x170001B1")]
	[Obsolete("showHorizontal is obsolete. Use horizontalScrollerVisibility instead")]
	public bool showHorizontal
	{
		[Token(Token = "0x6000925")]
		[Address(RVA = "0x322F740", Offset = "0x322DD40", VA = "0x18322F740")]
		set
		{
		}
	}

	[Token(Token = "0x170001B2")]
	[Obsolete("showVertical is obsolete. Use verticalScrollerVisibility instead")]
	public bool showVertical
	{
		[Token(Token = "0x6000926")]
		[Address(RVA = "0x322F760", Offset = "0x322DD60", VA = "0x18322F760")]
		set
		{
		}
	}

	[Token(Token = "0x170001B3")]
	internal bool needsHorizontal
	{
		[Token(Token = "0x6000927")]
		[Address(RVA = "0x322EB00", Offset = "0x322D100", VA = "0x18322EB00")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001B4")]
	internal bool needsVertical
	{
		[Token(Token = "0x6000928")]
		[Address(RVA = "0x322EB50", Offset = "0x322D150", VA = "0x18322EB50")]
		[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001B5")]
	internal bool isVerticalScrollDisplayed
	{
		[Token(Token = "0x6000929")]
		[Address(RVA = "0x322EA80", Offset = "0x322D080", VA = "0x18322EA80")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001B6")]
	internal bool isHorizontalScrollDisplayed
	{
		[Token(Token = "0x600092A")]
		[Address(RVA = "0x322EA10", Offset = "0x322D010", VA = "0x18322EA10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001B7")]
	[CreateProperty]
	public Vector2 scrollOffset
	{
		[Token(Token = "0x600092B")]
		[Address(RVA = "0x322EBB0", Offset = "0x322D1B0", VA = "0x18322EBB0")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x600092C")]
		[Address(RVA = "0x322F440", Offset = "0x322DA40", VA = "0x18322F440")]
		set
		{
		}
	}

	[Token(Token = "0x170001B8")]
	[CreateProperty]
	public float horizontalPageSize
	{
		[Token(Token = "0x600092D")]
		[Address(RVA = "0x322E9F0", Offset = "0x322CFF0", VA = "0x18322E9F0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600092E")]
		[Address(RVA = "0x322EFA0", Offset = "0x322D5A0", VA = "0x18322EFA0")]
		set
		{
		}
	}

	[Token(Token = "0x170001B9")]
	[CreateProperty]
	public float verticalPageSize
	{
		[Token(Token = "0x600092F")]
		[Address(RVA = "0x322ED20", Offset = "0x322D320", VA = "0x18322ED20")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000930")]
		[Address(RVA = "0x322F890", Offset = "0x322DE90", VA = "0x18322F890")]
		set
		{
		}
	}

	[Token(Token = "0x170001BA")]
	[CreateProperty]
	public float mouseWheelScrollSize
	{
		[Token(Token = "0x6000931")]
		[Address(RVA = "0x322EAF0", Offset = "0x322D0F0", VA = "0x18322EAF0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000932")]
		[Address(RVA = "0x322F1E0", Offset = "0x322D7E0", VA = "0x18322F1E0")]
		set
		{
		}
	}

	[Token(Token = "0x170001BB")]
	internal float scrollableWidth
	{
		[Token(Token = "0x6000933")]
		[Address(RVA = "0x322EC70", Offset = "0x322D270", VA = "0x18322EC70")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170001BC")]
	internal float scrollableHeight
	{
		[Token(Token = "0x6000934")]
		[Address(RVA = "0x322EBD0", Offset = "0x322D1D0", VA = "0x18322EBD0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170001BD")]
	private bool hasInertia
	{
		[Token(Token = "0x6000935")]
		[Address(RVA = "0x322E9D0", Offset = "0x322CFD0", VA = "0x18322E9D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001BE")]
	[CreateProperty]
	public float scrollDecelerationRate
	{
		[Token(Token = "0x6000936")]
		[Address(RVA = "0x322EBA0", Offset = "0x322D1A0", VA = "0x18322EBA0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000937")]
		[Address(RVA = "0x322F330", Offset = "0x322D930", VA = "0x18322F330")]
		set
		{
		}
	}

	[Token(Token = "0x170001BF")]
	[CreateProperty]
	public float elasticity
	{
		[Token(Token = "0x6000938")]
		[Address(RVA = "0x322E9C0", Offset = "0x322CFC0", VA = "0x18322E9C0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000939")]
		[Address(RVA = "0x322EE90", Offset = "0x322D490", VA = "0x18322EE90")]
		set
		{
		}
	}

	[Token(Token = "0x170001C0")]
	[CreateProperty]
	public TouchScrollBehavior touchScrollBehavior
	{
		[Token(Token = "0x600093A")]
		[Address(RVA = "0x322ED10", Offset = "0x322D310", VA = "0x18322ED10")]
		get
		{
			return default(TouchScrollBehavior);
		}
		[Token(Token = "0x600093B")]
		[Address(RVA = "0x322F780", Offset = "0x322DD80", VA = "0x18322F780")]
		set
		{
		}
	}

	[Token(Token = "0x170001C1")]
	[CreateProperty]
	public NestedInteractionKind nestedInteractionKind
	{
		[Token(Token = "0x600093C")]
		[Address(RVA = "0x31335C0", Offset = "0x3131BC0", VA = "0x1831335C0")]
		get
		{
			return default(NestedInteractionKind);
		}
		[Token(Token = "0x600093D")]
		[Address(RVA = "0x322F2B0", Offset = "0x322D8B0", VA = "0x18322F2B0")]
		set
		{
		}
	}

	[Token(Token = "0x170001C2")]
	public VisualElement contentViewport
	{
		[Token(Token = "0x600094C")]
		[Address(RVA = "0x31335E0", Offset = "0x3131BE0", VA = "0x1831335E0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001C3")]
	public Scroller horizontalScroller
	{
		[Token(Token = "0x600094D")]
		[Address(RVA = "0x2D24000", Offset = "0x2D22600", VA = "0x182D24000")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001C4")]
	public Scroller verticalScroller
	{
		[Token(Token = "0x600094E")]
		[Address(RVA = "0x1000630", Offset = "0xFFEC30", VA = "0x181000630")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001C5")]
	public override VisualElement contentContainer
	{
		[Token(Token = "0x600094F")]
		[Address(RVA = "0x322E9A0", Offset = "0x322CFA0", VA = "0x18322E9A0", Slot = "138")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001C6")]
	[CreateProperty]
	public ScrollViewMode mode
	{
		[Token(Token = "0x6000952")]
		[Address(RVA = "0x2D242A0", Offset = "0x2D228A0", VA = "0x182D242A0")]
		get
		{
			return default(ScrollViewMode);
		}
		[Token(Token = "0x6000953")]
		[Address(RVA = "0x322F140", Offset = "0x322D740", VA = "0x18322F140")]
		set
		{
		}
	}

	[Token(Token = "0x600093E")]
	[Address(RVA = "0x32292A0", Offset = "0x32278A0", VA = "0x1832292A0")]
	private void OnHorizontalScrollDragElementChanged(GeometryChangedEvent evt)
	{
	}

	[Token(Token = "0x600093F")]
	[Address(RVA = "0x322A580", Offset = "0x3228B80", VA = "0x18322A580")]
	private void OnVerticalScrollDragElementChanged(GeometryChangedEvent evt)
	{
	}

	[Token(Token = "0x6000940")]
	[Address(RVA = "0x322C0B0", Offset = "0x322A6B0", VA = "0x18322C0B0")]
	private void UpdateHorizontalSliderPageSize()
	{
	}

	[Token(Token = "0x6000941")]
	[Address(RVA = "0x322C980", Offset = "0x322AF80", VA = "0x18322C980")]
	private void UpdateVerticalSliderPageSize()
	{
	}

	[Token(Token = "0x6000942")]
	[Address(RVA = "0x322BD70", Offset = "0x322A370", VA = "0x18322BD70")]
	internal void UpdateContentViewTransform()
	{
	}

	[Token(Token = "0x6000943")]
	[Address(RVA = "0x322B0B0", Offset = "0x32296B0", VA = "0x18322B0B0")]
	public void ScrollTo(VisualElement child)
	{
	}

	[Token(Token = "0x6000944")]
	[Address(RVA = "0x3227300", Offset = "0x3225900", VA = "0x183227300")]
	private void ApplyScrollTo(VisualElement child)
	{
	}

	[Token(Token = "0x6000945")]
	[Address(RVA = "0x322B8C0", Offset = "0x3229EC0", VA = "0x18322B8C0")]
	private bool ShouldDeferScrollTo()
	{
		return default(bool);
	}

	[Token(Token = "0x6000946")]
	[Address(RVA = "0x322BB10", Offset = "0x322A110", VA = "0x18322BB10")]
	private void StartDeferredScrollTo(VisualElement target)
	{
	}

	[Token(Token = "0x6000947")]
	[Address(RVA = "0x322BC80", Offset = "0x322A280", VA = "0x18322BC80")]
	private void StopDeferredScrollTo()
	{
	}

	[Token(Token = "0x6000948")]
	[Address(RVA = "0x322A7E0", Offset = "0x3228DE0", VA = "0x18322A7E0")]
	private void PerformDeferredScrollTo()
	{
	}

	[Token(Token = "0x6000949")]
	[Address(RVA = "0x3227F90", Offset = "0x3226590", VA = "0x183227F90")]
	private float GetXDeltaOffset(VisualElement child)
	{
		return default(float);
	}

	[Token(Token = "0x600094A")]
	[Address(RVA = "0x3228260", Offset = "0x3226860", VA = "0x183228260")]
	private float GetYDeltaOffset(VisualElement child)
	{
		return default(float);
	}

	[Token(Token = "0x600094B")]
	[Address(RVA = "0x3227F30", Offset = "0x3226530", VA = "0x183227F30")]
	private float GetDeltaDistance(float viewMin, float viewMax, float childBoundaryMin, float childBoundaryMax)
	{
		return default(float);
	}

	[Token(Token = "0x6000950")]
	[Address(RVA = "0x322E990", Offset = "0x322CF90", VA = "0x18322E990")]
	public ScrollView()
	{
	}

	[Token(Token = "0x6000951")]
	[Address(RVA = "0x322DA40", Offset = "0x322C040", VA = "0x18322DA40")]
	public ScrollView(ScrollViewMode scrollViewMode)
	{
	}

	[Token(Token = "0x6000954")]
	[Address(RVA = "0x322B440", Offset = "0x3229A40", VA = "0x18322B440")]
	private void SetScrollViewMode(ScrollViewMode mode)
	{
	}

	[Token(Token = "0x6000955")]
	[Address(RVA = "0x3228610", Offset = "0x3226C10", VA = "0x183228610")]
	private void OnAttachToPanel(AttachToPanelEvent evt)
	{
	}

	[Token(Token = "0x6000956")]
	[Address(RVA = "0x3228AC0", Offset = "0x32270C0", VA = "0x183228AC0")]
	private void OnDetachFromPanel(DetachFromPanelEvent evt)
	{
	}

	[Token(Token = "0x6000957")]
	[Address(RVA = "0x3229580", Offset = "0x3227B80", VA = "0x183229580")]
	private void OnPointerCapture(PointerCaptureEvent evt)
	{
	}

	[Token(Token = "0x6000958")]
	[Address(RVA = "0x3229490", Offset = "0x3227A90", VA = "0x183229490")]
	private void OnPointerCaptureOut(PointerCaptureOutEvent evt)
	{
	}

	[Token(Token = "0x6000959")]
	[Address(RVA = "0x3228F70", Offset = "0x3227570", VA = "0x183228F70")]
	private void OnGeometryChanged(GeometryChangedEvent evt)
	{
	}

	[Token(Token = "0x600095A")]
	[Address(RVA = "0x322A650", Offset = "0x3228C50", VA = "0x18322A650")]
	private void OnVerticalSliderViewDataRestored()
	{
	}

	[Token(Token = "0x600095B")]
	[Address(RVA = "0x3229370", Offset = "0x3227970", VA = "0x183229370")]
	private void OnHorizontalSliderViewDataRestored()
	{
	}

	[Token(Token = "0x600095C")]
	[Address(RVA = "0x322A630", Offset = "0x3228C30", VA = "0x18322A630")]
	private void OnVerticalScrollerSetValueWithoutNotify(float value)
	{
	}

	[Token(Token = "0x600095D")]
	[Address(RVA = "0x3229350", Offset = "0x3227950", VA = "0x183229350")]
	private void OnHorizontalScrollerSetValueWithoutNotify(float value)
	{
	}

	[Token(Token = "0x600095E")]
	[Address(RVA = "0x322AF90", Offset = "0x3229590", VA = "0x18322AF90")]
	private void ScheduleResetLayoutPass()
	{
	}

	[Token(Token = "0x600095F")]
	[Address(RVA = "0x322AF80", Offset = "0x3229580", VA = "0x18322AF80")]
	private void ResetLayoutPass()
	{
	}

	[Token(Token = "0x6000960")]
	[Address(RVA = "0x3227710", Offset = "0x3225D10", VA = "0x183227710")]
	private static float ComputeElasticOffset(float deltaPointer, float initialScrollOffset, float lowLimit, float hardLowLimit, float highLimit, float hardHighLimit)
	{
		return default(float);
	}

	[Token(Token = "0x6000961")]
	[Address(RVA = "0x3227890", Offset = "0x3225E90", VA = "0x183227890")]
	private void ComputeInitialSpringBackVelocity()
	{
	}

	[Token(Token = "0x6000962")]
	[Address(RVA = "0x322B930", Offset = "0x3229F30", VA = "0x18322B930")]
	private void SpringBack()
	{
	}

	[Token(Token = "0x6000963")]
	[Address(RVA = "0x3226FF0", Offset = "0x32255F0", VA = "0x183226FF0")]
	internal void ApplyScrollInertia()
	{
	}

	[Token(Token = "0x6000964")]
	[Address(RVA = "0x322A8D0", Offset = "0x3228ED0", VA = "0x18322A8D0")]
	private void PostPointerUpAnimation()
	{
	}

	[Token(Token = "0x6000965")]
	[Address(RVA = "0x3229640", Offset = "0x3227C40", VA = "0x183229640")]
	private void OnPointerDown(PointerDownEvent evt)
	{
	}

	[Token(Token = "0x6000966")]
	[Address(RVA = "0x3229910", Offset = "0x3227F10", VA = "0x183229910")]
	private void OnPointerMove(PointerMoveEvent evt)
	{
	}

	[Token(Token = "0x6000967")]
	[Address(RVA = "0x3229420", Offset = "0x3227A20", VA = "0x183229420")]
	private void OnPointerCancel(PointerCancelEvent evt)
	{
	}

	[Token(Token = "0x6000968")]
	[Address(RVA = "0x3229D00", Offset = "0x3228300", VA = "0x183229D00")]
	private void OnPointerUp(PointerUpEvent evt)
	{
	}

	[Token(Token = "0x6000969")]
	[Address(RVA = "0x3228530", Offset = "0x3226B30", VA = "0x183228530")]
	private void InitTouchScrolling(Vector2 position, int pointerId)
	{
	}

	[Token(Token = "0x600096A")]
	[Address(RVA = "0x322C720", Offset = "0x322AD20", VA = "0x18322C720")]
	private void UpdateTouchScrollingBounds()
	{
	}

	[Token(Token = "0x600096B")]
	[Address(RVA = "0x3227990", Offset = "0x3225F90", VA = "0x183227990")]
	internal TouchScrollingResult ComputeTouchScrolling(Vector2 position)
	{
		return default(TouchScrollingResult);
	}

	[Token(Token = "0x600096C")]
	[Address(RVA = "0x3227430", Offset = "0x3225A30", VA = "0x183227430")]
	private bool ApplyTouchScrolling(Vector2 newScrollOffset)
	{
		return default(bool);
	}

	[Token(Token = "0x600096D")]
	[Address(RVA = "0x322AE40", Offset = "0x3229440", VA = "0x18322AE40")]
	private bool ReleaseScrolling(int pointerId, IEventHandler target)
	{
		return default(bool);
	}

	[Token(Token = "0x600096E")]
	[Address(RVA = "0x3227D50", Offset = "0x3226350", VA = "0x183227D50")]
	private void ExecuteElasticSpringAnimation()
	{
	}

	[Token(Token = "0x600096F")]
	[Address(RVA = "0x3226DF0", Offset = "0x32253F0", VA = "0x183226DF0")]
	private void AdjustScrollers()
	{
	}

	[Token(Token = "0x6000970")]
	[Address(RVA = "0x322C1F0", Offset = "0x322A7F0", VA = "0x18322C1F0")]
	internal void UpdateScrollers(bool displayHorizontal, bool displayVertical)
	{
	}

	[Token(Token = "0x6000971")]
	[Address(RVA = "0x322A370", Offset = "0x3228970", VA = "0x18322A370")]
	private void OnScrollersGeometryChanged(GeometryChangedEvent evt)
	{
	}

	[Token(Token = "0x6000972")]
	[Address(RVA = "0x3229DC0", Offset = "0x32283C0", VA = "0x183229DC0")]
	private void OnScrollWheel(WheelEvent evt)
	{
	}

	[Token(Token = "0x6000973")]
	[Address(RVA = "0x3228600", Offset = "0x3226C00", VA = "0x183228600")]
	private void OnRootCustomStyleResolved(CustomStyleResolvedEvent evt)
	{
	}

	[Token(Token = "0x6000974")]
	[Address(RVA = "0x3228600", Offset = "0x3226C00", VA = "0x183228600")]
	private void MarkSingleLineHeightDirty()
	{
	}

	[Token(Token = "0x6000975")]
	[Address(RVA = "0x3229DB0", Offset = "0x32283B0", VA = "0x183229DB0")]
	private void OnRootPointerUp(PointerUpEvent evt)
	{
	}

	[Token(Token = "0x6000976")]
	[Address(RVA = "0x322AA80", Offset = "0x3229080", VA = "0x18322AA80")]
	private void ReadSingleLineHeight()
	{
	}

	[Token(Token = "0x6000977")]
	[Address(RVA = "0x322C080", Offset = "0x322A680", VA = "0x18322C080")]
	private void UpdateElasticBehaviour()
	{
	}

	[Token(Token = "0x6000978")]
	[Address(RVA = "0x322B340", Offset = "0x3229940", VA = "0x18322B340")]
	internal void SetScrollOffsetWithoutNotify(Vector2 value)
	{
	}

	[Token(Token = "0x6000979")]
	[Address(RVA = "0x322A700", Offset = "0x3228D00", VA = "0x18322A700", Slot = "135")]
	internal override void OnViewDataReady()
	{
	}
}
