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

[Token(Token = "0x20000C5")]
public class MinMaxSlider : BaseField<Vector2>
{
	[Token(Token = "0x20000C6")]
	public new class UxmlFactory : UxmlFactory<MinMaxSlider, UxmlTraits>
	{
		[Token(Token = "0x6000579")]
		[Address(RVA = "0x4FE2840", Offset = "0x4FE2840", VA = "0x4FE2840")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x20000C7")]
	public new class UxmlTraits : BaseField<Vector2>.UxmlTraits
	{
		[Token(Token = "0x400032A")]
		[FieldOffset(Offset = "0x80")]
		private UxmlFloatAttributeDescription m_MinValue;

		[Token(Token = "0x400032B")]
		[FieldOffset(Offset = "0x88")]
		private UxmlFloatAttributeDescription m_MaxValue;

		[Token(Token = "0x400032C")]
		[FieldOffset(Offset = "0x90")]
		private UxmlFloatAttributeDescription m_LowLimit;

		[Token(Token = "0x400032D")]
		[FieldOffset(Offset = "0x98")]
		private UxmlFloatAttributeDescription m_HighLimit;

		[Token(Token = "0x600057A")]
		[Address(RVA = "0x4FE2880", Offset = "0x4FE2880", VA = "0x4FE2880")]
		public UxmlTraits()
		{
		}

		[Token(Token = "0x600057B")]
		[Address(RVA = "0x4FE2A80", Offset = "0x4FE2A80", VA = "0x4FE2A80", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}
	}

	[Token(Token = "0x20000C8")]
	private enum DragState
	{
		[Token(Token = "0x400032F")]
		NoThumb,
		[Token(Token = "0x4000330")]
		MinThumb,
		[Token(Token = "0x4000331")]
		MiddleThumb,
		[Token(Token = "0x4000332")]
		MaxThumb
	}

	[Token(Token = "0x4000313")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly DataBindingProperty minValueProperty;

	[Token(Token = "0x4000314")]
	[FieldOffset(Offset = "0xA0")]
	internal static readonly DataBindingProperty maxValueProperty;

	[Token(Token = "0x4000315")]
	[FieldOffset(Offset = "0x140")]
	internal static readonly DataBindingProperty rangeProperty;

	[Token(Token = "0x4000316")]
	[FieldOffset(Offset = "0x1E0")]
	internal static readonly DataBindingProperty lowLimitProperty;

	[Token(Token = "0x4000317")]
	[FieldOffset(Offset = "0x280")]
	internal static readonly DataBindingProperty highLimitProperty;

	[Token(Token = "0x400031C")]
	[FieldOffset(Offset = "0x470")]
	private Vector2 m_DragElementStartPos;

	[Token(Token = "0x400031D")]
	[FieldOffset(Offset = "0x478")]
	private Vector2 m_ValueStartPos;

	[Token(Token = "0x400031E")]
	[FieldOffset(Offset = "0x480")]
	private Rect m_DragMinThumbRect;

	[Token(Token = "0x400031F")]
	[FieldOffset(Offset = "0x490")]
	private Rect m_DragMaxThumbRect;

	[Token(Token = "0x4000320")]
	[FieldOffset(Offset = "0x4A0")]
	private DragState m_DragState;

	[Token(Token = "0x4000321")]
	[FieldOffset(Offset = "0x4A4")]
	private float m_MinLimit;

	[Token(Token = "0x4000322")]
	[FieldOffset(Offset = "0x4A8")]
	private float m_MaxLimit;

	[Token(Token = "0x4000323")]
	[FieldOffset(Offset = "0x320")]
	public new static readonly string ussClassName;

	[Token(Token = "0x4000324")]
	[FieldOffset(Offset = "0x328")]
	public new static readonly string labelUssClassName;

	[Token(Token = "0x4000325")]
	[FieldOffset(Offset = "0x330")]
	public new static readonly string inputUssClassName;

	[Token(Token = "0x4000326")]
	[FieldOffset(Offset = "0x338")]
	public static readonly string trackerUssClassName;

	[Token(Token = "0x4000327")]
	[FieldOffset(Offset = "0x340")]
	public static readonly string draggerUssClassName;

	[Token(Token = "0x4000328")]
	[FieldOffset(Offset = "0x348")]
	public static readonly string minThumbUssClassName;

	[Token(Token = "0x4000329")]
	[FieldOffset(Offset = "0x350")]
	public static readonly string maxThumbUssClassName;

	[Token(Token = "0x170000DD")]
	internal VisualElement dragElement
	{
		[Token(Token = "0x6000556")]
		[Address(RVA = "0x4F4A1E0", Offset = "0x4F4A1E0", VA = "0x4F4A1E0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000557")]
		[Address(RVA = "0x4F4A1F0", Offset = "0x4F4A1F0", VA = "0x4F4A1F0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000DE")]
	internal VisualElement dragMinThumb
	{
		[Token(Token = "0x6000558")]
		[Address(RVA = "0x4F4A210", Offset = "0x4F4A210", VA = "0x4F4A210")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000559")]
		[Address(RVA = "0x4F4A220", Offset = "0x4F4A220", VA = "0x4F4A220")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000DF")]
	internal VisualElement dragMaxThumb
	{
		[Token(Token = "0x600055A")]
		[Address(RVA = "0x4F4A240", Offset = "0x4F4A240", VA = "0x4F4A240")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600055B")]
		[Address(RVA = "0x4F4A250", Offset = "0x4F4A250", VA = "0x4F4A250")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000E0")]
	internal ClampedDragger<float> clampedDragger
	{
		[Token(Token = "0x600055C")]
		[Address(RVA = "0x4F4A270", Offset = "0x4F4A270", VA = "0x4F4A270")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600055D")]
		[Address(RVA = "0x4F4A280", Offset = "0x4F4A280", VA = "0x4F4A280")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000E1")]
	[CreateProperty]
	public float minValue
	{
		[Token(Token = "0x600055E")]
		[Address(RVA = "0x4F4A2A0", Offset = "0x4F4A2A0", VA = "0x4F4A2A0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600055F")]
		[Address(RVA = "0x4F4A2C0", Offset = "0x4F4A2C0", VA = "0x4F4A2C0")]
		set
		{
		}
	}

	[Token(Token = "0x170000E2")]
	[CreateProperty]
	public float maxValue
	{
		[Token(Token = "0x6000560")]
		[Address(RVA = "0x4F4A530", Offset = "0x4F4A530", VA = "0x4F4A530")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000561")]
		[Address(RVA = "0x4F4A550", Offset = "0x4F4A550", VA = "0x4F4A550")]
		set
		{
		}
	}

	[Token(Token = "0x170000E3")]
	public override Vector2 value
	{
		[Token(Token = "0x6000562")]
		[Address(RVA = "0x4F4A740", Offset = "0x4F4A740", VA = "0x4F4A740", Slot = "105")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000563")]
		[Address(RVA = "0x4F4A780", Offset = "0x4F4A780", VA = "0x4F4A780", Slot = "106")]
		set
		{
		}
	}

	[Token(Token = "0x170000E4")]
	[CreateProperty(ReadOnly = true)]
	public float range
	{
		[Token(Token = "0x6000565")]
		[Address(RVA = "0x4F4C1F0", Offset = "0x4F4C1F0", VA = "0x4F4C1F0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170000E5")]
	[CreateProperty]
	public float lowLimit
	{
		[Token(Token = "0x6000566")]
		[Address(RVA = "0x4F4C280", Offset = "0x4F4C280", VA = "0x4F4C280")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000567")]
		[Address(RVA = "0x4F4C290", Offset = "0x4F4C290", VA = "0x4F4C290")]
		set
		{
		}
	}

	[Token(Token = "0x170000E6")]
	[CreateProperty]
	public float highLimit
	{
		[Token(Token = "0x6000568")]
		[Address(RVA = "0x4F4C270", Offset = "0x4F4C270", VA = "0x4F4C270")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000569")]
		[Address(RVA = "0x4F4C450", Offset = "0x4F4C450", VA = "0x4F4C450")]
		set
		{
		}
	}

	[Token(Token = "0x6000564")]
	[Address(RVA = "0x4F4A860", Offset = "0x4F4A860", VA = "0x4F4A860", Slot = "114")]
	public override void SetValueWithoutNotify(Vector2 newValue)
	{
	}

	[Token(Token = "0x600056A")]
	[Address(RVA = "0x4F4C620", Offset = "0x4F4C620", VA = "0x4F4C620")]
	public MinMaxSlider()
	{
	}

	[Token(Token = "0x600056B")]
	[Address(RVA = "0x4F4C650", Offset = "0x4F4C650", VA = "0x4F4C650")]
	public MinMaxSlider(string label, float minValue = 0f, float maxValue = 10f, float minLimit = float.MinValue, float maxLimit = float.MaxValue)
	{
	}

	[Token(Token = "0x600056C")]
	[Address(RVA = "0x4F4A4B0", Offset = "0x4F4A4B0", VA = "0x4F4A4B0")]
	private Vector2 ClampValues(Vector2 valueToClamp)
	{
		return default(Vector2);
	}

	[Token(Token = "0x600056D")]
	[Address(RVA = "0x4F4CD10", Offset = "0x4F4CD10", VA = "0x4F4CD10")]
	private void UpdateDragElementPosition(GeometryChangedEvent evt)
	{
	}

	[Token(Token = "0x600056E")]
	[Address(RVA = "0x4F4A940", Offset = "0x4F4A940", VA = "0x4F4A940")]
	private void UpdateDragElementPosition()
	{
	}

	[Token(Token = "0x600056F")]
	[Address(RVA = "0x4F4CD60", Offset = "0x4F4CD60", VA = "0x4F4CD60")]
	internal float SliderLerpUnclamped(float a, float b, float interpolant)
	{
		return default(float);
	}

	[Token(Token = "0x6000570")]
	[Address(RVA = "0x4F4CD50", Offset = "0x4F4CD50", VA = "0x4F4CD50")]
	internal float SliderNormalizeValue(float currentValue, float lowerValue, float higherValue)
	{
		return default(float);
	}

	[Token(Token = "0x6000571")]
	[Address(RVA = "0x4F4CD70", Offset = "0x4F4CD70", VA = "0x4F4CD70")]
	private float ComputeValueFromPosition(float positionToConvert)
	{
		return default(float);
	}

	[Token(Token = "0x6000572")]
	[Address(RVA = "0x4F4CF60", Offset = "0x4F4CF60", VA = "0x4F4CF60", Slot = "10")]
	[EventInterest(new Type[] { typeof(GeometryChangedEvent) })]
	protected override void ExecuteDefaultAction(EventBase evt)
	{
	}

	[Token(Token = "0x6000573")]
	[Address(RVA = "0x4F4D070", Offset = "0x4F4D070", VA = "0x4F4D070")]
	private void SetSliderValueFromDrag()
	{
	}

	[Token(Token = "0x6000574")]
	[Address(RVA = "0x4F4D300", Offset = "0x4F4D300", VA = "0x4F4D300")]
	private void SetSliderValueFromClick()
	{
	}

	[Token(Token = "0x6000575")]
	[Address(RVA = "0x4F4D7C0", Offset = "0x4F4D7C0", VA = "0x4F4D7C0")]
	private void ComputeValueDragStateNoThumb(float lowLimitPosition, float highLimitPosition, float dragElementPos)
	{
	}

	[Token(Token = "0x6000576")]
	[Address(RVA = "0x4F4D100", Offset = "0x4F4D100", VA = "0x4F4D100")]
	private void ComputeValueFromDraggingThumb(float dragElementStartPos, float dragElementEndPos)
	{
	}

	[Token(Token = "0x6000577")]
	[Address(RVA = "0x4F4D880", Offset = "0x4F4D880", VA = "0x4F4D880", Slot = "113")]
	protected override void UpdateMixedValueContent()
	{
	}
}
