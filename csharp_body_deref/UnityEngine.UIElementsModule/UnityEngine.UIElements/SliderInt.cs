// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.SliderInt
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x200014C")]
public class SliderInt : BaseSlider<int>
{
	[Token(Token = "0x200014D")]
	[Obsolete("UxmlFactory is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlFactory : UxmlFactory<SliderInt, UxmlTraits>
	{
		[Token(Token = "0x600099C")]
		[Address(RVA = "0x6C392C0", Offset = "0x6C382C0", VA = "0x6C392C0")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x200014E")]
	[Obsolete("UxmlTraits is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlTraits : UxmlTraits<UxmlIntAttributeDescription>
	{
		[Token(Token = "0x4000607")]
		[FieldOffset(Offset = "0xA0")]
		private UxmlIntAttributeDescription m_LowValue;

		[Token(Token = "0x4000608")]
		[FieldOffset(Offset = "0xA8")]
		private UxmlIntAttributeDescription m_HighValue;

		[Token(Token = "0x4000609")]
		[FieldOffset(Offset = "0xB0")]
		private UxmlIntAttributeDescription m_PageSize;

		[Token(Token = "0x400060A")]
		[FieldOffset(Offset = "0xB8")]
		private UxmlBoolAttributeDescription m_ShowInputField;

		[Token(Token = "0x400060B")]
		[FieldOffset(Offset = "0xC0")]
		private UxmlEnumAttributeDescription<SliderDirection> m_Direction;

		[Token(Token = "0x400060C")]
		[FieldOffset(Offset = "0xC8")]
		private UxmlBoolAttributeDescription m_Inverted;

		[Token(Token = "0x600099D")]
		[Address(RVA = "0x6C39300", Offset = "0x6C38300", VA = "0x6C39300", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x600099E")]
		[Address(RVA = "0x6C39600", Offset = "0x6C38600", VA = "0x6C39600")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x4000604")]
	[FieldOffset(Offset = "0x0")]
	public new static readonly string ussClassName;

	[Token(Token = "0x4000605")]
	[FieldOffset(Offset = "0x8")]
	public new static readonly string labelUssClassName;

	[Token(Token = "0x4000606")]
	[FieldOffset(Offset = "0x10")]
	public new static readonly string inputUssClassName;

	[Token(Token = "0x170001C7")]
	public override float pageSize
	{
		[Token(Token = "0x6000992")]
		[Address(RVA = "0x6C38580", Offset = "0x6C37580", VA = "0x6C38580", Slot = "165")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000993")]
		[Address(RVA = "0x6C385C0", Offset = "0x6C375C0", VA = "0x6C385C0", Slot = "166")]
		set
		{
		}
	}

	[Token(Token = "0x6000990")]
	[Address(RVA = "0x6C38410", Offset = "0x6C37410", VA = "0x6C38410")]
	public SliderInt()
	{
	}

	[Token(Token = "0x6000991")]
	[Address(RVA = "0x6C38430", Offset = "0x6C37430", VA = "0x6C38430")]
	public SliderInt(string label, int start = 0, int end = 10, SliderDirection direction = SliderDirection.Horizontal, float pageSize = 0f)
	{
	}

	[Token(Token = "0x6000994")]
	[Address(RVA = "0x6C38720", Offset = "0x6C37720", VA = "0x6C38720", Slot = "169")]
	public override void ApplyInputDeviceDelta(Vector3 delta, DeltaSpeed speed, int startValue)
	{
	}

	[Token(Token = "0x6000995")]
	[Address(RVA = "0x6C388F0", Offset = "0x6C378F0", VA = "0x6C388F0", Slot = "170")]
	internal override int SliderLerpUnclamped(int a, int b, float interpolant)
	{
		return default(int);
	}

	[Token(Token = "0x6000996")]
	[Address(RVA = "0x6C38A20", Offset = "0x6C37A20", VA = "0x6C38A20", Slot = "171")]
	internal override float SliderNormalizeValue(int currentValue, int lowerValue, int higherValue)
	{
		return default(float);
	}

	[Token(Token = "0x6000997")]
	[Address(RVA = "0x6C38A50", Offset = "0x6C37A50", VA = "0x6C38A50", Slot = "172")]
	internal override int SliderRange()
	{
		return default(int);
	}

	[Token(Token = "0x6000998")]
	[Address(RVA = "0x6C38AE0", Offset = "0x6C37AE0", VA = "0x6C38AE0", Slot = "173")]
	internal override int ParseStringToValue(string previousValue, string newValue)
	{
		return default(int);
	}

	[Token(Token = "0x6000999")]
	[Address(RVA = "0x6C38B90", Offset = "0x6C37B90", VA = "0x6C38B90", Slot = "175")]
	internal override void ComputeValueAndDirectionFromClick(float sliderLength, float dragElementLength, float dragElementPos, float dragElementLastPos)
	{
	}

	[Token(Token = "0x600099A")]
	[Address(RVA = "0x6C38F00", Offset = "0x6C37F00", VA = "0x6C38F00", Slot = "174")]
	internal override void ComputeValueFromKey(SliderKey sliderKey, bool isShift)
	{
	}
}
