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
using UnityEngine.Bindings;

namespace UnityEngine.UIElements;

[Token(Token = "0x200013E")]
public class ScrollView : VisualElement
{
	[Token(Token = "0x200013F")]
	[Obsolete("UxmlFactory is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlFactory : UxmlFactory<ScrollView, UxmlTraits>
	{
		[Token(Token = "0x6000962")]
		[Address(RVA = "0x6C353A0", Offset = "0x6C343A0", VA = "0x6C353A0")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x2000140")]
	[Obsolete("UxmlTraits is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlTraits : VisualElement.UxmlTraits
	{
		[Token(Token = "0x40005CF")]
		[FieldOffset(Offset = "0x88")]
		private UxmlEnumAttributeDescription<ScrollViewMode> m_ScrollViewMode;

		[Token(Token = "0x40005D0")]
		[FieldOffset(Offset = "0x90")]
		private UxmlEnumAttributeDescription<NestedInteractionKind> m_NestedInteractionKind;

		[Token(Token = "0x40005D1")]
		[FieldOffset(Offset = "0x98")]
		private UxmlBoolAttributeDescription m_ShowHorizontal;

		[Token(Token = "0x40005D2")]
		[FieldOffset(Offset = "0xA0")]
		private UxmlBoolAttributeDescription m_ShowVertical;

		[Token(Token = "0x40005D3")]
		[FieldOffset(Offset = "0xA8")]
		private UxmlEnumAttributeDescription<ScrollerVisibility> m_HorizontalScrollerVisibility;

		[Token(Token = "0x40005D4")]
		[FieldOffset(Offset = "0xB0")]
		private UxmlEnumAttributeDescription<ScrollerVisibility> m_VerticalScrollerVisibility;

		[Token(Token = "0x40005D5")]
		[FieldOffset(Offset = "0xB8")]
		private UxmlFloatAttributeDescription m_HorizontalPageSize;

		[Token(Token = "0x40005D6")]
		[FieldOffset(Offset = "0xC0")]
		private UxmlFloatAttributeDescription m_VerticalPageSize;

		[Token(Token = "0x40005D7")]
		[FieldOffset(Offset = "0xC8")]
		private UxmlFloatAttributeDescription m_MouseWheelScrollSize;

		[Token(Token = "0x40005D8")]
		[FieldOffset(Offset = "0xD0")]
		private UxmlEnumAttributeDescription<TouchScrollBehavior> m_TouchScrollBehavior;

		[Token(Token = "0x40005D9")]
		[FieldOffset(Offset = "0xD8")]
		private UxmlFloatAttributeDescription m_ScrollDecelerationRate;

		[Token(Token = "0x40005DA")]
		[FieldOffset(Offset = "0xE0")]
		private UxmlFloatAttributeDescription m_Elasticity;

		[Token(Token = "0x6000963")]
		[Address(RVA = "0x6C353E0", Offset = "0x6C343E0", VA = "0x6C353E0", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x6000964")]
		[Address(RVA = "0x6C35A50", Offset = "0x6C34A50", VA = "0x6C35A50")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x2000141")]
	public enum TouchScrollBehavior
	{
		[Token(Token = "0x40005DC")]
		Unrestricted,
		[Token(Token = "0x40005DD")]
		Elastic,
		[Token(Token = "0x40005DE")]
		Clamped
	}

	[Token(Token = "0x2000142")]
	public enum NestedInteractionKind
	{
		[Token(Token = "0x40005E0")]
		Default,
		[Token(Token = "0x40005E1")]
		StopScrolling,
		[Token(Token = "0x40005E2")]
		ForwardScrolling
	}

	[Token(Token = "0x2000143")]
	internal enum TouchScrollingResult
	{
		[Token(Token = "0x40005E4")]
		Apply,
		[Token(Token = "0x40005E5")]
		Forward,
		[Token(Token = "0x40005E6")]
		Block
	}

	[Token(Token = "0x4000581")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly BindingId horizontalScrollerVisibilityProperty;

	[Token(Token = "0x4000582")]
	[FieldOffset(Offset = "0x98")]
	internal static readonly BindingId verticalScrollerVisibilityProperty;

	[Token(Token = "0x4000583")]
	[FieldOffset(Offset = "0x130")]
	internal static readonly BindingId scrollOffsetProperty;

	[Token(Token = "0x4000584")]
	[FieldOffset(Offset = "0x1C8")]
	internal static readonly BindingId horizontalPageSizeProperty;

	[Token(Token = "0x4000585")]
	[FieldOffset(Offset = "0x260")]
	internal static readonly BindingId verticalPageSizeProperty;

	[Token(Token = "0x4000586")]
	[FieldOffset(Offset = "0x2F8")]
	internal static readonly BindingId mouseWheelScrollSizeProperty;

	[Token(Token = "0x4000587")]
	[FieldOffset(Offset = "0x390")]
	internal static readonly BindingId scrollDecelerationRateProperty;

	[Token(Token = "0x4000588")]
	[FieldOffset(Offset = "0x428")]
	internal static readonly BindingId elasticityProperty;

	[Token(Token = "0x4000589")]
	[FieldOffset(Offset = "0x4C0")]
	internal static readonly BindingId touchScrollBehaviorProperty;

	[Token(Token = "0x400058A")]
	[FieldOffset(Offset = "0x558")]
	internal static readonly BindingId nestedInteractionKindProperty;

	[Token(Token = "0x400058B")]
	[FieldOffset(Offset = "0x5F0")]
	internal static readonly BindingId modeProperty;

	[Token(Token = "0x400058C")]
	[FieldOffset(Offset = "0x688")]
	internal static readonly BindingId elasticAnimationIntervalMsProperty;

	[Token(Token = "0x400058D")]
	[FieldOffset(Offset = "0x2C8")]
	private VisualElement m_DeferredScrollToElement;

	[Token(Token = "0x400058E")]
	[FieldOffset(Offset = "0x2D0")]
	private IVisualElementScheduledItem m_DeferredScrollTo;

	[Token(Token = "0x400058F")]
	[FieldOffset(Offset = "0x2D8")]
	private Vector2 m_LastDeferredScrollOffset;

	[Token(Token = "0x4000590")]
	[FieldOffset(Offset = "0x2E0")]
	private int m_DeferredScrollToAttempts;

	[Token(Token = "0x4000591")]
	[FieldOffset(Offset = "0x2E4")]
	private int m_FirstLayoutPass;

	[Token(Token = "0x4000592")]
	[FieldOffset(Offset = "0x2E8")]
	private ScrollerVisibility m_HorizontalScrollerVisibility;

	[Token(Token = "0x4000593")]
	[FieldOffset(Offset = "0x2EC")]
	private ScrollerVisibility m_VerticalScrollerVisibility;

	[Token(Token = "0x4000594")]
	[FieldOffset(Offset = "0x2F0")]
	private long m_ElasticAnimationIntervalMs;

	[Token(Token = "0x4000595")]
	[FieldOffset(Offset = "0x2F8")]
	private VisualElement m_AttachedRootVisualContainer;

	[Token(Token = "0x4000596")]
	[FieldOffset(Offset = "0x300")]
	private float m_SingleLineHeight;

	[Token(Token = "0x4000597")]
	[FieldOffset(Offset = "0x304")]
	private bool m_SingleLineHeightDirtyFlag;

	[Token(Token = "0x4000598")]
	[FieldOffset(Offset = "0x305")]
	internal bool m_MouseWheelScrollSizeIsInline;

	[Token(Token = "0x4000599")]
	[FieldOffset(Offset = "0x308")]
	[SerializeField]
	[DontCreateProperty]
	private Vector2 m_ScrollOffset;

	[Token(Token = "0x400059A")]
	[FieldOffset(Offset = "0x310")]
	private float m_HorizontalPageSize;

	[Token(Token = "0x400059B")]
	[FieldOffset(Offset = "0x314")]
	private float m_VerticalPageSize;

	[Token(Token = "0x400059C")]
	[FieldOffset(Offset = "0x318")]
	private float m_MouseWheelScrollSize;

	[Token(Token = "0x400059D")]
	[FieldOffset(Offset = "0x720")]
	private static readonly float k_DefaultScrollDecelerationRate;

	[Token(Token = "0x400059E")]
	[FieldOffset(Offset = "0x31C")]
	private float m_ScrollDecelerationRate;

	[Token(Token = "0x400059F")]
	[FieldOffset(Offset = "0x320")]
	private float k_ScaledPixelsPerPointMultiplier;

	[Token(Token = "0x40005A0")]
	[FieldOffset(Offset = "0x324")]
	private float k_TouchScrollInertiaBaseTimeInterval;

	[Token(Token = "0x40005A1")]
	[FieldOffset(Offset = "0x724")]
	private static readonly float k_DefaultElasticity;

	[Token(Token = "0x40005A2")]
	[FieldOffset(Offset = "0x328")]
	private float m_Elasticity;

	[Token(Token = "0x40005A3")]
	[FieldOffset(Offset = "0x32C")]
	private TouchScrollBehavior m_TouchScrollBehavior;

	[Token(Token = "0x40005A4")]
	[FieldOffset(Offset = "0x330")]
	private NestedInteractionKind m_NestedInteractionKind;

	[Token(Token = "0x40005A8")]
	[FieldOffset(Offset = "0x350")]
	private VisualElement m_ContentContainer;

	[Token(Token = "0x40005A9")]
	[FieldOffset(Offset = "0x358")]
	private VisualElement m_ContentAndVerticalScrollContainer;

	[Token(Token = "0x40005AA")]
	[FieldOffset(Offset = "0x360")]
	private float previousVerticalTouchScrollTimeStamp;

	[Token(Token = "0x40005AB")]
	[FieldOffset(Offset = "0x364")]
	private float previousHorizontalTouchScrollTimeStamp;

	[Token(Token = "0x40005AC")]
	[FieldOffset(Offset = "0x368")]
	private float elapsedTimeSinceLastVerticalTouchScroll;

	[Token(Token = "0x40005AD")]
	[FieldOffset(Offset = "0x36C")]
	private float elapsedTimeSinceLastHorizontalTouchScroll;

	[Token(Token = "0x40005AE")]
	[FieldOffset(Offset = "0x728")]
	public static readonly string ussClassName;

	[Token(Token = "0x40005AF")]
	[FieldOffset(Offset = "0x730")]
	public static readonly string viewportUssClassName;

	[Token(Token = "0x40005B0")]
	[FieldOffset(Offset = "0x738")]
	public static readonly string horizontalVariantViewportUssClassName;

	[Token(Token = "0x40005B1")]
	[FieldOffset(Offset = "0x740")]
	public static readonly string verticalVariantViewportUssClassName;

	[Token(Token = "0x40005B2")]
	[FieldOffset(Offset = "0x748")]
	public static readonly string verticalHorizontalVariantViewportUssClassName;

	[Token(Token = "0x40005B3")]
	[FieldOffset(Offset = "0x750")]
	public static readonly string contentAndVerticalScrollUssClassName;

	[Token(Token = "0x40005B4")]
	[FieldOffset(Offset = "0x758")]
	public static readonly string contentUssClassName;

	[Token(Token = "0x40005B5")]
	[FieldOffset(Offset = "0x760")]
	public static readonly string horizontalVariantContentUssClassName;

	[Token(Token = "0x40005B6")]
	[FieldOffset(Offset = "0x768")]
	public static readonly string verticalVariantContentUssClassName;

	[Token(Token = "0x40005B7")]
	[FieldOffset(Offset = "0x770")]
	public static readonly string verticalHorizontalVariantContentUssClassName;

	[Token(Token = "0x40005B8")]
	[FieldOffset(Offset = "0x778")]
	public static readonly string hScrollerUssClassName;

	[Token(Token = "0x40005B9")]
	[FieldOffset(Offset = "0x780")]
	public static readonly string vScrollerUssClassName;

	[Token(Token = "0x40005BA")]
	[FieldOffset(Offset = "0x788")]
	public static readonly string horizontalVariantUssClassName;

	[Token(Token = "0x40005BB")]
	[FieldOffset(Offset = "0x790")]
	public static readonly string verticalVariantUssClassName;

	[Token(Token = "0x40005BC")]
	[FieldOffset(Offset = "0x798")]
	public static readonly string verticalHorizontalVariantUssClassName;

	[Token(Token = "0x40005BD")]
	[FieldOffset(Offset = "0x7A0")]
	public static readonly string scrollVariantUssClassName;

	[Token(Token = "0x40005BE")]
	[FieldOffset(Offset = "0x370")]
	private ScrollViewMode m_Mode;

	[Token(Token = "0x40005BF")]
	[FieldOffset(Offset = "0x378")]
	private IVisualElementScheduledItem m_ScheduledLayoutPassResetItem;

	[Token(Token = "0x40005C0")]
	[FieldOffset(Offset = "0x380")]
	private Vector2 m_StartPosition;

	[Token(Token = "0x40005C1")]
	[FieldOffset(Offset = "0x388")]
	private Vector2 m_PointerStartPosition;

	[Token(Token = "0x40005C2")]
	[FieldOffset(Offset = "0x390")]
	private Vector2 m_Velocity;

	[Token(Token = "0x40005C3")]
	[FieldOffset(Offset = "0x398")]
	private Vector2 m_SpringBackVelocity;

	[Token(Token = "0x40005C4")]
	[FieldOffset(Offset = "0x3A0")]
	private Vector2 m_LowBounds;

	[Token(Token = "0x40005C5")]
	[FieldOffset(Offset = "0x3A8")]
	private Vector2 m_HighBounds;

	[Token(Token = "0x40005C6")]
	[FieldOffset(Offset = "0x3B0")]
	private float m_LastVelocityLerpTime;

	[Token(Token = "0x40005C7")]
	[FieldOffset(Offset = "0x3B4")]
	private int m_TouchDraggingPointerId;

	[Token(Token = "0x40005C8")]
	[FieldOffset(Offset = "0x3B8")]
	private bool m_StartedMoving;

	[Token(Token = "0x40005C9")]
	[FieldOffset(Offset = "0x3B9")]
	private bool m_TouchPointerMoveAllowed;

	[Token(Token = "0x40005CA")]
	[FieldOffset(Offset = "0x3BA")]
	private bool m_TouchStoppedVelocity;

	[Token(Token = "0x40005CB")]
	[FieldOffset(Offset = "0x3C0")]
	private VisualElement m_CapturedTarget;

	[Token(Token = "0x40005CC")]
	[FieldOffset(Offset = "0x3C8")]
	private EventCallback<PointerMoveEvent> m_CapturedTargetPointerMoveCallback;

	[Token(Token = "0x40005CD")]
	[FieldOffset(Offset = "0x3D0")]
	private EventCallback<PointerUpEvent> m_CapturedTargetPointerUpCallback;

	[Token(Token = "0x40005CE")]
	[FieldOffset(Offset = "0x3D8")]
	internal IVisualElementScheduledItem m_PostPointerUpAnimation;

	[Token(Token = "0x170001A7")]
	[CreateProperty]
	public ScrollerVisibility horizontalScrollerVisibility
	{
		[Token(Token = "0x6000904")]
		[Address(RVA = "0x6C2B430", Offset = "0x6C2A430", VA = "0x6C2B430")]
		get
		{
			return default(ScrollerVisibility);
		}
		[Token(Token = "0x6000905")]
		[Address(RVA = "0x6C2B440", Offset = "0x6C2A440", VA = "0x6C2B440")]
		set
		{
		}
	}

	[Token(Token = "0x170001A8")]
	[CreateProperty]
	public ScrollerVisibility verticalScrollerVisibility
	{
		[Token(Token = "0x6000906")]
		[Address(RVA = "0x6C2C020", Offset = "0x6C2B020", VA = "0x6C2C020")]
		get
		{
			return default(ScrollerVisibility);
		}
		[Token(Token = "0x6000907")]
		[Address(RVA = "0x6C2C030", Offset = "0x6C2B030", VA = "0x6C2C030")]
		set
		{
		}
	}

	[Token(Token = "0x170001A9")]
	[CreateProperty]
	public long elasticAnimationIntervalMs
	{
		[Token(Token = "0x6000908")]
		[Address(RVA = "0x6C2C0D0", Offset = "0x6C2B0D0", VA = "0x6C2C0D0")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x6000909")]
		[Address(RVA = "0x6C2C0E0", Offset = "0x6C2B0E0", VA = "0x6C2C0E0")]
		set
		{
		}
	}

	[Token(Token = "0x170001AA")]
	[Obsolete("showHorizontal is obsolete. Use horizontalScrollerVisibility instead")]
	public bool showHorizontal
	{
		[Token(Token = "0x600090A")]
		[Address(RVA = "0x6C2C2F0", Offset = "0x6C2B2F0", VA = "0x6C2C2F0")]
		set
		{
		}
	}

	[Token(Token = "0x170001AB")]
	[Obsolete("showVertical is obsolete. Use verticalScrollerVisibility instead")]
	public bool showVertical
	{
		[Token(Token = "0x600090B")]
		[Address(RVA = "0x6C2C310", Offset = "0x6C2B310", VA = "0x6C2C310")]
		set
		{
		}
	}

	[Token(Token = "0x170001AC")]
	internal bool needsHorizontal
	{
		[Token(Token = "0x600090C")]
		[Address(RVA = "0x6C2B4E0", Offset = "0x6C2A4E0", VA = "0x6C2B4E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001AD")]
	internal bool needsVertical
	{
		[Token(Token = "0x600090D")]
		[Address(RVA = "0x6C2B5A0", Offset = "0x6C2A5A0", VA = "0x6C2B5A0")]
		[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001AE")]
	internal bool isVerticalScrollDisplayed
	{
		[Token(Token = "0x600090E")]
		[Address(RVA = "0x6C2C450", Offset = "0x6C2B450", VA = "0x6C2C450")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001AF")]
	internal bool isHorizontalScrollDisplayed
	{
		[Token(Token = "0x600090F")]
		[Address(RVA = "0x6C2C510", Offset = "0x6C2B510", VA = "0x6C2C510")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001B0")]
	[CreateProperty]
	public Vector2 scrollOffset
	{
		[Token(Token = "0x6000910")]
		[Address(RVA = "0x6C2C5D0", Offset = "0x6C2B5D0", VA = "0x6C2C5D0")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000911")]
		[Address(RVA = "0x6C2C5E0", Offset = "0x6C2B5E0", VA = "0x6C2C5E0")]
		set
		{
		}
	}

	[Token(Token = "0x170001B1")]
	[CreateProperty]
	public float horizontalPageSize
	{
		[Token(Token = "0x6000912")]
		[Address(RVA = "0x6C2CCC0", Offset = "0x6C2BCC0", VA = "0x6C2CCC0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000913")]
		[Address(RVA = "0x6C2CCD0", Offset = "0x6C2BCD0", VA = "0x6C2CCD0")]
		set
		{
		}
	}

	[Token(Token = "0x170001B2")]
	[CreateProperty]
	public float verticalPageSize
	{
		[Token(Token = "0x6000914")]
		[Address(RVA = "0x6C2D040", Offset = "0x6C2C040", VA = "0x6C2D040")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000915")]
		[Address(RVA = "0x6C2D050", Offset = "0x6C2C050", VA = "0x6C2D050")]
		set
		{
		}
	}

	[Token(Token = "0x170001B3")]
	[CreateProperty]
	public float mouseWheelScrollSize
	{
		[Token(Token = "0x6000916")]
		[Address(RVA = "0x6C2D3C0", Offset = "0x6C2C3C0", VA = "0x6C2D3C0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000917")]
		[Address(RVA = "0x6C2D3D0", Offset = "0x6C2C3D0", VA = "0x6C2D3D0")]
		set
		{
		}
	}

	[Token(Token = "0x170001B4")]
	internal float scrollableWidth
	{
		[Token(Token = "0x6000918")]
		[Address(RVA = "0x6C2C330", Offset = "0x6C2B330", VA = "0x6C2C330")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170001B5")]
	internal float scrollableHeight
	{
		[Token(Token = "0x6000919")]
		[Address(RVA = "0x6C2C3C0", Offset = "0x6C2B3C0", VA = "0x6C2C3C0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170001B6")]
	private bool hasInertia
	{
		[Token(Token = "0x600091A")]
		[Address(RVA = "0x6C2D4C0", Offset = "0x6C2C4C0", VA = "0x6C2D4C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001B7")]
	[CreateProperty]
	public float scrollDecelerationRate
	{
		[Token(Token = "0x600091B")]
		[Address(RVA = "0x6C2D4E0", Offset = "0x6C2C4E0", VA = "0x6C2D4E0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600091C")]
		[Address(RVA = "0x6C2D4F0", Offset = "0x6C2C4F0", VA = "0x6C2D4F0")]
		set
		{
		}
	}

	[Token(Token = "0x170001B8")]
	[CreateProperty]
	public float elasticity
	{
		[Token(Token = "0x600091D")]
		[Address(RVA = "0x6C2D5F0", Offset = "0x6C2C5F0", VA = "0x6C2D5F0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600091E")]
		[Address(RVA = "0x6C2D600", Offset = "0x6C2C600", VA = "0x6C2D600")]
		set
		{
		}
	}

	[Token(Token = "0x170001B9")]
	[CreateProperty]
	public TouchScrollBehavior touchScrollBehavior
	{
		[Token(Token = "0x600091F")]
		[Address(RVA = "0x6C2D700", Offset = "0x6C2C700", VA = "0x6C2D700")]
		get
		{
			return default(TouchScrollBehavior);
		}
		[Token(Token = "0x6000920")]
		[Address(RVA = "0x6C2D710", Offset = "0x6C2C710", VA = "0x6C2D710")]
		set
		{
		}
	}

	[Token(Token = "0x170001BA")]
	[CreateProperty]
	public NestedInteractionKind nestedInteractionKind
	{
		[Token(Token = "0x6000921")]
		[Address(RVA = "0x6C2D830", Offset = "0x6C2C830", VA = "0x6C2D830")]
		get
		{
			return default(NestedInteractionKind);
		}
		[Token(Token = "0x6000922")]
		[Address(RVA = "0x6C2D840", Offset = "0x6C2C840", VA = "0x6C2D840")]
		set
		{
		}
	}

	[Token(Token = "0x170001BB")]
	public VisualElement contentViewport
	{
		[Token(Token = "0x6000931")]
		[Address(RVA = "0x6C2E970", Offset = "0x6C2D970", VA = "0x6C2E970")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001BC")]
	public Scroller horizontalScroller
	{
		[Token(Token = "0x6000932")]
		[Address(RVA = "0x6C2E980", Offset = "0x6C2D980", VA = "0x6C2E980")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001BD")]
	public Scroller verticalScroller
	{
		[Token(Token = "0x6000933")]
		[Address(RVA = "0x6C2E990", Offset = "0x6C2D990", VA = "0x6C2E990")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001BE")]
	public override VisualElement contentContainer
	{
		[Token(Token = "0x6000934")]
		[Address(RVA = "0x6C2E9A0", Offset = "0x6C2D9A0", VA = "0x6C2E9A0", Slot = "138")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001BF")]
	[CreateProperty]
	public ScrollViewMode mode
	{
		[Token(Token = "0x6000937")]
		[Address(RVA = "0x6C301A0", Offset = "0x6C2F1A0", VA = "0x6C301A0")]
		get
		{
			return default(ScrollViewMode);
		}
		[Token(Token = "0x6000938")]
		[Address(RVA = "0x6C301B0", Offset = "0x6C2F1B0", VA = "0x6C301B0")]
		set
		{
		}
	}

	[Token(Token = "0x6000923")]
	[Address(RVA = "0x6C2D8D0", Offset = "0x6C2C8D0", VA = "0x6C2D8D0")]
	private void OnHorizontalScrollDragElementChanged(GeometryChangedEvent evt)
	{
	}

	[Token(Token = "0x6000924")]
	[Address(RVA = "0x6C2D970", Offset = "0x6C2C970", VA = "0x6C2D970")]
	private void OnVerticalScrollDragElementChanged(GeometryChangedEvent evt)
	{
	}

	[Token(Token = "0x6000925")]
	[Address(RVA = "0x6C2CDE0", Offset = "0x6C2BDE0", VA = "0x6C2CDE0")]
	private void UpdateHorizontalSliderPageSize()
	{
	}

	[Token(Token = "0x6000926")]
	[Address(RVA = "0x6C2D160", Offset = "0x6C2C160", VA = "0x6C2D160")]
	private void UpdateVerticalSliderPageSize()
	{
	}

	[Token(Token = "0x6000927")]
	[Address(RVA = "0x6C2C9C0", Offset = "0x6C2B9C0", VA = "0x6C2C9C0")]
	internal void UpdateContentViewTransform()
	{
	}

	[Token(Token = "0x6000928")]
	[Address(RVA = "0x6C2DA10", Offset = "0x6C2CA10", VA = "0x6C2DA10")]
	public void ScrollTo(VisualElement child)
	{
	}

	[Token(Token = "0x6000929")]
	[Address(RVA = "0x6C2E000", Offset = "0x6C2D000", VA = "0x6C2E000")]
	private void ApplyScrollTo(VisualElement child)
	{
	}

	[Token(Token = "0x600092A")]
	[Address(RVA = "0x6C2DB10", Offset = "0x6C2CB10", VA = "0x6C2DB10")]
	private bool ShouldDeferScrollTo()
	{
		return default(bool);
	}

	[Token(Token = "0x600092B")]
	[Address(RVA = "0x6C2DBD0", Offset = "0x6C2CBD0", VA = "0x6C2DBD0")]
	private void StartDeferredScrollTo(VisualElement target)
	{
	}

	[Token(Token = "0x600092C")]
	[Address(RVA = "0x6C2DEB0", Offset = "0x6C2CEB0", VA = "0x6C2DEB0")]
	private void StopDeferredScrollTo()
	{
	}

	[Token(Token = "0x600092D")]
	[Address(RVA = "0x6C2E800", Offset = "0x6C2D800", VA = "0x6C2E800")]
	private void PerformDeferredScrollTo()
	{
	}

	[Token(Token = "0x600092E")]
	[Address(RVA = "0x6C2E520", Offset = "0x6C2D520", VA = "0x6C2E520")]
	private float GetXDeltaOffset(VisualElement child)
	{
		return default(float);
	}

	[Token(Token = "0x600092F")]
	[Address(RVA = "0x6C2E220", Offset = "0x6C2D220", VA = "0x6C2E220")]
	private float GetYDeltaOffset(VisualElement child)
	{
		return default(float);
	}

	[Token(Token = "0x6000930")]
	[Address(RVA = "0x6C2E8C0", Offset = "0x6C2D8C0", VA = "0x6C2E8C0")]
	private float GetDeltaDistance(float viewMin, float viewMax, float childBoundaryMin, float childBoundaryMax)
	{
		return default(float);
	}

	[Token(Token = "0x6000935")]
	[Address(RVA = "0x6C2E9B0", Offset = "0x6C2D9B0", VA = "0x6C2E9B0")]
	public ScrollView()
	{
	}

	[Token(Token = "0x6000936")]
	[Address(RVA = "0x6C2E9C0", Offset = "0x6C2D9C0", VA = "0x6C2E9C0")]
	public ScrollView(ScrollViewMode scrollViewMode)
	{
	}

	[Token(Token = "0x6000939")]
	[Address(RVA = "0x6C2F9C0", Offset = "0x6C2E9C0", VA = "0x6C2F9C0")]
	private void SetScrollViewMode(ScrollViewMode mode)
	{
	}

	[Token(Token = "0x600093A")]
	[Address(RVA = "0x6C30230", Offset = "0x6C2F230", VA = "0x6C30230")]
	private void OnAttachToPanel(AttachToPanelEvent evt)
	{
	}

	[Token(Token = "0x600093B")]
	[Address(RVA = "0x6C307F0", Offset = "0x6C2F7F0", VA = "0x6C307F0")]
	private void OnDetachFromPanel(DetachFromPanelEvent evt)
	{
	}

	[Token(Token = "0x600093C")]
	[Address(RVA = "0x6C30DA0", Offset = "0x6C2FDA0", VA = "0x6C30DA0")]
	private void OnPointerCapture(PointerCaptureEvent evt)
	{
	}

	[Token(Token = "0x600093D")]
	[Address(RVA = "0x6C30E60", Offset = "0x6C2FE60", VA = "0x6C30E60")]
	private void OnPointerCaptureOut(PointerCaptureOutEvent evt)
	{
	}

	[Token(Token = "0x600093E")]
	[Address(RVA = "0x6C31060", Offset = "0x6C30060", VA = "0x6C31060")]
	private void OnGeometryChanged(GeometryChangedEvent evt)
	{
	}

	[Token(Token = "0x600093F")]
	[Address(RVA = "0x6C313B0", Offset = "0x6C303B0", VA = "0x6C313B0")]
	private void OnVerticalSliderViewDataRestored()
	{
	}

	[Token(Token = "0x6000940")]
	[Address(RVA = "0x6C316A0", Offset = "0x6C306A0", VA = "0x6C316A0")]
	private void OnHorizontalSliderViewDataRestored()
	{
	}

	[Token(Token = "0x6000941")]
	[Address(RVA = "0x6C31820", Offset = "0x6C30820", VA = "0x6C31820")]
	private void OnVerticalScrollerSetValueWithoutNotify(float value)
	{
	}

	[Token(Token = "0x6000942")]
	[Address(RVA = "0x6C31830", Offset = "0x6C30830", VA = "0x6C31830")]
	private void OnHorizontalScrollerSetValueWithoutNotify(float value)
	{
	}

	[Token(Token = "0x6000943")]
	[Address(RVA = "0x6C31180", Offset = "0x6C30180", VA = "0x6C31180")]
	private void ScheduleResetLayoutPass()
	{
	}

	[Token(Token = "0x6000944")]
	[Address(RVA = "0x6C30D90", Offset = "0x6C2FD90", VA = "0x6C30D90")]
	private void ResetLayoutPass()
	{
	}

	[Token(Token = "0x6000945")]
	[Address(RVA = "0x6C31840", Offset = "0x6C30840", VA = "0x6C31840")]
	private static float ComputeElasticOffset(float deltaPointer, float initialScrollOffset, float lowLimit, float hardLowLimit, float highLimit, float hardHighLimit)
	{
		return default(float);
	}

	[Token(Token = "0x6000946")]
	[Address(RVA = "0x6C31940", Offset = "0x6C30940", VA = "0x6C31940")]
	private void ComputeInitialSpringBackVelocity()
	{
	}

	[Token(Token = "0x6000947")]
	[Address(RVA = "0x6C31A10", Offset = "0x6C30A10", VA = "0x6C31A10")]
	private void SpringBack()
	{
	}

	[Token(Token = "0x6000948")]
	[Address(RVA = "0x6C31BB0", Offset = "0x6C30BB0", VA = "0x6C31BB0")]
	internal void ApplyScrollInertia()
	{
	}

	[Token(Token = "0x6000949")]
	[Address(RVA = "0x6C31E40", Offset = "0x6C30E40", VA = "0x6C31E40")]
	private void PostPointerUpAnimation()
	{
	}

	[Token(Token = "0x600094A")]
	[Address(RVA = "0x6C31FF0", Offset = "0x6C30FF0", VA = "0x6C31FF0")]
	private void OnPointerDown(PointerDownEvent evt)
	{
	}

	[Token(Token = "0x600094B")]
	[Address(RVA = "0x6C32350", Offset = "0x6C31350", VA = "0x6C32350")]
	private void OnPointerMove(PointerMoveEvent evt)
	{
	}

	[Token(Token = "0x600094C")]
	[Address(RVA = "0x6C32E30", Offset = "0x6C31E30", VA = "0x6C32E30")]
	private void OnPointerCancel(PointerCancelEvent evt)
	{
	}

	[Token(Token = "0x600094D")]
	[Address(RVA = "0x6C32E80", Offset = "0x6C31E80", VA = "0x6C32E80")]
	private void OnPointerUp(PointerUpEvent evt)
	{
	}

	[Token(Token = "0x600094E")]
	[Address(RVA = "0x6C322D0", Offset = "0x6C312D0", VA = "0x6C322D0")]
	private void InitTouchScrolling(Vector2 position, int pointerId)
	{
	}

	[Token(Token = "0x600094F")]
	[Address(RVA = "0x6C32F10", Offset = "0x6C31F10", VA = "0x6C32F10")]
	private void UpdateTouchScrollingBounds()
	{
	}

	[Token(Token = "0x6000950")]
	[Address(RVA = "0x6C32700", Offset = "0x6C31700", VA = "0x6C32700")]
	internal TouchScrollingResult ComputeTouchScrolling(Vector2 position)
	{
		return default(TouchScrollingResult);
	}

	[Token(Token = "0x6000951")]
	[Address(RVA = "0x6C33190", Offset = "0x6C32190", VA = "0x6C33190")]
	private bool ApplyTouchScrolling(Vector2 newScrollOffset)
	{
		return default(bool);
	}

	[Token(Token = "0x6000952")]
	[Address(RVA = "0x6C30F40", Offset = "0x6C2FF40", VA = "0x6C30F40")]
	private bool ReleaseScrolling(int pointerId, IEventHandler target)
	{
		return default(bool);
	}

	[Token(Token = "0x6000953")]
	[Address(RVA = "0x6C333A0", Offset = "0x6C323A0", VA = "0x6C333A0")]
	private void ExecuteElasticSpringAnimation()
	{
	}

	[Token(Token = "0x6000954")]
	[Address(RVA = "0x6C336E0", Offset = "0x6C326E0", VA = "0x6C336E0")]
	private void AdjustScrollers()
	{
	}

	[Token(Token = "0x6000955")]
	[Address(RVA = "0x6C2B660", Offset = "0x6C2A660", VA = "0x6C2B660")]
	internal void UpdateScrollers(bool displayHorizontal, bool displayVertical)
	{
	}

	[Token(Token = "0x6000956")]
	[Address(RVA = "0x6C33B70", Offset = "0x6C32B70", VA = "0x6C33B70")]
	private void OnScrollersGeometryChanged(GeometryChangedEvent evt)
	{
	}

	[Token(Token = "0x6000957")]
	[Address(RVA = "0x6C33D20", Offset = "0x6C32D20", VA = "0x6C33D20")]
	private void OnScrollWheel(WheelEvent evt)
	{
	}

	[Token(Token = "0x6000958")]
	[Address(RVA = "0x6C34880", Offset = "0x6C33880", VA = "0x6C34880")]
	private void OnRootCustomStyleResolved(CustomStyleResolvedEvent evt)
	{
	}

	[Token(Token = "0x6000959")]
	[Address(RVA = "0x6C307E0", Offset = "0x6C2F7E0", VA = "0x6C307E0")]
	private void MarkSingleLineHeightDirty()
	{
	}

	[Token(Token = "0x600095A")]
	[Address(RVA = "0x6C34890", Offset = "0x6C33890", VA = "0x6C34890")]
	private void OnRootPointerUp(PointerUpEvent evt)
	{
	}

	[Token(Token = "0x600095B")]
	[Address(RVA = "0x6C344B0", Offset = "0x6C334B0", VA = "0x6C344B0")]
	private void ReadSingleLineHeight()
	{
	}

	[Token(Token = "0x600095C")]
	[Address(RVA = "0x6C34860", Offset = "0x6C33860", VA = "0x6C34860")]
	private void UpdateElasticBehaviour()
	{
	}

	[Token(Token = "0x600095D")]
	[Address(RVA = "0x6C348A0", Offset = "0x6C338A0", VA = "0x6C348A0")]
	internal void SetScrollOffsetWithoutNotify(Vector2 value)
	{
	}

	[Token(Token = "0x600095E")]
	[Address(RVA = "0x6C349A0", Offset = "0x6C339A0", VA = "0x6C349A0", Slot = "135")]
	internal override void OnViewDataReady()
	{
	}
}
