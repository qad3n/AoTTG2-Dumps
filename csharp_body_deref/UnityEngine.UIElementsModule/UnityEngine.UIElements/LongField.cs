using Il2CppDummyDll;
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine.UIElements;

[Token(Token = "0x20000C1")]
[MovedFrom(true, "UnityEditor.UIElements", "UnityEditor.UIElementsModule", null)]
public class LongField : TextValueField<long>
{
	[Token(Token = "0x20000C2")]
	public new class UxmlFactory : UxmlFactory<LongField, UxmlTraits>
	{
		[Token(Token = "0x600054D")]
		[Address(RVA = "0x4C22220", Offset = "0x4C22220", VA = "0x4C22220")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x20000C3")]
	public new class UxmlTraits : TextValueFieldTraits<long, UxmlLongAttributeDescription>
	{
		[Token(Token = "0x600054E")]
		[Address(RVA = "0x4C22260", Offset = "0x4C22260", VA = "0x4C22260")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x20000C4")]
	private class LongInput : TextValueInput
	{
		[Token(Token = "0x170000DB")]
		private LongField parentLongField
		{
			[Token(Token = "0x600054F")]
			[Address(RVA = "0x4C222A0", Offset = "0x4C222A0", VA = "0x4C222A0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170000DC")]
		protected override string allowedCharacters
		{
			[Token(Token = "0x6000551")]
			[Address(RVA = "0x4C22310", Offset = "0x4C22310", VA = "0x4C22310", Slot = "100")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000550")]
		[Address(RVA = "0x4C21FD0", Offset = "0x4C21FD0", VA = "0x4C21FD0")]
		internal LongInput()
		{
		}

		[Token(Token = "0x6000552")]
		[Address(RVA = "0x4C22380", Offset = "0x4C22380", VA = "0x4C22380", Slot = "101")]
		public override void ApplyInputDeviceDelta(Vector3 delta, DeltaSpeed speed, long startValue)
		{
		}

		[Token(Token = "0x6000553")]
		[Address(RVA = "0x4C22730", Offset = "0x4C22730", VA = "0x4C22730")]
		private long ClampMinMaxLongValue(long niceDelta, long value)
		{
			return default(long);
		}

		[Token(Token = "0x6000554")]
		[Address(RVA = "0x4C227D0", Offset = "0x4C227D0", VA = "0x4C227D0", Slot = "102")]
		protected override string ValueToString(long v)
		{
			return null;
		}

		[Token(Token = "0x6000555")]
		[Address(RVA = "0x4C22820", Offset = "0x4C22820", VA = "0x4C22820", Slot = "98")]
		protected override long StringToValue(string str)
		{
			return default(long);
		}
	}

	[Token(Token = "0x4000310")]
	[FieldOffset(Offset = "0x0")]
	public new static readonly string ussClassName;

	[Token(Token = "0x4000311")]
	[FieldOffset(Offset = "0x8")]
	public new static readonly string labelUssClassName;

	[Token(Token = "0x4000312")]
	[FieldOffset(Offset = "0x10")]
	public new static readonly string inputUssClassName;

	[Token(Token = "0x170000DA")]
	private LongInput longInput
	{
		[Token(Token = "0x6000545")]
		[Address(RVA = "0x4C21C00", Offset = "0x4C21C00", VA = "0x4C21C00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000546")]
	[Address(RVA = "0x4C21C70", Offset = "0x4C21C70", VA = "0x4C21C70", Slot = "115")]
	protected override string ValueToString(long v)
	{
		return null;
	}

	[Token(Token = "0x6000547")]
	[Address(RVA = "0x4C21D10", Offset = "0x4C21D10", VA = "0x4C21D10", Slot = "116")]
	protected override long StringToValue(string str)
	{
		return default(long);
	}

	[Token(Token = "0x6000548")]
	[Address(RVA = "0x4C21DE0", Offset = "0x4C21DE0", VA = "0x4C21DE0")]
	public LongField()
	{
	}

	[Token(Token = "0x6000549")]
	[Address(RVA = "0x4C21DF0", Offset = "0x4C21DF0", VA = "0x4C21DF0")]
	public LongField(string label, int maxLength = -1)
	{
	}

	[Token(Token = "0x600054A")]
	[Address(RVA = "0x4C22060", Offset = "0x4C22060", VA = "0x4C22060", Slot = "125")]
	internal override bool CanTryParse(string textString)
	{
		return default(bool);
	}

	[Token(Token = "0x600054B")]
	[Address(RVA = "0x4C22080", Offset = "0x4C22080", VA = "0x4C22080", Slot = "124")]
	public override void ApplyInputDeviceDelta(Vector3 delta, DeltaSpeed speed, long startValue)
	{
	}
}
