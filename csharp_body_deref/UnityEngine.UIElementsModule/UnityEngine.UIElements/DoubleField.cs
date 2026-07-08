using Il2CppDummyDll;
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000082")]
[MovedFrom(true, "UnityEditor.UIElements", "UnityEditor.UIElementsModule", null)]
public class DoubleField : TextValueField<double>
{
	[Token(Token = "0x2000083")]
	public new class UxmlFactory : UxmlFactory<DoubleField, UxmlTraits>
	{
		[Token(Token = "0x60003C2")]
		[Address(RVA = "0x4C104B0", Offset = "0x4C104B0", VA = "0x4C104B0")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x2000084")]
	public new class UxmlTraits : TextValueFieldTraits<double, UxmlDoubleAttributeDescription>
	{
		[Token(Token = "0x60003C3")]
		[Address(RVA = "0x4C104F0", Offset = "0x4C104F0", VA = "0x4C104F0")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x2000085")]
	private class DoubleInput : TextValueInput
	{
		[Token(Token = "0x17000089")]
		private DoubleField parentDoubleField
		{
			[Token(Token = "0x60003C4")]
			[Address(RVA = "0x4C10530", Offset = "0x4C10530", VA = "0x4C10530")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700008A")]
		protected override string allowedCharacters
		{
			[Token(Token = "0x60003C6")]
			[Address(RVA = "0x4C105A0", Offset = "0x4C105A0", VA = "0x4C105A0", Slot = "100")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60003C5")]
		[Address(RVA = "0x4C10260", Offset = "0x4C10260", VA = "0x4C10260")]
		internal DoubleInput()
		{
		}

		[Token(Token = "0x60003C7")]
		[Address(RVA = "0x4C10610", Offset = "0x4C10610", VA = "0x4C10610", Slot = "101")]
		public override void ApplyInputDeviceDelta(Vector3 delta, DeltaSpeed speed, double startValue)
		{
		}

		[Token(Token = "0x60003C8")]
		[Address(RVA = "0x4C10820", Offset = "0x4C10820", VA = "0x4C10820", Slot = "102")]
		protected override string ValueToString(double v)
		{
			return null;
		}

		[Token(Token = "0x60003C9")]
		[Address(RVA = "0x4C10870", Offset = "0x4C10870", VA = "0x4C10870", Slot = "98")]
		protected override double StringToValue(string str)
		{
			return default(double);
		}
	}

	[Token(Token = "0x400021E")]
	[FieldOffset(Offset = "0x0")]
	public new static readonly string ussClassName;

	[Token(Token = "0x400021F")]
	[FieldOffset(Offset = "0x8")]
	public new static readonly string labelUssClassName;

	[Token(Token = "0x4000220")]
	[FieldOffset(Offset = "0x10")]
	public new static readonly string inputUssClassName;

	[Token(Token = "0x17000088")]
	private DoubleInput doubleInput
	{
		[Token(Token = "0x60003BA")]
		[Address(RVA = "0x4C0FE90", Offset = "0x4C0FE90", VA = "0x4C0FE90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60003BB")]
	[Address(RVA = "0x4C0FF00", Offset = "0x4C0FF00", VA = "0x4C0FF00", Slot = "115")]
	protected override string ValueToString(double v)
	{
		return null;
	}

	[Token(Token = "0x60003BC")]
	[Address(RVA = "0x4C0FFA0", Offset = "0x4C0FFA0", VA = "0x4C0FFA0", Slot = "116")]
	protected override double StringToValue(string str)
	{
		return default(double);
	}

	[Token(Token = "0x60003BD")]
	[Address(RVA = "0x4C10070", Offset = "0x4C10070", VA = "0x4C10070")]
	public DoubleField()
	{
	}

	[Token(Token = "0x60003BE")]
	[Address(RVA = "0x4C10080", Offset = "0x4C10080", VA = "0x4C10080")]
	public DoubleField(string label, int maxLength = -1)
	{
	}

	[Token(Token = "0x60003BF")]
	[Address(RVA = "0x4C102F0", Offset = "0x4C102F0", VA = "0x4C102F0", Slot = "125")]
	internal override bool CanTryParse(string textString)
	{
		return default(bool);
	}

	[Token(Token = "0x60003C0")]
	[Address(RVA = "0x4C10310", Offset = "0x4C10310", VA = "0x4C10310", Slot = "124")]
	public override void ApplyInputDeviceDelta(Vector3 delta, DeltaSpeed speed, double startValue)
	{
	}
}
