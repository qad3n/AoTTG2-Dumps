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
		[Address(RVA = "0x4CBAF10", Offset = "0x4CBAF10", VA = "0x4CBAF10")]
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
		[Address(RVA = "0x4CBAF50", Offset = "0x4CBAF50", VA = "0x4CBAF50")]
		public UxmlTraits()
		{
		}

		[Token(Token = "0x600057B")]
		[Address(RVA = "0x4CBB150", Offset = "0x4CBB150", VA = "0x4CBB150", Slot = "4")]
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
		[Address(RVA = "0x4C228B0", Offset = "0x4C228B0", VA = "0x4C228B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000557")]
		[Address(RVA = "0x4C228C0", Offset = "0x4C228C0", VA = "0x4C228C0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000DE")]
	internal VisualElement dragMinThumb
	{
		[Token(Token = "0x6000558")]
		[Address(RVA = "0x4C228E0", Offset = "0x4C228E0", VA = "0x4C228E0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000559")]
		[Address(RVA = "0x4C228F0", Offset = "0x4C228F0", VA = "0x4C228F0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000DF")]
	internal VisualElement dragMaxThumb
	{
		[Token(Token = "0x600055A")]
		[Address(RVA = "0x4C22910", Offset = "0x4C22910", VA = "0x4C22910")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600055B")]
		[Address(RVA = "0x4C22920", Offset = "0x4C22920", VA = "0x4C22920")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000E0")]
	internal ClampedDragger<float> clampedDragger
	{
		[Token(Token = "0x600055C")]
		[Address(RVA = "0x4C22940", Offset = "0x4C22940", VA = "0x4C22940")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600055D")]
		[Address(RVA = "0x4C22950", Offset = "0x4C22950", VA = "0x4C22950")]
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
		[Address(RVA = "0x4C22970", Offset = "0x4C22970", VA = "0x4C22970")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600055F")]
		[Address(RVA = "0x4C22990", Offset = "0x4C22990", VA = "0x4C22990")]
		set
		{
		}
	}

	[Token(Token = "0x170000E2")]
	[CreateProperty]
	public float maxValue
	{
		[Token(Token = "0x6000560")]
		[Address(RVA = "0x4C22C00", Offset = "0x4C22C00", VA = "0x4C22C00")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000561")]
		[Address(RVA = "0x4C22C20", Offset = "0x4C22C20", VA = "0x4C22C20")]
		set
		{
		}
	}

	[Token(Token = "0x170000E3")]
	public override Vector2 value
	{
		[Token(Token = "0x6000562")]
		[Address(RVA = "0x4C22E10", Offset = "0x4C22E10", VA = "0x4C22E10", Slot = "105")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000563")]
		[Address(RVA = "0x4C22E50", Offset = "0x4C22E50", VA = "0x4C22E50", Slot = "106")]
		set
		{
		}
	}

	[Token(Token = "0x170000E4")]
	[CreateProperty(ReadOnly = true)]
	public float range
	{
		[Token(Token = "0x6000565")]
		[Address(RVA = "0x4C248C0", Offset = "0x4C248C0", VA = "0x4C248C0")]
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
		[Address(RVA = "0x4C24950", Offset = "0x4C24950", VA = "0x4C24950")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000567")]
		[Address(RVA = "0x4C24960", Offset = "0x4C24960", VA = "0x4C24960")]
		set
		{
		}
	}

	[Token(Token = "0x170000E6")]
	[CreateProperty]
	public float highLimit
	{
		[Token(Token = "0x6000568")]
		[Address(RVA = "0x4C24940", Offset = "0x4C24940", VA = "0x4C24940")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000569")]
		[Address(RVA = "0x4C24B20", Offset = "0x4C24B20", VA = "0x4C24B20")]
		set
		{
		}
	}

	[Token(Token = "0x6000564")]
	[Address(RVA = "0x4C22F30", Offset = "0x4C22F30", VA = "0x4C22F30", Slot = "114")]
	public override void SetValueWithoutNotify(Vector2 newValue)
	{
	}

	[Token(Token = "0x600056A")]
	[Address(RVA = "0x4C24CF0", Offset = "0x4C24CF0", VA = "0x4C24CF0")]
	public MinMaxSlider()
	{
	}

	[Token(Token = "0x600056B")]
	[Address(RVA = "0x4C24D20", Offset = "0x4C24D20", VA = "0x4C24D20")]
	public MinMaxSlider(string label, float minValue = 0f, float maxValue = 10f, float minLimit = float.MinValue, float maxLimit = float.MaxValue)
	{
	}

	[Token(Token = "0x600056C")]
	[Address(RVA = "0x4C22B80", Offset = "0x4C22B80", VA = "0x4C22B80")]
	private Vector2 ClampValues(Vector2 valueToClamp)
	{
		return default(Vector2);
	}

	[Token(Token = "0x600056D")]
	[Address(RVA = "0x4C253E0", Offset = "0x4C253E0", VA = "0x4C253E0")]
	private void UpdateDragElementPosition(GeometryChangedEvent evt)
	{
	}

	[Token(Token = "0x600056E")]
	[Address(RVA = "0x4C23010", Offset = "0x4C23010", VA = "0x4C23010")]
	private void UpdateDragElementPosition()
	{
	}

	[Token(Token = "0x600056F")]
	[Address(RVA = "0x4C25430", Offset = "0x4C25430", VA = "0x4C25430")]
	internal float SliderLerpUnclamped(float a, float b, float interpolant)
	{
		return default(float);
	}

	[Token(Token = "0x6000570")]
	[Address(RVA = "0x4C25420", Offset = "0x4C25420", VA = "0x4C25420")]
	internal float SliderNormalizeValue(float currentValue, float lowerValue, float higherValue)
	{
		return default(float);
	}

	[Token(Token = "0x6000571")]
	[Address(RVA = "0x4C25440", Offset = "0x4C25440", VA = "0x4C25440")]
	private float ComputeValueFromPosition(float positionToConvert)
	{
		return default(float);
	}

	[Token(Token = "0x6000572")]
	[Address(RVA = "0x4C25630", Offset = "0x4C25630", VA = "0x4C25630", Slot = "10")]
	[EventInterest(new Type[] { typeof(GeometryChangedEvent) })]
	protected override void ExecuteDefaultAction(EventBase evt)
	{
	}

	[Token(Token = "0x6000573")]
	[Address(RVA = "0x4C25740", Offset = "0x4C25740", VA = "0x4C25740")]
	private void SetSliderValueFromDrag()
	{
	}

	[Token(Token = "0x6000574")]
	[Address(RVA = "0x4C259D0", Offset = "0x4C259D0", VA = "0x4C259D0")]
	private void SetSliderValueFromClick()
	{
	}

	[Token(Token = "0x6000575")]
	[Address(RVA = "0x4C25E90", Offset = "0x4C25E90", VA = "0x4C25E90")]
	private void ComputeValueDragStateNoThumb(float lowLimitPosition, float highLimitPosition, float dragElementPos)
	{
	}

	[Token(Token = "0x6000576")]
	[Address(RVA = "0x4C257D0", Offset = "0x4C257D0", VA = "0x4C257D0")]
	private void ComputeValueFromDraggingThumb(float dragElementStartPos, float dragElementEndPos)
	{
	}

	[Token(Token = "0x6000577")]
	[Address(RVA = "0x4C25F50", Offset = "0x4C25F50", VA = "0x4C25F50", Slot = "113")]
	protected override void UpdateMixedValueContent()
	{
	}
}
