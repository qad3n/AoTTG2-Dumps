using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000127")]
public class UnsignedIntegerField : TextValueField<uint>
{
	[Token(Token = "0x2000128")]
	public new class UxmlFactory : UxmlFactory<UnsignedIntegerField, UxmlTraits>
	{
		[Token(Token = "0x60007DC")]
		[Address(RVA = "0x4CDFE90", Offset = "0x4CDFE90", VA = "0x4CDFE90")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x2000129")]
	public new class UxmlTraits : TextValueFieldTraits<uint, UxmlUnsignedIntAttributeDescription>
	{
		[Token(Token = "0x60007DD")]
		[Address(RVA = "0x4CDFED0", Offset = "0x4CDFED0", VA = "0x4CDFED0")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x200012A")]
	private class UnsignedIntegerInput : TextValueInput
	{
		[Token(Token = "0x17000172")]
		private UnsignedIntegerField parentUnsignedIntegerField
		{
			[Token(Token = "0x60007DE")]
			[Address(RVA = "0x4CDFF10", Offset = "0x4CDFF10", VA = "0x4CDFF10")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000173")]
		protected override string allowedCharacters
		{
			[Token(Token = "0x60007E0")]
			[Address(RVA = "0x4CDFF80", Offset = "0x4CDFF80", VA = "0x4CDFF80", Slot = "100")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60007DF")]
		[Address(RVA = "0x4CDFC40", Offset = "0x4CDFC40", VA = "0x4CDFC40")]
		internal UnsignedIntegerInput()
		{
		}

		[Token(Token = "0x60007E1")]
		[Address(RVA = "0x4CDFFF0", Offset = "0x4CDFFF0", VA = "0x4CDFFF0", Slot = "101")]
		public override void ApplyInputDeviceDelta(Vector3 delta, DeltaSpeed speed, uint startValue)
		{
		}

		[Token(Token = "0x60007E2")]
		[Address(RVA = "0x4CE0350", Offset = "0x4CE0350", VA = "0x4CE0350", Slot = "102")]
		protected override string ValueToString(uint v)
		{
			return null;
		}

		[Token(Token = "0x60007E3")]
		[Address(RVA = "0x4CE03A0", Offset = "0x4CE03A0", VA = "0x4CE03A0", Slot = "98")]
		protected override uint StringToValue(string str)
		{
			return default(uint);
		}
	}

	[Token(Token = "0x40004E5")]
	[FieldOffset(Offset = "0x0")]
	public new static readonly string ussClassName;

	[Token(Token = "0x40004E6")]
	[FieldOffset(Offset = "0x8")]
	public new static readonly string labelUssClassName;

	[Token(Token = "0x40004E7")]
	[FieldOffset(Offset = "0x10")]
	public new static readonly string inputUssClassName;

	[Token(Token = "0x17000171")]
	private UnsignedIntegerInput integerInput
	{
		[Token(Token = "0x60007D4")]
		[Address(RVA = "0x4CDF870", Offset = "0x4CDF870", VA = "0x4CDF870")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60007D5")]
	[Address(RVA = "0x4CDF8E0", Offset = "0x4CDF8E0", VA = "0x4CDF8E0", Slot = "115")]
	protected override string ValueToString(uint v)
	{
		return null;
	}

	[Token(Token = "0x60007D6")]
	[Address(RVA = "0x4CDF980", Offset = "0x4CDF980", VA = "0x4CDF980", Slot = "116")]
	protected override uint StringToValue(string str)
	{
		return default(uint);
	}

	[Token(Token = "0x60007D7")]
	[Address(RVA = "0x4CDFA50", Offset = "0x4CDFA50", VA = "0x4CDFA50")]
	public UnsignedIntegerField()
	{
	}

	[Token(Token = "0x60007D8")]
	[Address(RVA = "0x4CDFA60", Offset = "0x4CDFA60", VA = "0x4CDFA60")]
	public UnsignedIntegerField(string label, int maxLength = -1)
	{
	}

	[Token(Token = "0x60007D9")]
	[Address(RVA = "0x4CDFCD0", Offset = "0x4CDFCD0", VA = "0x4CDFCD0", Slot = "125")]
	internal override bool CanTryParse(string textString)
	{
		return default(bool);
	}

	[Token(Token = "0x60007DA")]
	[Address(RVA = "0x4CDFCF0", Offset = "0x4CDFCF0", VA = "0x4CDFCF0", Slot = "124")]
	public override void ApplyInputDeviceDelta(Vector3 delta, DeltaSpeed speed, uint startValue)
	{
	}
}
