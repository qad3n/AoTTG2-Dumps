// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Slider
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000149")]
public class Slider : BaseSlider<float>
{
	[Token(Token = "0x200014A")]
	[Obsolete("UxmlFactory is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlFactory : UxmlFactory<Slider, UxmlTraits>
	{
		[Token(Token = "0x600098D")]
		[Address(RVA = "0x6C37DE0", Offset = "0x6C36DE0", VA = "0x6C37DE0")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x200014B")]
	[Obsolete("UxmlTraits is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlTraits : UxmlTraits<UxmlFloatAttributeDescription>
	{
		[Token(Token = "0x40005FE")]
		[FieldOffset(Offset = "0xA0")]
		private UxmlFloatAttributeDescription m_LowValue;

		[Token(Token = "0x40005FF")]
		[FieldOffset(Offset = "0xA8")]
		private UxmlFloatAttributeDescription m_HighValue;

		[Token(Token = "0x4000600")]
		[FieldOffset(Offset = "0xB0")]
		private UxmlFloatAttributeDescription m_PageSize;

		[Token(Token = "0x4000601")]
		[FieldOffset(Offset = "0xB8")]
		private UxmlBoolAttributeDescription m_ShowInputField;

		[Token(Token = "0x4000602")]
		[FieldOffset(Offset = "0xC0")]
		private UxmlEnumAttributeDescription<SliderDirection> m_Direction;

		[Token(Token = "0x4000603")]
		[FieldOffset(Offset = "0xC8")]
		private UxmlBoolAttributeDescription m_Inverted;

		[Token(Token = "0x600098E")]
		[Address(RVA = "0x6C37E20", Offset = "0x6C36E20", VA = "0x6C37E20", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x600098F")]
		[Address(RVA = "0x6C38120", Offset = "0x6C37120", VA = "0x6C38120")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x40005FB")]
	[FieldOffset(Offset = "0x0")]
	public new static readonly string ussClassName;

	[Token(Token = "0x40005FC")]
	[FieldOffset(Offset = "0x8")]
	public new static readonly string labelUssClassName;

	[Token(Token = "0x40005FD")]
	[FieldOffset(Offset = "0x10")]
	public new static readonly string inputUssClassName;

	[Token(Token = "0x6000983")]
	[Address(RVA = "0x6C373F0", Offset = "0x6C363F0", VA = "0x6C373F0")]
	public Slider()
	{
	}

	[Token(Token = "0x6000984")]
	[Address(RVA = "0x6C36D10", Offset = "0x6C35D10", VA = "0x6C36D10")]
	public Slider(float start, float end, SliderDirection direction = SliderDirection.Horizontal, float pageSize = 0f)
	{
	}

	[Token(Token = "0x6000985")]
	[Address(RVA = "0x6C37410", Offset = "0x6C36410", VA = "0x6C37410")]
	public Slider(string label, float start = 0f, float end = 10f, SliderDirection direction = SliderDirection.Horizontal, float pageSize = 0f)
	{
	}

	[Token(Token = "0x6000986")]
	[Address(RVA = "0x6C37580", Offset = "0x6C36580", VA = "0x6C37580", Slot = "169")]
	public override void ApplyInputDeviceDelta(Vector3 delta, DeltaSpeed speed, float startValue)
	{
	}

	[Token(Token = "0x6000987")]
	[Address(RVA = "0x6C37690", Offset = "0x6C36690", VA = "0x6C37690", Slot = "170")]
	internal override float SliderLerpUnclamped(float a, float b, float interpolant)
	{
		return default(float);
	}

	[Token(Token = "0x6000988")]
	[Address(RVA = "0x6C36DE0", Offset = "0x6C35DE0", VA = "0x6C36DE0", Slot = "171")]
	internal override float SliderNormalizeValue(float currentValue, float lowerValue, float higherValue)
	{
		return default(float);
	}

	[Token(Token = "0x6000989")]
	[Address(RVA = "0x6C37990", Offset = "0x6C36990", VA = "0x6C37990", Slot = "172")]
	internal override float SliderRange()
	{
		return default(float);
	}

	[Token(Token = "0x600098A")]
	[Address(RVA = "0x6C37A40", Offset = "0x6C36A40", VA = "0x6C37A40", Slot = "173")]
	internal override float ParseStringToValue(string previousValue, string newValue)
	{
		return default(float);
	}

	[Token(Token = "0x600098B")]
	[Address(RVA = "0x6C37AF0", Offset = "0x6C36AF0", VA = "0x6C37AF0", Slot = "174")]
	internal override void ComputeValueFromKey(SliderKey sliderKey, bool isShift)
	{
	}
}
