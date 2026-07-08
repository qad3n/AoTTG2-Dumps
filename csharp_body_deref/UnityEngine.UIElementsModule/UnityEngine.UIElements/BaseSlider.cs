using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Properties;

namespace UnityEngine.UIElements;

[Token(Token = "0x200004A")]
public abstract class BaseSlider<TValueType> : BaseField<TValueType>, IValueField<TValueType> where TValueType : IComparable<TValueType>
{
	[Token(Token = "0x200004B")]
	public new class UxmlTraits<TValueUxmlAttributeType> : BaseFieldTraits<TValueType, TValueUxmlAttributeType> where TValueUxmlAttributeType : TypedUxmlAttributeDescription<TValueType>, new()
	{
		[Token(Token = "0x60002A1")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x200004C")]
	internal enum SliderKey
	{
		[Token(Token = "0x400013F")]
		None,
		[Token(Token = "0x4000140")]
		Lowest,
		[Token(Token = "0x4000141")]
		LowerPage,
		[Token(Token = "0x4000142")]
		Lower,
		[Token(Token = "0x4000143")]
		Higher,
		[Token(Token = "0x4000144")]
		HigherPage,
		[Token(Token = "0x4000145")]
		Highest
	}

	[Token(Token = "0x400011E")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly DataBindingProperty lowValueProperty;

	[Token(Token = "0x400011F")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly DataBindingProperty highValueProperty;

	[Token(Token = "0x4000120")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly DataBindingProperty rangeProperty;

	[Token(Token = "0x4000121")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly DataBindingProperty pageSizeProperty;

	[Token(Token = "0x4000122")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly DataBindingProperty showInputFieldProperty;

	[Token(Token = "0x4000123")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly DataBindingProperty directionProperty;

	[Token(Token = "0x4000124")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly DataBindingProperty invertedProperty;

	[Token(Token = "0x400012A")]
	[FieldOffset(Offset = "0x0")]
	private bool m_IsEditingTextField;

	[Token(Token = "0x400012B")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	[DontCreateProperty]
	private TValueType m_LowValue;

	[Token(Token = "0x400012C")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	[DontCreateProperty]
	private TValueType m_HighValue;

	[Token(Token = "0x400012D")]
	[FieldOffset(Offset = "0x0")]
	private float m_PageSize;

	[Token(Token = "0x400012E")]
	[FieldOffset(Offset = "0x0")]
	private bool m_ShowInputField;

	[Token(Token = "0x4000131")]
	[FieldOffset(Offset = "0x0")]
	private Rect m_DragElementStartPos;

	[Token(Token = "0x4000132")]
	[FieldOffset(Offset = "0x0")]
	private SliderDirection m_Direction;

	[Token(Token = "0x4000133")]
	[FieldOffset(Offset = "0x0")]
	private bool m_Inverted;

	[Token(Token = "0x4000134")]
	[FieldOffset(Offset = "0x0")]
	public new static readonly string ussClassName;

	[Token(Token = "0x4000135")]
	[FieldOffset(Offset = "0x0")]
	public new static readonly string labelUssClassName;

	[Token(Token = "0x4000136")]
	[FieldOffset(Offset = "0x0")]
	public new static readonly string inputUssClassName;

	[Token(Token = "0x4000137")]
	[FieldOffset(Offset = "0x0")]
	public static readonly string horizontalVariantUssClassName;

	[Token(Token = "0x4000138")]
	[FieldOffset(Offset = "0x0")]
	public static readonly string verticalVariantUssClassName;

	[Token(Token = "0x4000139")]
	[FieldOffset(Offset = "0x0")]
	public static readonly string dragContainerUssClassName;

	[Token(Token = "0x400013A")]
	[FieldOffset(Offset = "0x0")]
	public static readonly string trackerUssClassName;

	[Token(Token = "0x400013B")]
	[FieldOffset(Offset = "0x0")]
	public static readonly string draggerUssClassName;

	[Token(Token = "0x400013C")]
	[FieldOffset(Offset = "0x0")]
	public static readonly string draggerBorderUssClassName;

	[Token(Token = "0x400013D")]
	[FieldOffset(Offset = "0x0")]
	public static readonly string textFieldClassName;

	[Token(Token = "0x1700005D")]
	internal VisualElement dragContainer
	{
		[Token(Token = "0x600025D")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600025E")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700005E")]
	internal VisualElement dragElement
	{
		[Token(Token = "0x600025F")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000260")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700005F")]
	internal VisualElement trackElement
	{
		[Token(Token = "0x6000261")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000262")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000060")]
	internal VisualElement dragBorderElement
	{
		[Token(Token = "0x6000263")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000264")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000061")]
	internal TextField inputTextField
	{
		[Token(Token = "0x6000265")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000266")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000062")]
	[CreateProperty]
	public TValueType lowValue
	{
		[Token(Token = "0x6000267")]
		get
		{
			return (TValueType)null;
		}
		[Token(Token = "0x6000268")]
		set
		{
		}
	}

	[Token(Token = "0x17000063")]
	[CreateProperty]
	public TValueType highValue
	{
		[Token(Token = "0x6000269")]
		get
		{
			return (TValueType)null;
		}
		[Token(Token = "0x600026A")]
		set
		{
		}
	}

	[Token(Token = "0x17000064")]
	[CreateProperty(ReadOnly = true)]
	public TValueType range
	{
		[Token(Token = "0x600026C")]
		get
		{
			return (TValueType)null;
		}
	}

	[Token(Token = "0x17000065")]
	[CreateProperty]
	public virtual float pageSize
	{
		[Token(Token = "0x600026D")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600026E")]
		set
		{
		}
	}

	[Token(Token = "0x17000066")]
	[CreateProperty]
	public virtual bool showInputField
	{
		[Token(Token = "0x600026F")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000270")]
		set
		{
		}
	}

	[Token(Token = "0x17000067")]
	internal bool clamped
	{
		[Token(Token = "0x6000271")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000272")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000068")]
	internal ClampedDragger<TValueType> clampedDragger
	{
		[Token(Token = "0x6000273")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000274")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000069")]
	public override TValueType value
	{
		[Token(Token = "0x6000277")]
		get
		{
			return (TValueType)null;
		}
		[Token(Token = "0x6000278")]
		set
		{
		}
	}

	[Token(Token = "0x1700006A")]
	[CreateProperty]
	public SliderDirection direction
	{
		[Token(Token = "0x600027D")]
		get
		{
			return default(SliderDirection);
		}
		[Token(Token = "0x600027E")]
		set
		{
		}
	}

	[Token(Token = "0x1700006B")]
	[CreateProperty]
	public bool inverted
	{
		[Token(Token = "0x600027F")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000280")]
		set
		{
		}
	}

	[Token(Token = "0x600026B")]
	internal void SetHighValueWithoutNotify(TValueType newHighValue)
	{
	}

	[Token(Token = "0x6000275")]
	private TValueType Clamp(TValueType value, TValueType lowBound, TValueType highBound)
	{
		return (TValueType)null;
	}

	[Token(Token = "0x6000276")]
	private TValueType GetClampedValue(TValueType newValue)
	{
		return (TValueType)null;
	}

	[Token(Token = "0x6000279")]
	public virtual void ApplyInputDeviceDelta(Vector3 delta, DeltaSpeed speed, TValueType startValue)
	{
	}

	[Token(Token = "0x600027A")]
	private void UnityEngine_002EUIElements_002EIValueField_003CTValueType_003E_002EStartDragging()
	{
	}

	[Token(Token = "0x600027B")]
	private void UnityEngine_002EUIElements_002EIValueField_003CTValueType_003E_002EStopDragging()
	{
	}

	[Token(Token = "0x600027C")]
	public override void SetValueWithoutNotify(TValueType newValue)
	{
	}

	[Token(Token = "0x6000281")]
	internal BaseSlider(string label, TValueType start, TValueType end, SliderDirection direction = SliderDirection.Horizontal, float pageSize = 0f)
	{
	}

	[Token(Token = "0x6000282")]
	protected static float GetClosestPowerOfTen(float positiveNumber)
	{
		return default(float);
	}

	[Token(Token = "0x6000283")]
	protected static float RoundToMultipleOf(float value, float roundingValue)
	{
		return default(float);
	}

	[Token(Token = "0x6000284")]
	private void ClampValue()
	{
	}

	[Token(Token = "0x6000285")]
	internal abstract TValueType SliderLerpUnclamped(TValueType a, TValueType b, float interpolant);

	[Token(Token = "0x6000286")]
	internal abstract float SliderNormalizeValue(TValueType currentValue, TValueType lowerValue, TValueType higherValue);

	[Token(Token = "0x6000287")]
	internal abstract TValueType SliderRange();

	[Token(Token = "0x6000288")]
	internal abstract TValueType ParseStringToValue(string previousValue, string newValue);

	[Token(Token = "0x6000289")]
	internal abstract void ComputeValueFromKey(SliderKey sliderKey, bool isShift);

	[Token(Token = "0x600028A")]
	private TValueType SliderLerpDirectionalUnclamped(TValueType a, TValueType b, float positionInterpolant)
	{
		return (TValueType)null;
	}

	[Token(Token = "0x600028B")]
	private void SetSliderValueFromDrag()
	{
	}

	[Token(Token = "0x600028C")]
	private void ComputeValueAndDirectionFromDrag(float sliderLength, float dragElementLength, float dragElementPos)
	{
	}

	[Token(Token = "0x600028D")]
	private void SetSliderValueFromClick()
	{
	}

	[Token(Token = "0x600028E")]
	private void OnKeyDown(KeyDownEvent evt)
	{
	}

	[Token(Token = "0x600028F")]
	private void OnNavigationMove(NavigationMoveEvent evt)
	{
	}

	[Token(Token = "0x6000290")]
	internal virtual void ComputeValueAndDirectionFromClick(float sliderLength, float dragElementLength, float dragElementPos, float dragElementLastPos)
	{
	}

	[Token(Token = "0x6000291")]
	public void AdjustDragElement(float factor)
	{
	}

	[Token(Token = "0x6000292")]
	private void UpdateDragElementPosition(GeometryChangedEvent evt)
	{
	}

	[Token(Token = "0x6000293")]
	internal override void OnViewDataReady()
	{
	}

	[Token(Token = "0x6000294")]
	private bool SameValues(float a, float b, float epsilon)
	{
		return default(bool);
	}

	[Token(Token = "0x6000295")]
	private void UpdateDragElementPosition()
	{
	}

	[Token(Token = "0x6000296")]
	[EventInterest(new Type[] { typeof(GeometryChangedEvent) })]
	protected override void ExecuteDefaultAction(EventBase evt)
	{
	}

	[Token(Token = "0x6000297")]
	private void UpdateTextFieldVisibility()
	{
	}

	[Token(Token = "0x6000298")]
	private void UpdateTextFieldValue()
	{
	}

	[Token(Token = "0x6000299")]
	private void OnTextFieldFocusIn(FocusInEvent evt)
	{
	}

	[Token(Token = "0x600029A")]
	private void OnTextFieldFocusOut(FocusOutEvent evt)
	{
	}

	[Token(Token = "0x600029B")]
	private void OnInputNavigationMoveEvent(NavigationMoveEvent evt)
	{
	}

	[Token(Token = "0x600029C")]
	private void OnTextFieldValueChange(ChangeEvent<string> evt)
	{
	}

	[Token(Token = "0x600029D")]
	protected override void UpdateMixedValueContent()
	{
	}

	[Token(Token = "0x600029E")]
	internal override void RegisterEditingCallbacks()
	{
	}

	[Token(Token = "0x600029F")]
	internal override void UnregisterEditingCallbacks()
	{
	}
}
