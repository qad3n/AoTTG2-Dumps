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
		[Address(RVA = "0x323AF00", Offset = "0x3239500", VA = "0x18323AF00")]
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
		[Address(RVA = "0x323B080", Offset = "0x3239680", VA = "0x18323B080", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x600099E")]
		[Address(RVA = "0x323D840", Offset = "0x323BE40", VA = "0x18323D840")]
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
		[Address(RVA = "0x3231F20", Offset = "0x3230520", VA = "0x183231F20", Slot = "165")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000993")]
		[Address(RVA = "0x3231F60", Offset = "0x3230560", VA = "0x183231F60", Slot = "166")]
		set
		{
		}
	}

	[Token(Token = "0x6000990")]
	[Address(RVA = "0x3231CA0", Offset = "0x32302A0", VA = "0x183231CA0")]
	public SliderInt()
	{
	}

	[Token(Token = "0x6000991")]
	[Address(RVA = "0x3231DD0", Offset = "0x32303D0", VA = "0x183231DD0")]
	public SliderInt(string label, int start = 0, int end = 10, SliderDirection direction = SliderDirection.Horizontal, float pageSize = 0f)
	{
	}

	[Token(Token = "0x6000994")]
	[Address(RVA = "0x3231310", Offset = "0x322F910", VA = "0x183231310", Slot = "169")]
	public override void ApplyInputDeviceDelta(Vector3 delta, DeltaSpeed speed, int startValue)
	{
	}

	[Token(Token = "0x6000995")]
	[Address(RVA = "0x3231A40", Offset = "0x3230040", VA = "0x183231A40", Slot = "170")]
	internal override int SliderLerpUnclamped(int a, int b, float interpolant)
	{
		return default(int);
	}

	[Token(Token = "0x6000996")]
	[Address(RVA = "0x3231AB0", Offset = "0x32300B0", VA = "0x183231AB0", Slot = "171")]
	internal override float SliderNormalizeValue(int currentValue, int lowerValue, int higherValue)
	{
		return default(float);
	}

	[Token(Token = "0x6000997")]
	[Address(RVA = "0x3231AF0", Offset = "0x32300F0", VA = "0x183231AF0", Slot = "172")]
	internal override int SliderRange()
	{
		return default(int);
	}

	[Token(Token = "0x6000998")]
	[Address(RVA = "0x3231980", Offset = "0x322FF80", VA = "0x183231980", Slot = "173")]
	internal override int ParseStringToValue(string previousValue, string newValue)
	{
		return default(int);
	}

	[Token(Token = "0x6000999")]
	[Address(RVA = "0x3231440", Offset = "0x322FA40", VA = "0x183231440", Slot = "175")]
	internal override void ComputeValueAndDirectionFromClick(float sliderLength, float dragElementLength, float dragElementPos, float dragElementLastPos)
	{
	}

	[Token(Token = "0x600099A")]
	[Address(RVA = "0x3231750", Offset = "0x322FD50", VA = "0x183231750", Slot = "174")]
	internal override void ComputeValueFromKey(SliderKey sliderKey, bool isShift)
	{
	}
}
