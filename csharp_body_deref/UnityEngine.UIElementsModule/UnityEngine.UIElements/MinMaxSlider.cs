// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.MinMaxSlider
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
public class MinMaxSlider : BaseField<Vector2>
{
	[Token(Token = "0x2000104")]
	[Obsolete("UxmlFactory is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlFactory : UxmlFactory<MinMaxSlider, UxmlTraits>
	{
		[Token(Token = "0x600077F")]
		[Address(RVA = "0x6C12C90", Offset = "0x6C11C90", VA = "0x6C12C90")]
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
		[Address(RVA = "0x6C12CD0", Offset = "0x6C11CD0", VA = "0x6C12CD0")]
		public UxmlTraits()
		{
		}

		[Token(Token = "0x6000781")]
		[Address(RVA = "0x6C12ED0", Offset = "0x6C11ED0", VA = "0x6C12ED0", Slot = "4")]
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
		[Address(RVA = "0x6C0F1F0", Offset = "0x6C0E1F0", VA = "0x6C0F1F0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000755")]
		[Address(RVA = "0x6C0F200", Offset = "0x6C0E200", VA = "0x6C0F200")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000150")]
	internal VisualElement dragMinThumb
	{
		[Token(Token = "0x6000756")]
		[Address(RVA = "0x6C0F220", Offset = "0x6C0E220", VA = "0x6C0F220")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000757")]
		[Address(RVA = "0x6C0F230", Offset = "0x6C0E230", VA = "0x6C0F230")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000151")]
	internal VisualElement dragMaxThumb
	{
		[Token(Token = "0x6000758")]
		[Address(RVA = "0x6C0F250", Offset = "0x6C0E250", VA = "0x6C0F250")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000759")]
		[Address(RVA = "0x6C0F260", Offset = "0x6C0E260", VA = "0x6C0F260")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000152")]
	internal ClampedDragger<float> clampedDragger
	{
		[Token(Token = "0x600075A")]
		[Address(RVA = "0x6C0F280", Offset = "0x6C0E280", VA = "0x6C0F280")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600075B")]
		[Address(RVA = "0x6C0F290", Offset = "0x6C0E290", VA = "0x6C0F290")]
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
		[Address(RVA = "0x6C0F2B0", Offset = "0x6C0E2B0", VA = "0x6C0F2B0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600075D")]
		[Address(RVA = "0x6C0F2D0", Offset = "0x6C0E2D0", VA = "0x6C0F2D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000154")]
	[CreateProperty]
	public float maxValue
	{
		[Token(Token = "0x600075E")]
		[Address(RVA = "0x6C0F4F0", Offset = "0x6C0E4F0", VA = "0x6C0F4F0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600075F")]
		[Address(RVA = "0x6C0F510", Offset = "0x6C0E510", VA = "0x6C0F510")]
		set
		{
		}
	}

	[Token(Token = "0x17000155")]
	public override Vector2 value
	{
		[Token(Token = "0x6000760")]
		[Address(RVA = "0x6C0F6D0", Offset = "0x6C0E6D0", VA = "0x6C0F6D0", Slot = "148")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000761")]
		[Address(RVA = "0x6C0F710", Offset = "0x6C0E710", VA = "0x6C0F710", Slot = "149")]
		set
		{
		}
	}

	[Token(Token = "0x17000156")]
	[CreateProperty(ReadOnly = true)]
	public float range
	{
		[Token(Token = "0x6000763")]
		[Address(RVA = "0x6C103F0", Offset = "0x6C0F3F0", VA = "0x6C103F0")]
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
		[Address(RVA = "0x6C10480", Offset = "0x6C0F480", VA = "0x6C10480")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000765")]
		[Address(RVA = "0x6C10490", Offset = "0x6C0F490", VA = "0x6C10490")]
		set
		{
		}
	}

	[Token(Token = "0x17000158")]
	[CreateProperty]
	public float highLimit
	{
		[Token(Token = "0x6000766")]
		[Address(RVA = "0x6C10470", Offset = "0x6C0F470", VA = "0x6C10470")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000767")]
		[Address(RVA = "0x6C10640", Offset = "0x6C0F640", VA = "0x6C10640")]
		set
		{
		}
	}

	[Token(Token = "0x6000762")]
	[Address(RVA = "0x6C0F7E0", Offset = "0x6C0E7E0", VA = "0x6C0F7E0", Slot = "159")]
	public override void SetValueWithoutNotify(Vector2 newValue)
	{
	}

	[Token(Token = "0x6000768")]
	[Address(RVA = "0x6C107F0", Offset = "0x6C0F7F0", VA = "0x6C107F0")]
	public MinMaxSlider()
	{
	}

	[Token(Token = "0x6000769")]
	[Address(RVA = "0x6C10820", Offset = "0x6C0F820", VA = "0x6C10820")]
	public MinMaxSlider(string label, float minValue = 0f, float maxValue = 10f, float minLimit = -3.4028235E+38f, float maxLimit = 3.4028235E+38f)
	{
	}

	[Token(Token = "0x600076A")]
	[Address(RVA = "0x6C0F480", Offset = "0x6C0E480", VA = "0x6C0F480")]
	private Vector2 ClampValues(Vector2 valueToClamp)
	{
		return default(Vector2);
	}

	[Token(Token = "0x600076B")]
	[Address(RVA = "0x6C11060", Offset = "0x6C10060", VA = "0x6C11060")]
	private void UpdateDragElementPosition(GeometryChangedEvent evt)
	{
	}

	[Token(Token = "0x600076C")]
	[Address(RVA = "0x6C0F8B0", Offset = "0x6C0E8B0", VA = "0x6C0F8B0")]
	private void UpdateDragElementPosition()
	{
	}

	[Token(Token = "0x600076D")]
	[Address(RVA = "0x6C11110", Offset = "0x6C10110", VA = "0x6C11110")]
	internal float SliderLerpUnclamped(float a, float b, float interpolant)
	{
		return default(float);
	}

	[Token(Token = "0x600076E")]
	[Address(RVA = "0x6C11100", Offset = "0x6C10100", VA = "0x6C11100")]
	internal float SliderNormalizeValue(float currentValue, float lowerValue, float higherValue)
	{
		return default(float);
	}

	[Token(Token = "0x600076F")]
	[Address(RVA = "0x6C11120", Offset = "0x6C10120", VA = "0x6C11120")]
	private float ComputeValueFromPosition(float positionToConvert)
	{
		return default(float);
	}

	[Token(Token = "0x6000770")]
	[Address(RVA = "0x6C111D0", Offset = "0x6C101D0", VA = "0x6C111D0", Slot = "8")]
	[EventInterest(new Type[] { typeof(GeometryChangedEvent) })]
	protected override void HandleEventBubbleUp(EventBase evt)
	{
	}

	[Token(Token = "0x6000771")]
	[Address(RVA = "0x6C11340", Offset = "0x6C10340", VA = "0x6C11340")]
	private DragState GetNavigationState()
	{
		return default(DragState);
	}

	[Token(Token = "0x6000772")]
	[Address(RVA = "0x6C113F0", Offset = "0x6C103F0", VA = "0x6C113F0")]
	private void SetNavigationState(DragState newState)
	{
	}

	[Token(Token = "0x6000773")]
	[Address(RVA = "0x6C11510", Offset = "0x6C10510", VA = "0x6C11510")]
	private void OnFocusIn(FocusInEvent evt)
	{
	}

	[Token(Token = "0x6000774")]
	[Address(RVA = "0x6C11530", Offset = "0x6C10530", VA = "0x6C11530")]
	private void OnBlur(BlurEvent evt)
	{
	}

	[Token(Token = "0x6000775")]
	[Address(RVA = "0x6C11540", Offset = "0x6C10540", VA = "0x6C11540")]
	private void OnNavigationSubmit(NavigationSubmitEvent evt)
	{
	}

	[Token(Token = "0x6000776")]
	[Address(RVA = "0x6C11560", Offset = "0x6C10560", VA = "0x6C11560")]
	private void OnNavigationMove(NavigationMoveEvent evt)
	{
	}

	[Token(Token = "0x6000777")]
	[Address(RVA = "0x6C11630", Offset = "0x6C10630", VA = "0x6C11630")]
	private void ComputeValueFromKey(bool leftDirection, bool isShift, DragState moveState)
	{
	}

	[Token(Token = "0x6000778")]
	[Address(RVA = "0x6C11E00", Offset = "0x6C10E00", VA = "0x6C11E00")]
	private void SetSliderValueFromDrag()
	{
	}

	[Token(Token = "0x6000779")]
	[Address(RVA = "0x6C12080", Offset = "0x6C11080", VA = "0x6C12080")]
	private void SetSliderValueFromClick()
	{
	}

	[Token(Token = "0x600077A")]
	[Address(RVA = "0x6C11E90", Offset = "0x6C10E90", VA = "0x6C11E90")]
	private void ComputeValueFromDraggingThumb(float dragElementStartPos, float dragElementEndPos)
	{
	}

	[Token(Token = "0x600077B")]
	[Address(RVA = "0x6C12590", Offset = "0x6C11590", VA = "0x6C12590", Slot = "158")]
	protected override void UpdateMixedValueContent()
	{
	}

	[Token(Token = "0x600077C")]
	[Address(RVA = "0x6C125A0", Offset = "0x6C115A0", VA = "0x6C125A0", Slot = "156")]
	internal override void RegisterEditingCallbacks()
	{
	}

	[Token(Token = "0x600077D")]
	[Address(RVA = "0x6C126E0", Offset = "0x6C116E0", VA = "0x6C126E0", Slot = "157")]
	internal override void UnregisterEditingCallbacks()
	{
	}
}
