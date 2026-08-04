// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UnsignedLongField
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x200012B")]
public class UnsignedLongField : TextValueField<ulong>
{
	[Token(Token = "0x200012C")]
	public new class UxmlFactory : UxmlFactory<UnsignedLongField, UxmlTraits>
	{
		[Token(Token = "0x60007EC")]
		[Address(RVA = "0x5008380", Offset = "0x5008380", VA = "0x5008380")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x200012D")]
	public new class UxmlTraits : TextValueFieldTraits<ulong, UxmlUnsignedLongAttributeDescription>
	{
		[Token(Token = "0x60007ED")]
		[Address(RVA = "0x50083C0", Offset = "0x50083C0", VA = "0x50083C0")]
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
			[Address(RVA = "0x5008400", Offset = "0x5008400", VA = "0x5008400")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000176")]
		protected override string allowedCharacters
		{
			[Token(Token = "0x60007F0")]
			[Address(RVA = "0x5008470", Offset = "0x5008470", VA = "0x5008470", Slot = "100")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60007EF")]
		[Address(RVA = "0x5008130", Offset = "0x5008130", VA = "0x5008130")]
		internal UnsignedLongInput()
		{
		}

		[Token(Token = "0x60007F1")]
		[Address(RVA = "0x50084E0", Offset = "0x50084E0", VA = "0x50084E0", Slot = "101")]
		public override void ApplyInputDeviceDelta(Vector3 delta, DeltaSpeed speed, ulong startValue)
		{
		}

		[Token(Token = "0x60007F2")]
		[Address(RVA = "0x5008860", Offset = "0x5008860", VA = "0x5008860")]
		private ulong ClampToMinMaxULongValue(long niceDelta, ulong value)
		{
			return default(ulong);
		}

		[Token(Token = "0x60007F3")]
		[Address(RVA = "0x50088D0", Offset = "0x50088D0", VA = "0x50088D0", Slot = "102")]
		protected override string ValueToString(ulong v)
		{
			return null;
		}

		[Token(Token = "0x60007F4")]
		[Address(RVA = "0x5008920", Offset = "0x5008920", VA = "0x5008920", Slot = "98")]
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
		[Address(RVA = "0x5007D60", Offset = "0x5007D60", VA = "0x5007D60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60007E5")]
	[Address(RVA = "0x5007DD0", Offset = "0x5007DD0", VA = "0x5007DD0", Slot = "115")]
	protected override string ValueToString(ulong v)
	{
		return null;
	}

	[Token(Token = "0x60007E6")]
	[Address(RVA = "0x5007E70", Offset = "0x5007E70", VA = "0x5007E70", Slot = "116")]
	protected override ulong StringToValue(string str)
	{
		return default(ulong);
	}

	[Token(Token = "0x60007E7")]
	[Address(RVA = "0x5007F40", Offset = "0x5007F40", VA = "0x5007F40")]
	public UnsignedLongField()
	{
	}

	[Token(Token = "0x60007E8")]
	[Address(RVA = "0x5007F50", Offset = "0x5007F50", VA = "0x5007F50")]
	public UnsignedLongField(string label, int maxLength = -1)
	{
	}

	[Token(Token = "0x60007E9")]
	[Address(RVA = "0x50081C0", Offset = "0x50081C0", VA = "0x50081C0", Slot = "125")]
	internal override bool CanTryParse(string textString)
	{
		return default(bool);
	}

	[Token(Token = "0x60007EA")]
	[Address(RVA = "0x50081E0", Offset = "0x50081E0", VA = "0x50081E0", Slot = "124")]
	public override void ApplyInputDeviceDelta(Vector3 delta, DeltaSpeed speed, ulong startValue)
	{
	}
}
