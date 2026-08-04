// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Slider
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x200010D")]
public class Slider : BaseSlider<float>
{
	[Token(Token = "0x200010E")]
	public new class UxmlFactory : UxmlFactory<Slider, UxmlTraits>
	{
		[Token(Token = "0x6000744")]
		[Address(RVA = "0x4FFFD40", Offset = "0x4FFFD40", VA = "0x4FFFD40")]
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
		[Address(RVA = "0x4FFFD80", Offset = "0x4FFFD80", VA = "0x4FFFD80", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x6000746")]
		[Address(RVA = "0x50000D0", Offset = "0x50000D0", VA = "0x50000D0")]
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
	[Address(RVA = "0x4FFF350", Offset = "0x4FFF350", VA = "0x4FFF350")]
	public Slider()
	{
	}

	[Token(Token = "0x600073B")]
	[Address(RVA = "0x4FFEDB0", Offset = "0x4FFEDB0", VA = "0x4FFEDB0")]
	public Slider(float start, float end, SliderDirection direction = SliderDirection.Horizontal, float pageSize = 0f)
	{
	}

	[Token(Token = "0x600073C")]
	[Address(RVA = "0x4FFF370", Offset = "0x4FFF370", VA = "0x4FFF370")]
	public Slider(string label, float start = 0f, float end = 10f, SliderDirection direction = SliderDirection.Horizontal, float pageSize = 0f)
	{
	}

	[Token(Token = "0x600073D")]
	[Address(RVA = "0x4FFF4E0", Offset = "0x4FFF4E0", VA = "0x4FFF4E0", Slot = "124")]
	public override void ApplyInputDeviceDelta(Vector3 delta, DeltaSpeed speed, float startValue)
	{
	}

	[Token(Token = "0x600073E")]
	[Address(RVA = "0x4FFF5F0", Offset = "0x4FFF5F0", VA = "0x4FFF5F0", Slot = "125")]
	internal override float SliderLerpUnclamped(float a, float b, float interpolant)
	{
		return default(float);
	}

	[Token(Token = "0x600073F")]
	[Address(RVA = "0x4FFEDF0", Offset = "0x4FFEDF0", VA = "0x4FFEDF0", Slot = "126")]
	internal override float SliderNormalizeValue(float currentValue, float lowerValue, float higherValue)
	{
		return default(float);
	}

	[Token(Token = "0x6000740")]
	[Address(RVA = "0x4FFF920", Offset = "0x4FFF920", VA = "0x4FFF920", Slot = "127")]
	internal override float SliderRange()
	{
		return default(float);
	}

	[Token(Token = "0x6000741")]
	[Address(RVA = "0x4FFF9D0", Offset = "0x4FFF9D0", VA = "0x4FFF9D0", Slot = "128")]
	internal override float ParseStringToValue(string previousValue, string newValue)
	{
		return default(float);
	}

	[Token(Token = "0x6000742")]
	[Address(RVA = "0x4FFFA50", Offset = "0x4FFFA50", VA = "0x4FFFA50", Slot = "129")]
	internal override void ComputeValueFromKey(SliderKey sliderKey, bool isShift)
	{
	}
}
