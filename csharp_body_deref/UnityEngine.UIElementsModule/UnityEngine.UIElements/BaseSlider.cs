// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.BaseSlider
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Properties;

namespace UnityEngine.UIElements;

[Token(Token = "0x200007E")]
public abstract class BaseSlider<TValueType> : BaseField<TValueType>, IValueField<TValueType> where TValueType : IComparable<TValueType>
{
	[Token(Token = "0x200007F")]
	[Obsolete("UxmlTraits<TValueUxmlAttributeType> is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlTraits<TValueUxmlAttributeType> : BaseFieldTraits<TValueType, TValueUxmlAttributeType> where TValueUxmlAttributeType : TypedUxmlAttributeDescription<TValueType>, new()
	{
		[Token(Token = "0x600043C")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x2000080")]
	internal enum SliderKey
	{
		[Token(Token = "0x4000238")]
		None,
		[Token(Token = "0x4000239")]
		Lowest,
		[Token(Token = "0x400023A")]
		LowerPage,
		[Token(Token = "0x400023B")]
		Lower,
		[Token(Token = "0x400023C")]
		Higher,
		[Token(Token = "0x400023D")]
		HigherPage,
		[Token(Token = "0x400023E")]
		Highest
	}

	[Token(Token = "0x4000210")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly BindingId lowValueProperty;

	[Token(Token = "0x4000211")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly BindingId highValueProperty;

	[Token(Token = "0x4000212")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly BindingId rangeProperty;

	[Token(Token = "0x4000213")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly BindingId pageSizeProperty;

	[Token(Token = "0x4000214")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly BindingId showInputFieldProperty;

	[Token(Token = "0x4000215")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly BindingId directionProperty;

	[Token(Token = "0x4000216")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly BindingId invertedProperty;

	[Token(Token = "0x4000217")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly BindingId fillProperty;

	[Token(Token = "0x400021E")]
	[FieldOffset(Offset = "0x0")]
	private float m_AdjustedPageSizeFromClick;

	[Token(Token = "0x400021F")]
	[FieldOffset(Offset = "0x0")]
	private bool m_IsEditingTextField;

	[Token(Token = "0x4000220")]
	[FieldOffset(Offset = "0x0")]
	private bool m_Fill;

	[Token(Token = "0x4000221")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	[DontCreateProperty]
	private TValueType m_LowValue;

	[Token(Token = "0x4000222")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	[DontCreateProperty]
	private TValueType m_HighValue;

	[Token(Token = "0x4000223")]
	[FieldOffset(Offset = "0x0")]
	private float m_PageSize;

	[Token(Token = "0x4000224")]
	[FieldOffset(Offset = "0x0")]
	private bool m_ShowInputField;

	[Token(Token = "0x4000227")]
	[FieldOffset(Offset = "0x0")]
	private Rect m_DragElementStartPos;

	[Token(Token = "0x4000228")]
	[FieldOffset(Offset = "0x0")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private Action<TValueType> m_onSetValueWithoutNotify;

	[Token(Token = "0x4000229")]
	[FieldOffset(Offset = "0x0")]
	private SliderDirection m_Direction;

	[Token(Token = "0x400022A")]
	[FieldOffset(Offset = "0x0")]
	private bool m_Inverted;

	[Token(Token = "0x400022B")]
	[FieldOffset(Offset = "0x0")]
	public new static readonly string ussClassName;

	[Token(Token = "0x400022C")]
	[FieldOffset(Offset = "0x0")]
	public new static readonly string labelUssClassName;

	[Token(Token = "0x400022D")]
	[FieldOffset(Offset = "0x0")]
	public new static readonly string inputUssClassName;

	[Token(Token = "0x400022E")]
	[FieldOffset(Offset = "0x0")]
	public static readonly string horizontalVariantUssClassName;

	[Token(Token = "0x400022F")]
	[FieldOffset(Offset = "0x0")]
	public static readonly string verticalVariantUssClassName;

	[Token(Token = "0x4000230")]
	[FieldOffset(Offset = "0x0")]
	public static readonly string dragContainerUssClassName;

	[Token(Token = "0x4000231")]
	[FieldOffset(Offset = "0x0")]
	public static readonly string trackerUssClassName;

	[Token(Token = "0x4000232")]
	[FieldOffset(Offset = "0x0")]
	public static readonly string draggerUssClassName;

	[Token(Token = "0x4000233")]
	[FieldOffset(Offset = "0x0")]
	public static readonly string draggerBorderUssClassName;

	[Token(Token = "0x4000234")]
	[FieldOffset(Offset = "0x0")]
	public static readonly string textFieldClassName;

	[Token(Token = "0x4000235")]
	[FieldOffset(Offset = "0x0")]
	public static readonly string fillUssClassName;

	[Token(Token = "0x4000236")]
	[FieldOffset(Offset = "0x0")]
	public static readonly string movableUssClassName;

	[Token(Token = "0x170000AF")]
	internal VisualElement dragContainer
	{
		[Token(Token = "0x60003ED")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60003EE")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000B0")]
	internal VisualElement dragElement
	{
		[Token(Token = "0x60003EF")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60003F0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000B1")]
	internal VisualElement trackElement
	{
		[Token(Token = "0x60003F1")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60003F2")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000B2")]
	internal VisualElement dragBorderElement
	{
		[Token(Token = "0x60003F3")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60003F4")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000B3")]
	internal TextField inputTextField
	{
		[Token(Token = "0x60003F5")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60003F6")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000B4")]
	internal VisualElement fillElement
	{
		[Token(Token = "0x60003F7")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60003F8")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000B5")]
	private protected override bool canSwitchToMixedValue
	{
		[Token(Token = "0x60003F9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000B6")]
	[CreateProperty]
	public TValueType lowValue
	{
		[Token(Token = "0x60003FA")]
		get
		{
			return (TValueType)null;
		}
		[Token(Token = "0x60003FB")]
		set
		{
		}
	}

	[Token(Token = "0x170000B7")]
	[CreateProperty]
	public TValueType highValue
	{
		[Token(Token = "0x60003FC")]
		get
		{
			return (TValueType)null;
		}
		[Token(Token = "0x60003FD")]
		set
		{
		}
	}

	[Token(Token = "0x170000B8")]
	[CreateProperty(ReadOnly = true)]
	public TValueType range
	{
		[Token(Token = "0x60003FF")]
		get
		{
			return (TValueType)null;
		}
	}

	[Token(Token = "0x170000B9")]
	[CreateProperty]
	public virtual float pageSize
	{
		[Token(Token = "0x6000400")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000401")]
		set
		{
		}
	}

	[Token(Token = "0x170000BA")]
	[CreateProperty]
	public virtual bool showInputField
	{
		[Token(Token = "0x6000402")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000403")]
		set
		{
		}
	}

	[Token(Token = "0x170000BB")]
	[CreateProperty]
	public bool fill
	{
		[Token(Token = "0x6000404")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000405")]
		set
		{
		}
	}

	[Token(Token = "0x170000BC")]
	internal bool clamped
	{
		[Token(Token = "0x6000406")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000407")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000BD")]
	internal ClampedDragger<TValueType> clampedDragger
	{
		[Token(Token = "0x6000408")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000409")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000BE")]
	public override TValueType value
	{
		[Token(Token = "0x600040C")]
		get
		{
			return (TValueType)null;
		}
		[Token(Token = "0x600040D")]
		set
		{
		}
	}

	[Token(Token = "0x170000BF")]
	[CreateProperty]
	public SliderDirection direction
	{
		[Token(Token = "0x6000414")]
		get
		{
			return default(SliderDirection);
		}
		[Token(Token = "0x6000415")]
		set
		{
		}
	}

	[Token(Token = "0x170000C0")]
	[CreateProperty]
	public bool inverted
	{
		[Token(Token = "0x6000416")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000417")]
		set
		{
		}
	}

	[Token(Token = "0x14000011")]
	internal event Action<TValueType> onSetValueWithoutNotify
	{
		[Token(Token = "0x6000411")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000412")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x60003FE")]
	internal void SetHighValueWithoutNotify(TValueType newHighValue)
	{
	}

	[Token(Token = "0x600040A")]
	private TValueType Clamp(TValueType value, TValueType lowBound, TValueType highBound)
	{
		return (TValueType)null;
	}

	[Token(Token = "0x600040B")]
	private TValueType GetClampedValue(TValueType newValue)
	{
		return (TValueType)null;
	}

	[Token(Token = "0x600040E")]
	public virtual void ApplyInputDeviceDelta(Vector3 delta, DeltaSpeed speed, TValueType startValue)
	{
	}

	[Token(Token = "0x600040F")]
	private void UnityEngine_002EUIElements_002EIValueField_003CTValueType_003E_002EStartDragging()
	{
	}

	[Token(Token = "0x6000410")]
	private void UnityEngine_002EUIElements_002EIValueField_003CTValueType_003E_002EStopDragging()
	{
	}

	[Token(Token = "0x6000413")]
	public override void SetValueWithoutNotify(TValueType newValue)
	{
	}

	[Token(Token = "0x6000418")]
	internal BaseSlider(string label, TValueType start, TValueType end, SliderDirection direction = SliderDirection.Horizontal, float pageSize = 0f)
	{
	}

	[Token(Token = "0x6000419")]
	protected internal static float GetClosestPowerOfTen(float positiveNumber)
	{
		return default(float);
	}

	[Token(Token = "0x600041A")]
	protected internal static float RoundToMultipleOf(float value, float roundingValue)
	{
		return default(float);
	}

	[Token(Token = "0x600041B")]
	private void ClampValue()
	{
	}

	[Token(Token = "0x600041C")]
	internal abstract TValueType SliderLerpUnclamped(TValueType a, TValueType b, float interpolant);

	[Token(Token = "0x600041D")]
	internal abstract float SliderNormalizeValue(TValueType currentValue, TValueType lowerValue, TValueType higherValue);

	[Token(Token = "0x600041E")]
	internal abstract TValueType SliderRange();

	[Token(Token = "0x600041F")]
	internal abstract TValueType ParseStringToValue(string previousValue, string newValue);

	[Token(Token = "0x6000420")]
	internal abstract void ComputeValueFromKey(SliderKey sliderKey, bool isShift);

	[Token(Token = "0x6000421")]
	private TValueType SliderLerpDirectionalUnclamped(TValueType a, TValueType b, float positionInterpolant)
	{
		return (TValueType)null;
	}

	[Token(Token = "0x6000422")]
	private void SetSliderValueFromDrag()
	{
	}

	[Token(Token = "0x6000423")]
	private void ComputeValueAndDirectionFromDrag(float sliderLength, float dragElementLength, float dragElementPos)
	{
	}

	[Token(Token = "0x6000424")]
	private void SetSliderValueFromClick()
	{
	}

	[Token(Token = "0x6000425")]
	private void OnKeyDown(KeyDownEvent evt)
	{
	}

	[Token(Token = "0x6000426")]
	private void OnNavigationMove(NavigationMoveEvent evt)
	{
	}

	[Token(Token = "0x6000427")]
	private void OnNavigationSubmit(NavigationSubmitEvent evt)
	{
	}

	[Token(Token = "0x6000428")]
	internal virtual void ComputeValueAndDirectionFromClick(float sliderLength, float dragElementLength, float dragElementPos, float dragElementLastPos)
	{
	}

	[Token(Token = "0x6000429")]
	public void AdjustDragElement(float factor)
	{
	}

	[Token(Token = "0x600042A")]
	private void UpdateDragElementPosition(GeometryChangedEvent evt)
	{
	}

	[Token(Token = "0x600042B")]
	internal override void OnViewDataReady()
	{
	}

	[Token(Token = "0x600042C")]
	private bool SameValues(float a, float b, float epsilon)
	{
		return default(bool);
	}

	[Token(Token = "0x600042D")]
	private void UpdateDragElementPosition()
	{
	}

	[Token(Token = "0x600042E")]
	private void UpdateFill(float normalizedValue)
	{
	}

	[Token(Token = "0x600042F")]
	[EventInterest(new Type[] { typeof(GeometryChangedEvent) })]
	protected override void HandleEventBubbleUp(EventBase evt)
	{
	}

	[Token(Token = "0x6000430")]
	[Obsolete("ExecuteDefaultAction override has been removed because default event handling was migrated to HandleEventBubbleUp. Please use HandleEventBubbleUp.", false)]
	[EventInterest(EventInterestOptions.Inherit)]
	protected override void ExecuteDefaultAction(EventBase evt)
	{
	}

	[Token(Token = "0x6000431")]
	private void UpdateTextFieldVisibility()
	{
	}

	[Token(Token = "0x6000432")]
	private void UpdateTextFieldValue()
	{
	}

	[Token(Token = "0x6000433")]
	private void OnFocusIn(FocusInEvent evt)
	{
	}

	[Token(Token = "0x6000434")]
	private void OnFocusOut(FocusOutEvent evt)
	{
	}

	[Token(Token = "0x6000435")]
	private void OnTextFieldFocusIn(FocusInEvent evt)
	{
	}

	[Token(Token = "0x6000436")]
	private void OnTextFieldFocusOut(FocusOutEvent evt)
	{
	}

	[Token(Token = "0x6000437")]
	private void OnTextFieldValueChange(ChangeEvent<string> evt)
	{
	}

	[Token(Token = "0x6000438")]
	protected override void UpdateMixedValueContent()
	{
	}

	[Token(Token = "0x6000439")]
	internal override void RegisterEditingCallbacks()
	{
	}

	[Token(Token = "0x600043A")]
	internal override void UnregisterEditingCallbacks()
	{
	}
}
