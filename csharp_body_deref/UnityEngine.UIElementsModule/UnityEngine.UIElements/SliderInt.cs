// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.SliderInt
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000110")]
public class SliderInt : BaseSlider<int>
{
	[Token(Token = "0x2000111")]
	public new class UxmlFactory : UxmlFactory<SliderInt, UxmlTraits>
	{
		[Token(Token = "0x6000753")]
		[Address(RVA = "0x5001230", Offset = "0x5001230", VA = "0x5001230")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x2000112")]
	public new class UxmlTraits : UxmlTraits<UxmlIntAttributeDescription>
	{
		[Token(Token = "0x4000491")]
		[FieldOffset(Offset = "0x88")]
		private UxmlIntAttributeDescription m_LowValue;

		[Token(Token = "0x4000492")]
		[FieldOffset(Offset = "0x90")]
		private UxmlIntAttributeDescription m_HighValue;

		[Token(Token = "0x4000493")]
		[FieldOffset(Offset = "0x98")]
		private UxmlIntAttributeDescription m_PageSize;

		[Token(Token = "0x4000494")]
		[FieldOffset(Offset = "0xA0")]
		private UxmlBoolAttributeDescription m_ShowInputField;

		[Token(Token = "0x4000495")]
		[FieldOffset(Offset = "0xA8")]
		private UxmlEnumAttributeDescription<SliderDirection> m_Direction;

		[Token(Token = "0x4000496")]
		[FieldOffset(Offset = "0xB0")]
		private UxmlBoolAttributeDescription m_Inverted;

		[Token(Token = "0x6000754")]
		[Address(RVA = "0x5001270", Offset = "0x5001270", VA = "0x5001270", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x6000755")]
		[Address(RVA = "0x50015C0", Offset = "0x50015C0", VA = "0x50015C0")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x400048E")]
	[FieldOffset(Offset = "0x0")]
	public new static readonly string ussClassName;

	[Token(Token = "0x400048F")]
	[FieldOffset(Offset = "0x8")]
	public new static readonly string labelUssClassName;

	[Token(Token = "0x4000490")]
	[FieldOffset(Offset = "0x10")]
	public new static readonly string inputUssClassName;

	[Token(Token = "0x1700014C")]
	public override float pageSize
	{
		[Token(Token = "0x6000749")]
		[Address(RVA = "0x5000530", Offset = "0x5000530", VA = "0x5000530", Slot = "120")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600074A")]
		[Address(RVA = "0x5000570", Offset = "0x5000570", VA = "0x5000570", Slot = "121")]
		set
		{
		}
	}

	[Token(Token = "0x6000747")]
	[Address(RVA = "0x50003C0", Offset = "0x50003C0", VA = "0x50003C0")]
	public SliderInt()
	{
	}

	[Token(Token = "0x6000748")]
	[Address(RVA = "0x50003E0", Offset = "0x50003E0", VA = "0x50003E0")]
	public SliderInt(string label, int start = 0, int end = 10, SliderDirection direction = SliderDirection.Horizontal, float pageSize = 0f)
	{
	}

	[Token(Token = "0x600074B")]
	[Address(RVA = "0x50006D0", Offset = "0x50006D0", VA = "0x50006D0", Slot = "124")]
	public override void ApplyInputDeviceDelta(Vector3 delta, DeltaSpeed speed, int startValue)
	{
	}

	[Token(Token = "0x600074C")]
	[Address(RVA = "0x50008A0", Offset = "0x50008A0", VA = "0x50008A0", Slot = "125")]
	internal override int SliderLerpUnclamped(int a, int b, float interpolant)
	{
		return default(int);
	}

	[Token(Token = "0x600074D")]
	[Address(RVA = "0x50009D0", Offset = "0x50009D0", VA = "0x50009D0", Slot = "126")]
	internal override float SliderNormalizeValue(int currentValue, int lowerValue, int higherValue)
	{
		return default(float);
	}

	[Token(Token = "0x600074E")]
	[Address(RVA = "0x50009F0", Offset = "0x50009F0", VA = "0x50009F0", Slot = "127")]
	internal override int SliderRange()
	{
		return default(int);
	}

	[Token(Token = "0x600074F")]
	[Address(RVA = "0x5000A80", Offset = "0x5000A80", VA = "0x5000A80", Slot = "128")]
	internal override int ParseStringToValue(string previousValue, string newValue)
	{
		return default(int);
	}

	[Token(Token = "0x6000750")]
	[Address(RVA = "0x5000B00", Offset = "0x5000B00", VA = "0x5000B00", Slot = "130")]
	internal override void ComputeValueAndDirectionFromClick(float sliderLength, float dragElementLength, float dragElementPos, float dragElementLastPos)
	{
	}

	[Token(Token = "0x6000751")]
	[Address(RVA = "0x5000E60", Offset = "0x5000E60", VA = "0x5000E60", Slot = "129")]
	internal override void ComputeValueFromKey(SliderKey sliderKey, bool isShift)
	{
	}
}
