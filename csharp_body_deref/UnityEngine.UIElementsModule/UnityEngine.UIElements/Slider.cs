using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x200010D")]
public class Slider : BaseSlider<float>
{
	[Token(Token = "0x200010E")]
	public new class UxmlFactory : UxmlFactory<Slider, UxmlTraits>
	{
		[Token(Token = "0x6000744")]
		[Address(RVA = "0x4CD8410", Offset = "0x4CD8410", VA = "0x4CD8410")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x200010F")]
	public new class UxmlTraits : UxmlTraits<UxmlFloatAttributeDescription>
	{
		[Token(Token = "0x4000488")]
		[FieldOffset(Offset = "0x88")]
		private UxmlFloatAttributeDescription m_LowValue;

		[Token(Token = "0x4000489")]
		[FieldOffset(Offset = "0x90")]
		private UxmlFloatAttributeDescription m_HighValue;

		[Token(Token = "0x400048A")]
		[FieldOffset(Offset = "0x98")]
		private UxmlFloatAttributeDescription m_PageSize;

		[Token(Token = "0x400048B")]
		[FieldOffset(Offset = "0xA0")]
		private UxmlBoolAttributeDescription m_ShowInputField;

		[Token(Token = "0x400048C")]
		[FieldOffset(Offset = "0xA8")]
		private UxmlEnumAttributeDescription<SliderDirection> m_Direction;

		[Token(Token = "0x400048D")]
		[FieldOffset(Offset = "0xB0")]
		private UxmlBoolAttributeDescription m_Inverted;

		[Token(Token = "0x6000745")]
		[Address(RVA = "0x4CD8450", Offset = "0x4CD8450", VA = "0x4CD8450", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x6000746")]
		[Address(RVA = "0x4CD87A0", Offset = "0x4CD87A0", VA = "0x4CD87A0")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x4000485")]
	[FieldOffset(Offset = "0x0")]
	public new static readonly string ussClassName;

	[Token(Token = "0x4000486")]
	[FieldOffset(Offset = "0x8")]
	public new static readonly string labelUssClassName;

	[Token(Token = "0x4000487")]
	[FieldOffset(Offset = "0x10")]
	public new static readonly string inputUssClassName;

	[Token(Token = "0x600073A")]
	[Address(RVA = "0x4CD7A20", Offset = "0x4CD7A20", VA = "0x4CD7A20")]
	public Slider()
	{
	}

	[Token(Token = "0x600073B")]
	[Address(RVA = "0x4CD7480", Offset = "0x4CD7480", VA = "0x4CD7480")]
	public Slider(float start, float end, SliderDirection direction = SliderDirection.Horizontal, float pageSize = 0f)
	{
	}

	[Token(Token = "0x600073C")]
	[Address(RVA = "0x4CD7A40", Offset = "0x4CD7A40", VA = "0x4CD7A40")]
	public Slider(string label, float start = 0f, float end = 10f, SliderDirection direction = SliderDirection.Horizontal, float pageSize = 0f)
	{
	}

	[Token(Token = "0x600073D")]
	[Address(RVA = "0x4CD7BB0", Offset = "0x4CD7BB0", VA = "0x4CD7BB0", Slot = "124")]
	public override void ApplyInputDeviceDelta(Vector3 delta, DeltaSpeed speed, float startValue)
	{
	}

	[Token(Token = "0x600073E")]
	[Address(RVA = "0x4CD7CC0", Offset = "0x4CD7CC0", VA = "0x4CD7CC0", Slot = "125")]
	internal override float SliderLerpUnclamped(float a, float b, float interpolant)
	{
		return default(float);
	}

	[Token(Token = "0x600073F")]
	[Address(RVA = "0x4CD74C0", Offset = "0x4CD74C0", VA = "0x4CD74C0", Slot = "126")]
	internal override float SliderNormalizeValue(float currentValue, float lowerValue, float higherValue)
	{
		return default(float);
	}

	[Token(Token = "0x6000740")]
	[Address(RVA = "0x4CD7FF0", Offset = "0x4CD7FF0", VA = "0x4CD7FF0", Slot = "127")]
	internal override float SliderRange()
	{
		return default(float);
	}

	[Token(Token = "0x6000741")]
	[Address(RVA = "0x4CD80A0", Offset = "0x4CD80A0", VA = "0x4CD80A0", Slot = "128")]
	internal override float ParseStringToValue(string previousValue, string newValue)
	{
		return default(float);
	}

	[Token(Token = "0x6000742")]
	[Address(RVA = "0x4CD8120", Offset = "0x4CD8120", VA = "0x4CD8120", Slot = "129")]
	internal override void ComputeValueFromKey(SliderKey sliderKey, bool isShift)
	{
	}
}
