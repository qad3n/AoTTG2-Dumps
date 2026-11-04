// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.MinMaxSlider
// Update status: CHANGED in this game update
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
public class MinMaxSlider : BaseField<Vector2>
{
	[Token(Token = "0x2000104")]
	[Obsolete("UxmlFactory is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlFactory : UxmlFactory<MinMaxSlider, UxmlTraits>
	{
		[Token(Token = "0x600077F")]
		[Address(RVA = "0x3224CE0", Offset = "0x32232E0", VA = "0x183224CE0")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x2000105")]
	[Obsolete("UxmlTraits is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlTraits : BaseField<Vector2>.UxmlTraits
	{
		[Token(Token = "0x400046A")]
		[FieldOffset(Offset = "0x98")]
		private UxmlFloatAttributeDescription m_MinValue;

		[Token(Token = "0x400046B")]
		[FieldOffset(Offset = "0xA0")]
		private UxmlFloatAttributeDescription m_MaxValue;

		[Token(Token = "0x400046C")]
		[FieldOffset(Offset = "0xA8")]
		private UxmlFloatAttributeDescription m_LowLimit;

		[Token(Token = "0x400046D")]
		[FieldOffset(Offset = "0xB0")]
		private UxmlFloatAttributeDescription m_HighLimit;

		[Token(Token = "0x6000780")]
		[Address(RVA = "0x3226600", Offset = "0x3224C00", VA = "0x183226600")]
		public UxmlTraits()
		{
		}

		[Token(Token = "0x6000781")]
		[Address(RVA = "0x32252D0", Offset = "0x32238D0", VA = "0x1832252D0", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}
	}

	[Token(Token = "0x2000106")]
	private enum DragState
	{
		[Token(Token = "0x400046F")]
		MinThumb,
		[Token(Token = "0x4000470")]
		MaxThumb,
		[Token(Token = "0x4000471")]
		MiddleThumb,
		[Token(Token = "0x4000472")]
		NoThumb
	}

	[Token(Token = "0x4000454")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly BindingId minValueProperty;

	[Token(Token = "0x4000455")]
	[FieldOffset(Offset = "0x98")]
	internal static readonly BindingId maxValueProperty;

	[Token(Token = "0x4000456")]
	[FieldOffset(Offset = "0x130")]
	internal static readonly BindingId rangeProperty;

	[Token(Token = "0x4000457")]
	[FieldOffset(Offset = "0x1C8")]
	internal static readonly BindingId lowLimitProperty;

	[Token(Token = "0x4000458")]
	[FieldOffset(Offset = "0x260")]
	internal static readonly BindingId highLimitProperty;

	[Token(Token = "0x400045D")]
	[FieldOffset(Offset = "0x378")]
	private Vector2 m_DragElementStartPos;

	[Token(Token = "0x400045E")]
	[FieldOffset(Offset = "0x380")]
	private Vector2 m_ValueStartPos;

	[Token(Token = "0x400045F")]
	[FieldOffset(Offset = "0x388")]
	private DragState m_DragState;

	[Token(Token = "0x4000460")]
	[FieldOffset(Offset = "0x38C")]
	private float m_MinLimit;

	[Token(Token = "0x4000461")]
	[FieldOffset(Offset = "0x390")]
	private float m_MaxLimit;

	[Token(Token = "0x4000462")]
	[FieldOffset(Offset = "0x2F8")]
	public new static readonly string ussClassName;

	[Token(Token = "0x4000463")]
	[FieldOffset(Offset = "0x300")]
	public new static readonly string labelUssClassName;

	[Token(Token = "0x4000464")]
	[FieldOffset(Offset = "0x308")]
	public new static readonly string inputUssClassName;

	[Token(Token = "0x4000465")]
	[FieldOffset(Offset = "0x310")]
	public static readonly string trackerUssClassName;

	[Token(Token = "0x4000466")]
	[FieldOffset(Offset = "0x318")]
	public static readonly string draggerUssClassName;

	[Token(Token = "0x4000467")]
	[FieldOffset(Offset = "0x320")]
	public static readonly string minThumbUssClassName;

	[Token(Token = "0x4000468")]
	[FieldOffset(Offset = "0x328")]
	public static readonly string maxThumbUssClassName;

	[Token(Token = "0x4000469")]
	[FieldOffset(Offset = "0x330")]
	public static readonly string movableUssClassName;

	[Token(Token = "0x1700014F")]
	internal VisualElement dragElement
	{
		[Token(Token = "0x6000754")]
		[Address(RVA = "0xDC2AF0", Offset = "0xDC10F0", VA = "0x180DC2AF0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000755")]
		[Address(RVA = "0x12AE860", Offset = "0x12ACE60", VA = "0x1812AE860")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000150")]
	internal VisualElement dragMinThumb
	{
		[Token(Token = "0x6000756")]
		[Address(RVA = "0xDC2B00", Offset = "0xDC1100", VA = "0x180DC2B00")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000757")]
		[Address(RVA = "0x12AE880", Offset = "0x12ACE80", VA = "0x1812AE880")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000151")]
	internal VisualElement dragMaxThumb
	{
		[Token(Token = "0x6000758")]
		[Address(RVA = "0x12ADF90", Offset = "0x12AC590", VA = "0x1812ADF90")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000759")]
		[Address(RVA = "0x12AFE40", Offset = "0x12AE440", VA = "0x1812AFE40")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000152")]
	internal ClampedDragger<float> clampedDragger
	{
		[Token(Token = "0x600075A")]
		[Address(RVA = "0x12ADB10", Offset = "0x12AC110", VA = "0x1812ADB10")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600075B")]
		[Address(RVA = "0x12AE840", Offset = "0x12ACE40", VA = "0x1812AE840")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000153")]
	[CreateProperty]
	public float minValue
	{
		[Token(Token = "0x600075C")]
		[Address(RVA = "0x321AF30", Offset = "0x3219530", VA = "0x18321AF30")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600075D")]
		[Address(RVA = "0x321B3C0", Offset = "0x32199C0", VA = "0x18321B3C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000154")]
	[CreateProperty]
	public float maxValue
	{
		[Token(Token = "0x600075E")]
		[Address(RVA = "0x321AF00", Offset = "0x3219500", VA = "0x18321AF00")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600075F")]
		[Address(RVA = "0x321B2B0", Offset = "0x32198B0", VA = "0x18321B2B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000155")]
	public override Vector2 value
	{
		[Token(Token = "0x6000760")]
		[Address(RVA = "0x321AFD0", Offset = "0x32195D0", VA = "0x18321AFD0", Slot = "148")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000761")]
		[Address(RVA = "0x321B4D0", Offset = "0x3219AD0", VA = "0x18321B4D0", Slot = "149")]
		set
		{
		}
	}

	[Token(Token = "0x17000156")]
	[CreateProperty(ReadOnly = true)]
	public float range
	{
		[Token(Token = "0x6000763")]
		[Address(RVA = "0x321AF50", Offset = "0x3219550", VA = "0x18321AF50")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000157")]
	[CreateProperty]
	public float lowLimit
	{
		[Token(Token = "0x6000764")]
		[Address(RVA = "0x321AEF0", Offset = "0x32194F0", VA = "0x18321AEF0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000765")]
		[Address(RVA = "0x321B160", Offset = "0x3219760", VA = "0x18321B160")]
		set
		{
		}
	}

	[Token(Token = "0x17000158")]
	[CreateProperty]
	public float highLimit
	{
		[Token(Token = "0x6000766")]
		[Address(RVA = "0x12ADE00", Offset = "0x12AC400", VA = "0x1812ADE00")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000767")]
		[Address(RVA = "0x321B010", Offset = "0x3219610", VA = "0x18321B010")]
		set
		{
		}
	}

	[Token(Token = "0x6000762")]
	[Address(RVA = "0x3219320", Offset = "0x3217920", VA = "0x183219320", Slot = "159")]
	public override void SetValueWithoutNotify(Vector2 newValue)
	{
	}

	[Token(Token = "0x6000768")]
	[Address(RVA = "0x321A4C0", Offset = "0x3218AC0", VA = "0x18321A4C0")]
	public MinMaxSlider()
	{
	}

	[Token(Token = "0x6000769")]
	[Address(RVA = "0x321A500", Offset = "0x3218B00", VA = "0x18321A500")]
	public MinMaxSlider(string label, float minValue = 0f, float maxValue = 10f, float minLimit = -3.4028235E+38f, float maxLimit = 3.4028235E+38f)
	{
	}

	[Token(Token = "0x600076A")]
	[Address(RVA = "0x3217CE0", Offset = "0x32162E0", VA = "0x183217CE0")]
	private Vector2 ClampValues(Vector2 valueToClamp)
	{
		return default(Vector2);
	}

	[Token(Token = "0x600076B")]
	[Address(RVA = "0x3219CE0", Offset = "0x32182E0", VA = "0x183219CE0")]
	private void UpdateDragElementPosition(GeometryChangedEvent evt)
	{
	}

	[Token(Token = "0x600076C")]
	[Address(RVA = "0x32194E0", Offset = "0x3217AE0", VA = "0x1832194E0")]
	private void UpdateDragElementPosition()
	{
	}

	[Token(Token = "0x600076D")]
	[Address(RVA = "0x20A6DB0", Offset = "0x20A53B0", VA = "0x1820A6DB0")]
	internal float SliderLerpUnclamped(float a, float b, float interpolant)
	{
		return default(float);
	}

	[Token(Token = "0x600076E")]
	[Address(RVA = "0x3219390", Offset = "0x3217990", VA = "0x183219390")]
	internal float SliderNormalizeValue(float currentValue, float lowerValue, float higherValue)
	{
		return default(float);
	}

	[Token(Token = "0x600076F")]
	[Address(RVA = "0x3218400", Offset = "0x3216A00", VA = "0x183218400")]
	private float ComputeValueFromPosition(float positionToConvert)
	{
		return default(float);
	}

	[Token(Token = "0x6000770")]
	[Address(RVA = "0x3218590", Offset = "0x3216B90", VA = "0x183218590", Slot = "8")]
	[EventInterest(new Type[] { typeof(GeometryChangedEvent) })]
	protected override void HandleEventBubbleUp(EventBase evt)
	{
	}

	[Token(Token = "0x6000771")]
	[Address(RVA = "0x32184C0", Offset = "0x3216AC0", VA = "0x1832184C0")]
	private DragState GetNavigationState()
	{
		return default(DragState);
	}

	[Token(Token = "0x6000772")]
	[Address(RVA = "0x3218BA0", Offset = "0x32171A0", VA = "0x183218BA0")]
	private void SetNavigationState(DragState newState)
	{
	}

	[Token(Token = "0x6000773")]
	[Address(RVA = "0x3218830", Offset = "0x3216E30", VA = "0x183218830")]
	private void OnFocusIn(FocusInEvent evt)
	{
	}

	[Token(Token = "0x6000774")]
	[Address(RVA = "0x3218710", Offset = "0x3216D10", VA = "0x183218710")]
	private void OnBlur(BlurEvent evt)
	{
	}

	[Token(Token = "0x6000775")]
	[Address(RVA = "0x3218A40", Offset = "0x3217040", VA = "0x183218A40")]
	private void OnNavigationSubmit(NavigationSubmitEvent evt)
	{
	}

	[Token(Token = "0x6000776")]
	[Address(RVA = "0x3218960", Offset = "0x3216F60", VA = "0x183218960")]
	private void OnNavigationMove(NavigationMoveEvent evt)
	{
	}

	[Token(Token = "0x6000777")]
	[Address(RVA = "0x3217F60", Offset = "0x3216560", VA = "0x183217F60")]
	private void ComputeValueFromKey(bool leftDirection, bool isShift, DragState moveState)
	{
	}

	[Token(Token = "0x6000778")]
	[Address(RVA = "0x3219290", Offset = "0x3217890", VA = "0x183219290")]
	private void SetSliderValueFromDrag()
	{
	}

	[Token(Token = "0x6000779")]
	[Address(RVA = "0x3218CE0", Offset = "0x32172E0", VA = "0x183218CE0")]
	private void SetSliderValueFromClick()
	{
	}

	[Token(Token = "0x600077A")]
	[Address(RVA = "0x3217D60", Offset = "0x3216360", VA = "0x183217D60")]
	private void ComputeValueFromDraggingThumb(float dragElementStartPos, float dragElementEndPos)
	{
	}

	[Token(Token = "0x600077B")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "158")]
	protected override void UpdateMixedValueContent()
	{
	}

	[Token(Token = "0x600077C")]
	[Address(RVA = "0x3218A70", Offset = "0x3217070", VA = "0x183218A70", Slot = "156")]
	internal override void RegisterEditingCallbacks()
	{
	}

	[Token(Token = "0x600077D")]
	[Address(RVA = "0x32193B0", Offset = "0x32179B0", VA = "0x1832193B0", Slot = "157")]
	internal override void UnregisterEditingCallbacks()
	{
	}
}
