using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x200012B")]
public class UnsignedLongField : TextValueField<ulong>
{
	[Token(Token = "0x200012C")]
	public new class UxmlFactory : UxmlFactory<UnsignedLongField, UxmlTraits>
	{
		[Token(Token = "0x60007EC")]
		[Address(RVA = "0x4CE0A50", Offset = "0x4CE0A50", VA = "0x4CE0A50")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x200012D")]
	public new class UxmlTraits : TextValueFieldTraits<ulong, UxmlUnsignedLongAttributeDescription>
	{
		[Token(Token = "0x60007ED")]
		[Address(RVA = "0x4CE0A90", Offset = "0x4CE0A90", VA = "0x4CE0A90")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x200012E")]
	private class UnsignedLongInput : TextValueInput
	{
		[Token(Token = "0x17000175")]
		private UnsignedLongField parentUnsignedLongField
		{
			[Token(Token = "0x60007EE")]
			[Address(RVA = "0x4CE0AD0", Offset = "0x4CE0AD0", VA = "0x4CE0AD0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000176")]
		protected override string allowedCharacters
		{
			[Token(Token = "0x60007F0")]
			[Address(RVA = "0x4CE0B40", Offset = "0x4CE0B40", VA = "0x4CE0B40", Slot = "100")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60007EF")]
		[Address(RVA = "0x4CE0800", Offset = "0x4CE0800", VA = "0x4CE0800")]
		internal UnsignedLongInput()
		{
		}

		[Token(Token = "0x60007F1")]
		[Address(RVA = "0x4CE0BB0", Offset = "0x4CE0BB0", VA = "0x4CE0BB0", Slot = "101")]
		public override void ApplyInputDeviceDelta(Vector3 delta, DeltaSpeed speed, ulong startValue)
		{
		}

		[Token(Token = "0x60007F2")]
		[Address(RVA = "0x4CE0F30", Offset = "0x4CE0F30", VA = "0x4CE0F30")]
		private ulong ClampToMinMaxULongValue(long niceDelta, ulong value)
		{
			return default(ulong);
		}

		[Token(Token = "0x60007F3")]
		[Address(RVA = "0x4CE0FA0", Offset = "0x4CE0FA0", VA = "0x4CE0FA0", Slot = "102")]
		protected override string ValueToString(ulong v)
		{
			return null;
		}

		[Token(Token = "0x60007F4")]
		[Address(RVA = "0x4CE0FF0", Offset = "0x4CE0FF0", VA = "0x4CE0FF0", Slot = "98")]
		protected override ulong StringToValue(string str)
		{
			return default(ulong);
		}
	}

	[Token(Token = "0x40004E8")]
	[FieldOffset(Offset = "0x0")]
	public new static readonly string ussClassName;

	[Token(Token = "0x40004E9")]
	[FieldOffset(Offset = "0x8")]
	public new static readonly string labelUssClassName;

	[Token(Token = "0x40004EA")]
	[FieldOffset(Offset = "0x10")]
	public new static readonly string inputUssClassName;

	[Token(Token = "0x17000174")]
	private UnsignedLongInput unsignedLongInput
	{
		[Token(Token = "0x60007E4")]
		[Address(RVA = "0x4CE0430", Offset = "0x4CE0430", VA = "0x4CE0430")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60007E5")]
	[Address(RVA = "0x4CE04A0", Offset = "0x4CE04A0", VA = "0x4CE04A0", Slot = "115")]
	protected override string ValueToString(ulong v)
	{
		return null;
	}

	[Token(Token = "0x60007E6")]
	[Address(RVA = "0x4CE0540", Offset = "0x4CE0540", VA = "0x4CE0540", Slot = "116")]
	protected override ulong StringToValue(string str)
	{
		return default(ulong);
	}

	[Token(Token = "0x60007E7")]
	[Address(RVA = "0x4CE0610", Offset = "0x4CE0610", VA = "0x4CE0610")]
	public UnsignedLongField()
	{
	}

	[Token(Token = "0x60007E8")]
	[Address(RVA = "0x4CE0620", Offset = "0x4CE0620", VA = "0x4CE0620")]
	public UnsignedLongField(string label, int maxLength = -1)
	{
	}

	[Token(Token = "0x60007E9")]
	[Address(RVA = "0x4CE0890", Offset = "0x4CE0890", VA = "0x4CE0890", Slot = "125")]
	internal override bool CanTryParse(string textString)
	{
		return default(bool);
	}

	[Token(Token = "0x60007EA")]
	[Address(RVA = "0x4CE08B0", Offset = "0x4CE08B0", VA = "0x4CE08B0", Slot = "124")]
	public override void ApplyInputDeviceDelta(Vector3 delta, DeltaSpeed speed, ulong startValue)
	{
	}
}
